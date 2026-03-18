/*
 * XREFs of HalpInterruptBuildGlobalStartupStub @ 0x1403B8E60
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A54BA0 (HalpInterruptInitSystem.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HalpHvVpStartEnabled @ 0x1403B32E8 (HalpHvVpStartEnabled.c)
 *     HalpInterruptBuildStartupStub @ 0x1403B8EAC (HalpInterruptBuildStartupStub.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140A54CD8 (HalpMmBuildTiledMemoryMap.c)
 */

__int64 HalpInterruptBuildGlobalStartupStub()
{
  int v0; // edi
  void *ContiguousNodeMemory; // rax

  v0 = 0;
  if ( HalpHvVpStartEnabled() && HalpHvSleepEnlightenedCpuManager )
  {
    if ( !HalpLowStub )
    {
      if ( !HalpHvCpuManager && HalpInterruptBlockedProcessors )
        return (unsigned int)-1073741801;
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
      if ( (HalpLowStub = (__int64)ContiguousNodeMemory) == 0 )
        return (unsigned int)-1073741801;
      HalpLowStubPhysicalAddress = (PVOID)MmGetPhysicalAddress(ContiguousNodeMemory).QuadPart;
    }
    goto LABEL_4;
  }
  v0 = HalpMmBuildTiledMemoryMap();
  if ( v0 >= 0 )
  {
    HalpTiledMemoryMapActive = 1;
LABEL_4:
    HalpInterruptGlobalStartupBlock = (PVOID)HalpLowStub;
    HalpInterruptBuildStartupStub();
  }
  return (unsigned int)v0;
}
