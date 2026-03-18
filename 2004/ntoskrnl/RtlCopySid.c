/*
 * XREFs of RtlCopySid @ 0x140625AA0
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403BD6B0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1405916D8 (SepGetSidValuesDump.c)
 *     SepSetTokenPackage @ 0x14062462C (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x140625978 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x1406259FC (SeQueryUserSidToken.c)
 *     SepAdjustGroups @ 0x140631568 (SepAdjustGroups.c)
 *     SepGetLowBoxNumberEntry @ 0x140631C0C (SepGetLowBoxNumberEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x140644EB8 (PspAssignProcessQuotaBlock.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14070E9B0 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     LocalGetAclForString @ 0x1407754CC (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x140799FC0 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C7930 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408CA658 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x14090EF60 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090F5B0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x14091F840 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140921C3C (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140922BD0 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140922DE8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140922F4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409230AC (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
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
