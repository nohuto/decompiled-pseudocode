/*
 * XREFs of KeRetryOutswapProcess @ 0x140513B08
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CF34 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  int v6; // ebx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int64 *v13; // rdi
  signed __int64 v14; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe(a1, a2, a3, (__int64)SchedulerAssist);
  v6 = a1[210] & 7;
  if ( v6 == 1 )
    _InterlockedXor(a1 + 210, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  LODWORD(v12) = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v6 == 1 )
  {
    v13 = (signed __int64 *)(a1 + 90);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v12 = KiProcessOutSwapListHead;
    do
    {
      *v13 = v12;
      v14 = v12;
      v12 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v13, v12);
    }
    while ( v12 != v14 );
    if ( !v12 )
      LODWORD(v12) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v12;
}
