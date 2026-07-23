/*
 * XREFs of _LdrSetDllDirectory@4 @ 0x4B2ED420
 * Callers:
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlpInvalidatePathCache@4 @ 0x4B2ED502 (_RtlpInvalidatePathCache@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  void *v1; // edi
  void *v2; // esi
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-10h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+18h] [ebp-8h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  if ( DllDirectory->Buffer )
  {
    if ( !wcschr(DllDirectory->Buffer, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, (PCWSTR)DllDirectory->Buffer) )
        return -1073741801;
      goto LABEL_5;
    }
    return -1073741811;
  }
  RtlInitUnicodeString(&DestinationString, 0);
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v1 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v2 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  return 1;
}
