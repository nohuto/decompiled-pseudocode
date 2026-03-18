/*
 * XREFs of MmIsAddressValid @ 0x140531050
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403D8398 (KiMarkBugCheckRegions.c)
 *     sub_1403E75E4 @ 0x1403E75E4 (sub_1403E75E4.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408939EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     PopMarkComponentsBootPhase @ 0x140994860 (PopMarkComponentsBootPhase.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1409A78F0 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx((__int64)VirtualAddress);
}
