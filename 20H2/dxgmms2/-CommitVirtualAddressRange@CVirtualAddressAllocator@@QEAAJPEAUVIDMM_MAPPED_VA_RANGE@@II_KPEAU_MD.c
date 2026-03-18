/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C007A8B4
 * Callers:
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071CF8 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C0077E50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C007F0E4 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00865A0 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0095B00 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B5E48 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B69FC (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B7928 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BE690 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE89C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C0012530 (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0012554 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015030 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C0015F9C (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0025FFC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007B170 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082B34 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C0083790 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0083ECC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00BB708 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE89C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        struct VIDMM_ALLOC **a8,
        _BYTE *a9)
{
  unsigned int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned __int64 NumberOfPte; // rcx
  unsigned __int64 v16; // rdx
  int v17; // r10d
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r8
  VIDMM_PAGE_DIRECTORY *v22; // r13
  UINT v23; // ebx
  unsigned int v24; // r13d
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r10
  _DWORD *v30; // r11
  int v31; // r10d
  unsigned __int64 v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // r8
  unsigned int v38; // edx
  int v39; // eax
  __int64 result; // rax
  bool v41; // zf
  char v42; // al
  int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 RootPageTableSize; // rax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ebx
  struct VIDMM_ALLOC **v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v61; // eax
  char v62; // [rsp+50h] [rbp-B0h]
  UINT v63; // [rsp+54h] [rbp-ACh]
  int v64; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+68h] [rbp-98h]
  _DWORD *v67; // [rsp+70h] [rbp-90h]
  unsigned int v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+84h] [rbp-7Ch]
  char v70; // [rsp+88h] [rbp-78h]
  _DXGKARG_GETROOTPAGETABLESIZE v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h]
  struct VIDMM_ALLOC **v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-48h]
  _BYTE *v77; // [rsp+C0h] [rbp-40h]
  _QWORD v78[10]; // [rsp+D0h] [rbp-30h] BYREF

  v77 = a9;
  v70 = a3;
  v73 = a8;
  if ( a7 == 2 )
    *a9 = 0;
  *a8 = 0LL;
  v11 = *(_DWORD *)(a2 + 64);
  v12 = *(_QWORD *)(a2 + 96);
  v13 = (*(_QWORD *)(a2 + 104) - v12) >> 12;
  v66 = (int)(v11 << 28) >> 28;
  v14 = (v11 >> 4) & 0x3F;
  v65 = v12;
  v12 >>= 12;
  v72 = *(_QWORD *)(a2 + 56);
  NumberOfPte = *(_QWORD *)(a2 + 72);
  v76 = NumberOfPte;
  v16 = v12 + v13;
  v63 = v14;
  if ( v12 + v13 <= v12 )
  {
    v50 = WdLogNewEntry5_WdAssertion(NumberOfPte, v16, a3);
    *(_QWORD *)(v50 + 24) = 2585LL;
LABEL_79:
    WdLogEvent5_WdAssertion(v50);
    return 3221225485LL;
  }
  if ( v16 > *(_QWORD *)(a1 + 16) >> 12 )
  {
    v50 = WdLogNewEntry5_WdAssertion(NumberOfPte, v16, a3);
    *(_QWORD *)(v50 + 24) = 2590LL;
    goto LABEL_79;
  }
  v17 = -2;
  v18 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a2 + 88) & 4) == 0 )
    v17 = a4;
  v19 = *(_QWORD *)(a1 + 88);
  v20 = 32LL * v14;
  v75 = 1584LL * v14;
  v21 = *(_QWORD *)(v19 + 40216) + v75;
  v64 = v17;
  v22 = *(VIDMM_PAGE_DIRECTORY **)(v18 + v20);
  v74 = v21;
  v67 = *(_DWORD **)(v21 + 440);
  if ( v22 && (*(_DWORD *)v22 & 8) == 0 )
  {
    v24 = v14;
    goto LABEL_12;
  }
  NumberOfPte = *(unsigned int *)(v18 + v20 + 16);
  v23 = (((v16 - 1) & *(_QWORD *)(v21 + 48LL * *(unsigned int *)(v21 + 428) + 104)) >> *(_QWORD *)(v21
                                                                                                 + 48LL
                                                                                                 * *(unsigned int *)(v21 + 428)
                                                                                                 + 112))
      + 1;
  v69 = NumberOfPte;
  if ( v23 <= (unsigned int)NumberOfPte && v22 )
    goto LABEL_11;
  v44 = *(_DWORD *)(v18 + v20 + 20);
  v45 = v44;
  v68 = v44;
  if ( *(_DWORD *)(*(_QWORD *)(v21 + 440) + 16LL) == 2 )
  {
    v71.PhysicalAdapterIndex = v63;
    *(_DWORD *)(v18 + v20 + 16) = v23;
    v46 = *(_QWORD *)(a1 + 88);
    v71.NumberOfPte = v23;
    RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v46 + 16), &v71);
    NumberOfPte = v71.NumberOfPte;
    v45 = RootPageTableSize;
    *(_DWORD *)(v18 + v20 + 20) = RootPageTableSize;
    v44 = v68;
    *(_DWORD *)(v18 + v20 + 16) = NumberOfPte;
  }
  if ( (unsigned int)NumberOfPte < v23 || (unsigned int)v45 < v44 )
  {
    v51 = WdLogNewEntry5_WdAssertion(NumberOfPte, v45, v21);
    *(_QWORD *)(v51 + 24) = *(unsigned int *)(v18 + v20 + 16);
    WdLogEvent5_WdAssertion(v51);
    v54 = WdLogNewEntry5_WdCriticalError(v53, v52);
    *(_QWORD *)(v54 + 24) = 270LL;
    *(_QWORD *)(v54 + 32) = 48LL;
    *(_QWORD *)(v54 + 40) = a1;
    *(_OWORD *)(v54 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v54);
  }
  PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v63, *(_DWORD *)(v74 + 428));
  *(_QWORD *)(v18 + v20) = PageDirectory;
  if ( PageDirectory )
  {
    if ( !v22 )
    {
LABEL_11:
      v24 = v63;
      goto LABEL_12;
    }
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 232LL),
      1);
    v56 = *(_DWORD *)(v18 + v20 + 16);
    *(_DWORD *)(v18 + v20 + 16) = v69;
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v22, (struct CVirtualAddressAllocator *)a1, 0LL);
    v24 = v63;
    v57 = v73;
    *(_DWORD *)(v18 + v20 + 16) = v56;
    v36 = CVirtualAddressAllocator::RecommitVirtualAddressRanges((CVirtualAddressAllocator *)a1, 1LL << v63, v57);
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v63, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v63);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 232LL),
      0);
    if ( v36 < 0 )
    {
      v59 = WdLogNewEntry5_WdAssertion(NumberOfPte, v58, v21);
      *(_QWORD *)(v59 + 24) = 2680LL;
      WdLogEvent5_WdAssertion(v59);
      return (unsigned int)v36;
    }
