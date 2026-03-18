/*
 * XREFs of KiDecrementProcessStackCount @ 0x1402D0CE0
 * Callers:
 *     PspReaper @ 0x140299150 (PspReaper.c)
 *     KiOutSwapKernelStacks @ 0x140299FBC (KiOutSwapKernelStacks.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiSuspendThread @ 0x1402EE4D4 (KiSuspendThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1)
{
  __int64 result; // rax
  char v3; // si
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v5; // eax
  _DWORD *SchedulerAssist; // r9
  unsigned __int32 v7; // ett
  signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 840), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v3 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KiAcquireKobjectLockSafe(a1);
    v5 = *(_DWORD *)(a1 + 840);
    if ( (v5 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v5 < 8 )
      {
        v7 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 840), v5 & 0xFFFFFFF8 | 3, v5);
        if ( v7 == v5 )
        {
          v3 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v3 )
    {
      v8 = (signed __int64 *)(a1 + 360);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v9 = KiProcessOutSwapListHead;
      do
      {
        *v8 = v9;
        v10 = v9;
        v9 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v8, v9);
      }
      while ( v9 != v10 );
      if ( !v9 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
