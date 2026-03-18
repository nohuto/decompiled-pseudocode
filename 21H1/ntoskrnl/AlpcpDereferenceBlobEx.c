/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1406103F0
 * Callers:
 *     AlpcpExposeAttributes @ 0x14060B170 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14060B7E0 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406105A4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x140611F60 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     AlpcpDeleteView @ 0x140612DF8 (AlpcpDeleteView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     NtAlpcCreatePortSection @ 0x140642870 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 *     AlpcpMapLegacyPortView @ 0x140645420 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x1406455C0 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406457E8 (AlpcpCreateSectionView.c)
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpDeletePort @ 0x140646340 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x140646F20 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x140647340 (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x140648BC0 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14064B5CC (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcMessageCleanupProcedure @ 0x14064BF70 (AlpcMessageCleanupProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14064C084 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x1406604DC (AlpcpCleanupProcessViews.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406B8640 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BA3C0 (AlpcMessageDestroyProcedure.c)
 *     NtAlpcCreateSecurityContext @ 0x1406BF430 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x1406C6888 (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406C8700 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcRegionDestroyProcedure @ 0x1406D08C0 (AlpcRegionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x14070A470 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14070A5A0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14070A6DC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14070A820 (AlpcpPrepareViewForDelivery.c)
 *     AlpcCreateSecurityContext @ 0x1408BDA00 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408BDEB0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408BEB20 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408BEC20 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
