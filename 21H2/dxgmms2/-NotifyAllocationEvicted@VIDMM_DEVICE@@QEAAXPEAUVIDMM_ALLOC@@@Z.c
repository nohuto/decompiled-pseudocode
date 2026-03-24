/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0066A58
 * Callers:
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0063C5C (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00B86B8 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0066ACC (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0067EB0 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE ***this, struct VIDMM_ALLOC *a2)
{
  _QWORD *v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 14);
  v5 = (VIDMM_DEVICE *)v3[14];
  if ( *((_QWORD **)v5 + 1) != v3 + 14
    || (v6 = (VIDMM_DEVICE **)v3[15], *v6 != v4)
    || (*v6 = v5, *((_QWORD *)v5 + 1) = v6, v7 = this[22], *v7 != (VIDMM_DEVICE *)(this + 21)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 21;
  v3[15] = v7;
  *v7 = v4;
  this[22] = (VIDMM_DEVICE **)v4;
}
