/*
 * XREFs of ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0
 * Callers:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DCFC (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB1A8 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B7814 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002588 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0002C40 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C002DBF4 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0041830 (VidSchCreateHwQueue.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C009AAFC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C009B234 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00B843C (VidSchSetPagingNodePageDirectory.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00B853C (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B85BC (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00DD8D4 (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     VidSchSetHwQueueProgressFenceObject @ 0x1C00F5F50 (VidSchSetHwQueueProgressFenceObject.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitPagingProcessVaSpace(VIDMM_GLOBAL *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r14
  char v6; // cl
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  char v11; // cl
  __int64 v12; // r10
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  int HwQueue; // edi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  int v19; // eax
  unsigned __int64 v20; // rcx
  char v21; // r14
  __int64 v22; // rax
  void *v23; // rax
  unsigned int v24; // edx
  unsigned __int64 v25; // r8
  int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdi
  struct _MDL *FullMDL; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-51h] BYREF
  __int64 v45; // [rsp+80h] [rbp-49h]
  struct VIDMM_ALLOC *v46; // [rsp+88h] [rbp-41h] BYREF
  _OWORD v47[9]; // [rsp+90h] [rbp-39h] BYREF
  struct VIDMM_ALLOC *v48; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v49; // [rsp+138h] [rbp+6Fh] BYREF
  PVOID P; // [rsp+148h] [rbp+7Fh]

  v3 = a2;
  v5 = *((_QWORD *)this + 5028) + 1584LL * a2;
  v45 = v5;
  v6 = *(_BYTE *)(v5 + 436);
  if ( (v6 & 0xC) != 0xC && (!*(_BYTE *)(*((_QWORD *)this + 3) + 2728LL) || (v6 & 1) == 0) && *(_DWORD *)(v5 + 424) != 1
    || (v6 & 0x20) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)(dword_1C006E418 - 1) > 0x3D )
  {
    WdLogSingleEntry1(1LL, 7133LL);
    goto LABEL_60;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    memset((char *)v47 + 8, 0, 0x50uLL);
    LODWORD(v47[0]) = 118;
    DWORD1(v47[0]) = v3;
    HwQueue = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v47, 1);
    if ( HwQueue < 0 )
    {
      WdLogSingleEntry1(1LL, 7148LL);
      DxgkLogInternalTriageEvent(v42, 0x40000LL);
      return (unsigned int)HwQueue;
    }
    return 0LL;
  }
  *((_BYTE *)this + 40936) |= 0x10u;
  v8 = *((_QWORD *)this + a2 + 5052);
  if ( (_BYTE)a3 )
    CVirtualAddressAllocator::EvictRootPageTable(*((CVirtualAddressAllocator **)this + a2 + 5052), a2, 0);
  if ( *((_QWORD *)this + 5119) )
    goto LABEL_27;
  v9 = *((_DWORD *)this + 926);
  v10 = 0LL;
  v11 = 0;
  LOBYTE(v49) = 0;
  if ( v9 )
  {
    a3 = *((_QWORD *)this + 464);
    v12 = v9;
    do
    {
      v13 = *(_QWORD *)a3;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 80LL) & 0x1001) == 0 )
      {
        v33 = *(_QWORD *)(v13 + 48);
        if ( v33 <= v10 )
          v33 = v10;
        v10 = v33;
        if ( *(_DWORD *)(v13 + 376) == 0x10000 )
          v11 = 1;
      }
      a3 += 8LL;
      --v12;
    }
    while ( v12 );
    LOBYTE(v49) = v11;
  }
  v14 = v10 >> 2;
  if ( 1LL << dword_1C006E418 < v14 )
    v14 = 1LL << dword_1C006E418;
  v15 = v14;
  if ( v11 )
  {
    v34 = (*(_QWORD *)(*((_QWORD *)this + 5028) + 176LL) << 12) - 1LL;
    v15 = ~v34 & (v14 + v34);
    v14 = 2 * v15;
  }
  if ( v14 <= *(_QWORD *)(v8 + 16) )
  {
    HwQueue = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                (struct _KTHREAD **)v8,
                v14,
                a3,
                0LL,
                0LL,
                v11 != 0 ? 0x10000 : 4096,
                (unsigned __int64 *)this + 5118);
    if ( HwQueue < 0 )
    {
      WdLogSingleEntry1(1LL, v15);
      DxgkLogInternalTriageEvent(v36, 0x40000LL);
      goto LABEL_46;
    }
    CVirtualAddressAllocator::FreeVirtualAddressRange((CVirtualAddressAllocator *)v8, *((_QWORD *)this + 5118));
    v17 = v15 + *((_QWORD *)this + 5118);
    *((_QWORD *)this + 5119) = v17;
    if ( (_BYTE)v49 )
    {
      *((_QWORD *)this + 5120) = v17;
      *((_QWORD *)this + 5121) = v17 + v15;
    }
    v18 = v15 >> 2;
    if ( v18 > 0xFFFEFFFF )
      LODWORD(v18) = -65537;
    v19 = v18 + 0xFFFF;
    v5 = v45;
    *((_DWORD *)this + 10244) = v19 & 0xFFFF0000;
LABEL_27:
    v20 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
    v44 = v20;
    if ( !*(_BYTE *)(v20 + 55) )
      goto LABEL_28;
    v37 = (__int64 *)(*(_QWORD *)(v20 + 280) + 8 * v3);
    if ( *v37 )
      goto LABEL_28;
    v38 = *(_QWORD *)(v20 + 272);
    memset(v47, 0, 48);
    HwQueue = VidSchCreateHwQueue(0LL, *(_QWORD *)(v38 + 8 * v3), (__int64)v47, v37);
    if ( HwQueue >= 0 )
    {
      VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL) + 280LL) + 8 * v3),
        *((_QWORD *)this + v3 + 749),
        0LL);
LABEL_28:
      v21 = *(_BYTE *)(v5 + 437) & 2;
      v22 = operator new(136LL, 0x35356956u, 256LL);
      if ( v22 )
        v23 = (void *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                        v22,
                        0LL,
                        *((_QWORD *)this + 5118),
                        *((_QWORD *)this + 5119),
                        v3,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
      else
        v23 = 0LL;
      P = v23;
      v46 = 0LL;
      HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(v8, (__int64)v23, v3, -1, 0LL, 0LL, 0, &v46, 0LL);
      if ( HwQueue < 0 )
      {
        WdLogSingleEntry1(1LL, 7315LL);
      }
      else if ( v21
             && (v40 = *((_QWORD *)this + 5120),
                 v41 = P,
                 v48 = 0LL,
                 *((_QWORD *)P + 12) = v40,
                 v41[13] = *((_QWORD *)this + 5121),
                 HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                             v8,
                             (__int64)v41,
                             v3,
                             -3,
                             0LL,
                             0LL,
                             0,
                             &v48,
                             0LL),
                 HwQueue < 0) )
      {
        WdLogSingleEntry1(1LL, 7335LL);
      }
      else
      {
        HwQueue = VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
                    *(VIDMM_PAGE_DIRECTORY **)(32 * v3 + *(_QWORD *)(v8 + 120)),
                    (struct CVirtualAddressAllocator *)v8);
        if ( HwQueue >= 0 )
        {
          v24 = 0;
          v25 = (unsigned __int64)*((unsigned int *)this + v3 + 29) >> 12;
          v48 = (struct VIDMM_ALLOC *)v25;
          v49 = 0;
          while ( 1 )
          {
            v26 = 0;
            v27 = (__int64 *)(*((_QWORD *)this + v3 + 79) + 96LL);
            v28 = *v27;
            while ( (__int64 *)v28 != v27 )
            {
              if ( v24 == v26 )
                goto LABEL_37;
              v28 = *(_QWORD *)v28;
              ++v26;
            }
            v28 = 0LL;
LABEL_37:
            v29 = *(_QWORD *)(v28 + 64);
            if ( !*(_QWORD *)(v28 + 96) )
            {
              v30 = CVirtualAddressAllocator::MapVirtualAddressRange(
                      (_QWORD *)v8,
                      v28,
                      0LL,
                      4u,
                      v25 << 12,
                      0LL,
                      *((_QWORD *)this + 5118),
                      *((_QWORD *)this + 5119),
                      0x1000u,
                      (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*((_DWORD *)this + 8) < 0x6000u) | 2LL),
                      0LL,
                      v3,
                      0LL,
                      0);
              if ( !v30 )
              {
                HwQueue = -1073741823;
                WdLogSingleEntry1(1LL, 7395LL);
                goto LABEL_77;
              }
              *(_QWORD *)(v28 + 96) = *(_QWORD *)(v30 + 96);
            }
            v31 = *(_QWORD *)(v29 + 128);
            v43 = 0LL;
            FullMDL = VidMmGetFullMDL(*(struct _VIDMM_GLOBAL_ALLOC **)(v28 + 56), 0LL);
            HwQueue = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v8,
                        v31 - 24,
                        v3,
                        0,
                        0LL,
                        (__int64)FullMDL,
                        0,
                        (struct VIDMM_ALLOC **)&v43,
                        0LL);
            if ( HwQueue < 0 )
            {
              WdLogSingleEntry1(1LL, 7416LL);
              goto LABEL_77;
            }
            v24 = v49 + 1;
            v49 = v24;
            if ( v24 >= 2 )
              break;
            v25 = (unsigned __int64)v48;
          }
          if ( !*(_BYTE *)(v44 + 55)
            || *((_QWORD *)this + v3 + 813)
            || (HwQueue = VIDMM_GLOBAL::MapGpuVA(
                            (struct VIDMM_DEVICE **)this,
                            *((struct VIDMM_DEVICE **)this + 5049),
                            0LL,
                            (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + v3 + 749) + 56LL),
                            (unsigned __int64 *)this + v3 + 813,
                            1 << v3,
                            1),
                HwQueue >= 0)
            && (HwQueue = VIDMM_DEVICE::MapPagingQueueGpuVAs(*((VIDMM_DEVICE **)this + 5049), v3), HwQueue >= 0) )
          {
            v44 = 0LL;
            LODWORD(v48) = 0;
            v49 = 0;
            v43 = 0LL;
            CVirtualAddressAllocator::GetPageDirectoryData(
              (CVirtualAddressAllocator *)v8,
              v3,
              &v44,
              (unsigned int *)&v48,
              &v49,
              &v43);
            VidSchSetPagingNodePageDirectory(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), v3, (_DWORD)v48, v49, v43);
            *(_BYTE *)(v45 + 436) &= 0x9Fu;
          }
          goto LABEL_44;
        }
        WdLogSingleEntry1(1LL, 7345LL);
      }
LABEL_77:
      DxgkLogInternalTriageEvent(v39, 0x40000LL);
LABEL_44:
      if ( P )
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)P);
    }
LABEL_46:
    *((_BYTE *)this + 40936) &= ~0x10u;
    return (unsigned int)HwQueue;
  }
  *((_BYTE *)this + 40936) &= ~0x10u;
  WdLogSingleEntry2(1LL, v14, 7218LL);
LABEL_60:
  DxgkLogInternalTriageEvent(v35, 0x40000LL);
  return 3221225485LL;
}
