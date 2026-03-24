/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140265D30
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1402C28C0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140265E58 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x1402661F4 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x1402662CC (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140266318 (EtwpLockBufferList.c)
 *     EtwpFreeTraceBuffer @ 0x1402C7EC4 (EtwpFreeTraceBuffer.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x1403F92FC (EtwpRemoveBufferFromGlobalList.c)
 *     EtwpReleaseLoggerContext @ 0x140643A38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140643A84 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  unsigned int v1; // edi
  void *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int UsedProcessorCount; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  char i; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  for ( i = 0; v1 < *(_DWORD *)(a1 + 16); ++v1 )
  {
    v3 = 0LL;
    v4 = EtwpAcquireLoggerContextByLoggerId(a1, v1, 0LL);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 12) & 0x400) == 0 )
      {
        v6 = *(_DWORD *)(v4 + 244);
        UsedProcessorCount = EtwpQueryUsedProcessorCount(v4);
        if ( v6 > *(_DWORD *)(v5 + 240) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v5, &i);
          v8 = EtwpDequeueBuffer(v5, v5 + 64);
          v10 = v8;
          if ( v8 )
            v3 = (void *)EtwpRemoveBufferFromGlobalList(v9, v8);
          EtwpUnlockBufferList(v5, &i);
          if ( v10 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 244));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v5 + 1080) + 4LL * (*(_DWORD *)(v5 + 316) & 1) + 4116),
              -*(_DWORD *)(v5 + 4));
            EtwpFreeTraceBuffer(v5, v10);
            if ( v3 )
              ExFreePoolWithTag(v3, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(v5, 0LL);
    }
  }
}
