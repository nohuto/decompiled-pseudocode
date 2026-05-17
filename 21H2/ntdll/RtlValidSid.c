/*
 * XREFs of RtlValidSid @ 0x180037950
 * Callers:
 *     RtlLengthSidAsUnicodeString @ 0x180036D50 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     EvtIntReportEventWorker @ 0x18004FE90 (EvtIntReportEventWorker.c)
 *     RtlAddProcessTrustLabelAce @ 0x180067CF0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800711F0 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x18007ED84 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180080060 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddAccessFilterAce @ 0x1800E9560 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97E0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9950 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9CA0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F60 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidSid(_BYTE *a1)
{
  return a1 && (*a1 & 0xF) == 1 && a1[1] <= 0xFu;
}
