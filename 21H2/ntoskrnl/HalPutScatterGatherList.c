/*
 * XREFs of HalPutScatterGatherList @ 0x14021B580
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     IoFlushAdapterBuffers @ 0x140389F70 (IoFlushAdapterBuffers.c)
 *     HalPutScatterGatherListV3 @ 0x1403A2D70 (HalPutScatterGatherListV3.c)
 *     IoFreeMapRegisters @ 0x1403A2DF0 (IoFreeMapRegisters.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1404B8E90 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x1404B8EF0 (HalpDmaNextContiguousPiece.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall HalPutScatterGatherList(
        PADAPTER_OBJECT DmaAdapter,
        PSCATTER_GATHER_LIST ScatterGather,
        BOOLEAN WriteToDevice)
{
  int v3; // eax
  unsigned __int64 Reserved; // rbx
  PSCATTER_GATHER_LIST v7; // rcx
  _QWORD *v8; // r8
  char *v9; // rbp
  struct _MDL *v10; // r14
  ULONG v11; // r15d
  unsigned int ByteCount; // eax
  struct _MDL *Next; // rcx
  ULONG v14; // edx
  ULONG Length; // r12d
  ULONG v16; // eax
  ULONG v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // r13
  char Size; // r15
  _DMA_OPERATIONS *DmaOperations; // rcx
  ULONG ContiguousPiece; // eax
  __int64 v23; // r10
  __int64 v24; // r9
  int AdapterCacheAlignment; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  struct _MDL *v29; // rdi
  struct _MDL *v30; // rsi
  _DMA_OPERATIONS *v31; // [rsp+30h] [rbp-48h]
  ULONG v32; // [rsp+80h] [rbp+8h]
  _QWORD *v33; // [rsp+98h] [rbp+20h]

  v3 = *(_DWORD *)(&DmaAdapter[9].Size + 1);
  if ( v3 != 2 && v3 != 3 )
    v3 = -1;
  if ( v3 != 2 )
  {
    HalPutScatterGatherListV3(DmaAdapter);
    return;
  }
  Reserved = ScatterGather->Reserved;
  if ( !Reserved )
  {
    v7 = ScatterGather;
LABEL_7:
    ExFreePoolWithTag(v7, 0);
    return;
  }
  if ( Reserved == 1 )
    return;
  v8 = *(_QWORD **)(Reserved + 24);
  v9 = *(char **)(Reserved + 32);
  v10 = *(struct _MDL **)(Reserved + 8);
  v11 = *(_DWORD *)(Reserved + 40);
  v33 = v8;
  ByteCount = LODWORD(v10->StartVa) + v10->ByteCount + v10->ByteOffset - (_DWORD)v9;
  if ( v11 )
  {
    while ( !ByteCount )
    {
LABEL_36:
      v10 = v10->Next;
      if ( v10 )
      {
        v9 = (char *)v10->StartVa + v10->ByteOffset;
        ByteCount = v10->ByteCount;
        if ( v11 )
          continue;
      }
      goto LABEL_38;
    }
    Next = v10->Next;
    v14 = v11;
    if ( ByteCount <= v11 )
      v14 = ByteCount;
    Length = v11;
    if ( Next )
      Length = v14;
    v16 = v11 - v14;
    v17 = 0;
    if ( Next )
      v17 = v16;
    v32 = v17;
    IoFlushAdapterBuffers(DmaAdapter, v10, v8, v9, Length, WriteToDevice);
    v8 = v33;
    v19 = ((unsigned __int16)v9 & 0xFFF)
        + (*((_QWORD *)&v10[1].Next + (unsigned int)((unsigned __int64)(v9 - (char *)v10->StartVa) >> 12)) << 12);
    Size = DmaAdapter[27].Size;
    DmaOperations = DmaAdapter[8].DmaOperations;
    v31 = DmaOperations;
    while ( 1 )
    {
      if ( Size )
      {
        ContiguousPiece = HalpDmaNextContiguousPiece(
                            (_DWORD)DmaAdapter,
                            (_DWORD)v10,
                            (_DWORD)v8,
                            (_DWORD)v9,
                            WriteToDevice,
                            Length);
        v8 = v33;
        DmaOperations = v31;
      }
      else
      {
        ContiguousPiece = Length;
      }
      v23 = ContiguousPiece;
      Length -= ContiguousPiece;
      v24 = ContiguousPiece + v19;
      if ( (unsigned __int64)DmaOperations < v24 - 1 )
        goto LABEL_29;
      if ( WriteToDevice || *((_BYTE *)&DmaAdapter[27].Size + 3) )
        goto LABEL_34;
      AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(DmaAdapter, v18, v8);
      v8 = v33;
      v26 = (unsigned int)(AdapterCacheAlignment - 1);
      if ( (v26 & v19) != 0 || (v24 & v26) != 0 )
      {
LABEL_29:
        v27 = ((unsigned __int64)((unsigned __int16)v9 & 0xFFF) + v23 + 4095) >> 12;
        if ( (_DWORD)v27 )
        {
          v28 = (unsigned int)v27;
          do
          {
            v8 = (_QWORD *)v8[1];
            --v28;
          }
          while ( v28 );
          v33 = v8;
        }
      }
      DmaOperations = v31;
LABEL_34:
      LODWORD(v9) = v23 + (_DWORD)v9;
      v19 = v24;
      if ( !Length )
      {
        v11 = v32;
        goto LABEL_36;
      }
    }
  }
LABEL_38:
  IoFreeMapRegisters(DmaAdapter, *(PVOID *)(Reserved + 24), *(_DWORD *)(Reserved + 44));
  v29 = *(struct _MDL **)(Reserved + 16);
  if ( v29 )
  {
    do
    {
      v30 = v29->Next;
      if ( (v29->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v29->MappedSystemVa, v29);
      IoFreeMdl(v29);
      v29 = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)Reserved & 1) == 0 )
  {
    v7 = (PSCATTER_GATHER_LIST)Reserved;
    goto LABEL_7;
  }
}
