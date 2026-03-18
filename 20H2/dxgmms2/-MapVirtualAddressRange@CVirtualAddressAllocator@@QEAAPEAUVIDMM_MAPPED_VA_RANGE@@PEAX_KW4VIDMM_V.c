/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0077948
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E434 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0070BC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007F0E4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00865A0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089C18 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AEBC (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0095B00 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B7928 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BE690 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00123C8 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0078A68 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C007A294 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007A360 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007DAA4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0088158 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        struct VIDMM_VAD **a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        __int64 a11,
        unsigned int a12,
        void **a13)
{
  __int64 v13; // rdi
  struct _RTL_AVL_TREE *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  struct VIDMM_VAD *v21; // rsi
  PVOID v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char *v27; // rsi
  char **v28; // rdx
  char *v29; // rax
  unsigned __int64 v31; // r14
  int v32; // eax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct VIDMM_VAD *v41; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-29h] BYREF
  char v43[8]; // [rsp+68h] [rbp-21h] BYREF
  DXGPUSHLOCK *v44; // [rsp+70h] [rbp-19h]
  int v45; // [rsp+78h] [rbp-11h]
  char v46; // [rsp+D8h] [rbp+4Fh]

  v13 = 0LL;
  v44 = (DXGPUSHLOCK *)(a1 + 7);
  if ( a1 != (struct VIDMM_VAD **)-56LL && a1[8] == KeGetCurrentThread() )
  {
    v36 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v36 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v36);
  }
  DXGPUSHLOCK::AcquireExclusive(v44);
  v16 = a6;
  v17 = 0LL;
  v45 = 2;
  v41 = 0LL;
  v46 = 0;
  if ( !a6 )
    goto LABEL_5;
  v21 = a1[6];
  v31 = a6 + a5;
  v42 = a6;
  if ( !v21 )
    goto LABEL_5;
  while ( 1 )
  {
    v32 = CompareVadAddressInsideAvl(&v42, (struct _RTL_BALANCED_NODE *)v21);
    if ( v32 >= 0 )
      break;
    v21 = *(struct VIDMM_VAD **)v21;
LABEL_24:
    if ( !v21 )
      goto LABEL_25;
  }
  if ( v32 > 0 )
  {
    v21 = (struct VIDMM_VAD *)*((_QWORD *)v21 + 1);
    goto LABEL_24;
  }
LABEL_25:
  if ( !v21 )
  {
LABEL_5:
    v18 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v15,
            a5,
            a6,
            a7,
            a8,
            a9,
            &v41,
            1u);
    v21 = v41;
    if ( v18 >= 0 )
    {
      v46 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange((CVirtualAddressAllocator *)a1, v41, a10);
    }
    goto LABEL_7;
  }
  v20 = *((_QWORD *)v21 + 4);
  v34 = *((unsigned int *)v21 + 18);
  v35 = v20 - 4096;
  if ( (v34 & 0x1000) == 0 )
    v35 = *((_QWORD *)v21 + 4);
  if ( v35 < v31 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v34);
    v38[3] = v42;
    v38[4] = v31;
    v38[5] = v21;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_20;
  }
  v19 = v34 >> 7;
  LOBYTE(v19) = *(_BYTE *)&a10.0 ^ v19;
  if ( (v19 & 0x10) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v20, v19, v33);
    *(_QWORD *)(v37 + 24) = 1331LL;
    WdLogEvent5_WdAssertion(v37);
    goto LABEL_20;
  }
LABEL_7:
  if ( v21 )
  {
    if ( !a13 || (v22 = operator new[](0x18uLL, 0x39346956u, PagedPool), (*a13 = v22) != 0LL) )
    {
      if ( (*((_BYTE *)v21 + 72) & 0xF) == 3 && ((*(_BYTE *)&a10.0 & 8) != 0 || (*(_BYTE *)&a10.0 & 4) != 0) )
      {
        v39 = WdLogNewEntry5_WdWarning(v20, v19);
        WdLogEvent5_WdWarning(v39);
      }
      else
      {
        if ( v46 )
          v16 = *((_QWORD *)v21 + 3);
        v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CVirtualAddressAllocator::MapVadVaRange)(
                a1,
                v21,
                a12,
                a4,
                a2,
                a3,
                a10.0,
                a11,
                v16,
                a5);
        v17 = v23;
        if ( v23 )
        {
          if ( a13 )
          {
            v27 = (char *)v21 + 80;
            *((_QWORD *)*a13 + 2) = v23;
            v28 = (char **)*((_QWORD *)v27 + 1);
            v29 = (char *)*a13;
            if ( *v28 != v27 )
              __fastfail(3u);
            *(_QWORD *)v29 = v27;
            *((_QWORD *)v29 + 1) = v28;
            *v28 = v29;
            *((_QWORD *)v27 + 1) = v29;
          }
          goto LABEL_19;
        }
        v40 = WdLogNewEntry5_WdAssertion(v25, v24, v26);
        *(_QWORD *)(v40 + 24) = 1374LL;
        WdLogEvent5_WdAssertion(v40);
      }
    }
    if ( v46 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v21);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
  }
  else
  {
LABEL_19:
    v13 = v17;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  return v13;
}
