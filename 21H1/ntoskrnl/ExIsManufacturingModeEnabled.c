/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x1407284A0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A567E8 (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
