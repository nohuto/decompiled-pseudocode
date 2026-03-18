/*
 * XREFs of ViGetAdapterInformationInternal @ 0x1409CB728
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C77F0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x1409C7A50 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x1409C7B00 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x1409C7C80 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409C7D70 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1409C7E10 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8340 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x1409C8570 (VfCancelAdapterChannel.c)
 *     VfFlushAdapterBuffers @ 0x1409C86D0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x1409C8880 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x1409C8930 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x1409C8B70 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x1409C8CD0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C9490 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x1409C9620 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x1409C9850 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A10 (VfMapTransferEx.c)
 *     VfPutScatterGatherList @ 0x1409C9F10 (VfPutScatterGatherList.c)
 *     ViGetRealDmaOperation @ 0x1409CBA30 (ViGetRealDmaOperation.c)
 *     ViHookDmaAdapter @ 0x1409CBE6C (ViHookDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1409C714C (VF_ASSERT_MAX_IRQL.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax

  if ( !a1 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    if ( ViVerifyDma )
      VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  if ( !ViVerifyDma && ViEnableAfterHibernate == 1 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140D47088);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock(&qword_140D47088);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == Flink[1].Flink )
      break;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock(&qword_140D47088);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
  }
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[2].Flink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_140C12D14,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C12D14);
  }
  return Flink;
}
