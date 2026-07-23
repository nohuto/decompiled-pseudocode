/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1406D9720
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1405E2350 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x1405E4D30 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1405E9BF0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x1405F6AF0 (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeleteSectionView @ 0x1405FC380 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1405FF960 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x140600690 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpReleaseViewAttribute @ 0x140613954 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCreateSecurityContext @ 0x14065540C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140655664 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateView @ 0x140655960 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140656970 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140656C9C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140656DD8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x140657378 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406573B0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCleanupProcessViews @ 0x14067DACC (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     NtAlpcCreateSectionView @ 0x1406A9610 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406A9838 (AlpcpCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x1406AB4F0 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x1406AB6BC (AlpcpCreateSection.c)
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 *     AlpcMessageCleanupProcedure @ 0x1406CD9C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpFlushResourcesPort @ 0x1406D196C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x1406D1D8C (AlpcpFlushCancelQueue.c)
 *     AlpcpDeletePort @ 0x1406D2480 (AlpcpDeletePort.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1406D26F0 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1406D3150 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1406D5FD0 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1406D7AE0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1406D8150 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcDeleteSecurityContext @ 0x1406DA3F0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDereferenceView @ 0x1408C1D04 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1408C2420 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C28D0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C35D0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C36D0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
