/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A856C
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00A7774 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C008369C (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0086A8C (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00A8608 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  VIDMM_GLOBAL *v7; // rcx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  unsigned int v33; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp+18h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_QWORD *)a2 + 30) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v20[3] = *((_QWORD *)a2 + 30);
      v20[4] = *((unsigned int *)a2 + 58);
      v20[5] = *((int *)a2 + 59);
    }
    v21 = (_QWORD *)((char *)a2 + 208);
    v22 = *((_QWORD *)a2 + 26);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v22 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 208)
      || (v23 = (_QWORD *)*((_QWORD *)a2 + 27), (_QWORD *)*v23 != v21) )
    {
      __fastfail(3u);
    }
    *v23 = v22;
    v8 = 0;
    *(_QWORD *)(v22 + 8) = v23;
    v24 = *((_QWORD *)a2 + 30);
    *v21 = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v24 + 56LL))(v24, a2);
  }
  else
  {
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v8 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v7, v6, v9, v10);
    LOBYTE(v6) = 1;
    VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, v6, *((_DWORD *)a2 + 17) & 0x3F, v10);
    v8 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v8 >= 0 )
    {
LABEL_5:
      v33 = 0;
      v34 = 0LL;
      VIDMM_GLOBAL::EvictAllAllocationInList(v7, (struct _LIST_ENTRY *)((char *)this + 3736), &v33, &v34);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
        v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v32[3] = *((_QWORD *)a2 + 30);
        v32[4] = *((unsigned int *)a2 + 58);
        v32[5] = *((int *)a2 + 59);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v7, v25, v26, v27);
    }
  }
  return (unsigned int)v8;
}
