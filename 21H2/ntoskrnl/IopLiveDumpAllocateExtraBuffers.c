/*
 * XREFs of IopLiveDumpAllocateExtraBuffers @ 0x1408977D4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HvlPrepareLivedumpDescriptor @ 0x1404F8E34 (HvlPrepareLivedumpDescriptor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508C08 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140508C80 (IopLiveDumpIsUnderMemoryPressure.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 */

__int64 __fastcall IopLiveDumpAllocateExtraBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 MillisecondCounter; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 *v16; // r15
  unsigned __int64 *v17; // r13
  int v18; // r14d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  __int64 IndependentPages; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r10
  void *v31; // rcx
  int v33; // [rsp+80h] [rbp+8h]

  v4 = 0;
  MillisecondCounter = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v8 = *(_QWORD *)(a1 + 696);
  if ( v8 || *(_QWORD *)(a1 + 704) )
  {
    v9 = (unsigned int)BufferChunkSizeInPages;
    v10 = v8 / (unsigned int)BufferChunkSizeInPages;
    *(_QWORD *)(a1 + 240) = 0LL;
    v11 = v10;
    *(_QWORD *)(a1 + 272) = 0LL;
    v12 = *(_QWORD *)(a1 + 704) / v9;
    v13 = *(_QWORD *)(a1 + 744) - v12;
    v33 = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 80);
    v14 = v13 - v11;
    *(_QWORD *)(a1 + 216) = v14;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( (v12 & 0x80u) != 0LL )
    {
      v15 = IopLiveDumpGetMillisecondCounter(0);
      v14 = *(_QWORD *)(a1 + 216);
      v7 = v15;
    }
    v16 = (unsigned __int64 *)(a1 + 256);
    v17 = (unsigned __int64 *)(a1 + 224);
    v18 = HvlPrepareLivedumpDescriptor(
            *(_QWORD *)(a1 + 752) + 8 * v14,
            v11,
            v33,
            a4,
            a1 + 232,
            a1 + 224,
            (_QWORD *)(a1 + 264),
            (_QWORD *)(a1 + 256),
            a1 + 208);
    if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
      *(_QWORD *)(a1 + 296) = IopLiveDumpGetMillisecondCounter(0) - v7;
    if ( v18 >= 0 )
    {
      v19 = *v17;
      v20 = (unsigned int)BufferChunkSizeInBytes;
      v21 = *v16;
      *(_QWORD *)(a1 + 232) <<= 12;
      v22 = v19 << 12;
      *(_QWORD *)(a1 + 264) <<= 12;
      v23 = v21 << 12;
      *v17 = v22;
      *v16 = v23;
      if ( v22 % v20 )
        *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 216) + v22 / v20;
      if ( v23 % v20 )
        *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 216) + v23 / v20;
    }
    else
    {
      *(_QWORD *)(a1 + 696) = 0LL;
      *(_QWORD *)(a1 + 704) = 0LL;
    }
  }
  v24 = *(_QWORD *)(a1 + 136);
  if ( v24 )
  {
    v25 = v24 << 12;
    IndependentPages = MmAllocateIndependentPagesEx(v25, -1, 0LL, 0LL);
    *(_QWORD *)(a1 + 144) = IndependentPages;
    if ( IndependentPages )
    {
      v27 = *(_QWORD *)(a1 + 840);
      v28 = *(_QWORD *)(a1 + 832);
      v29 = *(_QWORD *)(a1 + 824);
      *(_DWORD *)(a1 + 152) = v25;
      if ( IopLiveDumpIsUnderMemoryPressure(v29, v28, v27) )
      {
        v4 = -1073741248;
      }
      else
      {
        IopLiveDumpDiscardVirtualAddressRange(a1, v30, v25);
        v31 = *(void **)(a1 + 144);
        *(_QWORD *)(a1 + 176) = v31;
        *(_DWORD *)(a1 + 184) = 0;
        memset(v31, 0, v25);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 152) = 0;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *(_QWORD *)(a1 + 776) = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  return v4;
}
