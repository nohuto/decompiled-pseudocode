/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0082118
 * Callers:
 *     VidMmCreateProcess @ 0x1C00015E0 (VidMmCreateProcess.c)
 * Callees:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001658 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C0082628 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C0082BC0 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00F00F8 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(
        struct VIDMM_PARTITION **this,
        struct VIDMM_PARTITION **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // eax
  struct VIDMM_PARTITION *v8; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v9; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v10; // rax
  int v11; // eax
  void *v12; // rax
  VIDMM_RECYCLE_HEAP_MGR *v13; // rax
  struct _KPROCESS *v14; // rcx
  int v15; // ebp
  DXGGLOBAL *Global; // rax
  __int64 v17; // rax
  unsigned __int64 MaximumGlobalAdapterCount; // kr00_8
  __int64 v19; // rax
  int v20; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  VIDMM_PROCESS_HEAP *v25; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  v4 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v7 = *((_DWORD *)a2 + 106);
  if ( (v7 & 0x100) != 0 )
  {
    v8 = (struct VIDMM_PARTITION *)*((_QWORD *)a2[76] + 78);
  }
  else if ( (v7 & 0x80u) != 0 )
  {
    v8 = a2[78];
  }
  else
  {
    v8 = a2[7];
  }
  *this = v8;
  this[1] = (struct VIDMM_PARTITION *)*((_QWORD *)a2[8] + 10);
  this[4] = (struct VIDMM_PARTITION *)a2;
  v9 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(72LL, 0x34346956u, 64LL);
  if ( v9 )
    v10 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v9, (struct VIDMM_PROCESS *)this);
  else
    v10 = 0LL;
  this[5] = v10;
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C006E7A8);
    WdLogSingleEntry1(6LL, 218LL);
LABEL_29:
    DxgkLogInternalTriageEvent(v22, 262145LL);
    return 3221225495LL;
  }
  v11 = *((_DWORD *)a2 + 106);
  if ( (v11 & 0x100) != 0 )
  {
    v23 = *((_QWORD *)a2[76] + 8);
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 8);
    else
      v24 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v24 + 24);
    goto LABEL_15;
  }
  if ( !dword_1C006E438 && (v11 & 0x80) == 0 )
  {
    v25 = (VIDMM_PROCESS_HEAP *)operator new(320LL, 0x30316956u, 64LL);
    if ( v25 )
    {
      v13 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v25);
      goto LABEL_13;
    }
LABEL_37:
    v13 = 0LL;
    goto LABEL_13;
  }
  v12 = (void *)operator new(1688LL, 0x30316956u, 64LL);
  if ( !v12 )
    goto LABEL_37;
  v13 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v12);
LABEL_13:
  this[3] = v13;
  if ( !v13 )
  {
    _InterlockedIncrement(&dword_1C006E7F4);
    WdLogSingleEntry1(6LL, 253LL);
    goto LABEL_29;
  }
  v14 = *this;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v14, &ApcState);
  v15 = (*(__int64 (__fastcall **)(struct VIDMM_PARTITION *, struct VIDMM_PARTITION **))(*(_QWORD *)this[3] + 8LL))(
          this[3],
          this);
  KeUnstackDetachProcess(&ApcState);
  if ( v15 < 0 )
    return (unsigned int)v15;
LABEL_15:
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v17 = 8 * MaximumGlobalAdapterCount;
  if ( !is_mul_ok(MaximumGlobalAdapterCount, 8uLL) )
    v17 = -1LL;
  v19 = operator new[](v17, 0x33316956u, 256LL);
  this[2] = (struct VIDMM_PARTITION *)v19;
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C006E798);
    WdLogSingleEntry1(6LL, 288LL);
    goto LABEL_29;
  }
  if ( ((_DWORD)a2[53] & 2) != 0 )
  {
    *((_DWORD *)this + 24) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v20 = VidMmiOpenCurrentPartition((struct VIDMM_PROCESS *)this, this + 36);
  if ( v20 < 0 )
    return (unsigned int)v20;
  return v4;
}
