/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00C45B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016B80 (memmove.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0061058 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0061414 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00638E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00896D8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r13d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  VIDMM_GLOBAL *v15; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v17; // r8
  char *v18; // rax
  VIDMM_GLOBAL *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ebx
  _QWORD *v24; // rax
  enum _LOCK_OPERATION v25; // [rsp+28h] [rbp-D0h]
  char v26; // [rsp+40h] [rbp-B8h]
  void *v27; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v28; // [rsp+50h] [rbp-A8h]
  __int64 v29; // [rsp+58h] [rbp-A0h]
  size_t Size; // [rsp+60h] [rbp-98h]
  VIDMM_APERTURE_SEGMENT *v31; // [rsp+68h] [rbp-90h]
  __int64 v32; // [rsp+70h] [rbp-88h]
  struct _VIDMM_GLOBAL_ALLOC *v33; // [rsp+78h] [rbp-80h]
  __int64 v34; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v31 = this;
  v33 = a2;
  v34 = a3;
  Size = a4;
  v11 = a6;
  v27 = a6;
  v28 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  v12 = 0;
  v26 = 0;
  *a7 = 0LL;
  v13 = *((_QWORD *)a2 + 12);
  v29 = v13;
  v32 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = (unsigned __int8 *)v27;
  }
  *v11 = 0;
  if ( *((_BYTE *)a2 + 281) )
  {
    if ( a3 == *((_QWORD *)a2 + 33) && a4 == *((_QWORD *)a2 + 34) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    v15 = *(VIDMM_GLOBAL **)this;
    MDLForRange = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
    (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v15
     + 15))(
      this,
      a2,
      *((_QWORD *)a2 + 33),
      *((_QWORD *)a2 + 34),
      MDLForRange);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      a2,
      v17);
    v13 = v29;
  }
  if ( (**((_DWORD **)a2 + 62) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v13 + 8), &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v26 = 1;
    v27 = 0LL;
    v18 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v27, 0);
    if ( v18 )
    {
      memmove(*((void **)this + 32), v18, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v27);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v28 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_16;
  }
  v20 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 7048LL);
  if ( ((unsigned __int8)v20 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C0051674);
    v21 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v21 + 24) = 1625LL;
    WdLogEvent5_WdLowResource(v21);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v23 = VIDMM_GLOBAL::ProbeAndLockAllocation(v20, (struct _VIDMM_LOCAL_ALLOC *)v13, a2, a3, a4, v25, this, 1u);
    if ( v23 >= 0 )
    {
LABEL_16:
      *((_QWORD *)a2 + 34) = a4;
      *((_QWORD *)a2 + 33) = a3;
      *((_BYTE *)a2 + 280) = v26;
      *((_BYTE *)a2 + 281) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C0051674);
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
    v24[3] = a2;
    v24[4] = a3;
    v24[5] = a4;
    WdLogEvent5_WdLowResource(v24);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v23;
  }
}
