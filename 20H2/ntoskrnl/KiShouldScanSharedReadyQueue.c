/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x1402DCAB4
 * Callers:
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x140286DE0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
