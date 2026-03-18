/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E0D4
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BDB0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF40 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C006F798 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00BB8D8 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
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
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  PVOID v29; // rcx
  int v30; // ecx
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // [rsp+68h] [rbp+10h] BYREF
  void *Handle; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v3) = 0;
  v4 = *((_DWORD *)a2 + 20);
  if ( (v4 & 0x2000) != 0 )
  {
    if ( !*((_QWORD *)a2 + 64) )
    {
      PagesForMdl = MmAllocatePagesForMdlEx(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)-1LL,
                      gs_PhysicalAddressZero,
                      *((_QWORD *)a2 + 1),
                      (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 62) & 4) != 0)),
                      4u);
      *((_QWORD *)a2 + 64) = PagesForMdl;
      if ( !PagesForMdl )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
        *(_QWORD *)(v10 + 24) = 28290LL;
        WdLogEvent5_WdAssertion(v10);
        return 3221225495LL;
      }
    }
    *((_DWORD *)a2 + 21) |= 0x40u;
    goto LABEL_29;
  }
  if ( (v4 & 0x40000) != 0 || (**((_DWORD **)a2 + 62) & 0x20008) != 0 )
  {
    v12 = (_DWORD *)*((_QWORD *)a2 + 62);
    v34 = 0LL;
    if ( (*v12 & 0x400000) != 0 )
    {
      v13 = (PVOID *)((char *)a2 + 352);
      ObfReferenceObject(*((PVOID *)a2 + 44));
    }
    else
    {
      v14 = *((_QWORD *)a2 + 1);
      v34 = v14;
      v15 = ~(*v12 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v15 = ~(*v12 << 28) & 0x40000000 | 0x80C0000;
        v34 = (v14 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v13 = (PVOID *)((char *)a2 + 352);
      CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
      v17 = MmCreateSection((char *)a2 + 352, 0LL, 0LL, &v34, 4, v15, CurrentPartitionHandle, 0LL);
      v3 = v17;
      if ( v17 < 0 )
      {
        _InterlockedIncrement(&dword_1C00517DC);
        v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18);
        v19[3] = a2;
        v19[4] = v34;
        v19[5] = v15;
        v19[6] = v3;
        WdLogEvent5_WdLowResource(v19);
      }
      if ( (**((_DWORD **)a2 + 62) & 0x20000000) != 0 && *v13 )
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
        goto LABEL_30;
    }
    if ( (*((_DWORD *)a2 + 20) & 0x4000) != 0 )
    {
      v26 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
              *((VIDMM_PROCESS **)a2 + 63),
              *v13,
              *((_QWORD *)a2 + 1),
              0,
              4u,
              (void **)a2 + 65,
              (unsigned __int64 *)a2 + 66,
              (void **)a2 + 64);
      v3 = v26;
      if ( v26 < 0 )
      {
        _InterlockedIncrement(&dword_1C00517E0);
        v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v27);
        v28[3] = a2;
        v29 = *v13;
        v28[6] = 28426LL;
LABEL_27:
        v28[4] = v29;
        v28[5] = v3;
        WdLogEvent5_WdLowResource(v28);
        goto LABEL_28;
      }
    }
    else
    {
      v30 = **((_DWORD **)a2 + 62);
      if ( (v30 & 8) == 0 && (v30 & 0x20000) == 0 )
      {
LABEL_28:
        if ( (int)v3 >= 0 )
          goto LABEL_29;
LABEL_30:
        if ( *v13 )
          ObfDereferenceObject(*v13);
        goto LABEL_32;
      }
      v31 = MmMapViewInSystemSpace(*v13, (PVOID *)a2 + 45, (PSIZE_T)a2 + 1);
      v3 = v31;
      if ( v31 < 0 )
      {
        _InterlockedIncrement(&dword_1C00517E0);
        v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v32);
        v28[3] = a2;
        v29 = *v13;
        goto LABEL_27;
      }
    }
  }
LABEL_29:
  v33 = *((_DWORD *)a2 + 19);
  *((_DWORD *)a2 + 21) |= 0x40u;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1584LL * (v33 & 0x3F) + *((_QWORD *)this + 5027) + 1552),
    *((_QWORD *)a2 + 1));
LABEL_32:
  *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (*((_DWORD *)a2 + 20) >> 14)) & 8;
  return (unsigned int)v3;
}
