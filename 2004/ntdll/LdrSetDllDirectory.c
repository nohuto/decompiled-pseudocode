/*
 * XREFs of LdrSetDllDirectory @ 0x18007FC20
 * Callers:
 *     LdrpInitializePolicy @ 0x18007FA28 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpInvalidatePathCache @ 0x18007FD20 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180091D60 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( Buffer )
  {
    if ( !wcschr(Buffer, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
        return -1073741801;
      goto LABEL_5;
    }
    return -1073741811;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
