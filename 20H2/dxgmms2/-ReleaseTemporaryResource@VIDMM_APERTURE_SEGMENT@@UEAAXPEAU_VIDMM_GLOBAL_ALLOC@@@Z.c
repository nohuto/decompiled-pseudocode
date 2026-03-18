/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C46D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D800 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071F34 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00853E0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0089738 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _VIDMM_GLOBAL_ALLOC *v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  VIDMM_GLOBAL *v7; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v4[3] = *((_QWORD *)v2 + 30);
    v4[4] = *((int *)v2 + 63);
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v2 + 62);
    v4[5] = a2;
  }
  if ( *((_QWORD *)v2 + 28) || *((_QWORD *)v2 + 29) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 27LL;
    v5[5] = v2;
    v5[6] = this;
    WdLogEvent5_WdCriticalError(v5);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], v2);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v2 + 39));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, v2);
  if ( *((_BYTE *)v2 + 281) )
  {
    v7 = *this;
    MDLForRange = VidMmGetMDLForRange(v2, *((_QWORD *)v2 + 33), *((_QWORD *)v2 + 34));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v7 + 15))(
      this,
      v2,
      *((_QWORD *)v2 + 33),
      *((_QWORD *)v2 + 34),
      MDLForRange);
    LOBYTE(v9) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, v2, v9);
  }
  VIDMM_LINEAR_POOL::Free(this[19], *((struct _VIDMM_POOL_BLOCK **)v2 + 30), v6);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)v2 + 32) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], v2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v2 + 39), v10);
}
