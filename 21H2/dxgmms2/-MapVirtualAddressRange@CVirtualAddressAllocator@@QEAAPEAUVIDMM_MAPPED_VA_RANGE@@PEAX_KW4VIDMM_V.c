/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E694 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0066D60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0075848 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0085574 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008CCF8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008DF9C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0098F98 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B6A94 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BD888 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001B28 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C005FDE4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E028 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C006E3DC (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C007B958 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C008B288 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14,
        char a15)
{
  struct _RTL_AVL_TREE *v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  __int64 Value; // rbx
  __int64 v20; // r15
  struct VIDMM_VAD *v21; // rsi
  unsigned __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  void **v32; // r14
  PVOID v33; // rax
  int v34; // eax
  __int64 v35; // rax
  bool v36; // zf
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  char *v43; // rsi
  char **v44; // rdx
  char *v45; // rax
  struct VIDMM_VAD *v47; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v48[88]; // [rsp+70h] [rbp-19h] BYREF
  char v49; // [rsp+D8h] [rbp+4Fh]

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v48,
    (struct DXGPUSHLOCK *const)(a1 + 7));
  v17 = a6;
  v18 = 0LL;
  Value = a10.Value;
  v20 = 0LL;
  v47 = 0LL;
  v49 = 0;
  if ( !a6 )
    goto LABEL_15;
  v21 = (struct VIDMM_VAD *)a1[6];
  v22 = a6 + a5;
  if ( !v21 )
    goto LABEL_15;
  do
  {
    v23 = CompareVadAddressInsideAvl(&a6, (struct _RTL_BALANCED_NODE *)v21);
    if ( v23 >= 0 )
    {
      if ( v23 <= 0 )
        break;
      v21 = (struct VIDMM_VAD *)*((_QWORD *)v21 + 1);
    }
    else
    {
      v21 = *(struct VIDMM_VAD **)v21;
    }
  }
  while ( v21 );
  if ( v21 )
  {
    v25 = *((_QWORD *)v21 + 4);
    v26 = *((unsigned int *)v21 + 18);
    v27 = v25 - 4096;
    if ( (v26 & 0x1000) == 0 )
      v27 = *((_QWORD *)v21 + 4);
    if ( v27 < v22 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v26);
      v30[3] = a6;
      v30[4] = v22;
      v30[5] = v21;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_42;
    }
    v28 = v26 >> 7;
    LOBYTE(v28) = Value ^ v28;
    v47 = v21;
    if ( (v28 & 0x10) != 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v28, v24);
      *(_QWORD *)(v29 + 24) = 1758LL;
      WdLogEvent5_WdAssertion(v29);
      goto LABEL_42;
    }
  }
  else
  {
LABEL_15:
    v31 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v16,
            a5,
            v17,
            a7,
            a8,
            a9,
            &v47,
            1u);
    v21 = v47;
    if ( v31 >= 0 )
    {
      v49 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v47,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value);
    }
  }
  if ( !v21 )
    goto LABEL_41;
  v32 = a13;
  if ( a13 )
  {
    v33 = operator new[](0x18uLL, 0x39346956u, PagedPool);
    *v32 = v33;
    if ( !v33 )
      goto LABEL_31;
  }
  v34 = *((_DWORD *)v21 + 18) & 0xF;
  if ( v34 != 3 || (Value & 8) == 0 && (Value & 4) == 0 )
  {
    if ( !a15 || (v36 = v34 == 2, v37 = 1, !v36) )
      v37 = 0;
    if ( v49 )
      v17 = *((_QWORD *)v21 + 3);
    v38 = CVirtualAddressAllocator::MapVadVaRange(
            (CVirtualAddressAllocator *)a1,
            v21,
            a12,
            a4,
            a2,
            a3,
            Value,
            a11,
            v17,
            a5,
            v37);
    v20 = v38;
    if ( !v38 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v40, v39, v41);
      *(_QWORD *)(v42 + 24) = 1802LL;
      WdLogEvent5_WdAssertion(v42);
      goto LABEL_31;
    }
    if ( v32 )
    {
      v43 = (char *)v21 + 80;
      *((_QWORD *)*v32 + 2) = v38;
      v44 = (char **)*((_QWORD *)v43 + 1);
      v45 = (char *)*v32;
      if ( *v44 != v43 )
        __fastfail(3u);
      *(_QWORD *)v45 = v43;
      *((_QWORD *)v45 + 1) = v44;
      *v44 = v45;
      *((_QWORD *)v43 + 1) = v45;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 128));
LABEL_41:
    v18 = v20;
    goto LABEL_42;
  }
  v35 = WdLogNewEntry5_WdWarning(v25, v28);
  WdLogEvent5_WdWarning(v35);
LABEL_31:
  if ( v49 )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v21);
  if ( v32 )
  {
    operator delete(*v32);
    *v32 = 0LL;
  }
LABEL_42:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
  return v18;
}
