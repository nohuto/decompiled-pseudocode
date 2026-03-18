/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x14029135C
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 34896) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 34880);
}
