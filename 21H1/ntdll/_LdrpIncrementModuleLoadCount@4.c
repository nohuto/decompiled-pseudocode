/*
 * XREFs of _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrGetDllHandleByName@12 @ 0x4B2CF2C0 (_LdrGetDllHandleByName@12.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 *     _LdrGetDllHandleByMapping@8 @ 0x4B2E5810 (_LdrGetDllHandleByMapping@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __thiscall LdrpIncrementModuleLoadCount(_DWORD *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax

  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = this[20];
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 != -1 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 12) = v4 + 1;
    }
    else if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ++*(_DWORD *)(v3 + 16);
    }
    else
    {
      v2 = -1073741515;
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v2;
}
