/*
 * XREFs of HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218
 * Callers:
 *     HalpDmaGetTranslationEntries @ 0x1403BC150 (HalpDmaGetTranslationEntries.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x1404B8DB4 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404B8E0C (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaReturnPageToOwner @ 0x1404C818C (HalpDmaReturnPageToOwner.c)
 */

__int64 __fastcall HalpDmaAllocateNewTranslationBuffer(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r9
  char v7; // r13
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rsi
  unsigned int v13; // r15d
  _QWORD *v14; // r12
  __int64 *v15; // rbx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 *v22; // rbx
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v25; // [rsp+80h] [rbp+18h]

  v24 = 0;
  v3 = a1;
  if ( !*(_BYTE *)(a1 + 144) )
    v3 = *(_QWORD *)(a1 + 152);
  v5 = HalpMmAllocCtxAlloc(a1, 24LL);
  if ( v5 )
  {
    v7 = 1;
    v8 = 72 * a2;
    if ( 72 * a2 >= 0x1000 )
      v9 = (v8 + 4095) & 0xFFFFF000;
    else
      v9 = 4096;
    v10 = v9;
    v11 = HalpMmAllocCtxAlloc(v4, v9);
    if ( v11 || v8 < 0x1000 && (v10 = v8, (v11 = HalpMmAllocCtxAlloc(v4, v8)) != 0) )
    {
      *(_QWORD *)(v5 + 16) = v11;
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = v10 / 0x48;
      return v5;
    }
  }
  else
  {
    v7 = 0;
  }
  v12 = 0LL;
  v25 = 0LL;
  v13 = 0;
  v14 = 0LL;
  while ( a2 )
  {
    LOBYTE(v6) = 1;
    v15 = (__int64 *)HalpDmaAllocateScatterPagesFromScatterPool(v4, v3, 1LL, v6, 0, &v24);
    if ( !v15 )
    {
      LOBYTE(v6) = 1;
      v15 = (__int64 *)HalpDmaAllocateScatterPagesFromContiguousPool(v4, v3, 1LL, v6, 0, &v24);
      if ( !v15 )
      {
LABEL_31:
        if ( v13 )
        {
          v20 = v13;
          do
          {
            v21 = v12[6];
            if ( (v21 & 0x10) != 0 )
            {
              MmUnmapIoSpace((PVOID)(v21 & 0xFFFFFFFFFFFFF000uLL), 0x1000uLL);
              v12[6] &= 0xFEF;
            }
            v22 = (__int64 *)v12[1];
            HalpDmaReturnPageToOwner(0LL, v3, v12);
            v12 = v22;
            --v20;
          }
          while ( v20 );
        }
        if ( v7 )
          HalpMmAllocCtxFree(v4, v5);
        return 0LL;
      }
    }
    if ( v12 )
      v25[1] = (__int64)v15;
    else
      v12 = v15;
    v16 = v15[6];
    ++v13;
    v25 = v15;
    v17 = v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( !v17 )
    {
      v18 = MmMapIoSpaceEx(*v15, 4096LL, 4u);
      v17 = v18;
      if ( !v18 )
        goto LABEL_31;
      v15[6] |= 0x10uLL;
      v4 = v18 | v15[6] & 0xFFF;
      v15[6] = v4;
    }
    if ( v13 == 1 && v7 )
    {
      *(_QWORD *)v5 = 0LL;
      v14 = (_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = v17;
      *(_DWORD *)(v5 + 8) = 56;
    }
    else
    {
      if ( v5 )
        *v14 = v17;
      else
        v5 = v17;
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 16) = v17 + 24;
      v14 = (_QWORD *)v17;
      *(_DWORD *)(v17 + 8) = 56;
    }
    v19 = a2;
    a2 -= 56;
    if ( v19 <= 0x38 )
      a2 = 0;
  }
  return v5;
}
