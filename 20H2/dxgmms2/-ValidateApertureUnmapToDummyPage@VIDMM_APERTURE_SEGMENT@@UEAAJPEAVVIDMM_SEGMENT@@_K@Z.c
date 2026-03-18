/*
 * XREFs of ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C5100
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C006EA40 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082B34 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00853E0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0088E50 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00B23FC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00B555C (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ValidateApertureUnmapToDummyPage(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_SEGMENT *a2,
        union _LARGE_INTEGER a3)
{
  PHYSICAL_ADDRESS v4; // rdx
  int v5; // r12d
  void *v6; // rdi
  void *v7; // r13
  struct _VIDMM_POOL_BLOCK *v8; // rbx
  struct _MDL *PagesForMdl; // r15
  struct _MDL *v10; // r14
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  UINT v26; // eax
  union _LARGE_INTEGER v27; // rbx
  UINT v28; // eax
  union _LARGE_INTEGER v29; // rdi
  VIDMM_GLOBAL *v30; // rcx
  unsigned int v31; // ecx
  _DWORD *v32; // rax
  UINT v33; // eax
  UINT v34; // eax
  union _LARGE_INTEGER v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  union _LARGE_INTEGER v39; // [rsp+30h] [rbp-49h]
  unsigned int v40; // [rsp+38h] [rbp-41h]
  unsigned int v41; // [rsp+38h] [rbp-41h]
  union _LARGE_INTEGER v42; // [rsp+60h] [rbp-19h] BYREF
  union _LARGE_INTEGER v43; // [rsp+68h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v44; // [rsp+70h] [rbp-9h] BYREF
  union _LARGE_INTEGER v45; // [rsp+78h] [rbp-1h]
  union _LARGE_INTEGER v46; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh]
  PVOID BaseAddress; // [rsp+E0h] [rbp+67h]
  PVOID v51; // [rsp+F8h] [rbp+7Fh]

  v47 = 0LL;
  v46.QuadPart = 0LL;
  v4 = *(PHYSICAL_ADDRESS *)((char *)this + 120);
  v5 = 0;
  v6 = 0LL;
  v44 = 0LL;
  v7 = 0LL;
  v45.QuadPart = 0LL;
  v8 = 0LL;
  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, v4, gs_PhysicalAddressZero, 0x1000uLL);
  v10 = MmAllocatePagesForMdl(
          gs_PhysicalAddressZero,
          *(PHYSICAL_ADDRESS *)((char *)this + 120),
          gs_PhysicalAddressZero,
          0x1000uLL);
  v11 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))MmAllocateContiguousNodeMemory)(
                  4096LL,
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  *((_QWORD *)this + 15),
                  (const PHYSICAL_ADDRESS)gs_PhysicalAddressZero.QuadPart,
                  516,
                  0x80000000);
  v51 = v11;
  if ( !PagesForMdl || !v11 || !v10 )
  {
    v5 = -1073741801;
    v37 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v37);
LABEL_19:
    if ( v8 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)this + 19), v8, v25);
    goto LABEL_21;
  }
  PhysicalAddress = MmGetPhysicalAddress(v11);
  BaseAddress = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v15 = MmMapLockedPagesSpecifyCache(v10, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  v7 = v15;
  if ( BaseAddress && v15 )
  {
    memset(BaseAddress, 18, 0x1000uLL);
    v18 = v51;
    memset(v51, 171, 0x1000uLL);
    memset(v7, 205, 0x1000uLL);
    v5 = (*(__int64 (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 200LL))(
           this,
           1LL,
           v10);
    if ( v5 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(0LL, v19);
      WdLogEvent5_WdWarning(v21);
      v6 = BaseAddress;
      goto LABEL_22;
    }
    LOBYTE(v20) = 1;
    v5 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 19),
           4096LL,
           0LL,
           v20,
           0LL,
           0LL,
           0,
           0,
           0LL,
           &v46,
           (void **)&v44);
    if ( v5 >= 0 )
    {
      v26 = VIDMM_SEGMENT::DriverId(this);
      v27 = v46;
      v46.QuadPart = (unsigned __int64)v46.QuadPart >> 12;
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        v26,
        1uLL,
        v46.QuadPart,
        PagesForMdl,
        v40,
        0,
        0);
      v28 = VIDMM_SEGMENT::DriverId(this);
      v39 = PhysicalAddress;
      v29 = v46;
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        v28,
        1uLL,
        v46.QuadPart,
        v39,
        0);
      v43 = v27;
      v30 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
      v42 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(v30, 0, 0LL, 0x1000uLL, 0LL, this, &v43, 0LL, a2, &v42, 0LL, 0);
      v42 = v45;
      v43 = a3;
      VIDMM_GLOBAL::MemoryTransferInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        0x1000uLL,
        0LL,
        a2,
        &v43,
        0LL,
        this,
        &v42,
        0LL,
        0);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *))(*(_QWORD *)this + 72LL))(this);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), 0xFFFFFFFF);
      v31 = 0;
      v32 = v7;
      while ( *v32 == -1414812757 )
      {
        ++v31;
        ++v32;
        if ( v31 >= 0x400 )
          goto LABEL_15;
      }
      v5 = -1073741823;
LABEL_15:
      v33 = VIDMM_SEGMENT::DriverId(this);
      VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        v33,
        1uLL,
        v29.QuadPart,
        PagesForMdl,
        v41,
        0,
        0);
      v34 = VIDMM_SEGMENT::DriverId(this);
      VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        *((VIDMM_GLOBAL **)this + 1),
        0,
        0LL,
        v34,
        1uLL,
        v29.QuadPart,
        v35,
        0);
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v23, v22);
      WdLogEvent5_WdWarning(v24);
    }
    v8 = v44;
    v6 = BaseAddress;
    goto LABEL_19;
  }
  v36 = WdLogNewEntry5_WdWarning(v17, v16);
  WdLogEvent5_WdWarning(v36);
  v6 = BaseAddress;
LABEL_21:
  v18 = v51;
LABEL_22:
  if ( v47 )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, __int64, struct _MDL *))(*(_QWORD *)this + 208LL))(this, 1LL, v10);
  if ( v6 )
    MmUnmapLockedPages(v6, PagesForMdl);
  if ( v7 )
    MmUnmapLockedPages(v7, v10);
  if ( v10 )
  {
    MmFreePagesFromMdl(v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( PagesForMdl )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
  }
  if ( v18 )
    MmFreeContiguousMemory(v18);
  return (unsigned int)v5;
}
