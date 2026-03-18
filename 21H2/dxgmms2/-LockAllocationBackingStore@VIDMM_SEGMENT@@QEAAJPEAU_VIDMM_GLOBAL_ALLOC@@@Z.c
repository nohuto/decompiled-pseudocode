/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085000 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB5A0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     MapGpadl @ 0x1C002D1C0 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C002D23C (UnmapGpadl.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085C2C (-VidMmiAddProbeAndLockReference@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085C50 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v2; // r10
  int v5; // eax
  int v6; // esi
  __int64 result; // rax
  __int64 v8; // rbx
  PRKPROCESS *v9; // rcx
  char *v10; // rsi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  enum _LOCK_OPERATION v15; // [rsp+28h] [rbp-A0h]
  struct _KAPC_STATE v16; // [rsp+50h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-48h] BYREF

  v2 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 3) + 436LL) & 4) != 0 && (**((_DWORD **)a2 + 66) & 0x4000) == 0
    || (v5 = *((_DWORD *)a2 + 18), (v5 & 0x2000) != 0) )
  {
    v8 = *((_QWORD *)a2 + 11);
    if ( v8 && *(_QWORD *)(v8 + 24) )
    {
      v9 = *(PRKPROCESS **)(v8 + 8);
      memset(&v16, 0, sizeof(v16));
      KeStackAttachProcess(*v9, &v16);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 8) + 24LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL),
        *(_QWORD *)(v8 + 24));
      KeUnstackDetachProcess(&v16);
    }
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 91) )
  {
LABEL_11:
    VidMmiAddProbeAndLockReference(a2);
    return 0LL;
  }
  if ( (v5 & 0x8000) == 0 )
  {
    if ( (**((_DWORD **)a2 + 66) & 8) == 0 )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 11) + 8LL), &ApcState);
      v2 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    }
    v6 = VIDMM_GLOBAL::ProbeAndLockAllocation(
           v2,
           *((struct _VIDMM_LOCAL_ALLOC **)a2 + 11),
           a2,
           0LL,
           *((_QWORD *)a2 + 1),
           v15,
           this,
           0);
    if ( (**((_DWORD **)a2 + 66) & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v6 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E724);
      WdLogSingleEntry2(6LL, a2, *((_QWORD *)a2 + 1));
      DxgkLogInternalTriageEvent(v14, 262145LL);
      return 3223191809LL;
    }
    goto LABEL_10;
  }
  v10 = (char *)a2 + 544;
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = *(unsigned int *)(*(_QWORD *)v10 + 40LL);
    if ( v12 < v11 )
    {
      WdLogSingleEntry2(1LL, v12, v11);
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      UnmapGpadl();
      *(_QWORD *)v10 = 0LL;
      return 3221225485LL;
    }
LABEL_10:
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2);
    goto LABEL_11;
  }
  return result;
}
