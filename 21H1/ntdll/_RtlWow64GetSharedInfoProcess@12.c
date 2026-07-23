/*
 * XREFs of _RtlWow64GetSharedInfoProcess@12 @ 0x4B33A200
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 */

int __thiscall RtlWow64GetSharedInfoProcess(PSIZE_T NumberOfBytesRead, HANDLE ProcessHandle, _BYTE *a3, PVOID Buffer)
{
  int result; // eax
  PSIZE_T v5; // edx
  PSIZE_T ProcessInformation; // [esp+0h] [ebp-4h] BYREF

  ProcessInformation = NumberOfBytesRead;
  result = ZwQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 4u, 0);
  if ( result >= 0 )
  {
    v5 = ProcessInformation;
    if ( ProcessInformation )
    {
      *a3 = 1;
      return NtReadVirtualMemory(ProcessHandle, v5 + 144, Buffer, 0x28uLL, ProcessInformation);
    }
    else
    {
      *a3 = 0;
    }
  }
  return result;
}
