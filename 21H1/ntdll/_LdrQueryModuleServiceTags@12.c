/*
 * XREFs of _LdrQueryModuleServiceTags@12 @ 0x4B32EA10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

int __stdcall LdrQueryModuleServiceTags(unsigned int a1, int a2, unsigned int *a3)
{
  int result; // eax
  unsigned int v4; // esi
  unsigned int v5; // edi
  _DWORD *i; // ecx
  int v7; // ecx
  int v8; // [esp+0h] [ebp-8h] BYREF
  int v9; // [esp+4h] [ebp-4h] BYREF

  result = LdrpFindLoadedDllByHandle(a1, &v9, &v8);
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v4 = 0;
    v5 = *a3;
    for ( i = *(_DWORD **)(*(_DWORD *)(v9 + 80) + 8); i; ++v4 )
    {
      if ( v4 < v5 )
        *(_DWORD *)(a2 + 4 * v4) = i[1];
      i = (_DWORD *)*i;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    v7 = v9;
    *a3 = v4;
    LdrpDereferenceModule(v7);
    return v5 < v4 ? 0xC0000023 : 0;
  }
  return result;
}
