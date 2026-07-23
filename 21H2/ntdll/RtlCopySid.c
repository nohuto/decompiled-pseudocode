/*
 * XREFs of RtlCopySid @ 0x180068900
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180067CF0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180067E80 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800684F8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E64B0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E9520 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97A0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9910 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9C60 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F20 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
