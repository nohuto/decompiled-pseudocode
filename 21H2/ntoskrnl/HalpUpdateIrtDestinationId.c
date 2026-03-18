/*
 * XREFs of HalpUpdateIrtDestinationId @ 0x14051DB48
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A62BC0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpIommuUpdateRemappingDestination @ 0x140A61B28 (HalpIommuUpdateRemappingDestination.c)
 */

__int64 HalpUpdateIrtDestinationId()
{
  return HalpIommuUpdateRemappingDestination();
}
