/*
 * XREFs of IopQueueThreadIrp @ 0x140355FE0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IoQueueThreadIrp @ 0x140381460 (IoQueueThreadIrp.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14068A684 (IopGetFileInformation.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406A8BE0 (IopBuildSynchronousFsdRequest.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140893780 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140893CC0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140894040 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x14089B224 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v7; // rcx
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  __int64 result; // rax
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1200);
  v4 = (volatile signed __int32 *)(v1 + 1416);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v7[6];
        v7[6] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v12[6] - 1;
          v12[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v4);
    }
  }
  v8 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v8;
  v2[1] = v3;
  *(_QWORD *)(v8 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v16 = v10[6] - 1;
      v10[6] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
