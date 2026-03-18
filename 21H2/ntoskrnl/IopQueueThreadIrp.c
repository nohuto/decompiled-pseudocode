/*
 * XREFs of IopQueueThreadIrp @ 0x1402AE1B0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoQueueThreadIrp @ 0x140389E20 (IoQueueThreadIrp.c)
 *     IopBuildSynchronousFsdRequest @ 0x140705F30 (IopBuildSynchronousFsdRequest.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     IopFilterResourceRequirementsCall @ 0x140748D6C (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140935F60 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1409363B0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v7; // rcx
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  _DWORD *v13; // rcx
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
  v3 = (__int64 *)(v1 + 1280);
  v4 = (volatile signed __int32 *)(v1 + 1496);
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
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v13[6] - 1;
          v13[6] = v15;
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
