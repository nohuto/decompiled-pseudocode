/*
 * XREFs of ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002D86C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchGetRunEvent @ 0x1C00A7520 (VidSchGetRunEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct _VIDMM_CROSSADAPTER_ALLOC **v9; // rdx
  struct _VIDMM_CROSSADAPTER_ALLOC *v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v6 = (_QWORD *)operator new(32LL, 0x30366956u, 64LL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a3;
    v6[3] = VidSchGetRunEvent(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL));
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a2 + 4, &LockHandle);
    v9 = (struct _VIDMM_CROSSADAPTER_ALLOC **)*((_QWORD *)a2 + 3);
    v10 = (struct _VIDMM_CROSSADAPTER_ALLOC *)(v7 + 1);
    if ( *v9 != (struct _VIDMM_CROSSADAPTER_ALLOC *)((char *)a2 + 16) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a2 + 16;
    v7[2] = v9;
    *v9 = v10;
    *((_QWORD *)a2 + 3) = v10;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C006E884);
    WdLogSingleEntry1(6LL, 32225LL);
    DxgCoreInterface[85](
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDMM_GLOBAL_ALLOC_CROSSADAPTER_DATA",
      32225LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
