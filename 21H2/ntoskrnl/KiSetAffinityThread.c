/*
 * XREFs of KiSetAffinityThread @ 0x14029D724
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403CB43C (KeSetAffinityProcess.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140265E74 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140265F28 (KeSelectIdealProcessor.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14029D960 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x14029E0B0 (KeSelectNodeForAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8570 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int128 *a3)
{
  int v3; // r12d
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned int v8; // r13d
  __int64 v9; // rbx
  unsigned int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  char v14; // r15
  int v15; // r8d
  __int64 v16; // r14
  volatile signed __int64 *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int result; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-3Ch]
  __int64 v26; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int64 *v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h]
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF

  v26 = 0LL;
  v3 = 0;
  v27 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = 0;
  v28 = a2;
  v29 = 0LL;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[6];
        SchedulerAssist[6] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v21[6] - 1;
        v21[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v24);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(_DWORD *)(a1 + 196);
  v25 = *(_DWORD *)(a1 + 588);
  *(_WORD *)(a1 + 560) = *((_WORD *)a3 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)a3;
  v9 = *(unsigned int *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 196);
  v11 = KiProcessorBlock[v9];
  if ( !KiPrcbInGroupAffinity(v11, (__int64)a3) )
  {
    v12 = KeSelectNodeForAffinity(a3);
    WORD4(v29) = *((_WORD *)a3 + 4);
    *(_QWORD *)&v29 = *(_QWORD *)a3 & *(_QWORD *)(v12 + 136);
    v13 = KeSelectIdealProcessor(v12, &v29, 0LL, (unsigned int *)(v11 + 36));
    LODWORD(v9) = v13;
    *(_DWORD *)(a1 + 196) = v13;
    v10 = v13;
    v11 = KiProcessorBlock[v13];
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v16 = v26;
  }
  else
  {
    v14 = KiAcquireThreadStateLock(a1, &v26, &v27);
    *(_WORD *)(a1 + 584) = *((_WORD *)a3 + 4);
    *(_QWORD *)(a1 + 576) = *(_QWORD *)a3;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      a3 = &v29;
      WORD4(v29) = *(_WORD *)(a1 + 584);
      *(_QWORD *)&v29 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v9;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v11, a1);
    }
    LOBYTE(v15) = v14;
    v16 = v26;
    v17 = v27;
    v3 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)a3, v15, v26, (__int64)v27, v28);
    KiReleaseThreadStateLock(v18, v16, v17);
    v10 = *(_DWORD *)(a1 + 196);
  }
  v19 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v3 )
  {
    result = KeGetPcr()->Prcb.Number;
    if ( result != *(_DWORD *)(v16 + 36) )
      result = KiSendSoftwareInterrupt();
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v25, v19);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v8, v10);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, a3);
  return result;
}
