/*
 * XREFs of _RtlDecodeRemotePointer@12 @ 0x4B33A320
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

NTSTATUS __cdecl RtlDecodeRemotePointer(HANDLE ProcessHandle, PVOID Pointer, PVOID *DecodedPointer)
{
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  int ProcessInformation; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  v4 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie, &ProcessInformation, 4u, 0);
  if ( v4 < 0 )
    return v4 | 0x10000000;
  *DecodedPointer = (PVOID)(ProcessInformation ^ __ROR4__(Pointer, 32 - (ProcessInformation & 0x1F)));
  return v3;
}
