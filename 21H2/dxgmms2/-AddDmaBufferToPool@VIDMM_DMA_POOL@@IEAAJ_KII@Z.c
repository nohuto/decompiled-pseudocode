/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0098370 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00A9964 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00E0B7C (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x1C002FF48 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007B820 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0086C50 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00932B0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C009B124 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C009E81C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B8718 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // rsi
  SIZE_T v6; // rdi
  int OneAllocation; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  unsigned int *v14; // r14
  unsigned int v15; // r8d
  VIDMM_GLOBAL *v16; // r10
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  SIZE_T v21; // r13
  VIDMM_GLOBAL *v22; // rcx
  struct VIDMM_ALLOC ***v23; // r8
  struct VIDMM_ALLOC **v24; // rdi
  struct VIDMM_DEVICE *v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rax
  VIDMM_GLOBAL *v32; // rcx
  struct _VIDSCH_SYNC_OBJECT **v33; // r13
  int Resident; // eax
  VIDMM_GLOBAL *v35; // rcx
  __int64 v36; // r8
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v47; // r10
  unsigned int v48; // r11d
  struct CVirtualAddressAllocator *v49; // rdi
  __int64 v50; // r9
  struct _KEVENT *v51; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v52; // r8
  void *v53; // rcx
  volatile signed __int32 *v54; // rax
  volatile signed __int32 *v55; // rsi
  _QWORD *v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rax
  unsigned int **v59; // rax
  __int64 v60; // rdx
  struct _ERESOURCE *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v67; // [rsp+B0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v68; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v69; // [rsp+C0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v70; // [rsp+C8h] [rbp+17h] BYREF
  unsigned __int8 v71; // [rsp+118h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+6Fh]
  unsigned int v73; // [rsp+130h] [rbp+7Fh]

  v73 = a4;
  NumberOfBytes = a2;
  v4 = a4;
  LODWORD(v5) = a3;
  v6 = a2;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v9 = *((_QWORD *)this + 2);
    if ( !v9
      || (v10 = *(_QWORD *)(v9 + 24), *(_DWORD *)(v10 + 432) != 2)
      && (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 424LL) & 4) == 0 )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C006E7EC, 1u);
        WdLogSingleEntry1(6LL, 1101LL);
LABEL_11:
        DxgkLogInternalTriageEvent(v11, 262145LL);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 && !(_DWORD)v5 )
  {
    WdLogSingleEntry1(1LL, 1112LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
    return 3221225485LL;
  }
  v14 = (unsigned int *)operator new(184LL, 0x32326956u, 64LL);
  if ( !v14 )
  {
    _InterlockedAdd(&dword_1C006E750, 1u);
    WdLogSingleEntry1(6LL, 1124LL);
    goto LABEL_11;
  }
  v15 = *((_DWORD *)this + 9);
  if ( !v15 )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 2088LL);
    v14[20] = 2;
    v37 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                    v6,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    v36,
                    (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                    1028,
                    0x80000000);
    *((_QWORD *)v14 + 9) = v37;
    if ( !v37 )
    {
      _InterlockedAdd(&dword_1C006E764, 1u);
      WdLogSingleEntry1(6LL, 1270LL);
      goto LABEL_42;
    }
    *((PHYSICAL_ADDRESS *)v14 + 11) = MmGetPhysicalAddress(v37);
