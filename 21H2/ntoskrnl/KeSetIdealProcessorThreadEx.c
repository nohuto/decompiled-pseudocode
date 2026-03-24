/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1402EAD48
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     MiSetIdealProcessorThread @ 0x1402ECE20 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A874 (KeSetIdealProcessorThreadByNumber.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230DF0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x140230F40 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x1402EA480 (KiReleaseThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x1402EBA74 (KiPrcbInGroupAffinity.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v5; // ebp
  unsigned int v6; // r13d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v30; // [rsp+90h] [rbp+18h]
  volatile signed __int64 *v31; // [rsp+98h] [rbp+20h] BYREF

  v30 = (_DWORD *)a3;
  v27[0] = 0LL;
  v31 = 0LL;
  v5 = a2;
  v6 = -1073741823;
  v28 = KiProcessorBlock[(unsigned int)a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v29 = 0;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v9[6];
        v9[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v18[6] - 1;
        v18[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v29, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = *(_DWORD *)(a1 + 588);
  v11 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v12 = *(_DWORD *)(a1 + 588);
    v13 = v12;
    if ( (unsigned int)KiPrcbInGroupAffinity(v28, a1 + 576) )
    {
      KiAcquireThreadStateLock(a1, v27, (volatile signed __int32 **)&v31);
      v14 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = v5;
      if ( (v14 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = v5;
      KiUpdateSharedReadyQueueAffinityThread(v28, a1);
      KiReleaseThreadStateLock(v15, v27[0], v31);
      v13 = *(_DWORD *)(a1 + 588);
      v6 = 0;
    }
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 196);
    if ( (unsigned int)KiPrcbInGroupAffinity(v28, a1 + 552) )
    {
      v6 = 0;
      *(_DWORD *)(a1 + 196) = v5;
    }
    v13 = v10;
  }
  v16 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v10, v13);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v11, v16);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v30 )
    *v30 = v12;
  return v6;
}
