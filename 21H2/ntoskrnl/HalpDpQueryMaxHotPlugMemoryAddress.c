/*
 * XREFs of HalpDpQueryMaxHotPlugMemoryAddress @ 0x1404BDF58
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 HalpDpQueryMaxHotPlugMemoryAddress()
{
  return HalpMaxHotPlugMemoryAddress;
}
