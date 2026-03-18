/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1407A6A34
 * Callers:
 *     AlpcpMapLegacyPortRemoteView @ 0x1406622B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpQueryRemoteView @ 0x140663FAC (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x14066C5B0 (AlpcpCreateSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406C31C0 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406C7C20 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D7014 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1406E0930 (AlpcReserveDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     AlpcpFlushQueue @ 0x14074DEF4 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14074E130 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x14074E73C (AlpcpSendCloseMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14074EB48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpAllocateMessage @ 0x1407A49B4 (AlpcpAllocateMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpExposeViewAttribute @ 0x1407A717C (AlpcpExposeViewAttribute.c)
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     AlpcpPortQueryServerInfo @ 0x140966F60 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
