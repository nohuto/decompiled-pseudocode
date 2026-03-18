/*
 * XREFs of RtlCopySid @ 0x140656BB0
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403BFB30 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140595178 (SepGetSidValuesDump.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     SepSetTokenPackage @ 0x140655738 (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x140656A88 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14068D424 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14068E0C8 (SepGetLowBoxNumberEntry.c)
 *     SepAdjustGroups @ 0x1406A8AF8 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x1406CF394 (PspAssignProcessQuotaBlock.c)
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A92F0 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CD770 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408D0498 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x140914AA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140914DC0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140925660 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140927C94 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409289F8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140928C10 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140928D74 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140928ED4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
