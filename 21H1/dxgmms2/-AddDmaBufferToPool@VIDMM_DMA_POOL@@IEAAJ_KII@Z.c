/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0080810 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008AD58 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00BC524 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x1C0025E94 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006520C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00659D0 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00689A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0069C20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C006A500 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C006AC20 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BDB0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FAB8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007080C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C008B4E0 (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0096680 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(VIDMM_DMA_POOL *this, SIZE_T a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  int OneAllocation; // r12d
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // r14
  int v11; // r8d
  VIDMM_GLOBAL *v12; // r10
  int v13; // eax
  int v14; // edx
  __int64 v15; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r8
  struct VIDMM_DEVICE *v17; // rdx
  struct _VIDMM_MULTI_ALLOC **v18; // rsi
  DXGADAPTER **v19; // rcx
  __int64 v20; // rcx
  struct VIDMM_ALLOC *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  VIDMM_GLOBAL *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  VIDMM_GLOBAL *v28; // rcx
  unsigned int v29; // ecx
  SIZE_T v30; // rax
  PVOID v31; // rax
  __int64 v32; // rcx
  SIZE_T v33; // rax
  PVOID v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  PVOID v37; // rax
  __int64 v38; // rcx
  SIZE_T v39; // rsi
  unsigned int v40; // r9d
  _QWORD *v41; // r8
  __int64 v42; // rdi
  unsigned int **v43; // rax
  __int64 v44; // rdx
  struct _ERESOURCE *v45; // rcx
  __int64 v46; // rcx
  __int64 v48; // rsi
  SIZE_T v49; // rax
  PVOID v50; // rax
  __int64 v51; // rcx
  struct VIDMM_VAD **VirtualAddressAllocator; // rdi
  unsigned int v53; // r8d
  __int64 v54; // r10
  __int64 v55; // r11
  struct VIDMM_MAPPED_VA_RANGE *v56; // rax
  PVOID v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  void *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  struct _KEVENT *v69; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v70; // r8
  void *v71; // rcx
  unsigned __int64 v72; // [rsp+A8h] [rbp-9h] BYREF
  unsigned __int64 v73; // [rsp+B0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v74; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v75; // [rsp+C0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v76; // [rsp+C8h] [rbp+17h] BYREF
  unsigned __int8 v77; // [rsp+118h] [rbp+67h] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+6Fh]
  unsigned int v79; // [rsp+130h] [rbp+7Fh]

  v79 = a4;
  NumberOfBytes = a2;
  LODWORD(v4) = a3;
  OneAllocation = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v59 = *((_QWORD *)this + 2);
    if ( !v59
      || (v60 = *(_QWORD *)(v59 + 24), *(_DWORD *)(v60 + 432) != 2) && !*(_BYTE *)(*(_QWORD *)(v60 + 40) + 346LL) )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C005173C, 1u);
        v61 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v61 + 24) = 1100LL;
LABEL_67:
        WdLogEvent5_WdLowResource(v61);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) != 0 || (_DWORD)v4 )
  {
    v8 = (unsigned int *)operator new[](0xB8uLL, 0x32326956u, (POOL_TYPE)512);
    v10 = v8;
    if ( !v8 )
    {
      _InterlockedAdd(&dword_1C00516A0, 1u);
      v61 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v61 + 24) = 1123LL;
      goto LABEL_67;
    }
    memset(v8, 0, 0xB8uLL);
    v11 = *((_DWORD *)this + 9);
    if ( !v11 )
    {
      v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1968LL);
      v10[20] = 2;
      v66 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                      a2,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      v65,
                      (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                      1028,
                      0x80000000);
      *((_QWORD *)v10 + 9) = v66;
      if ( !v66 )
      {
        _InterlockedAdd(&dword_1C00516B4, 1u);
        v68 = WdLogNewEntry5_WdLowResource(v67);
        *(_QWORD *)(v68 + 24) = 1268LL;
        goto LABEL_83;
      }
      *((PHYSICAL_ADDRESS *)v10 + 11) = MmGetPhysicalAddress(v66);
