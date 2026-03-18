/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1405F1600
 * Callers:
 *     AlpcMessageCleanupProcedure @ 0x1405E2E50 (AlpcMessageCleanupProcedure.c)
 *     AlpcpFlushResourcesPort @ 0x1405E97AC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x1405E9BCC (AlpcpFlushCancelQueue.c)
 *     AlpcpDeletePort @ 0x1405EA2C0 (AlpcpDeletePort.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1405EA530 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1405EAF90 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1405EF9C0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1405F0030 (AlpcpExposeHandleAttribute.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1405F2E2C (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405F3130 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x14064A6A0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14064A7D0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064A90C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14064AA48 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x14064AC88 (AlpcpDeleteView.c)
 *     AlpcpCleanupProcessViews @ 0x1406613EC (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A58B8 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcMessageDestroyProcedure @ 0x1406B3D50 (AlpcMessageDestroyProcedure.c)
 *     NtAlpcCreateSecurityContext @ 0x1406B7300 (NtAlpcCreateSecurityContext.c)
 *     AlpcpExposeViewAttribute @ 0x1406BCA0C (AlpcpExposeViewAttribute.c)
 *     NtSecureConnectPort @ 0x1406BF9C0 (NtSecureConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406C48F0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1406C4F10 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 *     AlpcpReleaseViewAttribute @ 0x1406D649C (AlpcpReleaseViewAttribute.c)
 *     NtAlpcCreatePortSection @ 0x140709700 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x1407098CC (AlpcpCreateSection.c)
 *     NtAlpcCreateSectionView @ 0x14070CC40 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x14070CE68 (AlpcpCreateSectionView.c)
 *     AlpcpDereferenceView @ 0x1408C43E4 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1408C4B00 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C4FB0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C5CB0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C5DB0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rax
  __int64 v4; // rdi
  void *v5; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (**)(void))(v4 + 24))();
    if ( (*(int (__fastcall **)(ULONG_PTR))(v4 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v4 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v5 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v4 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8) + 7))(v5);
        else
          ExFreePoolWithTag(v5, *(_DWORD *)(v4 + 4));
      }
    }
  }
}
