/*
 * XREFs of _NtQueryEvent@20 @ 0x4B2F2EE0
 * Callers:
 *     PsspDumpObject_Event @ 0x4B387F30 (PsspDumpObject_Event.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
