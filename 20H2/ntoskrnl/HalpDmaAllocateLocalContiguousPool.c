/*
 * XREFs of HalpDmaAllocateLocalContiguousPool @ 0x140867180
 * Callers:
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407617BC (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407BF2A8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     RtlSetAllBits @ 0x14025D340 (RtlSetAllBits.c)
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MmFreePagesFromMdl @ 0x14032E320 (MmFreePagesFromMdl.c)
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C7B8 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403BB30C (HalpDmaCommitContiguousMapBuffers.c)
 *     memset @ 0x140411300 (memset.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x1404B7134 (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C4E28 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaReturnPageToSource @ 0x1404C65F4 (HalpDmaReturnPageToSource.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalContiguousPool(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  _RTL_BITMAP *v5; // rax
  _RTL_BITMAP *v6; // rbx
  char v8; // r15
  ULONG v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // r12
  unsigned __int64 QuadPart; // r8
  __int64 v22; // rcx
  struct _MDL *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // r12
  __int64 v29; // r13
  _QWORD *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rdx
  _QWORD *v34; // rbx
  __int64 v35; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  PHYSICAL_ADDRESS v37; // [rsp+38h] [rbp-10h]
  int v38; // [rsp+90h] [rbp+48h]
  unsigned int v39; // [rsp+90h] [rbp+48h]
  ULONG NumberToClear; // [rsp+98h] [rbp+50h] BYREF
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp+58h] BYREF
  PHYSICAL_ADDRESS v42; // [rsp+A8h] [rbp+60h] BYREF

  BaseAddress = 0LL;
  v42.QuadPart = 0LL;
  v2 = a2;
  MemoryDescriptorList = 0LL;
  v3 = (a2 + 31) & 0xFFFFFFE0;
  v5 = (_RTL_BITMAP *)HalpMmAllocCtxAlloc(a1, ((unsigned __int64)v3 >> 3) + 16);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v5->SizeOfBitMap = v3;
  v5->Buffer = &v5[1].SizeOfBitMap;
  RtlSetAllBits(v5);
  *(_QWORD *)(a1 + 16) = v6;
  v8 = 1;
LABEL_4:
  v9 = HalpDmaAllocateContiguousMemory(a1, v2, &BaseAddress, &v42, &MemoryDescriptorList);
  v11 = v9;
  NumberToClear = v9;
  if ( !v9 )
    goto LABEL_18;
  v12 = *(_BYTE *)(a1 + 145) == 0;
  v37 = v42;
  if ( v12 )
  {
    v10 = (unsigned __int64)v42.QuadPart >> 16;
    v13 = ((((unsigned __int64)v9 << 12) + v42.QuadPart - 1) >> 16) - ((unsigned __int64)v42.QuadPart >> 16);
  }
  else
  {
    v13 = 0;
  }
  v14 = HalpMmAllocCtxAlloc(v10, 24LL);
  v16 = BaseAddress;
  v17 = v14;
  if ( !v14 )
  {
LABEL_13:
    v23 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      if ( v16 )
        MmUnmapLockedPages(v16, MemoryDescriptorList);
      MmFreePagesFromMdl(v23);
      ExFreePoolWithTag(v23, 0);
    }
    else
    {
      MmFreeContiguousMemory(v16);
    }
LABEL_18:
    v25 = HalpDmaAllocateContiguousPagesFromContiguousPool(a1, *(_QWORD *)(a1 + 152), v2, 0LL, 1, &NumberToClear);
    if ( !v25 )
      goto LABEL_19;
    v11 = NumberToClear;
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v29 = v25;
    while ( 1 )
    {
      v39 = v26;
      if ( v26 >= (unsigned int)v11 )
      {
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 16), 0, v11);
        goto LABEL_43;
      }
      if ( v25 == v29 || v27 != v25 - 72 )
      {
        v30 = (_QWORD *)HalpMmAllocCtxAlloc(v24, 24LL);
        v24 = (__int64)v30;
        if ( !v30 )
        {
          if ( v28 )
          {
            v33 = *(_QWORD **)(a1 + 40);
            if ( v33 )
            {
              do
              {
                v34 = (_QWORD *)*v33;
                HalpMmAllocCtxFree(v24, (__int64)v33);
                v33 = v34;
              }
              while ( v34 );
            }
          }
          if ( (_DWORD)v11 )
          {
            do
            {
              v35 = *(_QWORD *)(v29 + 8);
              HalpDmaReturnPageToSource(a1, v29, v31, v32);
              v29 = v35;
              --v11;
            }
            while ( v11 );
          }
LABEL_19:
          if ( v2 <= 1 )
          {
            HalpMmAllocCtxFree(v24, *(_QWORD *)(a1 + 16));
            return 3221225626LL;
          }
          v2 >>= 1;
          goto LABEL_4;
        }
        if ( v28 )
          *v28 = v30;
        else
          *(_QWORD *)(a1 + 40) = v30;
        *v30 = 0LL;
        v28 = v30;
        v30[1] = 0LL;
        v30[2] = v25;
      }
      ++*(_DWORD *)(v24 + 8);
      v27 = v25;
      *(_QWORD *)(v25 + 48) &= 0xFFFFFFFFFFFFFFF3uLL;
      v25 = *(_QWORD *)(v25 + 8);
      v26 = v39 + 1;
    }
  }
  v38 = v13 + v11;
  v18 = (void *)HalpMmAllocCtxAlloc(v15, 72LL * (unsigned int)(v13 + v11));
  v20 = v18;
  if ( !v18 )
  {
LABEL_12:
    HalpMmAllocCtxFree(v19, v17);
    goto LABEL_13;
  }
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 12) = 0;
  memset(v18, 0, 72 * v11);
  QuadPart = v37.QuadPart;
  *(_DWORD *)(v17 + 8) = v38;
  *(_QWORD *)(v17 + 16) = v20;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = v17;
  *(_QWORD *)(a1 + 56) = v17;
  if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)v16, QuadPart, v11) )
  {
    HalpMmAllocCtxFree(v22, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL));
    goto LABEL_12;
  }
  if ( MemoryDescriptorList )
  {
    *(_QWORD *)(a1 + 320) = MemoryDescriptorList;
    *(_QWORD *)(a1 + 328) = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 320) = v16;
    v8 = 0;
  }
  *(_BYTE *)(a1 + 336) = v8;
LABEL_43:
  *(_DWORD *)(a1 + 224) = v11;
  return 0LL;
}
