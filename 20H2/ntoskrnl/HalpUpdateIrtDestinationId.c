/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404CFBC8
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409ABD84 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409AA550 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
