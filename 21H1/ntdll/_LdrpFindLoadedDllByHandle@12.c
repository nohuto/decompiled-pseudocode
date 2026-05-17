/*
 * XREFs of _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _LdrDisableThreadCalloutsForDll@4 @ 0x4B2E69B0 (_LdrDisableThreadCalloutsForDll@4.c)
 *     _LdrIsModuleSxsRedirected@4 @ 0x4B32E8A0 (_LdrIsModuleSxsRedirected@4.c)
 *     _LdrQueryModuleServiceTags@12 @ 0x4B32EA10 (_LdrQueryModuleServiceTags@12.c)
 *     _LdrSetImplicitPathOptions@8 @ 0x4B32EF60 (_LdrSetImplicitPathOptions@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall LdrpFindLoadedDllByHandle(unsigned int a1, int *a2, _DWORD *a3)
{
  int v4; // esi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v9; // eax

  v4 = 0;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v4 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_DWORD *)(LdrpNtDllDataTableEntry + 80) + 32);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v6 = LdrpModuleBaseAddressIndex;
      if ( (dword_4B3A67A8 & 1) != 0 )
      {
        if ( LdrpModuleBaseAddressIndex )
          v6 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
        else
          v6 = 0;
      }
      while ( v6 )
      {
        if ( a1 >= *(_DWORD *)(v6 - 80) )
        {
          if ( a1 <= *(_DWORD *)(v6 - 80) )
          {
            v4 = v6 - 104;
            v9 = *(_DWORD **)(v6 - 104 + 80);
            if ( v9[3] != -1 && (*(_BYTE *)(*v9 - 32) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 156));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_DWORD *)(v4 + 80) + 32);
            break;
          }
          v7 = *(_DWORD *)(v6 + 4);
        }
        else
        {
          v7 = *(_DWORD *)v6;
        }
        if ( (dword_4B3A67A8 & 1) != 0 && v7 )
          v6 ^= v7;
        else
          v6 = v7;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v4;
  return v4 != 0 ? 0 : -1073741515;
}
