/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1407906C0
 * Callers:
 *     VfFaultsSetParameters @ 0x1409DF9D8 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A72E0C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140790888 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
