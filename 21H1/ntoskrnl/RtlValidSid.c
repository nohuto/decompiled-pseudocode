/*
 * XREFs of RtlValidSid @ 0x140606780
 * Callers:
 *     AdtpPackageParameters @ 0x1403BC9B4 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1405923C4 (SepValidateCAPIDs.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x140614910 (RtlpSetSecurityObject.c)
 *     SeCaptureSid @ 0x1406465B0 (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x140673AA0 (SeCaptureSidAndAttributesArray.c)
 *     RtlLengthSidAsUnicodeString @ 0x14068F228 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x14070DB60 (RtlpValidateSidBuffer.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140751974 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140769DC8 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B6C8C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14088CE1C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14088F3D0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14089F688 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408CA3F0 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140921480 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140921920 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140921B38 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140921C9C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140921DFC (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097A06C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140A4A274 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4A498 (PiAuCreateStandardSecurityObject.c)
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
