/*
 * XREFs of KiSetAffinityThread @ 0x1402EC3D4
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403CB2CC (KeSetAffinityProcess.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230DF0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140230F40 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140277ED4 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140277F88 (KeSelectIdealProcessor.c)
 *     KiSendSoftwareInterrupt @ 0x140293DEC (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x1402EA480 (KiReleaseThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1402EBA74 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402EC610 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectNodeForAffinity @ 0x1402ECD60 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8340 (EtwTraceThreadAffinity.c)
 */

int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  struct _KPRCB *CurrentPrcb; // rbx
  __int128 *v6; // rsi
  _DWORD *SchedulerAssist; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  char v15; // r15
  int v16; // r8d
  __int64 v17; // r14
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int result; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-3Ch]
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int64 *v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h]
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF

  v27 = 0LL;
  v4 = 0;
  v28 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (__int128 *)a3;
  v25 = 0;
  v29 = a2;
  v30 = 0LL;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[6];
        SchedulerAssist[6] = v23 + 1;
        if ( v23 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v22[6] - 1;
        v22[6] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v25, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 196);
  v26 = *(_DWORD *)(a1 + 588);
  *(_WORD *)(a1 + 560) = *((_WORD *)v6 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v6;
  v10 = *(unsigned int *)(a1 + 196);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = KiProcessorBlock[v10];
  if ( !KiPrcbInGroupAffinity(v12, (__int64)v6) )
  {
    v13 = KeSelectNodeForAffinity(v6);
    WORD4(v30) = *((_WORD *)v6 + 4);
    *(_QWORD *)&v30 = *(_QWORD *)v6 & *(_QWORD *)(v13 + 136);
    v14 = KeSelectIdealProcessor(v13, &v30, 0LL, (unsigned int *)(v12 + 36));
    LODWORD(v10) = v14;
    *(_DWORD *)(a1 + 196) = v14;
    v11 = v14;
    v12 = KiProcessorBlock[v14];
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v17 = v27;
  }
  else
  {
    v15 = KiAcquireThreadStateLock(a1, &v27, (volatile signed __int32 **)&v28);
    *(_WORD *)(a1 + 584) = *((_WORD *)v6 + 4);
    *(_QWORD *)(a1 + 576) = *(_QWORD *)v6;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      v6 = &v30;
      WORD4(v30) = *(_WORD *)(a1 + 584);
      *(_QWORD *)&v30 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v10;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v12, a1);
    }
    LOBYTE(v16) = v15;
    v17 = v27;
    v18 = v28;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)v6, v16, v27, (__int64)v28, v29);
    KiReleaseThreadStateLock(v19, v17, v18);
    v11 = *(_DWORD *)(a1 + 196);
  }
  v20 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    result = KeGetPcr()->Prcb.Number;
    if ( result != *(_DWORD *)(v17 + 36) )
      result = KiSendSoftwareInterrupt();
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v26, v20);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v9, v11);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, v6);
  return result;
}
