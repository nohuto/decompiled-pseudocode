/*
 * XREFs of RtlCopySid @ 0x180067410
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180066800 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180066990 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180067008 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180067290 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E6660 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E96D0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9950 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9AC0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9E10 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800EA0D0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A3EC0 (memmove.c)
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
