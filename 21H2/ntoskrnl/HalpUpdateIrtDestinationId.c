/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x1404D1598
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A8C54 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x1409A7420 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
