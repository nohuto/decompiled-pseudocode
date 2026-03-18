/*
 * XREFs of EtwpSwitchBuffer @ 0x1402E1704
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x1402ABBF0 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     EtwpBuffersFlushRequired @ 0x14025116C (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x140259D60 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x14026187C (EtwpAllocateFreeBuffers.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402E1CBC (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1402E1D48 (EtwpRequestFlushTimer.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r14d
  signed __int64 v10; // rdx
  __int64 v11; // r10
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v15; // rbp

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  v11 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( v11 )
  {
LABEL_7:
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      *(_WORD *)(v11 + 40) = a4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFu);
    while ( 1 )
    {
      if ( !v6 )
        *(_QWORD *)(v11 + 32) = a2;
      _m_prefetchw(a3);
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v10 = (v11 | 0xF) & -(__int64)(v11 != 0);
        v13 = _InterlockedCompareExchange64(a3, v10, i);
        if ( i == v13 )
          break;
      }
      v15 = i & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        break;
      if ( v15 )
      {
        if ( a2 )
          _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFF1);
        if ( v6 )
          EtwpEnqueueOverflowBuffer(a1, v11);
        else
          EtwpEnqueueAvailableBuffer(a1, v11, 0LL);
        return 0LL;
      }
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      a2 = 0LL;
    }
    if ( v15 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), ~(i & 0xF));
      if ( !v6 && EtwpBuffersFlushRequired((_DWORD *)a1) )
      {
        if ( (a5 & 0x600) != 0 || ObGetCurrentIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
            KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
        }
      }
    }
    else if ( *(_DWORD *)(a1 + 208) )
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
         && (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) == 1 )
    {
      v11 = EtwpDequeueFreeBuffer(a1);
      if ( v11 )
        goto LABEL_7;
    }
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    return 3221225495LL;
  }
}
