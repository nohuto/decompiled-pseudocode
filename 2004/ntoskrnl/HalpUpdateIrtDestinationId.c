/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404CC668
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A5E24 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409A45F0 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
