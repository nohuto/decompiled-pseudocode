/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14070423C
 * Callers:
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x1402415DC (EtwpDequeueBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x14033FF1C (EtwpFreeTraceBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int v2; // esi
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rbx
  char *v7; // rax
  __int64 v8; // rcx
  unsigned int UsedProcessorCount; // eax
  __int64 v10; // rbp
  __int64 v11; // r14
  volatile __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v17; // rbx

  v1 = *a1;
  v2 = 0;
  if ( (a1[3] & 0x40000) == 0 )
  {
    do
    {
      v4 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
      v6 = v4;
      if ( v4 )
      {
        _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
        ++v2;
        _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
        EtwpFreeTraceBuffer(v5, v4);
      }
    }
    while ( v6 );
    while ( 1 )
    {
      v7 = (char *)EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
      if ( !v7 )
        break;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v2;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
      EtwpFreeTraceBuffer(v8, v7);
    }
    UsedProcessorCount = EtwpQueryUsedProcessorCount(v8);
    if ( UsedProcessorCount )
    {
      v10 = 0LL;
      v11 = UsedProcessorCount;
      do
      {
        if ( (a1[3] & 0x10000000) != 0 )
          v12 = (volatile __int64 *)(a1 + 36);
        else
          v12 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v10) + 8 * v1);
        v13 = _InterlockedExchange64(v12, 0LL);
        v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -(v13 & 0xF));
          do
          {
            v17 = *(_QWORD *)(v14 + 32);
            _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v14);
            v14 = v17;
          }
          while ( v17 );
        }
        v10 += 64LL;
        --v11;
      }
      while ( v11 );
    }
    if ( *((_QWORD *)a1 + 146) )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 146));
    }
    while ( 1 )
    {
      v15 = (_QWORD *)*((_QWORD *)a1 + 150);
      if ( !v15 )
        break;
      *((_QWORD *)a1 + 150) = *v15;
      ExFreePoolWithTag(v15 - 4, 0);
    }
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*((_QWORD *)a1 + 139) + 4LL * (a1[79] & 1) + 4116),
      -(v2 * a1[1]));
  }
  return 0LL;
}
