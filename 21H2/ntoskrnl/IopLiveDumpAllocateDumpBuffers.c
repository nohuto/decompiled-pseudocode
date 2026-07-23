/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x1408973B4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140896D1C (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508C08 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x140508C80 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14050993C (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897A70 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140898180 (IopLiveDumpFreeDumpBuffers.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MillisecondCounter; // r13
  unsigned __int64 v4; // r10
  unsigned __int64 *v5; // r14
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rax
  PVOID PoolWithTag; // rax
  unsigned int v16; // esi
  PVOID v17; // rax
  char v18; // r12
  __int64 v19; // rbp
  int v20; // ecx
  struct _MDL *v21; // rsi
  __int64 IndependentPages; // rax
  int v23; // ecx
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _MDL *v33; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  MillisecondCounter = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v4 = (unsigned int)BufferChunkSizeInPages;
  v5 = (unsigned __int64 *)(a1 + 680);
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v6 = *(_QWORD *)(a1 + 96);
  v7 = ~(v4 - 1);
  v8 = v7 & (*(_QWORD *)(a1 + 120) + v4 - 1);
  *(_QWORD *)(a1 + 104) = v7 & (v4 + *(_QWORD *)(a1 + 104) - 1LL);
  v9 = *(_QWORD *)(a1 + 128) - 1LL;
  *(_QWORD *)(a1 + 120) = v8;
  v10 = v7 & (v4 + v6 - 1);
  v11 = v7 & (v4 + v9);
  *(_QWORD *)(a1 + 96) = v10;
  *(_QWORD *)(a1 + 128) = v11;
  v12 = *(_DWORD *)(a1 + 80);
  v13 = v10 / v4 + v8 / v4 + v11 / v4;
  if ( (v12 & 0x200) != 0 )
  {
    v14 = (*(_QWORD *)(a1 + 1048) >> 12) + ((*(_QWORD *)(a1 + 1048) & 0xFFFLL) != 0);
    if ( v13 * (unsigned int)v4 > v14 )
    {
      *(_DWORD *)(a1 + 80) = v12 | 0x400;
      v13 = (v7 & v14) / v4;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 752) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_35;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    goto LABEL_8;
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0x706D644Cu);
  *(_QWORD *)(a1 + 760) = v17;
  if ( !v17 )
    goto LABEL_35;
  if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    goto LABEL_8;
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 752), (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  memset(*(void **)(a1 + 752), 0, (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 760), (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  memset(*(void **)(a1 + 760), 0, (8 * v13 + 4095) & 0xFFFFFFFFFFFFF000uLL);
  v18 = 0;
  v19 = 0LL;
  if ( !v13 )
  {
LABEL_31:
    if ( IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
      goto LABEL_8;
    v28 = *v5;
    v29 = *(_QWORD *)(a1 + 104);
    if ( *v5 >= v29 )
    {
      v16 = 0;
      goto LABEL_37;
    }
LABEL_35:
    v16 = -1073741670;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v20 = *(_DWORD *)(a1 + 1040);
    v21 = 0LL;
    v33 = 0LL;
    if ( ((v20 - 2) & 0xFFFFFFFD) == 0 && !v18 )
    {
      IndependentPages = MmAllocateIndependentPagesEx((unsigned int)BufferChunkSizeInBytes, -1, 0LL, 0LL);
      goto LABEL_17;
    }
    if ( ((v20 - 1) & 0xFFFFFFFD) == 0 )
    {
      IndependentPages = IopLiveDumpAllocateFromVMMemoryPartition(a1, (unsigned int)BufferChunkSizeInBytes, &v33);
      v21 = v33;
LABEL_17:
      if ( IndependentPages )
        goto LABEL_24;
    }
    v23 = *(_DWORD *)(a1 + 1040);
    if ( (unsigned int)(v23 - 1) <= 1 )
      goto LABEL_31;
    if ( v23 == 4 )
    {
      v24 = IopLiveDumpAllocateFromVMMemoryPartition(a1, (unsigned int)BufferChunkSizeInBytes, &v33);
      v21 = v33;
    }
    else
    {
      if ( v23 != 3 )
        goto LABEL_31;
      v24 = MmAllocateIndependentPagesEx((unsigned int)BufferChunkSizeInBytes, -1, 0LL, 0LL);
    }
    if ( !v24 )
      goto LABEL_31;
LABEL_24:
    if ( !IopLiveDumpIsUnderMemoryPressure(*(_QWORD *)(a1 + 824), *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840)) )
    {
      v26 = (unsigned int)BufferChunkSizeInBytes;
      *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v19) = v25;
      *v5 += (unsigned int)BufferChunkSizeInPages;
      v27 = *(_QWORD *)(a1 + 760);
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v27 + 8 * v19) = v21;
      IopLiveDumpDiscardVirtualAddressRange(a1, v25, v26);
      goto LABEL_30;
    }
    if ( v21 )
      break;
    MmFreeIndependentPages(v25, (unsigned int)BufferChunkSizeInBytes);
    if ( v18 || *(_DWORD *)(a1 + 1040) != 4 )
      goto LABEL_8;
    --v19;
    v18 = 1;
LABEL_30:
    if ( ++v19 >= v13 )
      goto LABEL_31;
  }
  MmFreePagesFromMdl(v21);
  ExFreePoolWithTag(v21, 0);
LABEL_8:
  v16 = -1073741248;
LABEL_36:
  IopLiveDumpFreeDumpBuffers(a1 + 680);
  *v5 = 0LL;
  v28 = 0LL;
  v29 = *(_QWORD *)(a1 + 104);
LABEL_37:
  v30 = *(_QWORD *)(a1 + 128);
  v31 = *(_QWORD *)(a1 + 120);
  if ( v28 < v29 + v30 + v31 )
  {
    if ( v28 )
    {
      *(_QWORD *)(a1 + 688) = v29;
      *(_QWORD *)(a1 + 696) = v28 - v29;
    }
    else
    {
      *(_QWORD *)(a1 + 688) = 0LL;
      *(_QWORD *)(a1 + 696) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 688) = v28 - v30 - v31;
    *(_QWORD *)(a1 + 696) = *(_QWORD *)(a1 + 120);
    v1 = *(_QWORD *)(a1 + 128);
  }
  *(_QWORD *)(a1 + 704) = v1;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *(_QWORD *)(a1 + 768) = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  IopLiveDumpTraceEstimatedAndAllocatedPageCount(a1, v13 * (unsigned int)BufferChunkSizeInPages);
  return v16;
}
