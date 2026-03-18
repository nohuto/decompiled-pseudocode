/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x1C0010470
 * Callers:
 *     ACPIInitRemoveDeviceExtension @ 0x1C0010388 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00562A8 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C001174C (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 608);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
