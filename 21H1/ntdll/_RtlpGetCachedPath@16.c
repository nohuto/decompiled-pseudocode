/*
 * XREFs of _RtlpGetCachedPath@16 @ 0x4B2B34F6
 * Callers:
 *     _RtlGetSearchPath@4 @ 0x4B2AB5E0 (_RtlGetSearchPath@4.c)
 *     _RtlGetExePath@8 @ 0x4B2ABE60 (_RtlGetExePath@8.c)
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall RtlpGetCachedPath(int *a1, int (__thiscall *a2)(_DWORD, int, int), int a3, int a4)
{
  int v6; // esi
  int result; // eax
  int v8; // ebx
  void *v9; // edi
  char v10; // [esp+13h] [ebp-5h]

  if ( a3 || a4 )
  {
    v10 = 0;
    v6 = 0;
  }
  else
  {
    v10 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v6 = *a1;
    if ( *a1
      && *(_DWORD *)(v6 + 60) == LdrpAppPackagesPathVersion
      && (*(_BYTE *)(v6 + 72) || *(_DWORD *)(v6 + 56) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_DWORD *)(v6 + 52);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v6;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  result = a2(a2, a3, a4);
  v8 = result;
  if ( result )
  {
    *(_DWORD *)(result + 52) = 1;
    if ( v10 )
    {
      v9 = 0;
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
      if ( *a1 == v6 )
      {
        *a1 = v8;
        ++*(_DWORD *)(v8 + 52);
        if ( v6 )
          v9 = --*(_DWORD *)(v6 + 52) == 0 ? (void *)v6 : 0;
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    }
    return v8;
  }
  return result;
}
