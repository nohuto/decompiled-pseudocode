/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140737660
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5CBE8 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
