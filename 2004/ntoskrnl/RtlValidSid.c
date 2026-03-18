/*
 * XREFs of RtlValidSid @ 0x14067E860
 * Callers:
 *     AdtpPackageParameters @ 0x1403BD944 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140592AB4 (SepValidateCAPIDs.c)
 *     SeCaptureSid @ 0x1406289EC (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406305B0 (SeCaptureSidAndAttributesArray.c)
 *     RtlLengthSidAsUnicodeString @ 0x14063F108 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     RtlAddMandatoryAce @ 0x14067D860 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x1406BAD40 (RtlpValidateSidBuffer.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140756004 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x14076C508 (_CmGetRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140799FC0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407B9DFC (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14088E13C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1408906F0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408A09A8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408CB740 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x14090EF60 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090F5B0 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1409224F8 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140922BD0 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140922DE8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140922F4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409230AC (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x14097B40C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x140A4FCF0 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140A4FF14 (PiAuCreateStandardSecurityObject.c)
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
