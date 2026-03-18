/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x1404BC358
 * Callers:
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
