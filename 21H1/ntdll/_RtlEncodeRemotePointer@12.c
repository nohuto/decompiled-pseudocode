/*
 * XREFs of _RtlEncodeRemotePointer@12 @ 0x4B33A370
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

NTSTATUS __cdecl RtlEncodeRemotePointer(HANDLE ProcessHandle, PVOID Pointer, PVOID *EncodedPointer)
{
  NTSTATUS v3; // esi
  NTSTATUS v4; // eax
  int ProcessInformation; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  v4 = ZwQueryInformationProcess(ProcessHandle, ProcessCookie, &ProcessInformation, 4u, 0);
  if ( v4 < 0 )
    return v4 | 0x10000000;
  *EncodedPointer = (PVOID)__ROR4__((unsigned int)Pointer ^ ProcessInformation, ProcessInformation & 0x1F);
  return v3;
}
