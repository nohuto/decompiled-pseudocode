/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8320
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  void (__fastcall *v6)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v9[3] = *((_QWORD *)a2 + 28);
    v9[4] = *((int *)a2 + 59);
    v9[5] = *((unsigned int *)a2 + 58);
  }
  if ( *((_QWORD *)a2 + 26) || *((_QWORD *)a2 + 27) )
    WdLogSingleEntry5(0LL, 270LL, 27LL, a2, this, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
  if ( *((_BYTE *)a2 + 265) )
  {
    v6 = *(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)this + 120LL);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v6(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v8);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  *((_QWORD *)a2 + 30) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
}
