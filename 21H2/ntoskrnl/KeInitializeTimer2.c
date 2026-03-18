/*
 * XREFs of KeInitializeTimer2 @ 0x1403588D0
 * Callers:
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1407D53D0 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x1408292C0 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x140852250 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1408534E0 (PopInitializeTimer.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140858B18 (PopDirectedDripsInitializeDisengageTimer.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
