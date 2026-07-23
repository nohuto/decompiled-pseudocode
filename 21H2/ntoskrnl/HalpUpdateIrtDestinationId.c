/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404D17D8
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A9B84 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409A8350 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
