/*
 * XREFs of ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A8840
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
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::LockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r12d
  __int64 v13; // r13
  VIDMM_GLOBAL *v14; // rcx
  int v15; // r14d
  _QWORD *v17; // rax
  __int64 v18; // r8
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  enum _LOCK_OPERATION v22; // [rsp+28h] [rbp-E0h]
  char v23; // [rsp+50h] [rbp-B8h]
  void *v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _MDL **v25; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  VIDMM_SYSMEM_SEGMENT *v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC *v29; // [rsp+80h] [rbp-88h]
  struct _VIDMM_LOCAL_ALLOC *v30; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v27 = this;
  v29 = a2;
  v30 = a3;
  Size = a4;
  v11 = a6;
  v24 = a6;
  v25 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v23 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 11);
  v28 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(a6, a2, a3, a4);
    v17[3] = a2;
    v17[4] = a3;
    v17[5] = a4;
    v11 = (unsigned __int8 *)v24;
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
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v18);
  }
  if ( (**((_DWORD **)a2 + 66) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( (*((_DWORD *)a2 + 18) & 0x2000) != 0 )
  {
LABEL_11:
    *((_QWORD *)a2 + 32) = a4;
    *((_QWORD *)a2 + 31) = a3;
    *((_BYTE *)a2 + 264) = v23;
    *((_BYTE *)a2 + 265) = 1;
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 0LL;
  }
  if ( a5 )
  {
    v23 = 1;
    v24 = 0LL;
    v19 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v24, 0);
    if ( v19 )
    {
      memmove(*((void **)this + 32), v19, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v24);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 17) |= 0x200000u;
    }
    *v25 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_11;
  }
  v14 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( (*((_DWORD *)v14 + 1764) & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C006E724);
    WdLogSingleEntry1(6LL, 1195LL);
    DxgkLogInternalTriageEvent(v20, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v15 = VIDMM_GLOBAL::ProbeAndLockAllocation(
            v14,
            (struct _VIDMM_LOCAL_ALLOC *)v13,
            a2,
            (unsigned __int64)a3,
            a4,
            v22,
            this,
            1u);
    if ( v15 >= 0 )
      goto LABEL_11;
    _InterlockedIncrement(&dword_1C006E724);
    WdLogSingleEntry3(6LL, a2, a3, a4);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v15;
  }
}
