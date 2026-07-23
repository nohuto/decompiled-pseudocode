/*
 * XREFs of NtQueueApcThread @ 0x1406991A0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x140699390 (NtQueueApcThreadEx.c)
 */

NTSTATUS __cdecl NtQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  return NtQueueApcThreadEx(ThreadHandle, 0LL, ApcRoutine, ApcArgument1, ApcArgument2, ApcArgument3);
}
