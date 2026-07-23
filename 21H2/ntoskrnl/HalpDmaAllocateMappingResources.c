/*
 * XREFs of HalpDmaAllocateMappingResources @ 0x140A66DA8
 * Callers:
 *     HalpDmaInit @ 0x140A669C8 (HalpDmaInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     MmFreeMappingAddress @ 0x1407688C0 (MmFreeMappingAddress.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A66ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8D8F4 (HalpDmaAllocateReservedMappingArray.c)
 */

__int64 HalpDmaAllocateMappingResources()
{
  ULONG MaximumProcessorCount; // eax
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 ReservedMapping; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int ReservedMappingArray; // ebx
  __int64 v26; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = 8LL * MaximumProcessorCount;
  v2 = MaximumProcessorCount;
  v3 = MaximumProcessorCount;
  qword_140C53F60 = HalpMmAllocCtxAlloc(v4, v1);
  if ( !qword_140C53F60 )
    return 3221225626LL;
  v6 = HalpMmAllocCtxAlloc(v5, 4144 * v3);
  v9 = v6;
  if ( !v6 )
  {
    v19 = qword_140C53F60;
LABEL_14:
    HalpMmAllocCtxFree(v7, v19);
    return 3221225626LL;
  }
  if ( v2 )
  {
    v8 = (_QWORD *)qword_140C53F60;
    v7 = v6 + 32;
    do
    {
      *(_QWORD *)v7 = 0LL;
      v10 = (_QWORD *)(v7 - 32);
      *(_DWORD *)(v7 + 12) = 0;
      *v10 = 0LL;
      *(_DWORD *)(v7 - 24) = 131128;
      *(_DWORD *)(v7 + 8) = 4096;
      v7 += 4144LL;
      *v8++ = v10;
      --v3;
    }
    while ( v3 );
  }
  qword_140CF27D0 = 0LL;
  v11 = 4LL;
  if ( v2 <= 4 )
  {
    qword_140C53F68 = HalpMmAllocCtxAlloc(v7, v1);
    if ( qword_140C53F68 )
    {
      v13 = 0;
      if ( !v2 )
      {
LABEL_12:
        byte_140C53F58 = 1;
        return 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        ReservedMapping = HalpDmaAllocateReservedMapping();
        v17 = qword_140C53F68;
        *(_QWORD *)(v14 + qword_140C53F68) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        ++v13;
        v14 += 8LL;
        if ( v13 >= v2 )
          goto LABEL_12;
      }
      if ( v13 )
      {
        v20 = 0LL;
        v21 = v13;
        do
        {
          v22 = *(_QWORD *)(v20 + v17);
          MmFreeMappingAddress(*(PVOID *)(v22 + 16), 0x206C6148u);
          HalpMmAllocCtxFree(v23, v22);
          v17 = qword_140C53F68;
          v20 += 8LL;
          --v21;
        }
        while ( v21 );
      }
      HalpMmAllocCtxFree(v16, v17);
      v11 = v2;
      goto LABEL_21;
    }
    HalpMmAllocCtxFree(v12, qword_140C53F60);
    v19 = v9;
    goto LABEL_14;
  }
LABEL_21:
  ReservedMappingArray = HalpDmaAllocateReservedMappingArray(v2, v11, v8);
  if ( ReservedMappingArray < 0 )
  {
    HalpMmAllocCtxFree(v24, qword_140C53F60);
    HalpMmAllocCtxFree(v26, v9);
  }
  return (unsigned int)ReservedMappingArray;
}
