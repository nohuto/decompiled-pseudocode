/*
 * XREFs of IopQueueThreadIrp @ 0x140261300
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x14037EAF0 (IoQueueThreadIrp.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x140687B88 (IopSynchronousCall.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407044D0 (IopBuildSynchronousFsdRequest.c)
 *     IopFilterResourceRequirementsCall @ 0x140739430 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x14088F240 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x14088F780 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x14088FB00 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v9; // rcx
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  __int64 result; // rax
  _DWORD *v14; // rcx
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 152);
  v4 = (_QWORD *)(a1 + 32);
  v5 = (__int64 *)(v3 + 1200);
  v6 = (volatile signed __int32 *)(v3 + 1416);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v6, a2, a3);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v9[6];
        v9[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v6, 0LL) )
    {
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v14[6] - 1;
          v14[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v6, a2, a3);
    }
  }
  v10 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v4 = v10;
  v4[1] = v5;
  *(_QWORD *)(v10 + 8) = v4;
  *v5 = (__int64)v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v6, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v18 = v12[6] - 1;
      v12[6] = v18;
      if ( !v18 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
