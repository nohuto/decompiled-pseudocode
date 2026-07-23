/*
 * XREFs of PsspDumpObject_Event @ 0x4B387F30
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryEvent@20 @ 0x4B2F2EE0 (_NtQueryEvent@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Event(
        HANDLE EventHandle,
        PVOID EventInformation,
        unsigned int a3,
        PULONG ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return NtQueryEvent(EventHandle, EventBasicInformation, EventInformation, 8u, ReturnLength);
  else
    return -1073741789;
}
