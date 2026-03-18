/*
 * XREFs of HalpIommuGetSecurityPolicy @ 0x140360E7C
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 *     HalpDmaGetRemappingInformation @ 0x1407C1ED8 (HalpDmaGetRemappingInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpIommuGetSecurityPolicy()
{
  return (unsigned int)HalpIommuSecurityPolicy;
}
