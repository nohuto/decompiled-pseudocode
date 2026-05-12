/*
 * XREFs of PortAllocateRegistryBuffer @ 0x1C0058E10
 * Callers:
 *     StorPortAllocateRegistryBuffer @ 0x1C0038AD0 (StorPortAllocateRegistryBuffer.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 */

__int64 __fastcall PortAllocateRegistryBuffer(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  PVOID PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 48);
    if ( v3 > 0x10000 )
      v3 = 0x10000;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x42526C50u);
    v2 = 0;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_QWORD *)(a1 + 32) = PoolWithTag;
      *(_DWORD *)(a1 + 40) = v3;
      memset(PoolWithTag, 0, v3);
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
