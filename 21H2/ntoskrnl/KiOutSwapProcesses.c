/*
 * XREFs of KiOutSwapProcesses @ 0x1402EEB00
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  _QWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v4; // rsi
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  char v9; // r15
  unsigned __int8 v10; // cl
  unsigned int v11; // eax
  signed __int64 *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  _DWORD *v21; // r9
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v25; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v2 = a1 - 45;
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v25 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v2, 7u) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( (*(_DWORD *)v2 & 0x80u) != 0 );
    }
    v4 = v2 + 43;
    v5 = (_QWORD *)v2[43];
    if ( v5 == v2 + 43 || (v2[105] & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)v2 + 210, v2[105] & 7 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v2);
      v9 = 0;
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
      {
        v21 = KeGetCurrentPrcb()->SchedulerAssist;
        v21[5] |= (-1 << (v10 + 1)) & 4;
      }
      KiAcquireKobjectLockSafe(v2);
      if ( (_QWORD *)*v4 == v4 )
      {
        v11 = 4;
      }
      else
      {
        v12 = v2 + 45;
        _m_prefetchw(&KiProcessInSwapListHead);
        v13 = KiProcessInSwapListHead;
        do
        {
          *v12 = v13;
          v14 = v13;
          v13 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v12, v13);
        }
        while ( v13 != v14 );
        if ( !v13 )
          v9 = 1;
        v11 = 7;
      }
      _InterlockedXor((volatile signed __int32 *)v2 + 210, v11);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v9 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      LOBYTE(v8) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v8) = KeGetCurrentIrql();
          if ( (unsigned __int8)v8 <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)v8 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v8 & v23[5]) == 0;
            v23[5] &= v8;
            if ( v20 )
              LOBYTE(v8) = KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v6 = (_QWORD *)*v4;
      v7 = (_QWORD *)v2[44];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      v2[44] = v2 + 43;
      *v4 = v4;
      _InterlockedXor((volatile signed __int32 *)v2 + 210, 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      LOBYTE(v8) = KiReadyOutSwappedThreads(v5, CurrentIrql);
    }
  }
  while ( a1 );
  return v8;
}
