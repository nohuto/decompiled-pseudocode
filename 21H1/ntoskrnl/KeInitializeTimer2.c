/*
 * XREFs of KeInitializeTimer2 @ 0x1402C06D0
 * Callers:
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140643D60 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x14077AC80 (PopThermalZoneAdd.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14077F8C4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407AD2F8 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1407B2AAC (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1407B43DC (EtwpCoverageEnsureContext.c)
 *     KiCompleteKernelInit @ 0x1409992B4 (KiCompleteKernelInit.c)
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402C06EC (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
