/*
 * XREFs of HalpMmUpdateTiledMemoryMapTargetStub @ 0x140396A68
 * Callers:
 *     HalpBuildResumeStructures @ 0x140A522B8 (HalpBuildResumeStructures.c)
 *     HalpInterruptStartProcessor @ 0x140A53F54 (HalpInterruptStartProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

__int64 HalpMmUpdateTiledMemoryMapTargetStub()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( HalpTargetStubPtePa )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(HalpTargetStubPtePa, 4096LL, 4u);
    if ( v1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HalpLMStub);
      if ( PhysicalAddress.QuadPart )
        *v1 ^= (PhysicalAddress.QuadPart ^ *v1) & 0xFFFFFFFFFF000LL;
      else
        v0 = -1073741823;
      MmUnmapIoSpace(v1, 0x1000uLL);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
