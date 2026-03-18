/*
 * XREFs of ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA5FC
 * Callers:
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C008DB14 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 *     ?UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0092620 (-UnlockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00A5E70 (-EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00E03D4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnHost(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  VIDMM_PROCESS *v2; // rcx

  if ( *((_QWORD *)a1 + 69) )
  {
    v2 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v2 = (VIDMM_PROCESS *)*((_QWORD *)v2 + 1);
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v2, *((void **)a1 + 69), *((_QWORD *)a1 + 70), *((_QWORD *)a1 + 1), 0);
    *((_QWORD *)a1 + 70) = 0LL;
    *((_QWORD *)a1 + 69) = 0LL;
  }
}
