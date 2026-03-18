/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1403F6B2C
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityDescriptorNode @ 0x1405E1B48 (CmpGetSecurityDescriptorNode.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405E1D18 (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x1405E1F98 (CmpTraceSecurityChanging.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x14092760C (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
