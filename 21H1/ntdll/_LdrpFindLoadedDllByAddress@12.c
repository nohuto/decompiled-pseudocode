/*
 * XREFs of _LdrpFindLoadedDllByAddress@12 @ 0x4B330FCF
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall LdrpFindLoadedDllByAddress(unsigned int a1, volatile signed __int32 **a2, _DWORD *a3)
{
  _RTL_BALANCED_NODE *Root; // esi
  _RTL_BALANCED_NODE *v6; // eax
  volatile signed __int32 *v7; // ecx
  _RTL_BALANCED_NODE *v8; // eax

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
    if ( (_RTL_BALANCED_NODE *)a1 < Root[-7].Children[1] )
    {
      v6 = Root->Children[0];
    }
    else
    {
      if ( (_RTL_BALANCED_NODE *)a1 < (_RTL_BALANCED_NODE *)((char *)Root[-7].Children[1]
                                                           + (unsigned int)Root[-6].Children[0]) )
      {
        v7 = (volatile signed __int32 *)&Root[-9].Children[1];
        v8 = Root[-2].Children[0];
        if ( v8[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v8->Children[0][-3].Right & 0x20) == 0 )
          _InterlockedIncrement(v7 + 39);
        *a2 = v7;
        if ( a3 )
          *a3 = *(_DWORD *)(*((_DWORD *)v7 + 20) + 32);
        break;
      }
      v6 = Root->Children[1];
    }
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v6 )
      Root = (_RTL_BALANCED_NODE *)((unsigned int)v6 ^ (unsigned int)Root);
    else
      Root = v6;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return Root != 0 ? 0 : -1073741515;
}
