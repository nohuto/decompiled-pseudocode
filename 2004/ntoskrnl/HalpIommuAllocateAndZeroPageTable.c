/*
 * XREFs of HalpIommuAllocateAndZeroPageTable @ 0x1404D67F8
 * Callers:
 *     HalpIommuInitializeDmarPageTable @ 0x1404D6CFC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404D6E84 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404D726C (HalpIommuMapLogicalRange.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1402F7410 (KeInvalidateRangeAllCachesNoIpi.c)
 *     HalpMmAllocCtxAlloc @ 0x14037AA88 (HalpMmAllocCtxAlloc.c)
 *     HalMapIoSpace @ 0x1403AFD30 (HalMapIoSpace.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalpAllocPhysicalMemory @ 0x140A5C140 (HalpAllocPhysicalMemory.c)
 */

void *__fastcall HalpIommuAllocateAndZeroPageTable(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  LARGE_INTEGER v6; // rax
  size_t v7; // rsi
  void *v8; // rbx

  v3 = 1LL << *(_DWORD *)(a1 + 4LL * a2 + 36);
  v4 = *(unsigned int *)(a1 + 28);
  v5 = ((1 << v4) + 8) * v3;
  if ( !a3 )
  {
    v7 = v5;
    v8 = (void *)HalpMmAllocCtxAlloc(v4, v5);
    if ( v8 )
      goto LABEL_4;
    return 0LL;
  }
  v6.QuadPart = HalpAllocPhysicalMemory(a3, 0LL, (v5 + 4095) >> 12, 0LL);
  if ( !v6.QuadPart )
    return 0LL;
  v7 = v5;
  v8 = HalMapIoSpace(v6, v5, MmCached);
LABEL_4:
  memset(v8, 0, v7);
  if ( !HalpIommuPageTableCacheCoherent )
    KeInvalidateRangeAllCachesNoIpi((__int64)v8, v5);
  return v8;
}
