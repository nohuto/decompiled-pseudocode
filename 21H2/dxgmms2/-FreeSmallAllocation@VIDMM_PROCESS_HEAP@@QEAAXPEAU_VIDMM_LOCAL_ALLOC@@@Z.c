/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F18F0
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F1540 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00F1770 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  __int64 v11; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = *(_QWORD *)(v5 + 56);
    v7[4] = *(_QWORD *)(v5 + 16);
    v7[5] = *(_QWORD *)(v5 + 8);
  }
  if ( *(_BYTE *)(v5 + 72) )
    WdLogSingleEntry5(0LL, 270LL, 21LL, this, v5, 0LL);
  DXGFASTMUTEX::Acquire((VIDMM_PROCESS_HEAP *)((char *)this + 16));
  v10 = *(void **)(v5 + 32);
  if ( v10 )
  {
    MmUnsecureVirtualMemory(v10);
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  v11 = *(_QWORD *)(v5 + 8);
  if ( *(_DWORD *)(v11 + 24) != 1 )
  {
    if ( *(_QWORD *)(v11 + 56) || *(_QWORD *)(v11 + 88) )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)this + 120LL))(
        this,
        *(_QWORD *)a2,
        v5,
        v9);
    }
    else
    {
      v21 = *(_QWORD *)(v5 + 16) + *(_QWORD *)(v11 + 32);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, __int64, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        &v21,
        v5 + 56,
        0x4000LL);
    }
  }
  VIDMM_LINEAR_POOL::Free(
    *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v5 + 8) + 72LL),
    *(struct _VIDMM_POOL_BLOCK **)(v5 + 24),
    v8,
    v9);
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *(_QWORD *)(v5 + 56);
  v15 = (_QWORD *)*((_QWORD *)this + 1);
  v16 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 80LL);
  v17 = *(_QWORD *)(v5 + 56);
  if ( v16 == 1 )
  {
    v15[20] -= v17;
  }
  else if ( v16 == 2 )
  {
    v15[22] -= v17;
  }
  else
  {
    v15[24] -= v17;
  }
  --*(_DWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v18 = *(_QWORD *)(v5 + 8);
    v19 = (unsigned int)(*(_DWORD *)(v18 + 80) - 3) > 3 ? *(_QWORD *)(v18 + 32) : *(_QWORD *)(v18 + 88);
    v15 = *(_QWORD **)(v5 + 56);
    v14 = *(unsigned int *)(*((_QWORD *)this + 1) + 8LL);
    if ( (byte_1C006E941 & 8) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        (__int64)v15,
        &EventDestroyProcessAllocationDetails,
        v13,
        v14,
        v5,
        (char)v15,
        v19);
  }
  v20 = *(_QWORD *)(v5 + 8);
  if ( !*(_DWORD *)(v20 + 24) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v20, v13, v14) + 24) = *(_QWORD *)(v5 + 8);
      v20 = *(_QWORD *)(v5 + 8);
    }
    VIDMM_PROCESS_HEAP::FreeBlock(this, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v20);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), (PVOID)v5);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 2);
}
