/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00E7BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00A8444 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r13d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  void (__fastcall *v15)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v17; // r8
  char *v18; // rax
  VIDMM_GLOBAL *v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  enum _LOCK_OPERATION v24; // [rsp+28h] [rbp-E0h]
  char v25; // [rsp+50h] [rbp-B8h]
  void *v26; // [rsp+58h] [rbp-B0h] BYREF
  struct _MDL **v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  size_t Size; // [rsp+70h] [rbp-98h]
  VIDMM_APERTURE_SEGMENT *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  struct _VIDMM_GLOBAL_ALLOC *v32; // [rsp+88h] [rbp-80h]
  struct _VIDMM_LOCAL_ALLOC *v33; // [rsp+90h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v30 = this;
  v32 = a2;
  v33 = a3;
  Size = a4;
  v11 = a6;
  v26 = a6;
  v27 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v25 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 11);
  v28 = v13;
  v31 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6, a2, a3, a4);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = (unsigned __int8 *)v26;
  }
  *v11 = 0;
  if ( *((_BYTE *)a2 + 265) )
  {
    if ( a3 == *((struct _VIDMM_LOCAL_ALLOC **)a2 + 31) && a4 == *((_QWORD *)a2 + 32) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    v15 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)this + 120LL);
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32));
    v15(this, a2, *((_QWORD *)a2 + 31), *((_QWORD *)a2 + 32), MDLForRange);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v17);
    v13 = v28;
  }
  if ( (**((_DWORD **)a2 + 66) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v25 = 1;
    v26 = 0LL;
    v18 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v26, 0);
    if ( v18 )
    {
      memmove(*((void **)this + 32), v18, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v26);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    *v27 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_16;
  }
  v20 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( (*((_DWORD *)v20 + 1764) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C006E724);
    WdLogSingleEntry1(6LL, 1622LL);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v22 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            v20,
            (struct _VIDMM_LOCAL_ALLOC *)v13,
            a2,
            (unsigned __int64)a3,
            a4,
            v24,
            this,
            1u);
    if ( v22 >= 0 )
    {
LABEL_16:
      *((_QWORD *)a2 + 32) = a4;
      *((_QWORD *)a2 + 31) = a3;
      *((_BYTE *)a2 + 264) = v25;
      *((_BYTE *)a2 + 265) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C006E724);
    WdLogSingleEntry3(6LL, a2, a3, a4);
    DxgkLogInternalTriageEvent(v23, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v22;
  }
}
