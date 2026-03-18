/*
 * XREFs of PsGetJobSilo @ 0x140200050
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405CFBFC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405CFFEC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D029C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D05AC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408852FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140885618 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlModifyFlags @ 0x1408859AC (VrpHandleIoctlModifyFlags.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v2; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo();
  if ( !JobSilo )
    return 3221226761LL;
  *v2 = JobSilo;
  return 0LL;
}
