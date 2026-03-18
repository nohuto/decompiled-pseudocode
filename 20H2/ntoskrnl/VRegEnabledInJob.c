/*
 * XREFs of VRegEnabledInJob @ 0x1405D2D60
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D029C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x1405D0710 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1405D1760 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408852FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140211160 (PsGetCurrentSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     PsGetPermanentSiloContext @ 0x1402F1680 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x140908340 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = PsGetCurrentSilo();
  v3 = HalSystemVectorDispatchEntry();
  if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
      return 0LL;
  }
  return 1LL;
}
