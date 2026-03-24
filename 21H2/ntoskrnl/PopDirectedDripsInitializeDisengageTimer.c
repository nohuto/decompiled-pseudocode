/*
 * XREFs of PopDirectedDripsInitializeDisengageTimer @ 0x14079685C
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140A40A88 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1402E9260 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopDirectedDripsInitializeDisengageTimer(__int64 a1, int a2, int a3)
{
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return KeInitializeTimer2(a1 + 24, (__int64)PopDirectedDripsDisengageTimerCallback, a1, 8LL);
}
