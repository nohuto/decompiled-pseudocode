/*
 * XREFs of VrpLockJobContextExclusive @ 0x1405CB45C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C8674 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405C8D0C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405C901C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087E4BC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087EB6C (VrpHandleIoctlModifyFlags.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall VrpLockJobContextExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
}
