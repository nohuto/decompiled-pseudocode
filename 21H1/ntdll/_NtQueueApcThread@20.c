/*
 * XREFs of _NtQueueApcThread@20 @ 0x4B2F2DD0
 * Callers:
 *     _RtlQueueApcWow64Thread@20 @ 0x4B33A120 (_RtlQueueApcWow64Thread@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueueApcThread(
        HANDLE ThreadHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  return Wow64SystemServiceCall();
}
