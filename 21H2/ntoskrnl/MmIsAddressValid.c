/*
 * XREFs of MmIsAddressValid @ 0x140536DB0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC948 (KiMarkBugCheckRegions.c)
 *     sub_1403EBB94 @ 0x1403EBB94 (sub_1403EBB94.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409AC4F0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
