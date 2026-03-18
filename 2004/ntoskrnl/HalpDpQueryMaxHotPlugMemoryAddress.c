/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x1404B8E38
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098CF00 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
