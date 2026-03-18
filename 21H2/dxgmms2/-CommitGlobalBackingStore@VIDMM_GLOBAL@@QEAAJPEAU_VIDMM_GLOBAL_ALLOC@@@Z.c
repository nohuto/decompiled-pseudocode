/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008E60C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C002CB20 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C008F1E4 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00DFED4 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v3; // r14d
  int v4; // edx
  PMDL PagesForMdl; // rax
  __int64 v7; // rcx
  _DWORD *v9; // rcx
  PVOID *v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  void *CurrentPartitionHandle; // rax
  int v14; // eax
  __int64 v15; // rcx
  PVOID v16; // rcx
  NTSTATUS inserted; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // eax
  bool v22; // zf
  NTSTATUS v23; // eax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rdx
  ADAPTER_RENDER *v27; // rcx
  _QWORD v28[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+38h] BYREF
  void *Handle; // [rsp+A0h] [rbp+40h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)a2 + 18);
  if ( (v4 & 0x2000) != 0 )
  {
    if ( !*((_QWORD *)a2 + 68) )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)-1LL,
                      gs_PhysicalAddressZero,
                      *((_QWORD *)a2 + 1),
                      (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 66) & 4) != 0)),
                      4u);
      *((_QWORD *)a2 + 68) = PagesForMdl;
      if ( !PagesForMdl )
      {
        WdLogSingleEntry1(1LL, 28927LL);
        DxgkLogInternalTriageEvent(v7, 0x40000LL);
        return 3221225495LL;
      }
    }
    *((_DWORD *)a2 + 19) |= 0x20u;
    goto LABEL_35;
  }
  if ( (v4 & 0x40000) == 0 && (**((_DWORD **)a2 + 66) & 0x20008) == 0 )
    goto LABEL_35;
  v9 = (_DWORD *)*((_QWORD *)a2 + 66);
  v29 = 0LL;
  if ( (*v9 & 0x400000) != 0 )
  {
    v10 = (PVOID *)((char *)a2 + 376);
    ObfReferenceObject(*((PVOID *)a2 + 47));
  }
  else
  {
    v11 = *((_QWORD *)a2 + 1);
    v29 = v11;
    v12 = ~(*v9 << 28) & 0x40000000 | 0x8040000u;
    if ( (v4 & 0x100) != 0 )
    {
      LODWORD(v12) = ~(*v9 << 28) & 0x40000000 | 0x80C0000;
      v29 = (v11 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    }
    v10 = (PVOID *)((char *)a2 + 376);
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
    v14 = MmCreateSection((char *)a2 + 376, 0LL, 0LL, &v29, 4, v12, CurrentPartitionHandle, 0LL);
    v3 = v14;
    if ( v14 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E88C);
      WdLogSingleEntry4(6LL, a2, v29, v12, v14);
      DxgkLogInternalTriageEvent(v15, 262145LL);
    }
    if ( (**((_DWORD **)a2 + 66) & 0x20000000) != 0 && *v10 )
    {
      ObfReferenceObject(*v10);
      v16 = *v10;
      Handle = 0LL;
      inserted = ObInsertObject(v16, 0LL, 0, 0, 0LL, &Handle);
      v3 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(1LL, a2, inserted);
        v19 = 0x40000LL;
LABEL_30:
        DxgkLogInternalTriageEvent(v18, v19);
LABEL_31:
        if ( *v10 )
          ObfDereferenceObject(*v10);
        goto LABEL_33;
      }
      ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
    }
    else if ( v3 < 0 )
    {
      goto LABEL_31;
    }
  }
  v20 = *((_DWORD *)a2 + 18);
  if ( (v20 & 0x4000) != 0 )
  {
    v21 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *((VIDMM_PROCESS **)a2 + 67),
            *v10,
            *((_QWORD *)a2 + 1),
            0,
            4u,
            (void **)a2 + 69,
            (unsigned __int64 *)a2 + 70,
            (void **)a2 + 68);
    v3 = v21;
    if ( v21 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E890);
      WdLogSingleEntry4(6LL, a2, *v10, v21, 29064LL);
LABEL_29:
      v19 = 262145LL;
      goto LABEL_30;
    }
    v22 = (*((_DWORD *)a2 + 18) & 0x400000) == 0;
LABEL_26:
    if ( v22 )
      goto LABEL_35;
    goto LABEL_27;
  }
  if ( (**((_DWORD **)a2 + 66) & 0x20008) == 0 )
  {
    v22 = (v20 & 0x400000) == 0;
    goto LABEL_26;
  }
LABEL_27:
  v23 = MmMapViewInSystemSpace(*v10, (PVOID *)a2 + 48, (PSIZE_T)a2 + 1);
  v3 = v23;
  if ( v23 < 0 )
  {
    _InterlockedIncrement(&dword_1C006E890);
    WdLogSingleEntry3(6LL, a2, *v10, v23);
    goto LABEL_29;
  }
  *((_DWORD *)a2 + 18) |= 0x1000000u;
LABEL_35:
  v24 = *((_DWORD *)a2 + 17);
  *((_DWORD *)a2 + 19) |= 0x20u;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1584LL * (v24 & 0x3F) + *((_QWORD *)this + 5028) + 1552),
    *((_QWORD *)a2 + 1));
  v25 = *((_DWORD *)a2 + 18);
  if ( (v25 & 0x400000) != 0 )
  {
    v26 = *((_QWORD *)a2 + 48);
    if ( v26 )
    {
      if ( (v25 & 0x800000) == 0 )
      {
        v28[0] = *(_QWORD *)(*((_QWORD *)a2 + 66) + 40LL);
        v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v28[1] = v26;
        v3 = ADAPTER_RENDER::DdiSetAllocationBackingStore(v27, (const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *)v28);
      }
    }
  }
LABEL_33:
  *((_DWORD *)a2 + 19) ^= (*((_DWORD *)a2 + 19) ^ (*((_DWORD *)a2 + 18) >> 14)) & 8;
  return (unsigned int)v3;
}
