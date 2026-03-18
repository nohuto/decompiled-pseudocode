/*
 * XREFs of PopInitializeWorkItem @ 0x14077ECC8
 * Callers:
 *     PopInitializeIRTimer @ 0x1403A6130 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140A3C87C (PopInitializePowerButtonHold.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A3CD84 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
