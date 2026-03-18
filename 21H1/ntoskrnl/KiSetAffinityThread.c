/*
 * XREFs of KiSetAffinityThread @ 0x1402CA140
 * Callers:
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403C6EAC (KeSetAffinityProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402CA37C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSelectIdealProcessor @ 0x1402CA440 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1402CA648 (KeSelectNodeForAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x140302858 (KiSendSoftwareInterrupt.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14032FDE4 (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x140334898 (KiPrcbInGroupAffinity.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A2780 (EtwTraceThreadAffinity.c)
 */

unsigned int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  char v14; // r15
  int v15; // r8d
  __int64 v16; // r14
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int result; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-3Ch]
  __int64 v28; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h]
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF

  v28 = 0LL;
  v4 = 0;
  v29 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (__int128 *)a3;
  v26 = 0;
  v30 = a2;
  v31 = 0LL;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[6];
        SchedulerAssist[6] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v23[6] - 1;
        v23[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 196);
  v27 = *(_DWORD *)(a1 + 588);
  *(_WORD *)(a1 + 560) = *((_WORD *)v6 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v6;
  v10 = *(unsigned int *)(a1 + 196);
  v11 = *(_DWORD *)(a1 + 196);
  v12 = KiProcessorBlock[v10];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v12, v6) )
  {
    v13 = KeSelectNodeForAffinity(v6);
    WORD4(v31) = *((_WORD *)v6 + 4);
    *(_QWORD *)&v31 = *(_QWORD *)v6 & *(_QWORD *)(v13 + 136);
    v10 = (unsigned __int16)KeSelectIdealProcessor(v13, &v31, 0LL, v12 + 36);
    *(_DWORD *)(a1 + 196) = v10;
    v11 = v10;
    v12 = KiProcessorBlock[v10];
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v16 = v28;
  }
  else
  {
    v14 = KiAcquireThreadStateLock(a1, (__int64)&v28, &v29);
    *(_WORD *)(a1 + 584) = *((_WORD *)v6 + 4);
    *(_QWORD *)(a1 + 576) = *(_QWORD *)v6;
    if ( (unsigned int)KiComputeThreadAffinity(a1) )
    {
      v6 = &v31;
      WORD4(v31) = *(_WORD *)(a1 + 584);
      *(_QWORD *)&v31 = *(_QWORD *)(a1 + 576);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = v10;
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v12, a1);
    }
    LOBYTE(v15) = v14;
    v16 = v28;
    v17 = v29;
    v4 = KiRescheduleThreadAfterAffinityChange(a1, (_DWORD)v6, v15, v28, (__int64)v29, v30);
    KiReleaseThreadStateLock(v18, v16, v17);
    v11 = *(_DWORD *)(a1 + 196);
  }
  v19 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v4 )
  {
    v22 = *(unsigned int *)(v16 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v22 )
    {
      LOBYTE(v21) = 2;
      result = KiSendSoftwareInterrupt(v22, v21);
    }
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, v27, v19);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, v9, v11);
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    return EtwTraceThreadAffinity(a1, v6);
  return result;
}
