/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140787FC0
 * Callers:
 *     VfFaultsSetParameters @ 0x1409D9958 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A6C29C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140788188 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
