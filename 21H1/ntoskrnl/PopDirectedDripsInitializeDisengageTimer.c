/*
 * XREFs of PopDirectedDripsInitializeDisengageTimer @ 0x14077F8C4
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A3D12C (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1402C06D0 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopDirectedDripsInitializeDisengageTimer(__int64 a1, int a2, int a3)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return KeInitializeTimer2(a1 + 24);
}