LABEL_35:
    if ( (_DWORD)v5 )
    {
      v26 = 3;
      if ( (unsigned int)v5 > 3 )
        v26 = v5;
      v5 = v26;
      v27 = 8LL * v26;
      if ( !is_mul_ok(v26, 8uLL) )
        v27 = -1LL;
      v28 = operator new[](v27, 0x33326956u, 64LL);
      *((_QWORD *)v14 + 13) = v28;
      if ( !v28 )
      {
        _InterlockedAdd(&dword_1C006E770, 1u);
        WdLogSingleEntry1(6LL, 1297LL);
        goto LABEL_42;
      }
      v38 = 24 * v5;
      if ( !is_mul_ok(v5, 0x18uLL) )
        v38 = -1LL;
      v39 = operator new[](v38, 0x34326956u, 64LL);
      *((_QWORD *)v14 + 14) = v39;
      if ( !v39 )
      {
        _InterlockedAdd(&dword_1C006E768, 1u);
        WdLogSingleEntry1(6LL, 1310LL);
        goto LABEL_42;
      }
    }
    if ( !v4 )
      goto LABEL_58;
    v40 = 24LL * v4;
    if ( !is_mul_ok(v4, 0x18uLL) )
      v40 = -1LL;
    v41 = operator new[](v40, 0x35326956u, 256LL);
    *((_QWORD *)v14 + 15) = v41;
    if ( v41 )
    {
LABEL_58:
      v42 = *((_DWORD *)this + 22);
      if ( !v42 || (v43 = operator new[](v42, 0x32336956u, 64LL), (*((_QWORD *)v14 + 16) = v43) != 0LL) )
      {
        if ( (*((_BYTE *)this + 32) & 1) != 0 )
        {
          v44 = operator new[](0x2000LL, 0x37336956u, 256LL);
          *((_QWORD *)v14 + 22) = v44;
          if ( !v44 )
          {
            _InterlockedAdd(&dword_1C006E774, 1u);
            WdLogSingleEntry1(6LL, 1356LL);
            goto LABEL_42;
          }
          *((_QWORD *)v14 + 21) = 0LL;
        }
        *((_QWORD *)v14 + 5) = v6;
        v14[12] = v5;
        v14[13] = v4;
        *((_QWORD *)v14 + 17) = this;
        *((_QWORD *)v14 + 20) = 0LL;
        if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this + 3) + 439LL) )
          {
            *((_QWORD *)v14 + 12) = *(_QWORD *)(*((_QWORD *)v14 + 8) + 144LL);
          }
          else
          {
            v45 = *(_QWORD *)this;
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
                                        *((_DWORD *)this + 2));
            v21 = NumberOfBytes;
            v49 = VirtualAddressAllocator;
            if ( !VirtualAddressAllocator )
            {
              OneAllocation = -1073741801;
              goto LABEL_70;
            }
            v54 = (volatile signed __int32 *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                               VirtualAddressAllocator,
                                               *((_QWORD *)v14 + 8),
                                               0LL,
                                               1u,
                                               NumberOfBytes,
                                               0LL,
                                               *(_QWORD *)(v47 + 2640),
                                               *(_QWORD *)(v47 + 2648),
                                               0x1000u,
                                               (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)((*(_DWORD *)(v45 + 32) < 0x6000u) | 0x12LL),
                                               0LL,
                                               v48,
                                               0LL,
                                               1);
            v55 = v54;
            if ( !v54 )
              goto LABEL_70;
            *((_QWORD *)v14 + 12) = *((_QWORD *)v54 + 12);
            OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                              *(VIDMM_GLOBAL **)this,
                              v49,
                              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 8) + 8LL) + 80LL)
                                                          + 176LL * *((unsigned int *)this + 2)),
                              (struct VIDMM_MAPPED_VA_RANGE *)v54,
                              KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                              0LL,
                              0LL,
                              0LL);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v55, v49);
            if ( OneAllocation < 0 )
              goto LABEL_70;
          }
        }
        *((_DWORD *)this + 8) &= ~8u;
        *((_DWORD *)this + 32) += v14[10];
        v56 = (_QWORD *)*((_QWORD *)this + 2);
        *((_DWORD *)this + 33) += 24 * v14[12];
        *((_DWORD *)this + 34) += 24 * v14[13];
        if ( v56 )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(v56[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v56 + 24LL) + 240LL));
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v57 + 440, 0LL);
          v58 = *((_QWORD *)v14 + 5);
          ++*(_DWORD *)(v57 + 448);
          *(_QWORD *)(v57 + 456) += v58;
          *(_DWORD *)(v57 + 464) += 24 * v14[12];
          *(_DWORD *)(v57 + 468) += 24 * v14[13];
          ExReleasePushLockExclusiveEx(v57 + 440, 0LL);
          KeLeaveCriticalRegion();
        }
        _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v14 + 5));
        _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * v14[12]);
        _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * v14[13]);
        ++*((_DWORD *)this + 23);
        VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
        v59 = (unsigned int **)((char *)this + 96);
        v60 = *((_QWORD *)this + 12);
        if ( *(VIDMM_DMA_POOL **)(v60 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
          __fastfail(3u);
        v61 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
        *(_QWORD *)v14 = v60;
        *((_QWORD *)v14 + 1) = v59;
        *(_QWORD *)(v60 + 8) = v14;
        *v59 = v14;
        ExReleaseResourceLite(v61);
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v63, v62, v64, v65) + 24) = v14;
        if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
          McTemplateK0pppxxxp_EtwWriteTransfer(
            v14[13],
            v14[12],
            *(_QWORD *)this,
            *((_QWORD *)this + 3),
            *(_QWORD *)(*(_QWORD *)this + 24LL),
            v14,
            *((_QWORD *)v14 + 5),
            v14[12],
            v14[13],
            *((_QWORD *)v14 + 7));
        return (unsigned int)OneAllocation;
      }
      _InterlockedAdd(&dword_1C006E7CC, 1u);
      WdLogSingleEntry1(6LL, 1339LL);
    }
    else
    {
      _InterlockedAdd(&dword_1C006E76C, 1u);
      WdLogSingleEntry1(6LL, 1326LL);
    }
