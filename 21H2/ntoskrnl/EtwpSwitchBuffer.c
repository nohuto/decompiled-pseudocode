/*
 * XREFs of EtwpSwitchBuffer @ 0x140253E34
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     EtwpBuffersFlushRequired @ 0x140246400 (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x140250358 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x140254018 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402541D0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     EtwpAllocateFreeBuffers @ 0x14029E658 (EtwpAllocateFreeBuffers.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r14d
  __int64 v10; // rdx
  signed __int64 i; // rbx
  signed __int64 v12; // rax
  unsigned __int64 v14; // rbp

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  v10 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v10 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v10 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v6 )
        *(_QWORD *)(v10 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v12 )
      {
        v12 = _InterlockedCompareExchange64(a3, v10 | 0xF, i);
        if ( i == v12 )
          break;
      }
      v14 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v14 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFF1);
        if ( v6 )
          EtwpEnqueueOverflowBuffer(a1, v10);
        else
          EtwpEnqueueAvailableBuffer(a1, v10, 0LL);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v14 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), ~(i & 0xF));
      if ( !v6 && EtwpBuffersFlushRequired((_DWORD *)a1) )
      {
        if ( (a5 & 0x600) != 0 || ObGetCurrentIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
            KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 224) )
    {
      LOBYTE(v10) = (a5 & 0x600) != 0;
      EtwpRequestFlushTimer(a1, v10);
    }
    return 0LL;
  }
  else
  {
    while ( (a5 & 0x200) == 0
         && ObGetCurrentIrql() <= 2u
         && (*(_DWORD *)(a1 + 12) & 0x40000) == 0
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
    {
      v10 = EtwpDequeueFreeBuffer(a1);
      if ( v10 )
        goto LABEL_7;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
