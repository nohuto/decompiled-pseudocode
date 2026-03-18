/*
 * XREFs of HalpAcpiAllocateMemory @ 0x1403BF088
 * Callers:
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCopyBiosTable @ 0x1403BEFA8 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiFindRsdp @ 0x140AF9858 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 *     HalpAllocPhysicalMemory @ 0x140AF9E94 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAcpiAllocateMemory(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return HalpMmAllocCtxAlloc(0LL, a2);
  v7 = 0x1000000LL;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = HalpAllocPhysicalMemory(a1, &v7, v5, 0LL);
  if ( !v6 )
    return v2;
  return HalpMap(v6, v5, 1, 0, 4);
}
