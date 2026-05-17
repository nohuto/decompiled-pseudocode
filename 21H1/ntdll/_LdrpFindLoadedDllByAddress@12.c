/*
 * XREFs of _LdrpFindLoadedDllByAddress@12 @ 0x4B330FCF
 * Callers:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall LdrpFindLoadedDllByAddress(unsigned int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v5 = LdrpModuleBaseAddressIndex;
  if ( (dword_4B3A67A8 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
      v5 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    else
      v5 = 0;
  }
  while ( v5 )
  {
    if ( a1 < *(_DWORD *)(v5 - 80) )
    {
      v6 = *(_DWORD *)v5;
    }
    else
    {
      if ( a1 < *(_DWORD *)(v5 - 80) + *(_DWORD *)(v5 - 72) )
      {
        v7 = v5 - 104;
        v8 = *(_DWORD **)(v5 - 104 + 80);
        if ( v8[3] != -1 && (*(_BYTE *)(*v8 - 32) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 156));
        *a2 = v7;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_DWORD *)(v7 + 80) + 32);
        break;
      }
      v6 = *(_DWORD *)(v5 + 4);
    }
    if ( (dword_4B3A67A8 & 1) != 0 && v6 )
      v5 ^= v6;
    else
      v5 = v6;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v5 != 0 ? 0 : -1073741515;
}
