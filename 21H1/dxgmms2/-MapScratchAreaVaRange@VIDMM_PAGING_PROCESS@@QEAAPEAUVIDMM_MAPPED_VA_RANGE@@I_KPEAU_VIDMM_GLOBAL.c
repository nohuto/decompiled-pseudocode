/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0075BC4
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0073CDC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C007566C (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0088F38 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FAB8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0071194 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
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
  struct VIDMM_VAD **v19; // r14
  struct VIDMM_MAPPED_VA_RANGE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax

  v11 = a2;
  if ( a6
    && (v14 = (_QWORD *)*((_QWORD *)this + 2),
        *(_DWORD *)(*(_QWORD *)(v14[464] + 8LL * (a6 + *(_DWORD *)(1584LL * a2 + v14[5027] + 20) - 1)) + 376LL) == 0x10000)
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
  v19 = (struct VIDMM_VAD **)*((_QWORD *)this + v11 + 4);
  v20 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v19,
          (__int64)a4,
          a5,
          3,
          a3,
          0LL,
          v17,
          v18,
          v15,
          1LL,
          a10,
          v11,
          0LL);
  v23 = v20;
  if ( v20 )
  {
    *((_DWORD *)v20 + 16) |= 0x1000u;
    *((_QWORD *)v20 + 5) = 0LL;
    a9 = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                (__int64)v19,
                (__int64)v20,
                (unsigned int)v11,
                a6,
                a7,
                (__int64)a8,
                0,
                (struct VIDMM_ALLOC **)&a9,
                0LL) < 0 )
    {
      v28 = WdLogNewEntry5_WdCriticalError(v25, v24);
      *(_QWORD *)(v28 + 24) = 270LL;
      *(_QWORD *)(v28 + 32) = 48LL;
      *(_QWORD *)(v28 + 40) = this;
      *(_OWORD *)(v28 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    return v23;
  }
  else
  {
    v27 = WdLogNewEntry5_WdEvent(v22, v21);
    WdLogEvent5_WdEvent(v27);
    return 0LL;
  }
}
