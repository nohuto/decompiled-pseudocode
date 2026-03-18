/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140782410
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1407826C4 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
