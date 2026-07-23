/*
 * XREFs of PsspDumpObject_Thread @ 0x4B388050
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Thread(
        HANDLE ThreadHandle,
        char *ThreadInformation,
        unsigned int a3,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  *ReturnLength = 0;
  if ( a3 < 0x20 )
    return -1073741789;
  result = NtQueryInformationThread(ThreadHandle, ThreadBasicInformation, ThreadInformation, 0x1Cu, ReturnLength);
  if ( result >= 0
    && (result = NtQueryInformationThread(ThreadHandle, ThreadQuerySetWin32StartAddress, ThreadInformation + 28, 4u, 0),
        result >= 0) )
  {
    *ReturnLength += 4;
  }
  else
  {
    *ReturnLength = 0;
  }
  return result;
}
