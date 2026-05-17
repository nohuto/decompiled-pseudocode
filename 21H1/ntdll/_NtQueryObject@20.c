/*
 * XREFs of _NtQueryObject@20 @ 0x4B2F2A60
 * Callers:
 *     PsspWalkHandleTable @ 0x4B3882F7 (PsspWalkHandleTable.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
