/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00892DC
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00888CC (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0089094 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z @ 0x1C00148A0 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D34C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00788B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  VIDMM_GLOBAL *v4; // rbx
  unsigned int v5; // r11d
  struct VIDMM_DEVICE *v6; // r15
  unsigned __int64 v8; // r14
  __int64 v10; // rsi
  char v11; // al
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D v12; // r9d
  unsigned int v13; // r10d
  char v14; // r11
  unsigned int v15; // ecx
  struct _VIDMM_GLOBAL_ALLOC **v16; // rsi
  __int64 v17; // rcx
  int OneAllocation; // r14d
  PRKPROCESS *v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[8]; // [rsp+A0h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v4 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v5 = *(_DWORD *)this;
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 13);
  v8 = a3;
  v10 = *((_QWORD *)v4 + 5027) + 1584LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v25[0] = 0;
  v11 = VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(v4, (v5 >> 7) & 0x1F, a4);
  v15 = *(_DWORD *)(v10 + 48LL * (v14 & 7) + 100);
  v16 = (struct _VIDMM_GLOBAL_ALLOC **)((char *)this + 16);
  if ( !v15 )
    v15 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v4,
                    (__int64)v6,
                    v13,
                    v8,
                    v8,
                    v15,
                    1 << v11,
                    0,
                    0,
                    v12,
                    0,
                    0LL,
                    0LL,
                    0LL,
                    0xA0000000,
                    0,
                    0LL,
                    1u,
                    0LL,
                    (_D3DDDI_SEGMENTPREFERENCE **)this + 2);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C00506A8);
    v23 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v23 + 24) = 4444LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 36) & 4) != 0 )
      *((_DWORD *)*v16 + 19) |= 0x200u;
    v19 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v19, &ApcState);
    v20 = VIDMM_GLOBAL::OpenOneAllocation(
            (DXGADAPTER **)v4,
            v6,
            *v16,
            0LL,
            0,
            0LL,
            (struct VIDMM_ALLOC **)this + 3,
            v25);
    KeUnstackDetachProcess(&ApcState);
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1C00506AC);
      v24 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v24 + 24) = 4474LL;
      WdLogEvent5_WdLowResource(v24);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
