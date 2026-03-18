/*
 * XREFs of VrpUnlockJobContextExclusive @ 0x1405CA2FC
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405C9A44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C9E2C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405CA0DC (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405CA3EC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14087F7AC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x14087FE5C (VrpHandleIoctlModifyFlags.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall VrpUnlockJobContextExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v2; // al

  v1 = a1 + 16;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
  KeAbPostRelease(v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
