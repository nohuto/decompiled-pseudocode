/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00839CC
 * Callers:
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0083B84 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C00A7C8C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        unsigned __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        unsigned __int8 *a9,
        unsigned __int64 a10)
{
  __int64 v11; // rbp
  _QWORD *v14; // r10
  unsigned int v15; // ecx
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rbx

  v11 = a2;
  if ( a6
    && (v14 = (_QWORD *)*((_QWORD *)this + 2),
        *(_DWORD *)(*(_QWORD *)(v14[464] + 8LL * (a6 + *(_DWORD *)(1584LL * a2 + v14[5028] + 20) - 1)) + 376LL) == 0x10000)
    && !(_WORD)a3
    && (v15 = *((_DWORD *)a4 + 8)) != 0
    && !(_WORD)v15 )
  {
    v16 = 1;
  }
  else
  {
    v15 = *((_DWORD *)a4 + 8);
    v16 = 0;
    v14 = (_QWORD *)*((_QWORD *)this + 2);
  }
  *a9 = v16;
  if ( v16 )
  {
    v17 = v14[5120];
    v18 = v14[5121];
  }
  else
  {
    v17 = v14[5118];
    v18 = v14[5119];
  }
  v19 = (_QWORD *)*((_QWORD *)this + v11 + 4);
  v20 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v19,
          (__int64)a4,
          a5,
          3u,
          a3,
          0LL,
          v17,
          v18,
          v15,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
          a10,
          v11,
          0LL,
          0);
  v21 = v20;
  if ( v20 )
  {
    *(_DWORD *)(v20 + 64) |= 0x1000u;
    *(_QWORD *)(v20 + 40) = 0LL;
    a9 = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(v19, v20, (unsigned int)v11, a6, a7, a8, 0, &a9, 0LL) < 0 )
      WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
    return (struct VIDMM_MAPPED_VA_RANGE *)v21;
  }
  else
  {
    WdLogSingleEntry0(4LL);
    return 0LL;
  }
}
