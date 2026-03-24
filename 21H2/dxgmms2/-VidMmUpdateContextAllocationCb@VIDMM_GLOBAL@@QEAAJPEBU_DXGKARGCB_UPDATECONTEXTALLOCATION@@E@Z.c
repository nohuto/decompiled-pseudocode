/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B6A94
 * Callers:
 *     ?VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z @ 0x1C0022B70 (-VidMmUpdateContextAllocationCb@@YAJPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C008AB00 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00B4E5C (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BD184 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v8; // rbx
  VIDMM_SEGMENT *v9; // rbp
  CVirtualAddressAllocator *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // r12
  int v19; // eax
  struct _MDL *FullMDL; // r9
  int v21; // eax
  unsigned __int64 v22; // rdx
  int v23; // eax
  _QWORD v24[12]; // [rsp+80h] [rbp-88h] BYREF
  struct VIDMM_ALLOC *v25; // [rsp+128h] [rbp+20h] BYREF

  v5 = *((_QWORD *)a2->hAllocation + 3);
  if ( (_BYTE)a3 )
  {
    v8 = **(_QWORD **)v5;
    v9 = *(VIDMM_SEGMENT **)(v8 + 128);
    v10 = (CVirtualAddressAllocator *)*((_QWORD *)this + (*(_DWORD *)(v8 + 76) & 0x3F) + 5052);
    if ( (*(_DWORD *)(v5 + 28) & 3) == 2 )
    {
      v12 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v10,
              v5,
              0LL,
              1,
              *(_QWORD *)(v8 + 16),
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v8 + 32),
              (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
              0LL,
              *(_DWORD *)(v8 + 76) & 0x3F,
              0LL,
              0,
              0);
      v16 = v12;
      if ( v12 )
      {
        v18 = *(_QWORD *)(v12 + 96);
        v25 = 0LL;
        v19 = *((_DWORD *)v9 + 20);
        if ( (v19 & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v8, 0LL);
          v19 = *((_DWORD *)v9 + 20);
        }
        else
        {
          FullMDL = 0LL;
        }
        v21 = v19 & 0x1001;
        if ( v21 )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)(v8 + 136);
        if ( v21 )
          v23 = 0;
        else
          v23 = VIDMM_SEGMENT::DriverId(v9);
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)v10,
          v16,
          *(_DWORD *)(v8 + 76) & 0x3F,
          v23,
          v22,
          (__int64)FullMDL,
          1,
          &v25,
          0LL);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          v18,
          *(_QWORD *)(v8 + 16),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v10, v18);
        return 0LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = 23952LL;
        WdLogEvent5_WdAssertion(v17);
        return 3221225473LL;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdAssertion(*(unsigned int *)(v8 + 76), a2, a3);
      *(_QWORD *)(v11 + 24) = 23931LL;
      WdLogEvent5_WdAssertion(v11);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v24, 0, 0x58uLL);
    v6 = *(__int64 **)v5;
    LODWORD(v24[0]) = 117;
    v24[5] = a2;
    HIDWORD(v24[0]) = *(_DWORD *)(*v6 + 76) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v24, 1);
  }
}
