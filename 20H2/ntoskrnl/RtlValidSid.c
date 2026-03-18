/*
 * XREFs of RtlValidSid @ 0x1406063F0
 * Callers:
 *     AdtpPackageParameters @ 0x1403BFE64 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140596554 (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x1405E5438 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 *     RtlAddMandatoryAce @ 0x1406053F0 (RtlAddMandatoryAce.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406A99F0 (SeCaptureSidAndAttributesArray.c)
 *     RtlValidSecurityDescriptor @ 0x1406B4DD0 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSidAsUnicodeString @ 0x1406FB6A8 (RtlLengthSidAsUnicodeString.c)
 *     RtlpValidateSidBuffer @ 0x1406FCD1C (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140764C44 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14077AF38 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A92F0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407C868C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140893C8C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1408961E0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408A64D8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408D1580 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x140914AA0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140914DC0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140928558 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1409289F8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140928C10 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140928D74 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140928ED4 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x1409811DC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140A50370 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A50594 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
