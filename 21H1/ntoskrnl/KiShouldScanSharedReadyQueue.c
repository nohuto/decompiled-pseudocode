/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x14033299C
 * Callers:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402753C0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
