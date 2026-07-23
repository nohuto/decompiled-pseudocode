/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x140614B84
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140246724 (EtwpFreeTraceBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x140254194 (EtwpDequeueBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rcx
  _QWORD **v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

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
          v12 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v10) + 8 * v1);
        v13 = _InterlockedExchange64(v12, 0LL);
        v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), -(v13 & 0xF));
          do
          {
            v15 = *(_QWORD *)(v14 + 32);
            _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
            ++v2;
            EtwpFreeTraceBuffer((__int64)a1, (char *)v14);
            v14 = v15;
          }
          while ( v15 );
        }
        v10 += 64LL;
        --v11;
      }
      while ( v11 );
    }
    if ( *((_QWORD *)a1 + 142) )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v2;
      EtwpFreeTraceBuffer((__int64)a1, *((char **)a1 + 142));
    }
    while ( 1 )
    {
      v16 = (_QWORD *)*((_QWORD *)a1 + 146);
      if ( !v16 )
        break;
      *((_QWORD *)a1 + 146) = *v16;
      ExFreePoolWithTag(v16 - 4, 0);
    }
    v17 = (_QWORD **)(a1 + 24);
    while ( 1 )
    {
      v18 = *v17;
      if ( *v17 == v17 )
        break;
      if ( (_QWORD **)v18[1] != v17 || (v19 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
        __fastfail(3u);
      *v17 = v19;
      v19[1] = v17;
      ExFreePoolWithTag(v18, 0);
    }
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*((_QWORD *)a1 + 135) + 4LL * (a1[79] & 1) + 4116),
      -(v2 * a1[1]));
  }
  return 0LL;
}
