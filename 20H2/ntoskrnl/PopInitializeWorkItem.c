/*
 * XREFs of PopInitializeWorkItem @ 0x14078C268
 * Callers:
 *     PopInitializeIRTimer @ 0x1403A86B0 (PopInitializeIRTimer.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     PopInitializePowerButtonHold @ 0x140A42B1C (PopInitializePowerButtonHold.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140A43024 (PopDirectedDripsInitializePhase0.c)
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
