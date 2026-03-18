/*
 * XREFs of HalpAllocateMapRegisters @ 0x140908B50
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1409094F8 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1409095FC (HalpDmaGrowScatterMapBuffers.c)
 */

__int64 __fastcall HalpAllocateMapRegisters(
        PDMA_ADAPTER DmaAdapter,
        ULONG NumberOfMapRegisters,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // r14
  _DMA_OPERATIONS *DmaOperations; // r12
  ULONG v10; // eax
  unsigned int v11; // ebx
  __int64 *v12; // r15
  __int64 MapRegisters; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = a4;
  DmaOperations = DmaAdapter[9].DmaOperations;
  if ( LODWORD(DmaAdapter[23].DmaOperations) != -1 )
    return 3221225488LL;
  if ( a3 * NumberOfMapRegisters && LOBYTE(DmaAdapter[27].Version) )
  {
    if ( a3 * NumberOfMapRegisters > 0x800 )
      return 3221225626LL;
    v10 = *(_DWORD *)&DmaAdapter[14].Version;
    if ( !v10 )
      return 3221225626LL;
    if ( NumberOfMapRegisters > v10 )
      return 3221225485LL;
    v11 = 0;
    if ( a3 )
    {
      v12 = a4;
      do
      {
        MapRegisters = HalpDmaAllocateMapRegisters((__int64)DmaAdapter, NumberOfMapRegisters);
        *v12 = MapRegisters;
        if ( !MapRegisters )
        {
          v14 = (NumberOfMapRegisters + 16) << 12;
          if ( LOBYTE(DmaAdapter[27].Size) )
            HalpDmaGrowScatterMapBuffers(DmaOperations, v14);
          else
            HalpDmaGrowContiguousMapBuffers(DmaOperations, v14);
          v15 = HalpDmaAllocateMapRegisters((__int64)DmaAdapter, NumberOfMapRegisters);
          *v12 = v15;
          if ( !v15 )
            goto LABEL_20;
        }
        ++v11;
        v12 += 2;
      }
      while ( v11 < a3 );
    }
    if ( v11 != a3 )
    {
LABEL_20:
      while ( v11 )
        IoFreeMapRegisters(DmaAdapter, (PVOID)v4[2 * --v11], NumberOfMapRegisters);
      return 3221225626LL;
    }
  }
  else if ( a3 )
  {
    v16 = a3;
    do
    {
      *v4 = 0LL;
      v4 += 2;
      --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
