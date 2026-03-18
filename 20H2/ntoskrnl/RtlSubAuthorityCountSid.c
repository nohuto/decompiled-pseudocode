/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140340E40
 * Callers:
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     SepCheckCapabilities @ 0x1406CAEC0 (SepCheckCapabilities.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x1406FCD1C (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1406FD864 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406FD8FC (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406FDA90 (RtlIsElevatedRid.c)
 *     RtlReplaceSidInSd @ 0x140916190 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
