/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1407825A0
 * Callers:
 *     VfFaultsSetParameters @ 0x1409D99B8 (VfFaultsSetParameters.c)
 *     ViInitSystemPhase1 @ 0x140A6C52C (ViInitSystemPhase1.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140782768 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
