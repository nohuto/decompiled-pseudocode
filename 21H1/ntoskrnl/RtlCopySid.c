/*
 * XREFs of RtlCopySid @ 0x14066B1C0
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403BC720 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140590FE8 (SepGetSidValuesDump.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     SepSetTokenPackage @ 0x140669D4C (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x14066B098 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     SepAdjustGroups @ 0x140675D28 (SepAdjustGroups.c)
 *     SepGetLowBoxNumberEntry @ 0x140678498 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140678B34 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x1406D9004 (PspAssignProcessQuotaBlock.c)
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C65E0 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408C9308 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x14091E590 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x14092098C (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140921920 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140921B38 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140921C9C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140921DFC (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
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
