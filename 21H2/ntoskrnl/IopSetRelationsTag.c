/*
 * XREFs of IopSetRelationsTag @ 0x14080EB6C
 * Callers:
 *     PnpInvalidateRelationsInList @ 0x14080E8D0 (PnpInvalidateRelationsInList.c)
 *     PnpChainDereferenceComplete @ 0x14080EA40 (PnpChainDereferenceComplete.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140767E88 (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopSetRelationsTag(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rcx
  unsigned int v4; // r11d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v8 = 0LL;
  if ( PipIsDeviceInDeviceObjectList(v3, a2, (__int64)&v8) )
  {
    v5 = v8;
    v6 = *(_DWORD *)(v8 + 16);
    if ( (v6 & 1) != 0 )
    {
      --(*a1)[2];
      v6 = *(_DWORD *)(v5 + 16);
    }
    *(_DWORD *)(v5 + 16) = v6 | 1;
    ++(*a1)[2];
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
