/*
 * XREFs of PsIsThreadInSilo @ 0x140204498
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PsLookupThreadByThreadId @ 0x1405DFE40 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x1405E0120 (PspThreadFromTicket.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14087E7D8 (VrpHandleIoctlGetVirtualRootKey.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140204518 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x1406E918C (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1544)) != 0;
}
