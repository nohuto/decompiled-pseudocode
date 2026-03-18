/*
 * XREFs of PsIsThreadInSilo @ 0x14027D7A8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C9E2C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405CA0DC (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405CA3EC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PsLookupThreadByThreadId @ 0x140666140 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140666420 (PspThreadFromTicket.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087F7AC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14087FAC8 (VrpHandleIoctlGetVirtualRootKey.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x14027D828 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x14070CFEC (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1544)) != 0;
}
