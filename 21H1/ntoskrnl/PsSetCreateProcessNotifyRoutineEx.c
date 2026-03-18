/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x140787E10
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140788188 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
