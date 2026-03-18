/*
 * XREFs of AlpcpFlushMessagesPort @ 0x140647028
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140646DFC (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x1402EEA30 (ObReferenceObjectSafe.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     AlpcpFlushQueue @ 0x1406471E4 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x140647340 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF50 (AlpcpFlushMessagesByRequestor.c)
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
