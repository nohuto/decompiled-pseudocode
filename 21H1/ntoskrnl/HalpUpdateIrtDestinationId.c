/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404CC1B8
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A4FE4 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409A37B0 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
