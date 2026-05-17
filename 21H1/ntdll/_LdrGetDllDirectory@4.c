/*
 * XREFs of _LdrGetDllDirectory@4 @ 0x4B2AAD90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 */

int __stdcall LdrGetDllDirectory(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  int v3; // esi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v1 = (unsigned __int16)LdrpDllDirectory + 2;
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v2 >= v1 )
  {
    RtlCopyUnicodeString(a1, &LdrpDllDirectory);
    v3 = 0;
  }
  else
  {
    *(_WORD *)a1 = v1;
    v3 = -1073741789;
    if ( (_WORD)v2 )
      **(_WORD **)(a1 + 4) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v3;
}
