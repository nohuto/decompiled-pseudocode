/*
 * XREFs of PspStorageEmptyArray @ 0x14090BAD4
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x140657050 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  struct _DMA_ADAPTER *v5; // rsi

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v5 = (struct _DMA_ADAPTER *)(*(_QWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
      *(_QWORD *)(BugCheckParameter2 + 8) = 1LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      if ( v5 )
      {
        HalPutDmaAdapter(v5);
        ++v2;
      }
      BugCheckParameter2 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
