/*
 * XREFs of _LdrUpdatePackageSearchPath@4 @ 0x4B33CCE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall LdrUpdatePackageSearchPath(const unsigned __int16 *Src)
{
  int v1; // esi
  unsigned int v2; // kr00_4
  size_t v3; // edi
  wchar_t *StringRoutine; // eax
  wchar_t *v5; // ebx
  wchar_t *v7; // [esp+Ch] [ebp-4h]
  wchar_t *Buffer; // [esp+Ch] [ebp-4h]

  if ( !Src )
    return -1073741811;
  v1 = 0;
  v2 = wcslen(Src);
  v3 = 2 * v2;
  if ( !(2 * v2) )
    return -1073741811;
  if ( v3 >= 0xFFFE )
    return -1073741562;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v3 + 2);
  v7 = StringRoutine;
  if ( !StringRoutine )
    return -1073741801;
  memcpy(StringRoutine, Src, v3);
  v5 = v7;
  v7[v3 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  Buffer = LdrpAppPackagesPath.Buffer;
  LdrpAppPackagesPath.Length = 2 * v2;
  ++LdrpAppPackagesPathVersion;
  LdrpAppPackagesPath.Buffer = v5;
  LdrpAppPackagesPath.MaximumLength = v3 + 2;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( Buffer != LdrpOriginalAppPackagesPath.Buffer )
    RtlDeleteBoundaryDescriptor((int)Buffer);
  return v1;
}
