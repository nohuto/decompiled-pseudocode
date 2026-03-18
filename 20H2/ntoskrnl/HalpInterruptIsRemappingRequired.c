/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140378BAC
 * Callers:
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407CDBAC (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x14099DE54 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409ABD84 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
