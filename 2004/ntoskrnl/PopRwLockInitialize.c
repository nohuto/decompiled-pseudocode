/*
 * XREFs of PopRwLockInitialize @ 0x1403A6190
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140A70D1C (PopCreateIdlePhaseWatchdog.c)
 * Callees:
 *     <none>
 */

void __fastcall PopRwLockInitialize(_QWORD *a1)
{
  a1[1] = 0LL;
  *a1 = 0LL;
}
