/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DEC90
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBE0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *StringRoutine; // rax
  _WORD *v6; // r14
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)-1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v4 + 2);
      v6 = StringRoutine;
      if ( StringRoutine )
      {
        memmove(StringRoutine, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, v7, v8, v9);
        v10 = *((_QWORD *)&LdrpAppPackagesPath + 1);
        ++LdrpAppPackagesPathVersion;
        LOWORD(LdrpAppPackagesPath) = v4;
        WORD1(LdrpAppPackagesPath) = v4 + 2;
        *((_QWORD *)&LdrpAppPackagesPath + 1) = v6;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( v10 != *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
          NtdllpFreeStringRoutine(v10);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
