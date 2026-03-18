/*
 * XREFs of PspStorageEmptyArray @ 0x140911704
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x1407110F0 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
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
