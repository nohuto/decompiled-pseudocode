/*
 * XREFs of KiOutSwapProcesses @ 0x140244780
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B1FF0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiOutSwapProcesses(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  char v15; // r15
  unsigned __int8 v16; // cl
  unsigned int v17; // eax
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  struct _KPRCB *v25; // r10
  int v26; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v5 = (__int64)(a1 - 45);
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (_QWORD *)((-1LL << (CurrentIrql + 1)) & 4);
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v26 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v5, 7u) )
    {
      do
        KeYieldProcessorEx(&v26, (__int64)a2, a3, (__int64)SchedulerAssist);
      while ( (*(_DWORD *)v5 & 0x80u) != 0 );
    }
    v7 = v5 + 344;
    v8 = *(_QWORD *)(v5 + 344);
    if ( v8 == v5 + 344 || (*(_DWORD *)(v5 + 840) & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)(v5 + 840), *(_DWORD *)(v5 + 840) & 7 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v5);
      v15 = 0;
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v16 <= 0xFu )
      {
        v14 = KeGetCurrentPrcb()->SchedulerAssist;
        v12 = (-1LL << (v16 + 1)) & 4;
        v13 = (unsigned int)v12 | v14[5];
        v14[5] = v13;
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v5, v12, v13, (__int64)v14);
      if ( *(_QWORD *)v7 == v7 )
      {
        v17 = 4;
      }
      else
      {
        a2 = (_QWORD *)(v5 + 360);
        _m_prefetchw(&KiProcessInSwapListHead);
        v18 = KiProcessInSwapListHead;
        do
        {
          *a2 = v18;
          v19 = v18;
          v18 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)a2, v18);
        }
        while ( v18 != v19 );
        if ( !v18 )
          v15 = 1;
        v17 = 7;
      }
      _InterlockedXor((volatile signed __int32 *)(v5 + 840), v17);
      _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
      if ( v15 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent.Header.Lock, (__int64)a2, a3, (__int64)SchedulerAssist);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (CurrentIrql + 1));
            SchedulerAssist = v25->SchedulerAssist;
            result = ~(unsigned __int16)a2;
            v24 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v24 )
              result = KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v9 = *(_QWORD *)v7;
      v10 = *(_QWORD **)(v5 + 352);
      if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v10 != v7 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)(v5 + 352) = v5 + 344;
      *(_QWORD *)v7 = v7;
      _InterlockedXor((volatile signed __int32 *)(v5 + 840), 3u);
      _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
      result = KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
