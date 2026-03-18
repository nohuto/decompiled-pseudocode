/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298
 * Callers:
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008385C (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085000 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C00A50CC (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00A51D8 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AA760 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB5A0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0085A0C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

void __fastcall VidMmRecordAlloc(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  int v13; // ebp
  unsigned int v14; // ebx
  __int64 v15; // rdi
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  struct _VIDMM_PROCESS_COMMITMENT_INFO *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int i; // ecx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  int v30; // ecx

  v7 = VIDMM_GLOBAL::AdapterId(a1);
  v11 = v10[5];
  v12 = v7;
  if ( (v10[20] & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v10[4] + 1;
  v14 = *(_DWORD *)(v8 + 64);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 8LL * v7);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v15 + 440, 0LL);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(*(VIDMM_PROCESS **)(a3 + 8), v12, v11);
  v17 = CommitmentInformation;
  if ( v14 && (v14 & 0x1F) != v13 )
  {
    v20 = 1;
    for ( i = 6; i < 0x1E; i += 6 )
    {
      if ( ((v14 >> i) & 0x1F) == v13 )
      {
        v22 = 2LL * v20;
        v23 = *((_QWORD *)CommitmentInformation + 2 * v20 + 9);
        v24 = *((_DWORD *)v17 + 4 * v20 + 16);
        v25 = v23 - a5;
        v26 = a5 + v23;
        if ( a6 )
          v26 = v25;
        v27 = v24 + 1;
        *((_QWORD *)v17 + v22 + 9) = v26;
        if ( a6 )
          v27 = v24 - 1;
        *((_DWORD *)v17 + 2 * v22 + 16) = v27;
        goto LABEL_14;
      }
      ++v20;
    }
    v28 = *((_DWORD *)CommitmentInformation + 36);
    v29 = a5 + *((_QWORD *)CommitmentInformation + 19);
    if ( a6 )
      v29 = *((_QWORD *)v17 + 19) - a5;
    v30 = v28 + 1;
    *((_QWORD *)v17 + 19) = v29;
    if ( a6 )
      v30 = v28 - 1;
    *((_DWORD *)v17 + 36) = v30;
  }
  else
  {
    v18 = *((_DWORD *)CommitmentInformation + 16);
    v19 = *((_QWORD *)v17 + 9);
    if ( a6 )
    {
      *((_DWORD *)v17 + 16) = v18 - 1;
      *((_QWORD *)v17 + 9) = v19 - a5;
    }
    else
    {
      *((_DWORD *)v17 + 16) = v18 + 1;
      *((_QWORD *)v17 + 9) = v19 + a5;
    }
  }
LABEL_14:
  ExReleasePushLockExclusiveEx(v15 + 440, 0LL);
  KeLeaveCriticalRegion();
}
