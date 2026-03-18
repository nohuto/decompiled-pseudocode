/*
 * XREFs of AlpcpUnlockBlob @ 0x1407B0F40
 * Callers:
 *     AlpcpMapLegacyPortRemoteView @ 0x1406622B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpQueryRemoteView @ 0x140663FAC (AlpcpQueryRemoteView.c)
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x14066C5B0 (AlpcpCreateSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406C31C0 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406C7C20 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D7014 (AlpcpReleaseViewAttribute.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpExposeViewAttribute @ 0x1407A717C (AlpcpExposeViewAttribute.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407A7850 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1407B0A20 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1407A5A90 (AlpcpDestroyBlob.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v1; // r8
  int v2; // eax
  signed __int64 BugCheckParameter4; // rdx
  ULONG_PTR v4; // rbx

  v1 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v1 & 1) != 0
    && (v2 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v1 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v2 > 0)
    && (BugCheckParameter4 = v2
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v2 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    AlpcpDestroyBlob(BugCheckParameter2, 1);
  }
  else
  {
    v4 = BugCheckParameter2 - 16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 - 16);
    KeAbPostRelease(v4);
  }
}
