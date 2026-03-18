/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C4B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     memmove @ 0x1C0018300 (memmove.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C988 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006CD50 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006FB00 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v6; // r15d
  PRKPROCESS **v7; // r14
  size_t *v8; // rsi
  char *v9; // rax
  void *v10[5]; // [rsp+38h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v10[2] = this;
  v10[1] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v6 = 0;
  v7 = (PRKPROCESS **)*((_QWORD *)a2 + 12);
  v10[3] = v7;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 280) )
  {
    if ( (**((_DWORD **)a2 + 62) & 8) == 0 && v7 )
    {
      KeStackAttachProcess(*v7[1], &ApcState);
      v6 = 1;
    }
    v10[0] = 0LL;
    v8 = (size_t *)((char *)a2 + 272);
    v10[4] = (char *)a2 + 272;
    v9 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34), v10, 0);
    if ( v9 )
    {
      memmove(v9, *((const void **)this + 32), *v8);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, v10[0]);
    }
    else
    {
      memset(*((void **)this + 32), 0, *v8);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    if ( v6 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v8 = (size_t *)((char *)a2 + 272);
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      (struct _VIDMM_LOCAL_ALLOC *)v7,
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      1,
      a3);
  }
  *((_QWORD *)a2 + 33) = 0LL;
  *v8 = 0LL;
  *((_WORD *)a2 + 140) = 0;
}
