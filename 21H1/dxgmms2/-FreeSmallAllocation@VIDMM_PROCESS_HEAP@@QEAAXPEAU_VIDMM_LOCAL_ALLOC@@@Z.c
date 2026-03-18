/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CE264
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00CDE90 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C002616C (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028104 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00861A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00CE0E4 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v3; // rbx
  VIDMM_PROCESS_HEAP *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v4 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *(_QWORD *)(v3 + 56);
    v5[4] = *(_QWORD *)(v3 + 16);
    this = *(VIDMM_PROCESS_HEAP **)(v3 + 8);
    v5[5] = this;
  }
  if ( *(_BYTE *)(v3 + 72) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 21LL;
    v6[5] = v4;
    v6[6] = v3;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v4 + 2));
  v9 = *(void **)(v3 + 32);
  if ( v9 )
  {
    MmUnsecureVirtualMemory(v9);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v10 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)(v10 + 24) != 1 )
  {
    if ( *(_QWORD *)(v10 + 56) || *(_QWORD *)(v10 + 88) )
    {
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 120LL))(
        v4,
        *(_QWORD *)a2,
        v3,
        v8);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v3 + 16) + *(_QWORD *)(v10 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v3 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(
    *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v3 + 8) + 72LL),
    *(struct _VIDMM_POOL_BLOCK **)(v3 + 24),
    v7);
  *(_QWORD *)(*((_QWORD *)v4 + 1) + 136LL) -= *(_QWORD *)(v3 + 56);
  v11 = (_QWORD *)*((_QWORD *)v4 + 1);
  v12 = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 80LL);
  v13 = *(_QWORD *)(v3 + 56);
  if ( v12 == 1 )
  {
    v11[20] -= v13;
  }
  else if ( v12 == 2 )
  {
    v11[22] -= v13;
  }
  else
  {
    v11[24] -= v13;
  }
  --*(_DWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v14 = *(_QWORD *)(v3 + 8);
    v15 = (unsigned int)(*(_DWORD *)(v14 + 80) - 3) > 3 ? *(_QWORD *)(v14 + 32) : *(_QWORD *)(v14 + 88);
    v11 = *(_QWORD **)(*((_QWORD *)v4 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp_EtwWriteTransfer(
        (__int64)v11,
        &EventDestroyProcessAllocationDetails,
        *(_QWORD *)(v3 + 56),
        (int)v11,
        v3,
        *(_QWORD *)(v3 + 56),
        v15);
  }
  v16 = *(_QWORD *)(v3 + 8);
  if ( !*(_DWORD *)(v16 + 24) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = *(_QWORD *)(v3 + 8);
      v16 = *(_QWORD *)(v3 + 8);
    }
    VIDMM_PROCESS_HEAP::FreeBlock(v4, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v16);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v4 + 64), (PVOID)v3);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v4 + 2), v17);
}
