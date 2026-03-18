/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140266F84
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1403212B0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1402670A4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x140267440 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x140267518 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140267564 (EtwpLockBufferList.c)
 *     EtwpFreeTraceBuffer @ 0x1403604A4 (EtwpFreeTraceBuffer.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 */

_UNKNOWN **__fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // ebp
  int UsedProcessorCount; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  char i; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    result = (_UNKNOWN **)EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v4 = (volatile signed __int32 *)result;
    if ( result )
    {
      if ( (*((_DWORD *)result + 3) & 0x400) == 0 )
      {
        v5 = *((_DWORD *)result + 61);
        UsedProcessorCount = EtwpQueryUsedProcessorCount(result);
        if ( v5 > *((_DWORD *)v4 + 60) && v5 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v4, &i);
          v7 = EtwpDequeueBuffer(v4, v4 + 16);
          v8 = v7;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v7 + 56);
            if ( *(_QWORD *)(v9 + 8) != v7 + 56 || (v10 = *(_QWORD **)(v7 + 64), *v10 != v7 + 56) )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
          }
          EtwpUnlockBufferList(v4, &i);
          if ( v8 )
          {
            _InterlockedDecrement(v4 + 62);
            _InterlockedDecrement(v4 + 61);
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*((_QWORD *)v4 + 135) + 4LL * (v4[79] & 1) + 4116),
              -*((_DWORD *)v4 + 1));
            EtwpFreeTraceBuffer(v4, v8);
          }
        }
      }
      result = (_UNKNOWN **)EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  return result;
}
