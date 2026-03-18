/*
 * XREFs of MmIsAddressValid @ 0x140535070
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DBE68 (KiMarkBugCheckRegions.c)
 *     sub_1403EB0B4 @ 0x1403EB0B4 (sub_1403EB0B4.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14089A9BC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x14099C000 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409AE6C0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
