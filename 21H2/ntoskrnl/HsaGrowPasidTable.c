/*
 * XREFs of HsaGrowPasidTable @ 0x1404E3D50
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HsaGrowPasidTable(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 *v6; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v8; // esi
  unsigned int v9; // edi
  PVOID v10; // rax
  void *v11; // rbp

  if ( a3 >= 0x40000 )
    return 3221225659LL;
  v6 = *(unsigned __int64 **)(a2 + 40);
  if ( !v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x61734848u);
    *(_QWORD *)(a2 + 40) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 0x2000uLL);
    v6 = *(unsigned __int64 **)(a2 + 40);
  }
  v8 = 0;
  v9 = a3 >> 9;
  do
  {
    if ( (*(_BYTE *)v6 & 1) == 0 )
    {
      v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x61734848u);
      v11 = v10;
      if ( !v10 )
        return 3221225626LL;
      memset(v10, 0, 0x1000uLL);
      v6[512] = (unsigned __int64)v11;
      *v6 = *v6 ^ (*v6 ^ MmGetPhysicalAddress(v11).QuadPart & 0xFFFFFFFFFFFFF000uLL) & 0xFFFFFFFFFF000LL | 1;
    }
    ++v8;
    ++v6;
  }
  while ( v8 <= v9 );
  return 0LL;
}
