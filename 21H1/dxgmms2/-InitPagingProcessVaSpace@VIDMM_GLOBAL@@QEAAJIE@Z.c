/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959E0
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0023840 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0074C54 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009584C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4714 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001BA8 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0023744 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023BC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchCreateHwQueue @ 0x1C0039C80 (VidSchCreateHwQueue.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FAB8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0071194 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C0083E00 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C0084234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00868A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00879B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00B9528 (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BE55C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00BE644 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BEC60 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00D3C40 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x1C00D4860 (VidSchSetHwQueueProgressFenceObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  VIDMM_GLOBAL *v4; // rsi
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  int HwQueue; // edi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  int v31; // eax
  unsigned __int64 v32; // rcx
  char **v33; // r9
  __int64 v34; // rdx
  char v35; // r14
  PVOID v36; // rax
  VIDMM_MAPPED_VA_RANGE *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  VIDMM_MAPPED_VA_RANGE *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // edx
  unsigned __int64 v51; // r8
  int v52; // ecx
  __int64 *v53; // rax
  __int64 v54; // r14
  __int64 v55; // rdi
  struct VIDMM_MAPPED_VA_RANGE *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdi
  struct _MDL *FullMDL; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h]
  struct VIDMM_ALLOC *v67; // [rsp+80h] [rbp-80h] BYREF
  struct VIDMM_ALLOC *v68; // [rsp+88h] [rbp-78h] BYREF
  struct VIDMM_ALLOC *v69; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v71[3]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v72[36]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v73; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v74; // [rsp+178h] [rbp+78h] BYREF
  VIDMM_MAPPED_VA_RANGE *v75; // [rsp+188h] [rbp+88h]

  v3 = (unsigned int)a2;
  v4 = this;
  v5 = *((_QWORD *)this + 5027) + 1584LL * (unsigned int)a2;
  v66 = v5;
  LOBYTE(this) = *(_BYTE *)(v5 + 436);
  if ( ((unsigned __int8)this & 0xC) != 0xC
    && (!*(_BYTE *)(*((_QWORD *)v4 + 3) + 2608LL) || ((unsigned __int8)this & 1) == 0)
    && *(_DWORD *)(v5 + 424) != 1
    || ((unsigned __int8)this & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C00513A8 - 1) > 0x3D )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v25 + 24) = 7002LL;
    goto LABEL_33;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v4 + 8LL) )
  {
    memset(&v72[2], 0, 0x50uLL);
    v72[0] = 118;
    v72[1] = v3;
    HwQueue = VIDMM_GLOBAL::QueueSystemCommandAndWait(v4, (struct _VIDMM_SYSTEM_COMMAND *)v72, 1);
    if ( HwQueue < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7, v10);
      *(_QWORD *)(v11 + 24) = 7017LL;
      WdLogEvent5_WdAssertion(v11);
      return (unsigned int)HwQueue;
    }
    return 0LL;
  }
  *((_BYTE *)v4 + 40936) |= 0x10u;
  v13 = *((_QWORD *)v4 + (unsigned int)a2 + 5052);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)v4 + (unsigned int)a2 + 5052), a2, 0);
  if ( *((_QWORD *)v4 + 5119) )
    goto LABEL_40;
  v17 = (unsigned int)dword_1C00513A8;
  v14 = *((_DWORD *)v4 + 926);
  v15 = 0LL;
  v16 = 1LL << dword_1C00513A8;
  LOBYTE(v17) = 0;
  LOBYTE(v74) = 0;
  if ( v14 )
  {
    a3 = *((_QWORD *)v4 + 464);
    v18 = v14;
    do
    {
      v19 = *(_QWORD *)a3;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 80LL) & 0x1001) == 0 )
      {
        v20 = *(_QWORD *)(v19 + 48);
        if ( v20 <= v15 )
          v20 = v15;
        v15 = v20;
        if ( *(_DWORD *)(v19 + 376) == 0x10000 )
          LOBYTE(v17) = 1;
      }
      a3 += 8LL;
      --v18;
    }
    while ( v18 );
    LOBYTE(v74) = v17;
  }
  v21 = v15 >> 2;
  if ( v16 < v21 )
    v21 = 1LL << dword_1C00513A8;
  v22 = v21;
  if ( (_BYTE)v17 )
  {
    v23 = (*(_QWORD *)(*((_QWORD *)v4 + 5027) + 176LL) << 12) - 1LL;
    v24 = v21 + v23;
    v17 = ~v23;
    v22 = v17 & v24;
    LOBYTE(v17) = v74;
    v21 = 2 * v22;
  }
  if ( v21 <= *(_QWORD *)(v13 + 16) )
  {
    HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                (struct _KTHREAD **)v13,
                v21,
                a3,
                0LL,
                0LL,
                (_BYTE)v17 != 0 ? 0x10000 : 4096,
                (unsigned __int64 *)v4 + 5118);
    if ( HwQueue < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v27, v26, v28);
      *(_QWORD *)(v12 + 24) = v22;
      WdLogEvent5_WdAssertion(v12);
      goto LABEL_12;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v13, *((_QWORD *)v4 + 5118));
    v29 = v22 + *((_QWORD *)v4 + 5118);
    *((_QWORD *)v4 + 5119) = v29;
    if ( (_BYTE)v74 )
    {
      *((_QWORD *)v4 + 5120) = v29;
      *((_QWORD *)v4 + 5121) = v29 + v22;
    }
    v30 = v22 >> 2;
    if ( v30 > 0xFFFEFFFF )
      LODWORD(v30) = -65537;
    v31 = v30 + 0xFFFF;
    v5 = v66;
    *((_DWORD *)v4 + 10244) = v31 & 0xFFFF0000;
