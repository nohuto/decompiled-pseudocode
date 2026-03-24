/*
 * XREFs of AlpcpQueryRemoteView @ 0x1405DDA24
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1405DDB60 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1405E0AC4 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x140661CE0 (AlpcpLocateView.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  signed __int64 *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  struct _DMA_ADAPTER *v9; // rsi
  ULONG_PTR v10; // rbx
  __int64 View; // rax

  v3 = *(__int64 **)(a1 + 16);
  v6 = v3 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
  v7 = *v3;
  v8 = 0;
  if ( !*v3 )
    goto LABEL_12;
  v9 = (struct _DMA_ADAPTER *)v3[1];
  if ( !v9 )
    goto LABEL_12;
  if ( (*(_DWORD *)(v7 + 416) & 0x1000) == 0 )
    v9 = (struct _DMA_ADAPTER *)v7;
  if ( ObReferenceObjectSafe((__int64)v9) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v10 = *(_QWORD *)(a2 + 16);
    AlpcpLockForCachedReferenceBlob(v10);
    View = AlpcpLocateView(v10, v9);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(View + 40);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(View + 48);
    }
    else
    {
      v8 = -1073741670;
    }
    AlpcpUnlockBlob(v10);
    HalPutDmaAdapter(v9);
    return v8;
  }
  else
  {
LABEL_12:
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 3221225527LL;
  }
}
