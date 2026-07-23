/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DEC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *StringRoutine; // rax
  _WORD *v6; // r14
  void *v7; // rsi

  v1 = 0;
  if ( !SearchPathA )
    return -1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( SearchPathA[v3] );
  v4 = 2 * v3;
  if ( !v4 )
    return -1073741811;
  if ( v4 >= 0xFFFE )
    return -1073741562;
  StringRoutine = NtdllpAllocateStringRoutine(v4 + 2);
  v6 = StringRoutine;
  if ( !StringRoutine )
    return -1073741801;
  memmove(StringRoutine, SearchPathA, v4);
  v6[v4 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v7 = (void *)*((_QWORD *)&LdrpAppPackagesPath + 1);
  ++LdrpAppPackagesPathVersion;
  LOWORD(LdrpAppPackagesPath) = v4;
  WORD1(LdrpAppPackagesPath) = v4 + 2;
  *((_QWORD *)&LdrpAppPackagesPath + 1) = v6;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v7 != *((void **)&LdrpOriginalAppPackagesPath + 1) )
    NtdllpFreeStringRoutine(v7);
  return v1;
}
