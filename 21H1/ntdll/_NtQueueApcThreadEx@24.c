/*
 * XREFs of _NtQueueApcThreadEx@24 @ 0x4B2F3FD0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  return Wow64SystemServiceCall();
}
