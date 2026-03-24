/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1405E9FC0
 * Callers:
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcMessageCleanupProcedure @ 0x1405DE260 (AlpcMessageCleanupProcedure.c)
 *     AlpcpFlushResourcesPort @ 0x1405E220C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x1405E262C (AlpcpFlushCancelQueue.c)
 *     AlpcpDeletePort @ 0x1405E2D20 (AlpcpDeletePort.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1405E2F90 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1405E39F0 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1405E8380 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1405E89F0 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405EAC90 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCleanupProcessViews @ 0x140613E6C (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x14061DE30 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateSecurityContext @ 0x1406605EC (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140660844 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateView @ 0x140660B40 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140661B50 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140661E7C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140661FB8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x140662558 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x140662590 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14068513C (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x140685BD0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x14068A760 (AlpcMessageDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x140697DF8 (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeleteSectionView @ 0x14069D2B0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1406A0620 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x1406A0F00 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x1406B0D14 (AlpcpCreateReserve.c)
 *     AlpcpReleaseViewAttribute @ 0x1406B4784 (AlpcpReleaseViewAttribute.c)
 *     NtAlpcCreateSectionView @ 0x1406D2330 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406D2558 (AlpcpCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x1406D4210 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x1406D43DC (AlpcpCreateSection.c)
 *     AlpcpDereferenceView @ 0x1408C1BA4 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1408C22C0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C2770 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C3470 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C3570 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
