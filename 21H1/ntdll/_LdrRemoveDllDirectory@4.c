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

int __stdcall LdrRemoveDllDirectory(int a1)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v4; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 4) != a1 || (v3 = *(_DWORD **)(a1 + 4), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  word_4B3A33E0 += -2 - *(_WORD *)(a1 + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0;
}
