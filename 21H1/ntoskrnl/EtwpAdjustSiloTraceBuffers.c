/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140241960
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140312AD0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024124C (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x1402415DC (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1402416B8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140241704 (EtwpLockBufferList.c)
 *     EtwpFreeTraceBuffer @ 0x14033FF1C (EtwpFreeTraceBuffer.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 */

_UNKNOWN **__fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int UsedProcessorCount; // eax
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned __int8 i; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    result = (_UNKNOWN **)EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v4 = (__int64)result;
    if ( result )
    {
      if ( (*((_DWORD *)result + 3) & 0x400) == 0 )
      {
        v5 = *((_DWORD *)result + 61);
        UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)result);
        if ( v5 > *(_DWORD *)(v4 + 240) && v5 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v4, &i);
          v7 = EtwpDequeueBuffer(v4, (_QWORD *)(v4 + 64));
          v8 = v7;
          if ( v7 )
          {
            v9 = v7[7];
            if ( *(_QWORD **)(v9 + 8) != v7 + 7 || (v10 = (_QWORD *)v7[8], (_QWORD *)*v10 != v7 + 7) )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
          }
          EtwpUnlockBufferList(v4, &i);
          if ( v8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 244));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v4 + 1112) + 4LL * (*(_DWORD *)(v4 + 316) & 1) + 4116),
              -*(_DWORD *)(v4 + 4));
            EtwpFreeTraceBuffer(v4, v8);
          }
        }
      }
      result = (_UNKNOWN **)EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  return result;
}
