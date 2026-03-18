/*
 * XREFs of KiSwitchPriQueue @ 0x14031EF94
 * Callers:
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 **v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, a1 + 520);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3, a4);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v15[6] - 1;
        v15[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18, v7, v8, v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v12 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v12;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v12 + 536));
  KiReleaseThreadLockSafe(a1);
  result = a2 + 672;
  v14 = *(__int64 ***)(a2 + 680);
  if ( *v14 != (__int64 *)(a2 + 672) )
    __fastfail(3u);
  *v4 = result;
  v4[1] = (__int64)v14;
  *v14 = v4;
  *(_QWORD *)(a2 + 680) = v4;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
