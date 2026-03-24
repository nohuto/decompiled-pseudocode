/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x1404BDD18
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098FEF0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
