/*
 * XREFs of HalpAllocateMapRegisters @ 0x140864810
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMapRegisters @ 0x1403A2DF0 (IoFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x1408654C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x1408655C8 (HalpDmaGrowScatterMapBuffers.c)
 */

__int64 __fastcall HalpAllocateMapRegisters(
        PDMA_ADAPTER DmaAdapter,
        ULONG NumberOfMapRegisters,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r14
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned int v7; // edi
  ULONG v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // r15
  __int64 MapRegisters; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = (_QWORD *)a4;
  DmaOperations = DmaAdapter[9].DmaOperations;
  v7 = a3;
  if ( LODWORD(DmaAdapter[23].DmaOperations) != -1 )
    return 3221225488LL;
  if ( (_DWORD)a3 * NumberOfMapRegisters && LOBYTE(DmaAdapter[27].Version) )
  {
    if ( (unsigned int)a3 * NumberOfMapRegisters > 0x800 )
      return 3221225626LL;
    v10 = *(_DWORD *)&DmaAdapter[14].Version;
    if ( !v10 )
      return 3221225626LL;
    if ( NumberOfMapRegisters > v10 )
      return 3221225485LL;
    v11 = 0;
    if ( (_DWORD)a3 )
    {
      v12 = (_QWORD *)a4;
      do
      {
        MapRegisters = HalpDmaAllocateMapRegisters((__int64)DmaAdapter, NumberOfMapRegisters, a3, a4);
        *v12 = MapRegisters;
        if ( !MapRegisters )
        {
          v14 = (NumberOfMapRegisters + 16) << 12;
          if ( LOBYTE(DmaAdapter[27].Size) )
            HalpDmaGrowScatterMapBuffers(DmaOperations, v14);
          else
            HalpDmaGrowContiguousMapBuffers(DmaOperations, v14);
          v17 = HalpDmaAllocateMapRegisters((__int64)DmaAdapter, NumberOfMapRegisters, v15, v16);
          *v12 = v17;
          if ( !v17 )
            break;
        }
        ++v11;
        v12 += 2;
      }
      while ( v11 < v7 );
    }
    if ( v11 != v7 )
    {
      while ( v11 )
        IoFreeMapRegisters(DmaAdapter, (PVOID)v4[2 * --v11], NumberOfMapRegisters);
      return 3221225626LL;
    }
  }
  else if ( (_DWORD)a3 )
  {
    v18 = (unsigned int)a3;
    do
    {
      *v4 = 0LL;
      v4 += 2;
      --v18;
    }
    while ( v18 );
  }
  return 0LL;
}
