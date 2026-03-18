/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CDA00
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00CCE10 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C00260A8 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C00260EC (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028084 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0062560 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0086180 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00CD470 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00CE0C4 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00CE59C (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  __int64 v9; // rbx
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // r12
  union _LARGE_INTEGER *v13; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER *v15; // rsi
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD **BlockListHead; // r12
  _QWORD *v23; // r15
  struct _VIDMM_PROCESS_HEAP_BLOCK *v24; // rdi
  VIDMM_LINEAR_POOL *v25; // rcx
  __int64 v26; // rdx
  char v27; // r12
  __int64 v28; // r9
  union _LARGE_INTEGER v29; // rbx
  int v30; // edx
  ULONG AllocationType; // ecx
  __int64 v32; // rax
  struct _VIDMM_POOL_BLOCK *v33; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  ULONG_PTR v37; // rax
  __int64 v38; // r8
  LONGLONG v39; // rax
  __int64 v40; // rcx
  char v41; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v42; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v44; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v45[8]; // [rsp+80h] [rbp-9h] BYREF
  char v46; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  BaseAddress = 0LL;
  v9 = a3;
  v42 = 0LL;
  v45[0] = 0LL;
  v44.QuadPart = 0LL;
  v46 = 0;
  v41 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v11[3] = RegionSize;
    v11[4] = v9;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v15 = v13;
  if ( !v13 )
  {
    v16 = -1073741801;
    _InterlockedIncrement(&dword_1C00516C4);
    v17 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v17 + 24) = 678LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_25:
    v24 = v42;
LABEL_26:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v33 = v45[0];
    if ( v45[0] && v24 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v24 + 9), v45[0], v18);
    if ( v46 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v24);
    if ( v15 )
      ExFreeToPagedLookasideList(v12, v15);
    if ( v41 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), (__int64)v33);
    return (unsigned int)v16;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v41 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v19);
  v23 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v20);
    v27 = a8;
    v16 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v9, a4, &v42, a8);
    if ( v16 < 0 )
      goto LABEL_24;
    LOBYTE(v28) = 1;
    v46 = 1;
    v24 = v42;
    v16 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v42 + 9),
            RegionSize,
            (unsigned int)v9,
            v28,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v44,
            (void **)v45);
    if ( v16 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v20);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_26;
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v23 - 1);
      v25 = (VIDMM_LINEAR_POOL *)v23[8];
      v23 = (_QWORD *)*v23;
      LOBYTE(v21) = 1;
      v42 = v24;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(
                  v25,
                  RegionSize,
                  (unsigned int)v9,
                  v21,
                  0LL,
                  0LL,
                  0,
                  0,
                  0LL,
                  &v44,
                  (void **)v45) >= 0 )
        break;
      if ( v23 == BlockListHead )
        goto LABEL_8;
    }
    v27 = a8;
  }
  v29 = v44;
  if ( !*((_QWORD *)v24 + 7) && !*((_QWORD *)v24 + 11) )
  {
    v30 = 4096;
    if ( *((_DWORD *)v24 + 20) != 2 )
      v30 = 8392704;
    BaseAddress = (PVOID)(v44.QuadPart + *((_QWORD *)v24 + 4));
    AllocationType = v30 | 0x800000;
    if ( !v27 )
      AllocationType = v30;
    v16 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v24 + 12));
    if ( v16 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C0051750);
      v32 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v32 + 24) = 801LL;
      WdLogEvent5_WdLowResource(v32);
LABEL_24:
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_25;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
    v35[4] = v44.HighPart;
    v35[5] = v29.LowPart;
    v35[3] = v24;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
  v36 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v36[20] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v36[22] += RegionSize;
  }
  else
  {
    v36[24] += RegionSize;
  }
  v15->LowPart &= ~1u;
  v37 = RegionSize;
  v15[4].QuadPart = 0LL;
  v15[7].QuadPart = v37;
  v15[3] = (union _LARGE_INTEGER)v45[0];
  LOBYTE(v15[9].LowPart) = 0;
  v15[1].QuadPart = (LONGLONG)v24;
  v15[2] = v29;
  ++*((_DWORD *)v24 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), v26);
  *a5 = v15;
  if ( a4 - 3 > 1 )
    v39 = v15[2].QuadPart + *(_QWORD *)(v15[1].QuadPart + 32);
  else
    v39 = 0LL;
  *a6 = v39;
  if ( bTracingEnabled )
  {
    v40 = a4 - 3 > 3 ? *((_QWORD *)v24 + 4) : *((_QWORD *)v24 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp_EtwWriteTransfer(
        v40,
        &EventCreateProcessAllocationDetails,
        v38,
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v15,
        RegionSize,
        v40);
  }
  *a7 = 1;
  return 0LL;
}
