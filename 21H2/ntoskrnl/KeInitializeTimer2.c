/*
 * XREFs of KeInitializeTimer2 @ 0x1402E9260
 * Callers:
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1406D4930 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x1407907E0 (PopThermalZoneAdd.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14079685C (PopDirectedDripsInitializeDisengageTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2798 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407C870C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x14099E0E0 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
