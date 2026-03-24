/*
 * XREFs of MmIsAddressValid @ 0x140536B70
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC7D8 (KiMarkBugCheckRegions.c)
 *     sub_1403EBA24 @ 0x1403EBA24 (sub_1403EBA24.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897F8C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x1409991F0 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409AB5C0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14030C4F0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