LABEL_40:
    v32 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 624LL);
    v65 = v32;
    if ( !*(_BYTE *)(v32 + 55) )
      goto LABEL_44;
    v33 = (char **)(*(_QWORD *)(v32 + 272) + 8 * v3);
    if ( *v33 )
      goto LABEL_44;
    v34 = *(_QWORD *)(v32 + 264);
    memset(v71, 0, sizeof(v71));
    HwQueue = VidSchCreateHwQueue(0LL, *(_QWORD *)(v34 + 8 * v3), (__int64)v71, v33);
    if ( HwQueue >= 0 )
    {
      VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 624LL) + 272LL) + 8 * v3),
        *((_QWORD *)v4 + v3 + 747),
        0LL);
LABEL_44:
      v35 = *(_BYTE *)(v5 + 437) & 2;
      v36 = operator new[](0x88uLL, 0x35356956u, PagedPool);
      if ( v36 )
        v37 = (VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                         (__int64)v36,
                                         0LL,
                                         *((_QWORD *)v4 + 5118),
                                         *((_QWORD *)v4 + 5119),
                                         v3,
                                         0LL,
                                         0LL,
                                         0,
                                         0LL,
                                         0LL,
                                         0LL,
                                         0LL);
      else
        v37 = 0LL;
      v75 = v37;
      v67 = 0LL;
      HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  v13,
                  (__int64)v37,
                  (unsigned int)v3,
                  -1,
                  0LL,
                  0LL,
                  0,
                  &v67,
                  0LL);
      if ( HwQueue >= 0 )
      {
        if ( v35
          && (v42 = *((_QWORD *)v4 + 5120),
              v43 = v75,
              v68 = 0LL,
              *((_QWORD *)v75 + 12) = v42,
              *((_QWORD *)v43 + 13) = *((_QWORD *)v4 + 5121),
              HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                          v13,
                          (__int64)v43,
                          (unsigned int)v3,
                          -3,
                          0LL,
                          0LL,
                          0,
                          &v68,
                          0LL),
              HwQueue < 0) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v45, v44, v46);
          *(_QWORD *)(v41 + 24) = 7204LL;
        }
        else
        {
          HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                      *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v13 + 120)),
                      (struct CVirtualAddressAllocator *)v13);
          if ( HwQueue >= 0 )
          {
            v50 = 0;
            v51 = (unsigned __int64)*((unsigned int *)v4 + v3 + 29) >> 12;
            v73 = v51;
            v74 = 0;
            while ( 1 )
            {
              v52 = 0;
              v53 = (__int64 *)(*((_QWORD *)v4 + v3 + 79) + 96LL);
              v54 = *v53;
              while ( (__int64 *)v54 != v53 )
              {
                if ( v50 == v52 )
                  goto LABEL_60;
                v54 = *(_QWORD *)v54;
                ++v52;
              }
              v54 = 0LL;
LABEL_60:
              v55 = *(_QWORD *)(v54 + 64);
              if ( !*(_QWORD *)(v54 + 96) )
              {
                v56 = CVirtualAddressAllocator::MapVirtualAddressRange(
                        (struct VIDMM_VAD **)v13,
                        v54,
                        0LL,
                        4,
                        v51 << 12,
                        0LL,
                        *((_QWORD *)v4 + 5118),
                        *((_QWORD *)v4 + 5119),
                        0x1000u,
                        (*((_DWORD *)v4 + 8) < 0x6000u) | 2LL,
                        0LL,
                        v3,
                        0LL);
                if ( !v56 )
                {
                  HwQueue = -1073741823;
                  v41 = WdLogNewEntry5_WdAssertion(v58, v57, v59);
                  *(_QWORD *)(v41 + 24) = 7264LL;
                  goto LABEL_73;
                }
                *(_QWORD *)(v54 + 96) = *((_QWORD *)v56 + 12);
              }
              v60 = *(_QWORD *)(v55 + 128);
              v69 = 0LL;
              FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v54 + 56), 0LL);
              HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                          v13,
                          v60 - 24,
                          (unsigned int)v3,
                          0,
                          0LL,
                          (__int64)FullMDL,
                          0,
                          &v69,
                          0LL);
              if ( HwQueue < 0 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v63, v62, v64);
                *(_QWORD *)(v41 + 24) = 7285LL;
                goto LABEL_73;
              }
              v50 = v74 + 1;
              v74 = v50;
              if ( v50 >= 2 )
                break;
              v51 = v73;
            }
            if ( !*(_BYTE *)(v65 + 55)
              || *((_QWORD *)v4 + v3 + 811)
              || (HwQueue = VIDMM_GLOBAL::MapGpuVA(
                              (struct VIDMM_DEVICE **)v4,
                              *((struct VIDMM_DEVICE **)v4 + 5049),
                              0LL,
                              (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)v4 + v3 + 747) + 56LL),
                              (unsigned __int64 *)v4 + v3 + 811,
                              1 << v3,
                              1),
                  HwQueue >= 0)
              && (HwQueue = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)v4 + 5049), v3), HwQueue >= 0) )
            {
              v70 = 0LL;
              LODWORD(v73) = 0;
              v74 = 0;
              v65 = 0LL;
              CVirtualAddressAllocator::GetPageDirectoryData(
                (CVirtualAddressAllocator *)v13,
                v3,
                &v70,
                (unsigned int *)&v73,
                &v74,
                &v65);
              VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)v4 + 2) + 624LL), v3, v73, v74, v65);
              *(_BYTE *)(v66 + 436) &= 0x9Fu;
            }
            goto LABEL_74;
          }
          v41 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
          *(_QWORD *)(v41 + 24) = 7214LL;
        }
      }
      else
      {
        v41 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
        *(_QWORD *)(v41 + 24) = 7184LL;
      }
LABEL_73:
      WdLogEvent5_WdAssertion(v41);
LABEL_74:
      if ( v75 )
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v75);
    }
LABEL_12:
    *((_BYTE *)v4 + 40936) &= ~0x10u;
    return (unsigned int)HwQueue;
  }
  *((_BYTE *)v4 + 40936) &= ~0x10u;
  v25 = WdLogNewEntry5_WdAssertion(v17, v16, a3);
  *(_QWORD *)(v25 + 24) = v21;
  *(_QWORD *)(v25 + 32) = 7087LL;
LABEL_33:
  WdLogEvent5_WdAssertion(v25);
  return 3221225485LL;
}
