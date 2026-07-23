/*
 * XREFs of IopSetRelationsTag @ 0x1407379D0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x140736648 (PnpChainDereferenceComplete.c)
 *     PnpInvalidateRelationsInList @ 0x14073824C (PnpInvalidateRelationsInList.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x140737ABC (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopSetRelationsTag(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r11d
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v8 = 0LL;
  if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(v3, a2, &v8) )
  {
    v5 = v8;
    v6 = *(_DWORD *)(v8 + 16);
    if ( (v6 & 1) != 0 )
    {
      --*(_DWORD *)(*a1 + 8);
      v6 = *(_DWORD *)(v5 + 16);
    }
    *(_DWORD *)(v5 + 16) = v6 | 1;
    ++*(_DWORD *)(*a1 + 8);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
