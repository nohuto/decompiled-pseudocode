/*
 * XREFs of EtwpSwitchBuffer @ 0x140265E94
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1403506F0 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     EtwpRequestFlushTimer @ 0x14025FBDC (EtwpRequestFlushTimer.c)
 *     EtwpDequeueFreeBuffer @ 0x140266078 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140266230 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402663DC (EtwpPrepareDirtyBuffer.c)
 *     EtwpBuffersFlushRequired @ 0x1402C7BAC (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1402D1F88 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1402ED308 (EtwpAllocateFreeBuffers.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
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
          EtwpEnqueueOverflowBuffer(a1);
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
      if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
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
      EtwpRequestFlushTimer(a1, (a5 & 0x600) != 0);
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
