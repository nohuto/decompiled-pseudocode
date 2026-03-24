/*
 * XREFs of ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00AF44C
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0064F24 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063904 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

void __fastcall VIDMM_GLOBAL::EnsureLockedPages(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        SIZE_T a4)
{
  __int64 v8; // rcx
  VIDMM_GLOBAL *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PRKPROCESS *v13; // rcx
  void **v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  VIDMM_GLOBAL **v20; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v9 = (VIDMM_GLOBAL *)operator new[](0x20uLL, 0x39356956u, PagedPool);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C00507B0);
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 24413LL;
    WdLogEvent5_WdLowResource(v10);
LABEL_5:
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    v19[3] = 270LL;
    v19[4] = 55LL;
    WdLogEvent5_WdCriticalError(v19);
    return;
  }
  v13 = (PRKPROCESS *)*((_QWORD *)a2 + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v13, &ApcState);
  *((_QWORD *)v9 + 2) = VidMmiProbeAndLockAllocation(
                          *(struct _VIDMM_GLOBAL_ALLOC **)a2,
                          a3,
                          a4,
                          IoModifyAccess,
                          0LL,
                          a2);
  KeUnstackDetachProcess(&ApcState);
  v14 = (void **)*((_QWORD *)a2 + 1);
  v15 = *v14;
  *((_QWORD *)v9 + 3) = *v14;
  ObfReferenceObject(v15);
  if ( !*((_QWORD *)v9 + 2) )
  {
    v18 = WdLogNewEntry5_WdWarning(v17, v16);
    WdLogEvent5_WdWarning(v18);
    goto LABEL_5;
  }
  v20 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5001);
  if ( *v20 != (VIDMM_GLOBAL *)((char *)this + 40000) )
    __fastfail(3u);
  *(_QWORD *)v9 = (char *)this + 40000;
  *((_QWORD *)v9 + 1) = v20;
  *v20 = v9;
  *((_QWORD *)this + 5001) = v9;
}