LABEL_20:
      if ( (_DWORD)v4 )
      {
        v29 = 3;
        if ( (unsigned int)v4 > 3 )
          v29 = v4;
        v4 = v29;
        v30 = 8LL * v29;
        if ( !is_mul_ok(v29, 8uLL) )
          v30 = -1LL;
        v31 = operator new[](v30, 0x33326956u, (POOL_TYPE)512);
        *((_QWORD *)v10 + 13) = v31;
        if ( !v31 )
        {
          _InterlockedAdd(&dword_1C00516C0, 1u);
          v68 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v68 + 24) = 1295LL;
          goto LABEL_83;
        }
        v33 = 24 * v4;
        if ( !is_mul_ok(v4, 0x18uLL) )
          v33 = -1LL;
        v34 = operator new[](v33, 0x34326956u, (POOL_TYPE)512);
        *((_QWORD *)v10 + 14) = v34;
        if ( !v34 )
        {
          _InterlockedAdd(&dword_1C00516B8, 1u);
          v68 = WdLogNewEntry5_WdLowResource(v35);
          *(_QWORD *)(v68 + 24) = 1308LL;
          goto LABEL_83;
        }
        memset(v34, 0, 24 * v4);
      }
      if ( v79 )
      {
        v48 = v79;
        v49 = 24LL * v79;
        if ( !is_mul_ok(v79, 0x18uLL) )
          v49 = -1LL;
        v50 = operator new[](v49, 0x35326956u, PagedPool);
        *((_QWORD *)v10 + 15) = v50;
        if ( !v50 )
        {
          _InterlockedAdd(&dword_1C00516BC, 1u);
          v68 = WdLogNewEntry5_WdLowResource(v51);
          *(_QWORD *)(v68 + 24) = 1325LL;
          goto LABEL_83;
        }
        memset(v50, 0, 24 * v48);
      }
      v36 = *((_DWORD *)this + 22);
      if ( !v36 )
      {
LABEL_34:
        if ( (*((_BYTE *)this + 32) & 1) == 0 )
        {
LABEL_35:
          v39 = NumberOfBytes;
          v40 = v79;
          *((_QWORD *)v10 + 5) = NumberOfBytes;
          v10[12] = v4;
          v10[13] = v40;
          *((_QWORD *)v10 + 17) = this;
          *((_QWORD *)v10 + 20) = 0LL;
          if ( (*((_DWORD *)this + 8) & 0x10) == 0 )
          {
LABEL_38:
            *((_DWORD *)this + 8) &= ~8u;
            *((_DWORD *)this + 32) += v10[10];
            v41 = (_QWORD *)*((_QWORD *)this + 2);
            *((_DWORD *)this + 33) += 24 * v10[12];
            *((_DWORD *)this + 34) += 24 * v10[13];
            if ( v41 )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(v41[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v41 + 24LL) + 232LL));
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v42 + 440, 0LL);
              *(_QWORD *)(v42 + 456) += *((_QWORD *)v10 + 5);
              ++*(_DWORD *)(v42 + 448);
              *(_DWORD *)(v42 + 464) += 24 * v10[12];
              *(_DWORD *)(v42 + 468) += 24 * v10[13];
              ExReleasePushLockExclusiveEx(v42 + 440, 0LL);
              KeLeaveCriticalRegion();
            }
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v10 + 5));
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * v10[12]);
            _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * v10[13]);
            ++*((_DWORD *)this + 23);
            VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
            v43 = (unsigned int **)((char *)this + 96);
            v44 = *((_QWORD *)this + 12);
            if ( *(VIDMM_DMA_POOL **)(v44 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
              __fastfail(3u);
            v45 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
            *(_QWORD *)v10 = v44;
            *((_QWORD *)v10 + 1) = v43;
            *(_QWORD *)(v44 + 8) = v10;
            *v43 = v10;
            ExReleaseResourceLite(v45);
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v46) + 24) = v10;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pppxxxp_EtwWriteTransfer(
                  v10[13],
                  v10[12],
                  *(_QWORD *)this,
                  *((_QWORD *)this + 3),
                  *(_QWORD *)(*(_QWORD *)this + 24LL),
                  v10,
                  *((_QWORD *)v10 + 5),
                  v10[12],
                  v10[13],
                  *((_QWORD *)v10 + 7));
            }
            return (unsigned int)OneAllocation;
          }
          if ( *(_BYTE *)(*((_QWORD *)this + 3) + 455LL) )
          {
            *((_QWORD *)v10 + 12) = *(_QWORD *)(*((_QWORD *)v10 + 8) + 144LL);
            goto LABEL_38;
          }
          VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                           *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 232LL),
                                                           *((_DWORD *)this + 2));
          if ( VirtualAddressAllocator )
          {
            v56 = CVirtualAddressAllocator::MapVirtualAddressRange(
                    VirtualAddressAllocator,
                    *((_QWORD *)v10 + 8),
                    0LL,
                    1,
                    v39,
                    0LL,
                    *(_QWORD *)(v54 + 2520),
                    *(_QWORD *)(v54 + 2528),
                    0x1000u,
                    (*(_DWORD *)(v55 + 32) < 0x6000u) | 0x12LL,
                    0LL,
                    v53,
                    0LL);
            if ( v56 )
            {
              *((_QWORD *)v10 + 12) = *((_QWORD *)v56 + 12);
              OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                                *(VIDMM_GLOBAL **)this,
                                (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                                (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 8) + 8LL) + 72LL)
                                                            + 176LL * *((unsigned int *)this + 2)),
                                v56,
                                KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                                0LL,
                                0LL,
                                0LL);
              if ( OneAllocation >= 0 )
                goto LABEL_38;
            }
          }
          else
          {
            OneAllocation = -1073741801;
          }
