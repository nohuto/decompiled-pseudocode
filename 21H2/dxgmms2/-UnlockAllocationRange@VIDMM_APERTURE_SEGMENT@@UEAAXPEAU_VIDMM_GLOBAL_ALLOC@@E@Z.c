/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E8520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0085F74 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_LOCAL_ALLOC **a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  int v7; // r15d
  PRKPROCESS **v8; // r14
  size_t *v9; // rsi
  char *v10; // rax
  void *v11[5]; // [rsp+58h] [rbp-90h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-68h] BYREF

  v4 = a3;
  v11[2] = this;
  v11[1] = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = (PRKPROCESS **)a2[11];
  v11[3] = v8;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_BYTE *)a2 + 264) )
  {
    if ( (*(_DWORD *)a2[66] & 8) == 0 && v8 )
    {
      KeStackAttachProcess(*v8[1], &ApcState);
      v7 = 1;
    }
    v11[0] = 0LL;
    v9 = (size_t *)(a2 + 32);
    v11[4] = a2 + 32;
    v10 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, a2[31], (__int64)a2[32], v11, 0);
    if ( v10 )
    {
      memmove(v10, *((const void **)this + 32), *v9);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v11[0]);
    }
    else
    {
      memset(*((void **)this + 32), 0, *v9);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    if ( v7 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v9 = (size_t *)(a2 + 32);
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      (struct _VIDMM_LOCAL_ALLOC *)v8,
      (unsigned __int64)a2[31],
      (unsigned __int64)a2[32],
      1,
      v4);
  }
  a2[31] = 0LL;
  *v9 = 0LL;
  *((_WORD *)a2 + 132) = 0;
}