LABEL_42:
    DxgkLogInternalTriageEvent(v29, 262145LL);
    OneAllocation = -1073741801;
    goto LABEL_28;
  }
  v16 = *(VIDMM_GLOBAL **)this;
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    v17 = ((~*(_BYTE *)(1584LL * *((unsigned int *)this + 2) + *((_QWORD *)v16 + 5028) + 436) & 4) << 13) | 0x10000040;
  else
    v17 = *(_BYTE *)(*((_QWORD *)this + 3) + 438LL) != 0 ? 72 : 32840;
  v18 = *(_DWORD *)(*((_QWORD *)v16 + 3) + 436LL);
  if ( (v18 & 8) != 0 || (v18 & 0x10) != 0 )
    v17 |= 4u;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v16,
                    *((_QWORD *)this + 2),
                    *((_DWORD *)this + 2),
                    v6,
                    v6,
                    0,
                    v15,
                    0,
                    0,
                    (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v17,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    0,
                    0LL,
                    (__int64 *)v14 + 7);
  if ( OneAllocation >= 0 )
  {
    v22 = *(VIDMM_GLOBAL **)this;
    v23 = (struct VIDMM_ALLOC ***)*((_QWORD *)v14 + 7);
    v24 = (struct VIDMM_ALLOC **)(v14 + 16);
    v25 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 2);
    v71 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(v22, v25, v23, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)v14 + 8, &v71);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C006E75C, 1u);
      WdLogSingleEntry1(6LL, 1207LL);
      goto LABEL_26;
    }
    if ( (*((_DWORD *)*v24 + 7) & 3) == 0 )
    {
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, *v24);
      }
      else
      {
        v30 = 176LL * *((unsigned int *)this + 2);
        v31 = *((_QWORD *)*v24 + 1);
        v68 = *v24;
        v32 = *(VIDMM_GLOBAL **)this;
        v66 = 0LL;
        v33 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v31 + 80) + v30);
        v67 = 0LL;
        Resident = VIDMM_GLOBAL::MakeResident(v32, (struct VIDMM_PAGING_QUEUE *)v33, &v68, 1uLL, 3, &v66, &v67);
        OneAllocation = Resident;
        if ( Resident == 259 )
        {
          v35 = *(VIDMM_GLOBAL **)this;
          v70 = v33[11];
          v69 = v66;
          VIDMM_GLOBAL::WaitForFences(v35, &v70, &v69, 1u, 0LL);
          OneAllocation = 0;
        }
        else if ( Resident < 0 )
        {
          WdLogSingleEntry1(1LL, *v24);
          v20 = 0x40000LL;
          goto LABEL_27;
        }
      }
    }
    v4 = v73;
    v6 = NumberOfBytes;
    goto LABEL_35;
  }
  _InterlockedAdd(&dword_1C006E758, 1u);
  WdLogSingleEntry1(6LL, 1187LL);
LABEL_26:
  v20 = 262145LL;
LABEL_27:
  DxgkLogInternalTriageEvent(v19, v20);
LABEL_28:
  v21 = NumberOfBytes;
LABEL_70:
  operator delete(*((void **)v14 + 22));
  operator delete(*((void **)v14 + 16));
  operator delete(*((void **)v14 + 15));
  operator delete(*((void **)v14 + 14));
  operator delete(*((void **)v14 + 13));
  v51 = (struct _KEVENT *)*((_QWORD *)v14 + 8);
  if ( v51 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v51, 0LL, 0LL, 0, 0LL);
  v52 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v14 + 7);
  if ( v52 )
  {
    LOBYTE(v50) = 1;
    VIDMM_GLOBAL::DestroyOneAllocation(*(struct _KTHREAD ***)this, *((struct VIDMM_DEVICE **)this + 2), v52, v50);
  }
  v53 = (void *)*((_QWORD *)v14 + 9);
  if ( v53 )
    MmFreeContiguousMemorySpecifyCache(v53, v21, (MEMORY_CACHING_TYPE)v14[20]);
  operator delete(v14);
  return (unsigned int)OneAllocation;
}
