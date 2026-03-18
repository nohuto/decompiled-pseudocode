/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14035C470
 * Callers:
 *     LookupSidInTable @ 0x1405E4BB8 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     SepCheckCapabilities @ 0x1406D4A94 (SepCheckCapabilities.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x14070D180 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x14070DB60 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x14070DBA8 (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x14070DC40 (RtlIsElevatedRid.c)
 *     RtlReplaceSidInSd @ 0x14090F2B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
