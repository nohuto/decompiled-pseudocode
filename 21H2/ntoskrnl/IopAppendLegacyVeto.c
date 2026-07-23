/*
 * XREFs of IopAppendLegacyVeto @ 0x1408B2478
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140656750 (IopGetLegacyVetoListDrivers.c)
 *     IoGetLegacyVetoList @ 0x14066EDF0 (IoGetLegacyVetoList.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x14066EEB0 (IopGetLegacyVetoListDeviceNode.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall IopAppendLegacyVeto(const void ***a1, const void **a2)
{
  unsigned int v3; // r15d
  _WORD *PoolWithTag; // rax
  _WORD *v6; // rsi
  PVOID *v7; // rdi
  const void *v8; // rdx
  char result; // al

  v3 = *(unsigned __int16 *)a2 + 2 + *((_DWORD *)a1 + 2);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6F697050u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = (PVOID *)*a1;
    v8 = **a1;
    if ( v8 )
    {
      memmove(PoolWithTag, v8, *((unsigned int *)a1 + 2));
      ExFreePoolWithTag(*v7, 0);
      v7 = (PVOID *)*a1;
    }
    memmove(&v6[(unsigned __int64)*((unsigned int *)a1 + 2) >> 1], a2[1], *(unsigned __int16 *)a2);
    result = 1;
    *((_DWORD *)a1 + 2) = v3;
    v6[((unsigned __int64)v3 >> 1) - 1] = 0;
    *v7 = v6;
  }
  else
  {
    *(_DWORD *)a1[3] = -1073741670;
    return 0;
  }
  return result;
}
