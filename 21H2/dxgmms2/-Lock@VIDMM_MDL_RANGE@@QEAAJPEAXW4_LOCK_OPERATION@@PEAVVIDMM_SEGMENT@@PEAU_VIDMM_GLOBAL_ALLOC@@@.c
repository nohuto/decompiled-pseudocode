/*
 * XREFs of ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0081660
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C007D8AC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0081498 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00817B0 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_MDL_RANGE::Lock(
        VIDMM_MDL_RANGE *this,
        void *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        struct _VIDMM_GLOBAL_ALLOC *a5)
{
  char v7; // si
  struct _MDL *Mdl; // rax
  unsigned __int64 v9; // r8
  __int64 v11; // rcx
  struct _MDL *v12; // rcx
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  Mdl = IoAllocateMdl(a2, *((_DWORD *)this + 4) - *((_DWORD *)this + 2), 0, 0, 0LL);
  *(_QWORD *)this = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    v7 = 1;
    if ( !a4 )
      return 0LL;
    v13[0] = 0LL;
    v13[2] = 0LL;
    v13[1] = *(_QWORD *)this;
    if ( VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a4, (struct _VIDMM_MDL *)v13, v9, a5) )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 5858LL);
    DxgkLogInternalTriageEvent(v11, 262145LL);
  }
  v12 = *(struct _MDL **)this;
  if ( *(_QWORD *)this )
  {
    if ( v7 )
    {
      MmUnlockPages(v12);
      v12 = *(struct _MDL **)this;
    }
    IoFreeMdl(v12);
    *(_QWORD *)this = 0LL;
  }
  return 3223191809LL;
}
