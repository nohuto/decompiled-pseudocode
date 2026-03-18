/*
 * XREFs of KiFastReadyThread @ 0x1403299AC
 * Callers:
 *     KiInSwapKernelStacks @ 0x140329928 (KiInSwapKernelStacks.c)
 *     KeReadyThread @ 0x14032FD8C (KeReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140244D40 (KiEnterDeferredReadyState.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceReadyThread @ 0x1405A23B0 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiFastReadyThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF

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
    EtwTraceReadyThread(a1, a2, a3, 0LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v7[6];
        v7[6] = v13 + 1;
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
      KeYieldProcessorEx(&v16, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  KiEnterDeferredReadyState(a1);
  KiReleaseThreadLockSafe(v8);
  *(_QWORD *)(a1 + 216) = 0LL;
  v17 = a1 + 216;
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v17, v9, v10);
  LOBYTE(v11) = CurrentIrql;
  return KiCheckForThreadDispatch(CurrentPrcb, v11);
}
