/*
 * XREFs of _LdrRemoveDllDirectory@4 @ 0x4B33CBF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpInvalidatePathCache@4 @ 0x4B2ED502 (_RtlpInvalidatePathCache@4.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _DWORD *v2; // eax
  DLL_DIRECTORY_COOKIE *v3; // ecx
  void *v4; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v2 = *(_DWORD **)Cookie;
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_DWORD *)Cookie + 4) != Cookie
    || (v3 = (DLL_DIRECTORY_COOKIE *)*((_DWORD *)Cookie + 1), *v3 != Cookie) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  v2[1] = v3;
  word_4B3A33E0 += -2 - *((_WORD *)Cookie + 4);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
