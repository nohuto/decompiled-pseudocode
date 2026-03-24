/*
 * XREFs of AlpcpFlushMessagesPort @ 0x1405E2314
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1405E20E8 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     AlpcpFlushQueue @ 0x1405E24D0 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x1405E262C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406B41E4 (AlpcpFlushMessagesByRequestor.c)
 */

void __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  __int64 *v2; // rbx
  signed __int64 *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v2 = *(__int64 **)(a1 + 16);
    v3 = v2 - 2;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v2 - 2), 0LL);
    v4 = *v2;
    v5 = v2[2];
    if ( v4 )
      v4 &= -(__int64)(ObReferenceObjectSafe(v4) != 0);
    if ( v5 )
      v5 &= -(__int64)(ObReferenceObjectSafe(v5) != 0);
    if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 416) & 0x40) == 0 && v5 && (*(_DWORD *)(v5 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v5, v4, v4 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v5, v4, v4 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v5, v4, v4 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v5, v4, v4 + 208, 4LL);
        AlpcpFlushCancelQueue(v4, a1);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v4);
    }
    if ( v5 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  }
}
