/*
 * XREFs of _LdrGetDllFullName@8 @ 0x4B2CCBB0
 * Callers:
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall LdrGetDllFullName(unsigned int a1, unsigned __int16 *a2)
{
  int v2; // edi
  unsigned int v3; // eax
  unsigned __int16 *v4; // esi
  size_t v5; // ebx
  unsigned __int16 *v6; // edx
  unsigned int v7; // esi
  _DWORD *SubSystemTib; // eax
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  void *Src; // [esp+10h] [ebp-8h]
  void *v14; // [esp+14h] [ebp-4h]

  if ( !a1 )
  {
    v2 = LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    v4 = (unsigned __int16 *)(LdrpImageEntry + 36);
    if ( SubSystemTib )
    {
      v12 = (unsigned __int16 *)SubSystemTib[1];
      if ( v12 )
        v4 = v12;
    }
    goto LABEL_10;
  }
  v2 = 0;
  if ( a1 == LdrpSystemDllBase )
  {
    v2 = LdrpNtDllDataTableEntry;
    goto LABEL_8;
  }
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v3 = LdrpModuleBaseAddressIndex;
  if ( (dword_4B3A67A8 & 1) != 0 && LdrpModuleBaseAddressIndex )
    v3 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  while ( v3 )
  {
    if ( a1 < *(_DWORD *)(v3 - 80) )
    {
      v11 = *(_DWORD *)v3;
      if ( (dword_4B3A67A8 & 1) != 0 && v11 )
      {
        v3 ^= v11;
        continue;
      }
    }
    else
    {
      if ( a1 <= *(_DWORD *)(v3 - 80) )
      {
        v2 = v3 - 104;
        v10 = *(_DWORD **)(v3 - 104 + 80);
        if ( v10[3] != -1 && (*(_BYTE *)(*v10 - 32) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + 156));
        break;
      }
      v11 = *(_DWORD *)(v3 + 4);
      if ( (dword_4B3A67A8 & 1) != 0 && v11 )
      {
        v3 ^= v11;
        continue;
      }
    }
    v3 = v11;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
LABEL_8:
  if ( !v2 )
    return -1073741515;
  v4 = (unsigned __int16 *)(v2 + 36);
LABEL_10:
  if ( !v2 )
    return 0;
  if ( v4 )
  {
    Src = (void *)*((_DWORD *)v4 + 1);
    v5 = *v4;
    v14 = (void *)*((_DWORD *)a2 + 1);
    if ( (unsigned __int16)v5 > a2[1] )
      v5 = a2[1];
    *a2 = v5;
    memcpy(v14, Src, v5);
    v6 = a2;
    if ( (unsigned int)*a2 + 2 <= a2[1] )
      *((_WORD *)v14 + (v5 >> 1)) = 0;
  }
  else
  {
    v6 = a2;
    *a2 = 0;
  }
  v7 = v6[1] < *v4 ? 0xC0000023 : 0;
  if ( v2 != LdrpImageEntry )
    LdrpDereferenceModule(v2);
  return v7;
}
