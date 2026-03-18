/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A628 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14055A6A0 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x14055A6E4 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14055B568 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14093B898 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14093BBD8 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14093C268 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14093C2FC (IopLiveDumpFreeDumpBuffers.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MillisecondCounter; // r15
  unsigned __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 IndependentPages; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF
  __int64 v33; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  MillisecondCounter = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v4 = (unsigned int)BufferChunkSizeInPages;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = ~(v4 - 1);
  v7 = v6 & (*(_QWORD *)(a1 + 120) + v4 - 1);
  *(_QWORD *)(a1 + 104) = v6 & (v4 + *(_QWORD *)(a1 + 104) - 1LL);
  v8 = *(_QWORD *)(a1 + 128) - 1LL;
  *(_QWORD *)(a1 + 120) = v7;
  v9 = v6 & (v4 + v5 - 1);
  v10 = v6 & (v4 + v8);
  *(_QWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 128) = v10;
  v11 = *(_DWORD *)(a1 + 80);
  v12 = v9 / v4 + v7 / v4 + v10 / v4;
  if ( (v11 & 0x200) != 0 )
  {
    v13 = (*(_QWORD *)(a1 + 1136) >> 12) + ((*(_QWORD *)(a1 + 1136) & 0xFFFLL) != 0);
    if ( v12 * (unsigned int)v4 > v13 )
    {
      *(_DWORD *)(a1 + 80) = v11 | 0x400;
      v12 = (v6 & v13) / v4;
    }
  }
  Pool2 = ExAllocatePool2(64LL, (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
  *(_QWORD *)(a1 + 752) = Pool2;
  if ( !Pool2 )
    goto LABEL_31;
  if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
  {
    v16 = ExAllocatePool2(64LL, (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
    *(_QWORD *)(a1 + 760) = v16;
    if ( v16 )
    {
      if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
        goto LABEL_8;
      IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 752), (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 760), (8 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
      {
        v17 = 3;
        if ( (int)IopLiveDumpOpenVMMemoryPartition(a1) >= 0 )
          v17 = 1;
      }
      else
      {
        v17 = 4;
      }
      v32 = 0LL;
      v18 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v33 = 0LL;
          if ( v17 == 1 )
            break;
          if ( v17 == 2 )
          {
            v19 = IopLiveDumpAllocateFromVMMemoryPartition(a1, (unsigned int)BufferChunkSizeInBytes, &v33);
            v20 = v19;
            if ( v19 )
            {
              v21 = (unsigned int)BufferChunkSizeInBytes;
              *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v18) = v19;
              v22 = *(_QWORD *)(a1 + 760);
              *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
              v23 = v33;
              ++*(_QWORD *)(a1 + 744);
              *(_QWORD *)(v22 + 8 * v18++) = v23;
              v32 = v18;
              IopLiveDumpDiscardVirtualAddressRange(a1, v20, v21);
            }
            else
            {
              v17 = 3;
            }
            goto LABEL_28;
          }
          if ( v17 == 3 )
          {
            IopLiveDumpAllocateFromIOSpace(a1, 0LL, v12 - v18, &v32);
            v17 = 4;
            goto LABEL_25;
          }
          IndependentPages = MmAllocateIndependentPagesEx((unsigned int)BufferChunkSizeInBytes, -1, 0LL, 0);
          if ( !IndependentPages )
            goto LABEL_29;
          v25 = (unsigned int)BufferChunkSizeInBytes;
          *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v18) = IndependentPages;
          *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
          v26 = *(_QWORD *)(a1 + 760);
          ++*(_QWORD *)(a1 + 744);
          *(_QWORD *)(v26 + 8 * v18++) = 0LL;
          v32 = v18;
          IopLiveDumpDiscardVirtualAddressRange(a1, IndependentPages, v25);
          if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 920), *(_QWORD *)(a1 + 928), *(_QWORD *)(a1 + 936)) )
            goto LABEL_8;
LABEL_28:
          if ( v18 >= v12 )
            goto LABEL_29;
        }
        IopLiveDumpAllocateFromIOSpace(a1, *(_QWORD *)(a1 + 1096), v12 - v18, &v32);
        v17 = 2;
LABEL_25:
        v18 = v32;
        goto LABEL_28;
      }
LABEL_29:
      v27 = *(_QWORD *)(a1 + 680);
      v28 = *(_QWORD *)(a1 + 104);
      if ( v27 >= v28 )
      {
        v15 = 0;
        goto LABEL_33;
      }
    }
LABEL_31:
    v15 = -1073741670;
    goto LABEL_32;
  }
LABEL_8:
  v15 = -1073741248;
LABEL_32:
  IopLiveDumpFreeDumpBuffers(a1);
  *(_QWORD *)(a1 + 680) = 0LL;
  v27 = 0LL;
  v28 = *(_QWORD *)(a1 + 104);
LABEL_33:
  v29 = *(_QWORD *)(a1 + 128);
  v30 = *(_QWORD *)(a1 + 120);
  if ( v27 < v28 + v29 + v30 )
  {
    if ( v27 )
    {
      *(_QWORD *)(a1 + 688) = v28;
      *(_QWORD *)(a1 + 696) = v27 - v28;
    }
    else
    {
      *(_QWORD *)(a1 + 688) = 0LL;
      *(_QWORD *)(a1 + 696) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 688) = v27 - v29 - v30;
    *(_QWORD *)(a1 + 696) = *(_QWORD *)(a1 + 120);
    v1 = *(_QWORD *)(a1 + 128);
  }
  *(_QWORD *)(a1 + 704) = v1;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *(_QWORD *)(a1 + 768) = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  IopLiveDumpTraceEstimatedAndAllocatedPageCount(a1, v12 * (unsigned int)BufferChunkSizeInPages);
  return v15;
}
