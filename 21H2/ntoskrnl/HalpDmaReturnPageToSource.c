/*
 * XREFs of HalpDmaReturnPageToSource @ 0x140513BCC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x140513870 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaReturnToContiguousPool @ 0x140457862 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14045795A (HalpDmaReturnToScatterPool.c)
 */

void __fastcall HalpDmaReturnPageToSource(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( (v2 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 144) )
      a1 = *(_QWORD *)(a1 + 152);
    v3 = v2 | 4;
    if ( (v3 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 48) = v3 | 8;
      HalpDmaReturnToScatterPool(a1, a2, 1);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v3 & 0xFFFFFFFFFFFFFFF7uLL;
      HalpDmaReturnToContiguousPool(a1, a2, 1);
    }
  }
}
