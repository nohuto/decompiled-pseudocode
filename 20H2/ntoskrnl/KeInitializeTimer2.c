/*
 * XREFs of KeInitializeTimer2 @ 0x140356810
 * Callers:
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14070AB40 (NtCreateTimer2.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14078C5F8 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopThermalZoneAdd @ 0x140791070 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407BE398 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407C444C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407C5DD8 (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x1409A0420 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14035682C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
