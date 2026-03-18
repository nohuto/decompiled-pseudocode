/*
 * XREFs of PsGetJobSilo @ 0x140200050
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14087E7D8 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087EB6C (VrpHandleIoctlModifyFlags.c)
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
