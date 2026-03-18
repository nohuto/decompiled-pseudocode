/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00F10A4
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00F0340 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0030178 (ExAllocateFromPagedLookasideList.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C009C224 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00F0A44 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00F1770 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00F1C3C (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  unsigned int v8; // r12d
  __int64 v9; // rsi
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // rbx
  union _LARGE_INTEGER *v13; // rax
  union _LARGE_INTEGER *v14; // r15
  int Block; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD **BlockListHead; // rdi
  _QWORD *v23; // rbx
  struct _VIDMM_PROCESS_HEAP_BLOCK *v24; // r14
  VIDMM_LINEAR_POOL *v25; // rcx
  union _LARGE_INTEGER v26; // rbx
  int v27; // edi
  int v28; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v29; // rax
  int v30; // edx
  int v31; // ecx
  __int64 (__fastcall *v32)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int); // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // r8
  LONGLONG v37; // rcx
  __int64 v38; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  unsigned __int64 v41; // [rsp+20h] [rbp-69h]
  unsigned __int64 v42; // [rsp+28h] [rbp-61h]
  char v43[8]; // [rsp+30h] [rbp-59h]
  char v44[8]; // [rsp+38h] [rbp-51h]
  char v45; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v46; // [rsp+68h] [rbp-21h] BYREF
  LONGLONG v47; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v48; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v49[8]; // [rsp+80h] [rbp-9h] BYREF
  char v50; // [rsp+D0h] [rbp+47h]
  unsigned __int64 v51; // [rsp+D8h] [rbp+4Fh] BYREF

  v51 = a2;
  v47 = 0LL;
  v8 = a4;
  v9 = (unsigned int)a3;
  v46 = 0LL;
  v49[0] = 0LL;
  v48.QuadPart = 0LL;
  v50 = 0;
  v45 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v11[3] = v51;
    v11[4] = v9;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v14 = v13;
  if ( !v13 )
  {
    Block = -1073741801;
    _InterlockedIncrement(&dword_1C006E784);
    WdLogSingleEntry1(6LL, 657LL);
    *(_QWORD *)v44 = 0LL;
    *(_QWORD *)v43 = 0LL;
    v42 = 0LL;
    v41 = 657LL;
    DxgkLogInternalTriageEvent(v16, 262145LL);
LABEL_41:
    v24 = v46;
LABEL_42:
    if ( v47 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, LONGLONG *, unsigned __int64 *, __int64, unsigned __int64, unsigned __int64, char *, char *))VirtualMemoryInterface
       + 2))(
        -1LL,
        &v47,
        &v51,
        0x4000LL,
        v41,
        v42,
        *(char **)v43,
        *(char **)v44);
    }
    if ( v49[0] && v24 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v24 + 9), v49[0], v17, v18);
    if ( v50 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v24);
    if ( v14 )
      ExFreeToPagedLookasideList(v12, v14);
    if ( v45 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
    return (unsigned int)Block;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 16));
  v45 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, v8, v19);
  v23 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v21, v20, v17, v18);
    Block = VIDMM_PROCESS_HEAP::AllocateBlock(a1, v51, v9, v8, (__int64 *)&v46, a8);
    if ( Block < 0 )
    {
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_41;
    }
    v24 = v46;
    LOBYTE(v18) = 1;
    v50 = 1;
    Block = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)v46 + 9),
              v51,
              (unsigned int)v9,
              v18,
              0LL,
              0LL,
              0,
              0,
              0LL,
              &v48,
              (void **)v49);
    if ( Block < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v21, v20, v17, v18);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_42;
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v23 - 1);
      v25 = (VIDMM_LINEAR_POOL *)v23[8];
      v23 = (_QWORD *)*v23;
      LOBYTE(v18) = 1;
      v46 = v24;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v25, v51, (unsigned int)v9, v18, 0LL, 0LL, 0, 0, 0LL, &v48, (void **)v49) >= 0 )
        break;
      if ( v23 == BlockListHead )
        goto LABEL_8;
    }
  }
  v26 = v48;
  if ( !*((_QWORD *)v24 + 7) && !*((_QWORD *)v24 + 11) )
  {
    v27 = *((_DWORD *)v24 + 20);
    v47 = v48.QuadPart + *((_QWORD *)v24 + 4);
    v28 = *((_DWORD *)v24 + 12);
    v29 = DxgkGetVirtualMemoryInterface();
    v30 = 8392704;
    v31 = 4096;
    v32 = *(__int64 (__fastcall **)(__int64, LONGLONG *, _QWORD, unsigned __int64 *, int, int))v29;
    if ( v27 != 2 )
      v31 = 8392704;
    if ( !a8 )
      v30 = v31;
    Block = v32(-1LL, &v47, 0LL, &v51, v30, v28);
    if ( Block < 0 )
    {
      v47 = 0LL;
      _InterlockedIncrement(&dword_1C006E810);
      WdLogSingleEntry1(6LL, 780LL);
      *(_QWORD *)v44 = 0LL;
      *(_QWORD *)v43 = 0LL;
      v42 = 0LL;
      v41 = 780LL;
      DxgkLogInternalTriageEvent(v33, 262145LL);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_41;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v17, v18);
    v34[4] = v48.HighPart;
    v34[5] = v26.LowPart;
    v34[3] = v24;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += v51;
  v35 = *(_QWORD **)(a1 + 8);
  if ( v8 == 1 )
  {
    v35[20] += v51;
  }
  else if ( v8 == 2 )
  {
    v35[22] += v51;
  }
  else
  {
    v35[24] += v51;
  }
  v14->LowPart &= ~1u;
  v14[7].QuadPart = v51;
  v14[3] = (union _LARGE_INTEGER)v49[0];
  LOBYTE(v14[9].LowPart) = 0;
  v14[1].QuadPart = (LONGLONG)v24;
  v14[2] = v26;
  v14[4].QuadPart = 0LL;
  ++*((_DWORD *)v24 + 6);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
  *a5 = v14;
  if ( v8 - 3 <= 1 )
    v37 = 0LL;
  else
    v37 = v14[2].QuadPart + *(_QWORD *)(v14[1].QuadPart + 32);
  *a6 = v37;
  if ( bTracingEnabled )
  {
    v38 = v8 - 3 <= 3 ? *((_QWORD *)v24 + 11) : *((_QWORD *)v24 + 4);
    if ( (byte_1C006E941 & 8) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v38,
        &EventCreateProcessAllocationDetails,
        v36,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v14,
        v51,
        v38);
  }
  *a7 = 1;
  return 0LL;
}
