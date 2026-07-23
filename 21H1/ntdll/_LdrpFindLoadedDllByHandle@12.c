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

int __fastcall LdrpFindLoadedDllByHandle(_RTL_BALANCED_NODE *a1, volatile signed __int32 **a2, _DWORD *a3)
{
  volatile signed __int32 *v4; // esi
  _RTL_BALANCED_NODE *Root; // eax
  _RTL_BALANCED_NODE *v7; // ecx
  _RTL_BALANCED_NODE *v9; // eax

  v4 = 0;
  if ( a1 )
  {
    if ( a1 == (_RTL_BALANCED_NODE *)LdrpSystemDllBase )
    {
      v4 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_DWORD *)LdrpNtDllDataTableEntry + 20) + 32);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      Root = LdrpModuleBaseAddressIndex.Root;
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
      {
        if ( LdrpModuleBaseAddressIndex.Root )
          Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
        else
          Root = 0;
      }
      while ( Root )
      {
        if ( a1 >= Root[-7].Children[1] )
        {
          if ( a1 <= Root[-7].Children[1] )
          {
            v4 = (volatile signed __int32 *)&Root[-9].Children[1];
            v9 = Root[-2].Children[0];
            if ( v9[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v9->Children[0][-3].Right & 0x20) == 0 )
              _InterlockedIncrement(v4 + 39);
            if ( a3 )
              *a3 = *(_DWORD *)(*((_DWORD *)v4 + 20) + 32);
            break;
          }
          v7 = Root->Children[1];
        }
        else
        {
          v7 = Root->Children[0];
        }
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v7 )
          Root = (_RTL_BALANCED_NODE *)((unsigned int)v7 ^ (unsigned int)Root);
        else
          Root = v7;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v4;
  return v4 != 0 ? 0 : -1073741515;
}
