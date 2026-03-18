/*
 * XREFs of VRegEnabledInJob @ 0x1405CB330
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x1405C9180 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1405C9D30 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140206860 (PsGetCurrentSilo.c)
 *     PsGetPermanentSiloContext @ 0x14025E5D0 (PsGetPermanentSiloContext.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetParentSilo @ 0x1409018D0 (PsGetParentSilo.c)
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
