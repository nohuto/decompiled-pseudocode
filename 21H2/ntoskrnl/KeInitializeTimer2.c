/*
 * XREFs of KeInitializeTimer2 @ 0x14029A5B0
 * Callers:
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1406ABC10 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140791D90 (PopThermalZoneAdd.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140796A5C (PopDirectedDripsInitializeDisengageTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2CB8 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407C8A2C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A43414 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14029A5CC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
