/*
 * XREFs of KeInitializeTimer2 @ 0x1402676A0
 * Callers:
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14060EB30 (NtCreateTimer2.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14077F0B4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x140783680 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407B0458 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407B5C1C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407B754C (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x14099A314 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402676BC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
