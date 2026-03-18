/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1405E7A94
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1405E6A28 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAllocateMessage @ 0x1405E79B4 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x1405E9568 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x1405E9A70 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E9FF0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1405EF9C0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A90C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AA48 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x1406BCA0C (AlpcpExposeViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1406C00C0 (AlpcpQueryRemoteView.c)
 *     AlpcRegionDestroyProcedure @ 0x1406C4F10 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406CC760 (AlpcSectionDeleteProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406D5D24 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D649C (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1406DDC20 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x14070CA5C (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x14070CE68 (AlpcpCreateSectionView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14076BFD4 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C5DB0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
