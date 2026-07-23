/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x14027AF04
 * Callers:
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
