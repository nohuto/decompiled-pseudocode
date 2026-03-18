/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14064942C
 * Callers:
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x140645420 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1406457E8 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x140645A60 (AlpcpQueryRemoteView.c)
 *     AlpcpFlushQueue @ 0x1406471E4 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1406479A4 (AlpcpSendCloseMessage.c)
 *     AlpcpAllocateMessage @ 0x14064934C (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x14064C084 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1406BA480 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406BA500 (AlpcSectionDeleteProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x1406C6888 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D08C0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF50 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14075B484 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BEC20 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
