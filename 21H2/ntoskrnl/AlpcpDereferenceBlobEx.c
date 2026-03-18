/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1407A5A54
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1406633A8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtSecureConnectPort @ 0x140664220 (NtSecureConnectPort.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14066AD78 (AlpcpCaptureHandleAttributeInternal.c)
 *     NtAlpcCreatePortSection @ 0x14066BAB0 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     NtAlpcCreateSectionView @ 0x14066C3C0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14066C5B0 (AlpcpCreateSectionView.c)
 *     AlpcConnectionDestroyProcedure @ 0x14066E830 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x1406A1CC0 (AlpcMessageCleanupProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406A61B0 (AlpcMessageDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1406BC370 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1406BE210 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1406C31C0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D7014 (AlpcpReleaseViewAttribute.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     AlpcpDeletePort @ 0x14074D800 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x14074DC30 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x14074E060 (AlpcpFlushCancelQueue.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1407A4638 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSecurityContext @ 0x1407A56B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpDeleteView @ 0x1407A58A4 (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x1407A58E0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpReleaseAttributes @ 0x1407A6660 (AlpcpReleaseAttributes.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpExposeViewAttribute @ 0x1407A717C (AlpcpExposeViewAttribute.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1407A817C (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpExposeAttributes @ 0x1407A9220 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1407A98B0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     AlpcpCleanupProcessViews @ 0x1407E0D28 (AlpcpCleanupProcessViews.c)
 *     NtAlpcDeleteResourceReserve @ 0x140881980 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpDereferenceView @ 0x140965B94 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1409662A0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x140966620 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1407A5A90 (AlpcpDestroyBlob.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob(BugCheckParameter2, 0LL);
  }
  return result;
}
