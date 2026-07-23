/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140A66B2C
 * Callers:
 *     HalpDmaInit @ 0x140A669C8 (HalpDmaInit.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     RtlSetAllBits @ 0x1402934B0 (RtlSetAllBits.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BBE7C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A66C64 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A8D9C8 (HalpDmaFreeTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaInitializeMasterAdapter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  SIZE_T v8; // rsi
  unsigned int v9; // ebp
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v17; // rax
  void *v18; // rbp
  __int64 v20; // rdx

  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  v8 = a3;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  v9 = (a6 + 31) & 0xFFFFFFE0;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 144) = 1;
  *(_BYTE *)(a1 + 145) = a7;
  v12 = HalpMmAllocCtxAlloc(a1, (unsigned __int64)v9 >> 3);
  if ( v12 )
  {
    v13 = HalpMmAllocCtxAlloc(v11, 16LL);
    *(_QWORD *)(a1 + 16) = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v9;
      *(_QWORD *)(v13 + 8) = v12;
      RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 16));
      if ( !(_DWORD)v8 )
        return 0LL;
      TranslationBuffer = HalpDmaAllocateTranslationBuffer(v15, a1 + 56);
      *(_QWORD *)(a1 + 40) = TranslationBuffer;
      if ( TranslationBuffer )
      {
        v17 = MmMapIoSpaceEx(a2, (unsigned int)v8, 4u);
        v18 = (void *)v17;
        if ( v17 )
        {
          if ( HalpDmaCommitContiguousMapBuffers(a1, v17, a2, ((unsigned int)v8 >> 12) + ((v8 & 0xFFF) != 0)) )
          {
            *(_DWORD *)(a1 + 204) = (unsigned int)v8 >> 13;
            return 0LL;
          }
          MmUnmapIoSpace(v18, v8);
        }
        HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 40));
      }
    }
    HalpMmAllocCtxFree(v14, v12);
  }
  v20 = *(_QWORD *)(a1 + 16);
  if ( v20 )
    HalpMmAllocCtxFree(v11, v20);
  return 3221225626LL;
}
