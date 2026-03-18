/*
 * XREFs of AlpcpQueryRemoteView @ 0x14062EA08
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14062E850 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140328360 (ObReferenceObjectSafe.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14062B87C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpLocateView @ 0x14062EC80 (AlpcpLocateView.c)
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
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
