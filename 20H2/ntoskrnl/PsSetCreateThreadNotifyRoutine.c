/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140790530
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1407907E4 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
