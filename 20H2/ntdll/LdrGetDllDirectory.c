/*
 * XREFs of LdrGetDllDirectory @ 0x18007F000
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl LdrGetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned int MaximumLength; // edx
  unsigned int v3; // eax
  NTSTATUS v4; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  MaximumLength = DllDirectory->MaximumLength;
  v3 = LdrpDllDirectory.Length + 2;
  if ( MaximumLength >= v3 )
  {
    RtlCopyUnicodeString(DllDirectory, &LdrpDllDirectory);
    v4 = 0;
  }
  else
  {
    DllDirectory->Length = v3;
    v4 = -1073741789;
    if ( (_WORD)MaximumLength )
      *DllDirectory->Buffer = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v4;
}
