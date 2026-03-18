/*
 * XREFs of KiFastReadyThread @ 0x140294574
 * Callers:
 *     KeReadyThread @ 0x140293184 (KeReadyThread.c)
 *     KiInSwapKernelStacks @ 0x14029A6E0 (KiInSwapKernelStacks.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceReadyThread @ 0x14062E258 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  char v9; // si
  __int64 v10; // rdx
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 567);
    LOBYTE(a2) = *(_BYTE *)(a1 + 566);
    EtwTraceReadyThread(a1, a2, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v6[6];
        v6[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[6] - 1;
        v14[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiEnterDeferredReadyState(a1);
  KiReleaseThreadLockSafe(v7);
  v8 = (_QWORD *)(a1 + 216);
  v9 = 0;
  *v8 = 0LL;
  v17 = 0LL;
  do
  {
    KiDeferredReadySingleThread(CurrentPrcb, v8 - 27, &v17);
    v8 = v17;
    ++v9;
    if ( v17 )
      v17 = (_QWORD *)*v17;
    if ( (v9 & 0xF) == 0 )
      KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  }
  while ( v8 );
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  LOBYTE(v10) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v10);
}
