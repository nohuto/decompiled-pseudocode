/*
 * XREFs of IopQueueThreadIrp @ 0x1402083E0
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x14037F4E0 (IoQueueThreadIrp.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 *     IopGetFileInformation @ 0x1406613F4 (IopGetFileInformation.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406E4C80 (IopBuildSynchronousFsdRequest.c)
 *     IopFilterResourceRequirementsCall @ 0x14073AFB0 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140890560 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140890AA0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x140890E20 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
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
