/*
 * XREFs of HalpDmaReturnPageToSource @ 0x1404C2C64
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140860464 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaReturnToContiguousPool @ 0x1404C2CB4 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x1404C2DAC (HalpDmaReturnToScatterPool.c)
 */

__int64 __fastcall HalpDmaReturnPageToSource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax

  result = *(_QWORD *)(a2 + 48);
  LOBYTE(a3) = 1;
  if ( (result & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 144) )
      a1 = *(_QWORD *)(a1 + 152);
    v5 = result | 4;
    if ( (v5 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 48) = v5 | 8;
      return HalpDmaReturnToScatterPool(a1, a2, a3, a4);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v5 & 0xFFFFFFFFFFFFFFF7uLL;
      return HalpDmaReturnToContiguousPool(a1, a2, a3);
    }
  }
  return result;
}
