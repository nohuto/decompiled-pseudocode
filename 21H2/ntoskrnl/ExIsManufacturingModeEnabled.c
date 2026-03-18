/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x14067AFA0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140B110B4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
