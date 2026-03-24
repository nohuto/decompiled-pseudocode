/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064960
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D34C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007C8F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x1C0017884 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C0067FE8 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BA4C4 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdi
  int v4; // edx
  PMDL PagesForMdl; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _DWORD *v12; // rcx
  PVOID *v13; // r14
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  void *CurrentPartitionHandle; // rax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  PVOID v20; // rcx
  NTSTATUS inserted; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  PVOID v30; // rcx
  bool v31; // zf
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  ADAPTER_RENDER *v38; // rcx
  _QWORD v39[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp+10h] BYREF
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v3) = 0;
  v4 = *((_DWORD *)a2 + 20);
  if ( (v4 & 0x2000) != 0 )
  {
    if ( !*((_QWORD *)a2 + 66) )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)-1LL,
                      gs_PhysicalAddressZero,
                      *((_QWORD *)a2 + 1),
                      (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 64) & 4) != 0)),
                      4u);
      *((_QWORD *)a2 + 66) = PagesForMdl;
      if ( !PagesForMdl )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
        *(_QWORD *)(v10 + 24) = 28709LL;
        WdLogEvent5_WdAssertion(v10);
        return 3221225495LL;
      }
    }
    *((_DWORD *)a2 + 21) |= 0x40u;
    goto LABEL_32;
  }
  if ( (v4 & 0x40000) != 0 || (**((_DWORD **)a2 + 64) & 0x20008) != 0 )
  {
    v12 = (_DWORD *)*((_QWORD *)a2 + 64);
    v40 = 0LL;
    if ( (*v12 & 0x400000) != 0 )
    {
      v13 = (PVOID *)((char *)a2 + 368);
      ObfReferenceObject(*((PVOID *)a2 + 46));
    }
    else
    {
      v14 = *((_QWORD *)a2 + 1);
      v40 = v14;
      v15 = ~(*v12 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v15 = ~(*v12 << 28) & 0x40000000 | 0x80C0000;
        v40 = (v14 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v13 = (PVOID *)((char *)a2 + 368);
      CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
      v17 = MmCreateSection((char *)a2 + 368, 0LL, 0LL, &v40, 4, v15, CurrentPartitionHandle, 0LL);
      v3 = v17;
      if ( v17 < 0 )
      {
        _InterlockedIncrement(&dword_1C00507DC);
        v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18);
        v19[3] = a2;
        v19[4] = v40;
        v19[5] = v15;
        v19[6] = v3;
        WdLogEvent5_WdLowResource(v19);
      }
      if ( (**((_DWORD **)a2 + 64) & 0x20000000) != 0 && *v13 )
      {
        ObfReferenceObject(*v13);
        v20 = *v13;
        Handle = 0LL;
        inserted = ObInsertObject(v20, 0LL, 0, 0, 0LL, &Handle);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v23, v22, v24);
          *(_QWORD *)(v25 + 24) = a2;
          *(_QWORD *)(v25 + 32) = v3;
          WdLogEvent5_WdAssertion(v25);
        }
        else
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
        }
      }
      if ( (int)v3 < 0 )
        goto LABEL_39;
    }
    v26 = *((_DWORD *)a2 + 20);
    if ( (v26 & 0x4000) != 0 )
    {
      v27 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
              *((VIDMM_PROCESS **)a2 + 65),
              *v13,
              *((_QWORD *)a2 + 1),
              0,
              4u,
              (void **)a2 + 67,
              (unsigned __int64 *)a2 + 68,
              (void **)a2 + 66);
      v3 = v27;
      if ( v27 < 0 )
      {
        _InterlockedIncrement(&dword_1C00507E0);
        v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(v28);
        v29[3] = a2;
        v30 = *v13;
        v29[6] = 28846LL;
        goto LABEL_29;
      }
      v31 = (*((_DWORD *)a2 + 20) & 0x200000) == 0;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 64) & 0x20008) != 0 )
      {
LABEL_27:
        v32 = MmMapViewInSystemSpace(*v13, (PVOID *)a2 + 47, (PSIZE_T)a2 + 1);
        v3 = v32;
        if ( v32 >= 0 )
        {
          *((_DWORD *)a2 + 20) |= 0x800000u;
LABEL_31:
          if ( (int)v3 >= 0 )
            goto LABEL_32;
LABEL_39:
          if ( *v13 )
            ObfDereferenceObject(*v13);
          goto LABEL_41;
        }
        _InterlockedIncrement(&dword_1C00507E0);
        v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(v33);
        v29[3] = a2;
        v30 = *v13;
LABEL_29:
        v29[5] = v3;
        v29[4] = v30;
        WdLogEvent5_WdLowResource(v29);
        goto LABEL_31;
      }
      v31 = (v26 & 0x200000) == 0;
    }
    if ( v31 )
      goto LABEL_31;
    goto LABEL_27;
  }
LABEL_32:
  v34 = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 21) |= 0x40u;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1584LL * (v34 & 0x3F) + *((_QWORD *)this + 5027) + 1552),
    *((_QWORD *)a2 + 1));
  v35 = *((_DWORD *)a2 + 20);
  if ( (v35 & 0x200000) != 0 && *((_QWORD *)a2 + 47) && (v35 & 0x400000) == 0 )
  {
    v36 = *((_QWORD *)a2 + 5);
    if ( v36 )
      v37 = *(_QWORD *)(v36 + 16);
    else
      v37 = *((_QWORD *)a2 + 6);
    v39[1] = *((_QWORD *)a2 + 47);
    v38 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v39[0] = v37;
    LODWORD(v3) = ADAPTER_RENDER::DdiSetAllocationBackingStore(
                    v38,
                    (const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *)v39);
  }
LABEL_41:
  *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (*((_DWORD *)a2 + 20) >> 14)) & 8;
  return (unsigned int)v3;
}
