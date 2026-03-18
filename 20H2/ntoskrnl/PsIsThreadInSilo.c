/*
 * XREFs of PsIsThreadInSilo @ 0x14023F0B8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405CFFEC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D029C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D05AC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408852FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140885618 (VrpHandleIoctlGetVirtualRootKey.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x14023F168 (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x1406DF41C (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1544) == -3LL )
    return PsIsProcessInSilo(*(_QWORD *)(a1 + 544));
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1544)) != 0;
}