LABEL_12:
    v62 = 0;
    if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
      v62 = 1;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0pqxx_EtwWriteTransfer(NumberOfPte, &CommitVirtualAddressStart, v21, v72, v66, v65, v13);
    memset(v78, 0, 0x48uLL);
    v25 = *(_QWORD *)(a2 + 120);
    if ( v25 )
    {
      v78[3] = (a5 + *(_QWORD *)(a2 + 112) - *(_QWORD *)(a2 + 72)) >> 12;
      v78[8] = v25;
    }
    v26 = v78[0] | 1LL;
    v78[2] = *(_QWORD *)(a2 + 80);
    v78[0] |= 1uLL;
    if ( v64 == -2 )
    {
      v78[0] = v26 | 2;
      if ( (_WORD)v65 || (v13 & 0xF) != 0 || (v41 = v67[3] == 0, LOBYTE(v78[7]) = 1, v41) )
        LOBYTE(v78[7]) = 0;
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                    (int)(*(_DWORD *)(a2 + 64) << 28) >> 28,
                                    *(_QWORD *)(a2 + 56));
      if ( VidMmGlobalAllocFromOwner )
      {
        v61 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
        if ( !v61 || (_WORD)v61 )
          LOBYTE(v78[7]) = 0;
      }
    }
    else
    {
      if ( v64 == -3 )
      {
        LOBYTE(v78[7]) = 1;
      }
      else if ( v64 != -1 )
      {
        v27 = GetVidMmGlobalAllocFromOwner((int)(*(_DWORD *)(a2 + 64) << 28) >> 28, *(_QWORD *)(a2 + 56));
        v30 = v67;
        if ( (_WORD)v65 || !v67[3] )
        {
          v31 = v64;
        }
        else
        {
          v41 = (v29 & 0xF) == 0;
          v31 = v64;
          if ( v41 && !*(_WORD *)(a2 + 112) )
          {
            if ( v64 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(v64
                                                        + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40216LL)
                                                                    + v75
                                                                    + 20)
                                                        - 1))
                             + 376LL) == 0x10000 )
              {
                v42 = v78[7];
                if ( (v13 & 0xF) == 0 && (unsigned __int16)a5 == 0LL )
                  v42 = 1;
                LOBYTE(v78[7]) = v42;
              }
              if ( v27 )
              {
                v43 = *(_DWORD *)(v27 + 32);
                if ( !v43 || (_WORD)v43 )
                  LOBYTE(v78[7]) = 0;
              }
            }
            else if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v27 && (*(_DWORD *)(v27 + 80) & 0x100) != 0 )
            {
              LOBYTE(v78[7]) = 1;
            }
          }
        }
        v32 = v28 & 0xFFFFFFFFFFFE041FuLL | (32 * (v31 & 0x1F | ((unsigned __int64)(v70 & 0x3F) << 6)));
        v33 = a6;
        v78[0] = v32;
        BYTE3(v78[7]) = !a6
                     && (*v67 & 0x40) != 0
                     && (!v27 || (**(_DWORD **)(v27 + 496) & 0x80u) == 0)
                     && (*(_DWORD *)(a1 + 144) & 4) == 0;
        if ( (*v67 & 0x10) != 0 && (v66 == 2 || v66 == 7 || v27 && (**(_DWORD **)(v27 + 496) & 4) != 0) )
        {
          v32 |= 4uLL;
          v78[0] = v32;
        }
        if ( (*v67 & 1) != 0 && (*(_BYTE *)(a2 + 88) & 1) == 0 )
        {
          v32 |= 8uLL;
          v78[0] = v32;
        }
        v34 = v65;
        if ( (*v67 & 2) != 0 && (*(_BYTE *)(a2 + 88) & 2) == 0 )
          v78[0] = v32 | 0x10;
        goto LABEL_34;
      }
      v30 = v67;
      v34 = v65;
    }
    v31 = v64;
    v33 = a6;
