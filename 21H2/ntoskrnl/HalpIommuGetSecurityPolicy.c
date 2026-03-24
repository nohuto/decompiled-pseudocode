/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x1402D3F1C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C36A8 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1407D4B08 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
