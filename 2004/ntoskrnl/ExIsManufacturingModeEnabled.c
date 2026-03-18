/*
 * XREFs of ExIsManufacturingModeEnabled @ 0x140728BD0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A4DC4C (IopInitializeSystemDrivers.c)
 * Callees:
 *     <none>
 */

char ExIsManufacturingModeEnabled()
{
  return ExpManufacturingInformation & 1;
}
