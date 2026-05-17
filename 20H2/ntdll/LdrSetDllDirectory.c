/*
 * XREFs of LdrSetDllDirectory @ 0x18007FD20
 * Callers:
 *     LdrpInitializePolicy @ 0x18007FB28 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlpInvalidatePathCache @ 0x18007FE20 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180091E60 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  const wchar_t *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  v5 = *(const wchar_t **)(a1 + 8);
  if ( v5 )
  {
    if ( !wcschr(v5, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v12, *(_WORD **)(a1 + 8)) )
        return 3221225495LL;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  v12 = 0uLL;
LABEL_5:
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, a2, a3, a4);
  UnicodeString = (UNICODE_STRING)LdrpDllDirectory;
  LdrpDllDirectory = v12;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, v6, v7, v8);
  v9 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v10 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  if ( v10 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  return 1LL;
}
