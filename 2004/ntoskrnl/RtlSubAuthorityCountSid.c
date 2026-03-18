/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1402FE9B0
 * Callers:
 *     LookupSidInTable @ 0x14068E37C (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x140693460 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x1406BAD40 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1406BAD88 (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x1406BAE20 (RtlIsElevatedRid.c)
 *     RtlGetAppContainerSidType @ 0x1406BAF40 (RtlGetAppContainerSidType.c)
 *     SepCheckCapabilities @ 0x1406F7DD0 (SepCheckCapabilities.c)
 *     RtlReplaceSidInSd @ 0x140910650 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
