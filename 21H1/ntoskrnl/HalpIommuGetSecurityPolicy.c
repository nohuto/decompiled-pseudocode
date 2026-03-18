/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x1403233AC
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407AE208 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1407BEBE8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
