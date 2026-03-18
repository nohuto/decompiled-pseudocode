/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1402ED85C
 * Callers:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x14021C370 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
