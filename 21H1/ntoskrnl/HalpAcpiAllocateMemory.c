/*
 * XREFs of HalpAcpiAllocateMemory @ 0x1403B7538
 * Callers:
 *     HalpAcpiGetAllTablesWork @ 0x1403B7224 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiCopyBiosTable @ 0x1403B7458 (HalpAcpiCopyBiosTable.c)
 *     HalpAcpiFindRsdp @ 0x140A5C870 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A5CC70 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     HalpMap @ 0x1403B7668 (HalpMap.c)
 *     HalpAllocPhysicalMemory @ 0x140A5D0A0 (HalpAllocPhysicalMemory.c)
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
