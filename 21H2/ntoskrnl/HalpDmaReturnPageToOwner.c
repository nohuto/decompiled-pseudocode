/*
 * XREFs of HalpDmaReturnPageToOwner @ 0x140457800
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaFreeMapRegisters @ 0x14045746C (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140512EF0 (HalpDmaAllocateNewTranslationBuffer.c)
 * Callees:
 *     HalpDmaReturnToContiguousPool @ 0x140457862 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14045795A (HalpDmaReturnToScatterPool.c)
 */

__int64 __fastcall HalpDmaReturnPageToOwner(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  *(_QWORD *)(a3 + 56) = a3;
  if ( a1 )
  {
    v3 = *(_QWORD *)(a3 + 48);
    if ( *(_BYTE *)(a1 + 434) )
    {
      if ( (v3 & 4) == 0 )
        return HalpDmaReturnToScatterPool(a1, a3, 0LL, a3);
      a1 = a2;
      if ( (v3 & 8) != 0 )
        return HalpDmaReturnToScatterPool(a1, a3, 0LL, a3);
    }
    else if ( (v3 & 4) != 0 )
    {
      a1 = a2;
    }
  }
  else
  {
    a1 = a2;
    if ( (*(_BYTE *)(a3 + 48) & 8) != 0 )
      return HalpDmaReturnToScatterPool(a1, a3, 0LL, a3);
  }
  return HalpDmaReturnToContiguousPool(a1, a3, 0LL, a3);
}
