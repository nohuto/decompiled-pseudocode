/*
 * XREFs of EtwpSwitchBuffer @ 0x14027E018
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14029AB70 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     EtwpDequeueFreeBuffer @ 0x14027E1FC (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14027E3B4 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027E550 (EtwpPrepareDirtyBuffer.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     EtwpAllocateFreeBuffers @ 0x1402FF564 (EtwpAllocateFreeBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x1403564CC (EtwpBuffersFlushRequired.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14035F118 (EtwpEnqueueOverflowBuffer.c)
 */

__int64 __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int64 i; // rbx
  signed __int64 v13; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx

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
      for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v13 )
      {
        v13 = _InterlockedCompareExchange64(a3, v10 | 0xF, i);
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
    if ( v15 )
    {
      EtwpPrepareDirtyBuffer(a1, i & 0xFFFFFFFFFFFFFFF0uLL);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), ~(i & 0xF));
      if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
      {
        if ( (a5 & 0x600) != 0 || (unsigned __int8)ObGetCurrentIrql(v17, v16) > 2u )
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
         && (unsigned __int8)ObGetCurrentIrql(v11, v10) <= 2u
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
