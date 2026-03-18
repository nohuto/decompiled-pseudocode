/*
 * XREFs of VRegEnabledInJob @ 0x1405CC700
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405CA0DC (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x1405CA550 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1405CB100 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087F7AC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402056B0 (PsGetPermanentSiloContext.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     PsGetParentSilo @ 0x140902730 (PsGetParentSilo.c)
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
