/*
 * XREFs of HalpDmaAlwaysReserveLogicalAddressRange @ 0x1403CE1A4
 * Callers:
 *     HalpDmaInit @ 0x140B1D878 (HalpDmaInit.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall HalpDmaAlwaysReserveLogicalAddressRange(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( a1 > ~a2 )
    return 3221225485LL;
  if ( HalpDmaDomainList )
    return 3221225865LL;
  result = ExtEnvAllocateMemory(a1, 32LL, &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    v6 = HalpDmaReservedLaRegions;
    ++HalpDmaReservedLaRegionsCount;
    *(_QWORD *)(v7 + 8) = a1;
    *(_QWORD *)(v5 + 16) = a2 >> 12;
    *(_BYTE *)(v5 + 24) = 0;
    *(_QWORD *)v5 = v6;
    HalpDmaReservedLaRegions = v5;
  }
  return result;
}
