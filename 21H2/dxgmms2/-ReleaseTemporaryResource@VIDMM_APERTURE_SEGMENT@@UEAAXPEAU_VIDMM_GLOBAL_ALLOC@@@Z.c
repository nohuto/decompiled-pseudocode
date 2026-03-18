/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E8230
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A3F98 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  void (__fastcall *v9)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v11; // r8

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v6[3] = *((_QWORD *)a2 + 28);
    v6[4] = *((int *)a2 + 59);
    v6[5] = *((unsigned int *)a2 + 58);
  }
  if ( *((_QWORD *)a2 + 26) || *((_QWORD *)a2 + 27) )
    WdLogSingleEntry5(0LL, 270LL, 27LL, a2, this, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
  if ( *((_BYTE *)a2 + 265) )
  {
    v9 = (void (__fastcall *)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))*((_QWORD *)*this + 15);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v9(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v11) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, a2, v11);
  }
  VIDMM_LINEAR_POOL::Free(this[19], *((struct _VIDMM_POOL_BLOCK **)a2 + 28), v7, v8);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_QWORD *)a2 + 30) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
}
