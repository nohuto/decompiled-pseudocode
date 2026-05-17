/*
 * XREFs of _LdrFindEntryForAddress@8 @ 0x4B2CF200
 * Callers:
 *     _LdrpIsReparsePoint@4 @ 0x4B2A87A0 (_LdrpIsReparsePoint@4.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 */

int __stdcall LdrFindEntryForAddress(unsigned int a1, int *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v4; // eax
  int v5; // edi
  _DWORD *v7; // eax
  int v8; // [esp+Ch] [ebp-4h]

  if ( !a1 )
    return -1073741515;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v2 = 0;
  v3 = LdrpModuleBaseAddressIndex;
  if ( (dword_4B3A67A8 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
      v3 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    else
      v3 = 0;
  }
  while ( 1 )
  {
    if ( !v3 )
    {
      v5 = v8;
      goto LABEL_17;
    }
    if ( a1 < *(_DWORD *)(v3 - 80) )
    {
      v4 = *(_DWORD *)v3;
      goto LABEL_11;
    }
    if ( a1 < *(_DWORD *)(v3 - 80) + *(_DWORD *)(v3 - 72) )
      break;
    v4 = *(_DWORD *)(v3 + 4);
LABEL_11:
    if ( (dword_4B3A67A8 & 1) != 0 && v4 )
      v3 ^= v4;
    else
      v3 = v4;
  }
  v5 = v3 - 104;
  v7 = *(_DWORD **)(v3 - 104 + 80);
  if ( v7[3] != -1 && (*(_BYTE *)(*v7 - 32) & 0x20) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 156));
LABEL_17:
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( !v3 )
    return -1073741515;
  *a2 = v5;
  LdrpDereferenceModule(v5);
  return v2;
}
