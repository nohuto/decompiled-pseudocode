/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C006B3DC
 * Callers:
 *     VidMmCreateProcess @ 0x1C0011760 (VidMmCreateProcess.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C00117CC (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0011A1C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011A40 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C006B908 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C006BEA0 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00CC56C (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct _RTL_BALANCED_NODE **this, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int v2; // ebx
  char v5; // al
  struct _RTL_BALANCED_NODE *v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  __int64 v8; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v9; // rax
  char v10; // al
  PVOID v11; // rax
  __int64 v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // rax
  struct _KPROCESS *v14; // rcx
  int v15; // ebp
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  SIZE_T v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  VIDMM_PROCESS_HEAP *v26; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v5 = BYTE3(a2[14].Right);
  if ( (v5 & 0x20) != 0 )
  {
    v6 = *(struct _RTL_BALANCED_NODE **)(a2[20].ParentValue + 512);
  }
  else if ( (v5 & 0x10) != 0 )
  {
    v6 = a2[21].Children[1];
  }
  else
  {
    v6 = a2[2].Children[1];
  }
  *this = v6;
  this[1] = *(struct _RTL_BALANCED_NODE **)(a2[2].ParentValue + 72);
  this[4] = a2;
  v7 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v7 )
    v9 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v7, (struct VIDMM_PROCESS *)this);
  else
    v9 = 0LL;
  this[5] = (struct _RTL_BALANCED_NODE *)v9;
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C00516C8);
    v23 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v23 + 24) = 218LL;
LABEL_29:
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
  v10 = BYTE3(a2[14].Right);
  if ( (v10 & 0x20) != 0 )
  {
    v24 = *(_QWORD *)(a2[20].ParentValue + 64);
    if ( v24 )
      v25 = *(_QWORD *)(v24 + 8);
    else
      v25 = 0LL;
    this[3] = *(struct _RTL_BALANCED_NODE **)(v25 + 24);
    goto LABEL_15;
  }
  if ( !dword_1C00513C8 && (v10 & 0x10) == 0 )
  {
    v26 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v26 )
    {
      v13 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v26);
      goto LABEL_13;
    }
LABEL_37:
    v13 = 0LL;
    goto LABEL_13;
  }
  v11 = operator new[](0x690uLL, 0x30316956u, (POOL_TYPE)512);
  if ( !v11 )
    goto LABEL_37;
  v13 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v11);
LABEL_13:
  this[3] = (struct _RTL_BALANCED_NODE *)v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_1C0051714);
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = 253LL;
    goto LABEL_29;
  }
  v14 = (struct _KPROCESS *)*this;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v14, &ApcState);
  v15 = ((__int64 (__fastcall *)(struct _RTL_BALANCED_NODE *, struct _RTL_BALANCED_NODE **))this[3]->Children[0]->Children[1])(
          this[3],
          this);
  KeUnstackDetachProcess(&ApcState);
  if ( v15 < 0 )
    return (unsigned int)v15;
LABEL_15:
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v18 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v18 = -1LL;
  v19 = (struct _RTL_BALANCED_NODE *)operator new[](v18, 0x33316956u, PagedPool);
  this[2] = v19;
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C00516B8);
    v23 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v23 + 24) = 288LL;
    goto LABEL_29;
  }
  memset(v19, 0, 8LL * MaximumAdapterCount);
  if ( BYTE1(a2[14].Right) )
  {
    *((_DWORD *)this + 24) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v21 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 36);
  if ( v21 < 0 )
    return (unsigned int)v21;
  return v2;
}
