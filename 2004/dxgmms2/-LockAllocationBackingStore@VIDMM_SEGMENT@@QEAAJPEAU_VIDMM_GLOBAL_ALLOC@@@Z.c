/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063AD4
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0061C1C (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064000 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0095FB0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     MapGpadl @ 0x1C0022834 (MapGpadl.c)
 *     UnmapGpadl @ 0x1C00228B0 (UnmapGpadl.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00638E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063990 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  int v5; // ecx
  int v6; // eax
  VIDMM_GLOBAL *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  PRKPROCESS *v15; // rcx
  char *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  enum _LOCK_OPERATION v20; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE v21; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v2 = *((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 348LL) & 4) != 0 && (**((_DWORD **)a2 + 62) & 0x4000) == 0
    || (v5 = *((_DWORD *)a2 + 20), (v5 & 0x2000) != 0) )
  {
    v14 = *((_QWORD *)a2 + 12);
    if ( v14 && *(_QWORD *)(v14 + 24) )
    {
      v15 = *(PRKPROCESS **)(v14 + 8);
      memset(&v21, 0, sizeof(v21));
      KeStackAttachProcess(*v15, &v21);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 8) + 24LL) + 152LL))(
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL),
        *(_QWORD *)(v14 + 24));
      KeUnstackDetachProcess(&v21);
    }
    return 0LL;
  }
  v6 = *((_DWORD *)a2 + 85);
  if ( v6 )
  {
LABEL_11:
    *((_DWORD *)a2 + 85) = v6 + 1;
    return 0LL;
  }
  if ( (v5 & 0x8000) == 0 )
  {
    v7 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 62);
    if ( ((unsigned __int8)v7 & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
    v8 = VIDMM_GLOBAL::ProbeAndLockAllocation(
           v7,
           *((struct _VIDMM_LOCAL_ALLOC **)a2 + 12),
           a2,
           0LL,
           *((_QWORD *)a2 + 1),
           v20,
           this,
           0);
    v10 = (unsigned int *)*((_QWORD *)a2 + 62);
    v11 = v8;
    v12 = *v10;
    if ( (v12 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v11 < 0 )
    {
      _InterlockedIncrement(&dword_1C0051664);
      v19 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v19 + 24) = a2;
      *(_QWORD *)(v19 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdLowResource(v19);
      return 3223191809LL;
    }
    goto LABEL_10;
  }
  v16 = (char *)a2 + 512;
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v17 = *(unsigned int *)(*(_QWORD *)v16 + 40LL);
    if ( v17 < *((_QWORD *)a2 + 1) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17, v12, v9);
      *(_QWORD *)(v18 + 24) = *(unsigned int *)(*(_QWORD *)v16 + 40LL);
      *(_QWORD *)(v18 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdAssertion(v18);
      UnmapGpadl();
      *(_QWORD *)v16 = 0LL;
      return 3221225485LL;
    }
LABEL_10:
    VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(a2, v12, v9);
    v6 = *((_DWORD *)a2 + 85);
    goto LABEL_11;
  }
  return result;
}
