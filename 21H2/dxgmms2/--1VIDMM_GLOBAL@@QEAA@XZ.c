/*
 * XREFs of ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00D4CC4
 * Callers:
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C002C9E0 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0013F70 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001AC5C (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0031310 (-ResetAdapter@VIDMM_PARTITION@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003FFFC (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z @ 0x1C00A68B8 (-RequestWorkerThreadStatus@VIDMM_WORKER_THREAD@@QEAAXW4VIDMM_WORKER_THREAD_STATUS@@E@Z.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00AB520 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D61B0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D8284 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D9484 (-RemoveFromAdapterList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00E2434 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::~VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int i; // esi
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // rax
  struct _VIDSCH_NODE **v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int j; // ebx
  struct _VIDMM_DMA_BUFFER *v15; // rdx
  VIDMM_DMA_POOL *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  struct _RTL_BALANCED_NODE *v20; // rax
  VIDMM_PARTITION *v21; // rbx
  VIDMM_PARTITION **v22; // rcx
  VIDMM_PARTITION *v23; // rax
  VIDMM_PARTITION *k; // rcx
  unsigned int m; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _PCW_INSTANCE *v28; // rcx
  _QWORD *v29; // rcx
  unsigned int v30; // ebx
  _QWORD *v31; // rdx
  void (__fastcall ***v32)(_QWORD, __int64); // r8
  void *v33; // rcx
  char *v34; // rcx
  char *v35; // rbx
  unsigned int n; // ebx
  struct _PCW_INSTANCE *v37; // rcx
  char *v38; // rcx
  char *v39; // rbx

  VIDMM_GLOBAL::LogTeardownTelemetry(this);
  if ( *((_QWORD *)this + 5592) )
    VIDMM_GLOBAL::RemoveFromAdapterList(this);
  *((_BYTE *)this + 7088) = 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2, v4, v5) + 24) = this;
  VIDMM_GLOBAL::DoDeferredUnlock(this, v2, v4);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 632LL);
  if ( *(int *)(*(_QWORD *)(v6 + 16) + 2692LL) >= 2500 )
  {
    for ( i = 0; i < *(_DWORD *)(v6 + 80); ++i )
    {
      v8 = *(_QWORD *)(v6 + 632);
      v9 = *(_DWORD *)(v6 + 704);
      v10 = v8 + 8LL * i;
      if ( i >= v9 )
        v10 = *(_QWORD *)(v6 + 632);
      if ( (*(_DWORD *)(*(_QWORD *)v10 + 12LL) & 2) != 0 )
      {
        v11 = (struct _VIDSCH_NODE **)(v8 + 8LL * i);
        if ( i >= v9 )
          v11 = *(struct _VIDSCH_NODE ***)(v6 + 632);
        VidSchiDestroyNodeSchedulingLog(*v11);
      }
    }
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  for ( j = 0; j < *((_DWORD *)this + 1754); ++j )
  {
    v15 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
    if ( v15 )
    {
      LOBYTE(v12) = 1;
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)this + j + 79), v15, v12, v13);
      *((_QWORD *)this + j + 143) = 0LL;
    }
    v16 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v16 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v16);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40384));
  if ( (*((_BYTE *)this + 40936) & 0x20) != 0 )
    VIDMM_PROCESS::CloseAdapter((struct _KTHREAD **)g_pVidMmSystemProcess, this, v17, v18);
  v19 = *(_QWORD *)this;
  *((_QWORD *)this + 5544) = 0LL;
  if ( v19 )
  {
    ObfReferenceObject(*(PVOID *)(v19 + 8));
    VIDMM_WORKER_THREAD::RequestWorkerThreadStatus(v19, 2, 1);
    KeWaitForSingleObject(*(PVOID *)(v19 + 8), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v19 + 8));
    operator delete(*(void **)(v19 + 176));
    *(_QWORD *)(v19 + 176) = 0LL;
    if ( *(_QWORD *)this )
      operator delete(*(void **)this);
    *(_QWORD *)this = 0LL;
  }
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v20 = VIDMM_PARTITION::_PartitionTree;
  v21 = 0LL;
  while ( v20 )
  {
    v21 = (VIDMM_PARTITION *)v20;
    v20 = v20->Children[0];
  }
  while ( v21 )
  {
    VIDMM_PARTITION::ResetAdapter(v21, this);
    v22 = (VIDMM_PARTITION **)*((_QWORD *)v21 + 1);
    v23 = v21;
    if ( v22 )
    {
      v21 = (VIDMM_PARTITION *)*((_QWORD *)v21 + 1);
      for ( k = *v22; k; k = *(VIDMM_PARTITION **)k )
        v21 = k;
    }
    else
    {
      while ( 1 )
      {
        v21 = (VIDMM_PARTITION *)(*((_QWORD *)v21 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v21 || *(VIDMM_PARTITION **)v21 == v23 )
          break;
        v23 = v21;
      }
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  for ( m = 0; m < *((_DWORD *)this + 1754); ++m )
  {
    v26 = *((_QWORD *)this + 5028);
    v27 = 1584LL * m;
    if ( (*(_BYTE *)(v27 + v26 + 512) & 1) == 0 )
    {
      v28 = *(struct _PCW_INSTANCE **)(v27 + v26 + 872);
      if ( v28 )
        PcwCloseInstance(v28);
    }
  }
  v29 = (_QWORD *)*((_QWORD *)this + 464);
  if ( v29 )
  {
    v30 = 0;
    if ( *((_DWORD *)this + 926) )
    {
      v31 = (_QWORD *)*((_QWORD *)this + 464);
      do
      {
        v32 = (void (__fastcall ***)(_QWORD, __int64))v29[v30];
        if ( v32 )
        {
          (**v32)(v29[v30], 1LL);
          v29 = (_QWORD *)*((_QWORD *)this + 464);
          v31 = v29;
        }
        ++v30;
      }
      while ( v30 < *((_DWORD *)this + 926) );
      v29 = v31;
    }
    operator delete(v29);
    *((_QWORD *)this + 464) = 0LL;
  }
  operator delete(*((void **)this + 878));
  v33 = (void *)*((_QWORD *)this + 985);
  if ( v33 )
  {
    operator delete(v33);
    *((_OWORD *)this + 492) = 0LL;
    *((_QWORD *)this + 986) = 0LL;
  }
  v34 = (char *)*((_QWORD *)this + 5123);
  if ( v34 )
  {
    v35 = v34 - 8;
    `vector destructor iterator'(
      v34,
      24LL,
      *((_QWORD *)v34 - 1),
      (void (__fastcall *)(char *))VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY);
    operator delete(v35);
  }
  operator delete(*((void **)this + 5128));
  for ( n = 0; n < *((_DWORD *)this + 1754); ++n )
  {
    v37 = *(struct _PCW_INSTANCE **)(1584LL * n + *((_QWORD *)this + 5028) + 1576);
    if ( v37 )
      PcwCloseInstance(v37);
  }
  v38 = (char *)*((_QWORD *)this + 5028);
  if ( v38 )
  {
    v39 = v38 - 8;
    `vector destructor iterator'(
      v38,
      1584LL,
      *((_QWORD *)v38 - 1),
      (void (__fastcall *)(char *))VIDSCH_VSYNC_SMOOTHER::OnReset);
    operator delete(v39);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256));
}
