/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1406D0224
 * Callers:
 *     AlpcpExposeViewAttribute @ 0x1405F6AF0 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x140600690 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x140607530 (AlpcSectionDeleteProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406133B4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReleaseViewAttribute @ 0x140613954 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x14061CE80 (AlpcReserveDestroyProcedure.c)
 *     AlpcpCreateView @ 0x140655960 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140656C9C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1406A9428 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1406A9838 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1406CD184 (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAllocateMessage @ 0x1406D0144 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x1406D1728 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x1406D1C30 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1406D1E5C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1406D21B0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407704B0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C3260 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C36D0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
