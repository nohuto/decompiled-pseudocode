/*
 * XREFs of MiWriteProtectSystemImages @ 0x14082B668
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     MiProtectSystemImage @ 0x14082B6F0 (MiProtectSystemImage.c)
 */

_QWORD *MiWriteProtectSystemImages()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = (__int64)i[14];
    if ( !v2 || !*(_QWORD *)(MiSectionControlArea(v2) + 144) || ((_DWORD)i[13] & 0x8000000) == 0 )
      MiProtectSystemImage(i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
