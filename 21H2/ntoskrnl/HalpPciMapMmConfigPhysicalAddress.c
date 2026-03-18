/*
 * XREFs of HalpPciMapMmConfigPhysicalAddress @ 0x14023AEE0
 * Callers:
 *     HalpPciAccessMmConfigSpace @ 0x14023AC88 (HalpPciAccessMmConfigSpace.c)
 * Callees:
 *     HalpRemapVirtualAddress64 @ 0x14023AF30 (HalpRemapVirtualAddress64.c)
 *     HalpMap @ 0x1403BF3B8 (HalpMap.c)
 */

__int64 __fastcall HalpPciMapMmConfigPhysicalAddress(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10

  if ( HalpPciMmConfigVirtualAddress )
  {
    LOBYTE(a3) = 1;
    HalpRemapVirtualAddress64(HalpPciMmConfigVirtualAddress, a1, a3);
  }
  else
  {
    v3 = HalpMap(a1, 1, 0, 1, 4);
    HalpPciMmConfigVirtualAddress = v3;
  }
  return v3;
}
