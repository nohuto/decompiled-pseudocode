/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0014CA4 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C001C714 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C00A5CA8 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // ebp
  int v6; // r15d
  __int64 i; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v11; // r9d
  __int64 v12; // r12
  struct _MDL *SegmentAddressMdl; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct VIDMM_ALLOC *v19; // [rsp+A0h] [rbp+8h] BYREF

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
    v5 = NumPde;
  v6 = 0;
  if ( !v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v8 = *((_QWORD *)this + 6);
    v9 = *(_QWORD *)(i + v8);
    if ( !v9 )
      goto LABEL_6;
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(*(VIDMM_PAGE_DIRECTORY **)(i + v8), a2);
      goto LABEL_6;
    }
    if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v9 + 24), (*(_DWORD *)this >> 7) & 0x1F)
      && !CVirtualAddressAllocator::MapVirtualAddressRange(
            a2,
            v9,
            0LL,
            5u,
            *(unsigned int *)(*(_QWORD *)(v9 + 16) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 40944LL),
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 40952LL),
            0x1000u,
            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
            0LL,
            v11,
            0LL,
            0) )
    {
      break;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 128LL);
    v19 = 0LL;
    SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v9);
    v14 = *(_QWORD *)(v9 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 120) + 80LL) & 0x1000) != 0 )
      v15 = 0LL;
    else
      v15 = *(__int64 *)(v14 + 128) >> 12;
    v16 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            (__int64)a2,
            v12 - 24,
            (*(_DWORD *)this >> 7) & 0x1F,
            *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 28),
            v15 << 12,
            (__int64)SegmentAddressMdl,
            0,
            &v19,
            0LL);
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(1LL, 3157LL);
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      return (unsigned int)v16;
    }
LABEL_6:
    if ( ++v6 >= v5 )
      return 0LL;
  }
  WdLogSingleEntry1(1LL, 3131LL);
  DxgkLogInternalTriageEvent(v17, 0x40000LL);
  return 3221225473LL;
}
