/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140253CD0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140240D60 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpFreeTraceBuffer @ 0x140246724 (EtwpFreeTraceBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x140254194 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x14025426C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402542B8 (EtwpLockBufferList.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x1403F947C (EtwpRemoveBufferFromGlobalList.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  char *v10; // rbp
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
          v10 = (char *)v8;
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
