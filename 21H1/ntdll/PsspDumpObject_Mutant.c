/*
 * XREFs of PsspDumpObject_Mutant @ 0x4B387F60
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryMutant@20 @ 0x4B2F3ED0 (_NtQueryMutant@20.c)
 */

NTSTATUS __stdcall PsspDumpObject_Mutant(
        HANDLE MutantHandle,
        char *MutantInformation,
        unsigned int a3,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  *ReturnLength = 0;
  if ( a3 < 0x10 )
    return -1073741789;
  result = NtQueryMutant(MutantHandle, MutantBasicInformation, MutantInformation, 8u, ReturnLength);
  if ( result >= 0
    && (result = NtQueryMutant(MutantHandle, MutantOwnerInformation, MutantInformation + 8, 8u, 0), result >= 0) )
  {
    *ReturnLength += 8;
  }
  else
  {
    *ReturnLength = 0;
  }
  return result;
}
