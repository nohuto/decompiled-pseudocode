/*
 * XREFs of _LdrGetDllDirectory@4 @ 0x4B2AAD90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 */

NTSTATUS __cdecl LdrGetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned int v1; // edx
  unsigned int MaximumLength; // edi
  NTSTATUS v3; // esi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v1 = LdrpDllDirectory.Length + 2;
  MaximumLength = DllDirectory->MaximumLength;
  if ( MaximumLength >= v1 )
  {
    RtlCopyUnicodeString(DllDirectory, &LdrpDllDirectory);
    v3 = 0;
  }
  else
  {
    DllDirectory->Length = v1;
    v3 = -1073741789;
    if ( (_WORD)MaximumLength )
      *DllDirectory->Buffer = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v3;
}
