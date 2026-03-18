/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x140331C7C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407BF2A8 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1407D06D8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
