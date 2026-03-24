/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x140259994
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KiUpdateRunTime @ 0x1402275D0 (KiUpdateRunTime.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 33872) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 33856);
}
