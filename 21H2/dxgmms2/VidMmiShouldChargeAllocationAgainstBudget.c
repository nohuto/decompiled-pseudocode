/*
 * XREFs of VidMmiShouldChargeAllocationAgainstBudget @ 0x1C00871BC
 * Callers:
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0086E20 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4818 (-NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A9EC8 (-NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiShouldChargeAllocationAgainstBudget(__int64 **a1)
{
  __int64 v1; // r8

  v1 = **a1;
  return (*(_DWORD *)(v1 + 68) & 0x40) == 0 || *(_QWORD *)(a1[1][1] + 288) == **(_QWORD **)(v1 + 504);
}
