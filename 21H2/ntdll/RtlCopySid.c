/*
 * XREFs of RtlCopySid @ 0x180068900
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180067CF0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180067E80 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800684F8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E64F0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E9560 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97E0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9950 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9CA0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F60 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
