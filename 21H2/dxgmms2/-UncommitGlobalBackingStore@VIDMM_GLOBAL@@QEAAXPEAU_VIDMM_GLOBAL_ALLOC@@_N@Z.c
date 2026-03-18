/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00A49DC (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C007C570 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00E03D4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  char v5; // di
  VIDMM_GLOBAL *v7; // rsi
  int v8; // eax
  int v9; // ecx
  void *v10; // rdx
  void *v11; // rcx

  v4 = *((_DWORD *)a2 + 18);
  v5 = a3;
  v7 = this;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x100000) == 0 )
  {
    if ( (v4 & 0x40000) == 0 && (**((_DWORD **)a2 + 66) & 0x10020008) == 0 )
      goto LABEL_9;
    this = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 66);
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    if ( (**((_DWORD **)a2 + 66) & 0x4000000) == 0 || !*((_DWORD *)a2 + 99) )
    {
      v8 = *((_DWORD *)a2 + 18);
      v9 = v8;
      if ( (v8 & 0x4000) != 0 && (v8 & 0x40000) != 0 )
      {
        v10 = (void *)*((_QWORD *)a2 + 69);
        if ( v10 )
        {
          VIDMM_PROCESS::UnmapHostAddressesFromGuest(
            *((VIDMM_PROCESS **)a2 + 67),
            v10,
            *((_QWORD *)a2 + 70),
            *((_QWORD *)a2 + 1),
            1);
          v9 = *((_DWORD *)a2 + 18);
        }
      }
      if ( (v9 & 0x1000000) != 0 )
      {
        MmUnmapViewInSystemSpace(*((PVOID *)a2 + 48));
        *((_DWORD *)a2 + 18) &= ~0x1000000u;
        *((_QWORD *)a2 + 48) = 0LL;
      }
      v11 = (void *)*((_QWORD *)a2 + 47);
      if ( v5 )
        VidMmDereferenceObjectAsync(v11);
      else
        ObfDereferenceObject(v11);
      *((_QWORD *)a2 + 47) = 0LL;
    }
    else
    {
LABEL_9:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1584LL * (*((_DWORD *)a2 + 17) & 0x3F) + *((_QWORD *)v7 + 5028) + 1552),
    -*((_QWORD *)a2 + 1));
  *((_DWORD *)a2 + 19) &= ~0x20u;
}
