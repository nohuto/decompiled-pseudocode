/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008838C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BD90 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007BF20 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFB68 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0060ECC (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00BBD88 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  int v3; // eax
  VIDMM_GLOBAL *v6; // rsi
  int v7; // edx
  int v8; // eax
  void *v9; // rdx
  void *v10; // rcx

  v3 = *((_DWORD *)a2 + 20);
  v6 = this;
  if ( (v3 & 0x2000) == 0 )
  {
    if ( (v3 & 0x40000) == 0 && (**((_DWORD **)a2 + 62) & 0x10020008) == 0 )
      goto LABEL_8;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(**((unsigned int **)a2 + 62));
    this = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 62);
    if ( ((unsigned int)this & 0x4000000) == 0 || !*((_DWORD *)a2 + 93) )
    {
      v7 = *((_DWORD *)a2 + 20);
      v8 = **((_DWORD **)a2 + 62);
      if ( (v7 & 0x4000) != 0 && (v7 & 0x40000) != 0 )
      {
        v9 = (void *)*((_QWORD *)a2 + 65);
        if ( v9 )
        {
          VIDMM_PROCESS::UnmapHostAddressesFromGuest(
            *((VIDMM_PROCESS **)a2 + 63),
            v9,
            *((_QWORD *)a2 + 66),
            *((_QWORD *)a2 + 1),
            1);
          v8 = **((_DWORD **)a2 + 62);
        }
      }
      if ( (v8 & 0x20008) != 0 )
        MmUnmapViewInSystemSpace(*((PVOID *)a2 + 45));
      v10 = (void *)*((_QWORD *)a2 + 44);
      if ( a3 )
        VidMmDereferenceObjectAsync(v10);
      else
        ObfDereferenceObject(v10);
      *((_QWORD *)a2 + 44) = 0LL;
    }
    else
    {
LABEL_8:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1584LL * (*((_DWORD *)a2 + 19) & 0x3F) + *((_QWORD *)v6 + 5027) + 1552),
    -*((_QWORD *)a2 + 1));
  *((_DWORD *)a2 + 21) &= ~0x40u;
}
