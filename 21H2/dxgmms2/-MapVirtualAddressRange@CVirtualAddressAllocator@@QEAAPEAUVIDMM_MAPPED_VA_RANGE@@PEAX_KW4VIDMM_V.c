/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C00472D0 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00839CC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0088C60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009ABBC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00A5624 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00DC580 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023F8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0087E10 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C008DD00 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C008ECAC (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C00A4444 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A6CE4 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
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
        void **a13,
        char a14)
{
  struct _RTL_AVL_TREE *v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rdi
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v18; // rbx
  __int64 v19; // rbp
  char v20; // r13
  struct VIDMM_VAD *v21; // rsi
  unsigned __int64 v22; // r14
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  void **v28; // r14
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rsi
  char **v33; // rcx
  char *v34; // rax
  _BYTE v36[104]; // [rsp+50h] [rbp-68h] BYREF
  struct VIDMM_VAD *v37; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+10h]
  __int64 v39; // [rsp+D0h] [rbp+18h]
  unsigned int v40; // [rsp+D8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v36,
    (struct DXGPUSHLOCK *const)(a1 + 7));
  v16 = a6;
  v17 = 0LL;
  v18 = a10.0;
  v19 = 0LL;
  v37 = 0LL;
  v20 = 0;
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
    v24 = *((unsigned int *)v21 + 18);
    v25 = *((_QWORD *)v21 + 4) - 4096LL;
    if ( (v24 & 0x1000) == 0 )
      v25 = *((_QWORD *)v21 + 4);
    if ( v25 < v22 )
    {
      WdLogSingleEntry3(3LL, a6, v22, v21);
      goto LABEL_39;
    }
    v37 = v21;
    if ( ((*(_BYTE *)&v18 ^ (unsigned __int8)(v24 >> 7)) & 0x10) != 0 )
    {
      WdLogSingleEntry1(1LL, 1434LL);
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      goto LABEL_39;
    }
  }
  else
  {
LABEL_15:
    v27 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            (CVirtualAddressAllocator *)a1,
            v15,
            a5,
            v16,
            a7,
            a8,
            a9,
            &v37,
            1u);
    v21 = v37;
    if ( v27 >= 0 )
    {
      v20 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        (CVirtualAddressAllocator *)a1,
        v37,
        (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)v18);
    }
  }
  if ( !v21 )
    goto LABEL_38;
  v28 = a13;
  if ( a13 )
  {
    v29 = operator new(24LL, 0x39346956u, 256LL);
    *v28 = (void *)v29;
    if ( !v29 )
      goto LABEL_28;
  }
  if ( (*((_BYTE *)v21 + 72) & 0xF) != 3 || (*(_BYTE *)&v18 & 8) == 0 && (*(_BYTE *)&v18 & 4) == 0 )
  {
    if ( v20 )
      v16 = *((_QWORD *)v21 + 3);
    v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))CVirtualAddressAllocator::MapVadVaRange)(
            a1,
            v21,
            a12,
            v40,
            v38,
            v39,
            v18,
            a11,
            v16,
            a5);
    v19 = v30;
    if ( !v30 )
    {
      WdLogSingleEntry1(1LL, 1477LL);
      DxgkLogInternalTriageEvent(v31, 0x40000LL);
      goto LABEL_28;
    }
    if ( v28 )
    {
      v32 = (char *)v21 + 80;
      *((_QWORD *)*v28 + 2) = v30;
      v33 = (char **)*((_QWORD *)v32 + 1);
      v34 = (char *)*v28;
      if ( *v33 != v32 )
        __fastfail(3u);
      *(_QWORD *)v34 = v32;
      *((_QWORD *)v34 + 1) = v33;
      *v33 = v34;
      *((_QWORD *)v32 + 1) = v34;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 128));
LABEL_38:
    v17 = v19;
    goto LABEL_39;
  }
  WdLogSingleEntry0(3LL);
LABEL_28:
  if ( v20 )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v21);
  if ( v28 )
  {
    operator delete(*v28);
    *v28 = 0LL;
  }
LABEL_39:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  return v17;
}
