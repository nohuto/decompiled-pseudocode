/*
 * XREFs of HalpInterruptIsRemappingRequired @ 0x140378B8C
 * Callers:
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1FCC (HalpInterruptQueryControllerInfo.c)
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x1409A9B84 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     <none>
 */

char HalpInterruptIsRemappingRequired()
{
  return BYTE1(*(_DWORD *)(HalpInterruptController + 220)) & 1;
}
