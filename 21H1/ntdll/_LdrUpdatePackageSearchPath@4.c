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

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // esi
  unsigned int v2; // kr00_4
  unsigned int v3; // edi
  _OBJECT_BOUNDARY_DESCRIPTOR *StringRoutine; // eax
  wchar_t *v5; // ebx
  size_t v7; // [esp-4h] [ebp-14h]
  POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor; // [esp+Ch] [ebp-4h]
  _OBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptora; // [esp+Ch] [ebp-4h]

  if ( !SearchPathA )
    return -1073741811;
  v1 = 0;
  v2 = wcslen((const unsigned __int16 *)SearchPathA);
  v3 = 2 * v2;
  if ( !(2 * v2) )
    return -1073741811;
  if ( v3 >= 0xFFFE )
    return -1073741562;
  StringRoutine = (_OBJECT_BOUNDARY_DESCRIPTOR *)NtdllpAllocateStringRoutine(v3 + 2);
  BoundaryDescriptor = StringRoutine;
  if ( !StringRoutine )
    return -1073741801;
  LODWORD(v7) = 2 * v2;
  memcpy(StringRoutine, SearchPathA, v7);
  v5 = (wchar_t *)BoundaryDescriptor;
  *((_WORD *)&BoundaryDescriptor->Version + (v3 >> 1)) = 0;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  BoundaryDescriptora = (_OBJECT_BOUNDARY_DESCRIPTOR *)LdrpAppPackagesPath.Buffer;
  LdrpAppPackagesPath.Length = 2 * v2;
  ++LdrpAppPackagesPathVersion;
  LdrpAppPackagesPath.Buffer = v5;
  LdrpAppPackagesPath.MaximumLength = v3 + 2;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( BoundaryDescriptora != (_OBJECT_BOUNDARY_DESCRIPTOR *)LdrpOriginalAppPackagesPath.Buffer )
    RtlDeleteBoundaryDescriptor(BoundaryDescriptora);
  return v1;
}