LABEL_34:
    v78[5] = v72;
    v78[4] = v33;
    v78[6] = __PAIR64__(v31, v66);
    if ( (*v30 & 0x80u) != 0 )
      *(_WORD *)((char *)&v78[7] + 1) = 257;
    v36 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            *(VIDMM_PAGE_DIRECTORY **)(v18 + v20),
            (struct CVirtualAddressAllocator *)a1,
            (const struct COMMIT_VA_STATE *)v78,
            v76,
            v34,
            v13,
            a5,
            0,
            v73);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v35, &CommitVirtualAddressEnd, v37, v72);
    if ( (*(_DWORD *)ADAPTER_RENDER::GetGpuMmuCaps(*(ADAPTER_RENDER **)(*(_QWORD *)(a1 + 88) + 16LL), v24) & 0x400) == 0
      || BYTE5(v78[7]) )
    {
      if ( a7 == 1 )
      {
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v38, v65, v65 + (v13 << 12));
      }
      else if ( a7 == 2 )
      {
        *v77 = 1;
      }
    }
    if ( BYTE4(v78[7]) )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v24);
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
        *(VIDMM_PROCESS **)(a1 + 96),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 232LL),
        0);
    }
    v39 = 2048;
    if ( v36 >= 0 )
      v39 = 1024;
    *(_DWORD *)(a2 + 64) |= v39;
    if ( v62 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v36;
  }
  v55 = WdLogNewEntry5_WdAssertion(NumberOfPte, v49, v21);
  *(_QWORD *)(v55 + 24) = 2634LL;
  WdLogEvent5_WdAssertion(v55);
  *(_DWORD *)(v18 + v20 + 16) = v69;
  *(_DWORD *)(v18 + v20 + 20) = v68;
  result = 3221225495LL;
  *(_QWORD *)(v18 + v20) = v22;
  return result;
}
