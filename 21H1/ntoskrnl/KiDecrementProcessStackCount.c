/*
 * XREFs of KiDecrementProcessStackCount @ 0x14025E0F8
 * Callers:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiOutSwapKernelStacks @ 0x14032A2DC (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14032A718 (KeDeleteThread.c)
 *     KiSuspendThread @ 0x140356DBC (KiSuspendThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  char v6; // si
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v8; // eax
  unsigned __int32 v9; // ett
  signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 840), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    v6 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
    v8 = *(_DWORD *)(a1 + 840);
    if ( (v8 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v8 < 8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 840), v8 & 0xFFFFFFF8 | 3, v8);
        if ( v9 == v8 )
        {
          v6 = 1;
          break;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( v6 )
    {
      v10 = (signed __int64 *)(a1 + 360);
      _m_prefetchw(&KiProcessOutSwapListHead);
      v11 = KiProcessOutSwapListHead;
      do
      {
        *v10 = v11;
        v12 = v11;
        v11 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v10, v11);
      }
      while ( v11 != v12 );
      if ( !v11 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
