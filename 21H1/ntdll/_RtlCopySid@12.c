/*
 * XREFs of _RtlCopySid@12 @ 0x4B2D6820
 * Callers:
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164 (_RtlpGetDefaultTrustSubjectContext@8.c)
 *     _RtlpInitializeAllowedAce@24 @ 0x4B336734 (_RtlpInitializeAllowedAce@24.c)
 *     _RtlpInitializeAuditAce@24 @ 0x4B336770 (_RtlpInitializeAuditAce@24.c)
 *     _RtlpInitializeDeniedAce@24 @ 0x4B3367AC (_RtlpInitializeDeniedAce@24.c)
 *     _RtlCopySidAndAttributesArray@28 @ 0x4B346110 (_RtlCopySidAndAttributesArray@28.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddCompoundAce@24 @ 0x4B34B010 (_RtlAddCompoundAce@24.c)
 *     _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140 (_RtlAddProcessTrustLabelAce@24.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0 (_RtlAddScopedPolicyIDAce@20.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *Src)
{
  if ( 4 * (unsigned int)Src[1] + 8 > a1 )
    return -1073741789;
  memmove(a2, Src, 4 * Src[1] + 8);
  return 0;
}
