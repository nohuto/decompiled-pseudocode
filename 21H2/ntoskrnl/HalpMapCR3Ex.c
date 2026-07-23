/*
 * XREFs of HalpMapCR3Ex @ 0x14099B2A0
 * Callers:
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpStoreFreeCr3 @ 0x1403A2564 (HalpStoreFreeCr3.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpMapCR3Ex(
        unsigned __int64 BaseAddress,
        PHYSICAL_ADDRESS PhysicalAddress,
        __int64 a3,
        unsigned int a4)
{
  int v7; // ebp
  __int64 v8; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx

  v7 = 3;
  v8 = *(_QWORD *)(HalpCR3Root + 8LL * a4);
  v9 = (__int64 *)(v8 + 8 * ((BaseAddress >> 39) & 0x1FF));
  do
  {
    v10 = *v9;
    if ( !*v9 )
    {
      v11 = (void *)HalpMmAllocCtxAlloc(v8, 4096LL);
      v10 = (__int64)v11;
      if ( !v11 )
        return 3221225626LL;
      memset(v11, 0, 0x1000uLL);
      if ( (int)HalpStoreFreeCr3(a4, v10) < 0 )
      {
        HalpMmAllocCtxFree(v13, v12);
        return 3221225626LL;
      }
      *v9 = v10;
    }
    --v7;
    v8 = (unsigned int)(v7 + 8 * v7 + 12);
    v9 = (__int64 *)(v10 + 8 * ((BaseAddress >> (v7 + 8 * (unsigned __int8)v7 + 12)) & 0x1FF));
  }
  while ( v7 );
  if ( !PhysicalAddress.QuadPart )
    PhysicalAddress = MmGetPhysicalAddress((PVOID)BaseAddress);
  v14 = 1LL;
  v15 = *v9 ^ (PhysicalAddress.QuadPart ^ *v9) & 0xFFFFFFFFF000LL;
  v16 = 2LL;
  do
  {
    v15 |= v14++;
    --v16;
  }
  while ( v16 );
  *v9 = v15;
  return 0LL;
}
