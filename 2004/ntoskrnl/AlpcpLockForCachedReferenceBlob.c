/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14062B87C
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1406101FC (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1406105C8 (AlpcpCreateSectionView.c)
 *     AlpcpFlushQueue @ 0x140629634 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140629854 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140629BA8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x140629DF4 (AlpcpSendCloseMessage.c)
 *     AlpcpAllocateMessage @ 0x14062B79C (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x14062E9D0 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x14062EA08 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064923C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeAttributes @ 0x1406832E0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     AlpcReserveDestroyProcedure @ 0x1406DB790 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406DB810 (AlpcSectionDeleteProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x1406E7180 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1406F1970 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140702CE0 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14075D96C (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BFF70 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
