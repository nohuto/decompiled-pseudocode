/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x140688570
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x140600B10 (AlpcViewDestroyProcedure.c)
 *     NtAlpcCreatePortSection @ 0x14060D720 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x14060D8B4 (AlpcpCreateSection.c)
 *     AlpcpMapLegacyPortView @ 0x1406101FC (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1406103A0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406105C8 (AlpcpCreateSectionView.c)
 *     AlpcpCleanupProcessViews @ 0x14061ADBC (AlpcpCleanupProcessViews.c)
 *     AlpcpFlushResourcesPort @ 0x140629370 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x140629790 (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x14062B010 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14062DA1C (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageCleanupProcedure @ 0x14062E160 (AlpcMessageCleanupProcedure.c)
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 *     AlpcpReleaseViewAttribute @ 0x14062E9D0 (AlpcpReleaseViewAttribute.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14062EAF0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcDeleteSectionView @ 0x140648FD0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x140649100 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14064923C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140649380 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeletePort @ 0x1406566D0 (AlpcpDeletePort.c)
 *     AlpcpExposeAttributes @ 0x1406832E0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140683950 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140688724 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14068A0E0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     AlpcpDeleteView @ 0x14068AF78 (AlpcpDeleteView.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406D7EF0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406DB6D0 (AlpcMessageDestroyProcedure.c)
 *     NtAlpcCreateSecurityContext @ 0x1406DF9B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406E7180 (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406E8DC0 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcRegionDestroyProcedure @ 0x1406F1970 (AlpcRegionDestroyProcedure.c)
 *     AlpcCreateSecurityContext @ 0x1408BED50 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408BF200 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BFE70 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BFF70 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
        ExFreeToNPagedLookasideList(
          (PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v4 + 8),
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