LABEL_85:
          operator delete(*((void **)v10 + 22));
          operator delete(*((void **)v10 + 16));
          operator delete(*((void **)v10 + 15));
          operator delete(*((void **)v10 + 14));
          operator delete(*((void **)v10 + 13));
          v69 = (struct _KEVENT *)*((_QWORD *)v10 + 8);
          if ( v69 )
            VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v69, 0LL, 0, 0, 0LL);
          v70 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v10 + 7);
          if ( v70 )
            VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v70, 1);
          v71 = (void *)*((_QWORD *)v10 + 9);
          if ( v71 )
            MmFreeContiguousMemorySpecifyCache(v71, v39, (MEMORY_CACHING_TYPE)v10[20]);
          operator delete(v10);
          return (unsigned int)OneAllocation;
        }
        v57 = operator new[](0x2000uLL, 0x37336956u, PagedPool);
        *((_QWORD *)v10 + 22) = v57;
        if ( v57 )
        {
          memset(v57, 0, 0x2000uLL);
          *((_QWORD *)v10 + 21) = 0LL;
          goto LABEL_35;
        }
        _InterlockedAdd(&dword_1C00516C4, 1u);
        v68 = WdLogNewEntry5_WdLowResource(v58);
        *(_QWORD *)(v68 + 24) = 1357LL;
        goto LABEL_83;
      }
      v37 = operator new[](v36, 0x32336956u, (POOL_TYPE)512);
      *((_QWORD *)v10 + 16) = v37;
      if ( v37 )
      {
        memset(v37, 0, *((unsigned int *)this + 22));
        goto LABEL_34;
      }
      _InterlockedAdd(&dword_1C005171C, 1u);
      v68 = WdLogNewEntry5_WdLowResource(v38);
      *(_QWORD *)(v68 + 24) = 1339LL;
LABEL_83:
      WdLogEvent5_WdLowResource(v68);
      OneAllocation = -1073741801;
      goto LABEL_84;
    }
    v12 = *(VIDMM_GLOBAL **)this;
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      v13 = ((~*(_BYTE *)(1584LL * *((unsigned int *)this + 2) + *((_QWORD *)v12 + 5027) + 436) & 4) << 13) | 0x10000040;
    else
      v13 = *(_BYTE *)(*((_QWORD *)this + 3) + 454LL) != 0 ? 72 : 32840;
    v14 = *(_DWORD *)(*((_QWORD *)v12 + 3) + 348LL);
    if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
      v13 |= 4u;
    OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                      v12,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((_DWORD *)this + 2),
                      a2,
                      a2,
                      0,
                      v11,
                      0,
                      0,
                      (struct _DXGK_ALLOCATIONINFOFLAGS)v13,
                      0LL,
                      0LL,
                      0LL,
                      0xA0000000,
                      0,
                      0LL,
                      0,
                      0LL,
                      (struct _D3DDDI_SEGMENTPREFERENCE **)v10 + 7);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C00516A8, 1u);
      v63 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v63 + 24) = 1185LL;
    }
    else
    {
      v16 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v10 + 7);
      v17 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 2);
      v18 = (struct _VIDMM_MULTI_ALLOC **)(v10 + 16);
      v19 = *(DXGADAPTER ***)this;
      v77 = 0;
      OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(v19, v17, v16, 0LL, 0, 0LL, (struct VIDMM_ALLOC **)v10 + 8, &v77);
      if ( OneAllocation >= 0 )
      {
        v21 = *v18;
        if ( (*((_DWORD *)*v18 + 7) & 3) != 0 )
          goto LABEL_20;
        if ( (*((_BYTE *)this + 32) & 1) != 0 )
        {
          VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, v21);
        }
        else
        {
          v22 = *((_QWORD *)v21 + 1);
          v23 = 176LL * *((unsigned int *)this + 2);
          v74 = *v18;
          v75 = *(_QWORD *)(v22 + 72) + v23;
          v24 = *(VIDMM_GLOBAL **)this;
          v72 = 0LL;
          v73 = 0LL;
          OneAllocation = VIDMM_GLOBAL::MakeResident(v24, (struct VIDMM_PAGING_QUEUE *)v75, &v74, 1uLL, 3, &v72, &v73);
          if ( OneAllocation == 259 )
          {
            v28 = *(VIDMM_GLOBAL **)this;
            v76 = *(struct _VIDSCH_SYNC_OBJECT **)(v75 + 88);
            v75 = v72;
            VIDMM_GLOBAL::WaitForFences(v28, &v76, &v75, 1u, 0LL);
            OneAllocation = 0;
          }
        }
        if ( OneAllocation >= 0 )
          goto LABEL_20;
        v64 = WdLogNewEntry5_WdAssertion(v26, v25, v27);
        *(_QWORD *)(v64 + 24) = *v18;
        WdLogEvent5_WdAssertion(v64);
LABEL_84:
        v39 = NumberOfBytes;
        goto LABEL_85;
      }
      _InterlockedAdd(&dword_1C00516AC, 1u);
      v63 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v63 + 24) = 1205LL;
    }
    WdLogEvent5_WdLowResource(v63);
    goto LABEL_84;
  }
  v62 = WdLogNewEntry5_WdAssertion(this, a2, a3);
  *(_QWORD *)(v62 + 24) = 1111LL;
  WdLogEvent5_WdAssertion(v62);
  return 3221225485LL;
}
