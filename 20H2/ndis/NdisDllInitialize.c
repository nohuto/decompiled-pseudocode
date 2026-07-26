/*
 * XREFs of NdisDllInitialize @ 0x1C0036110
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?NdispRegisterShim@@YAXXZ @ 0x1C01092F8 (-NdispRegisterShim@@YAXXZ.c)
 *     ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0146234 (-ndisInitializePerProcessorSlotAllocator@@YAXXZ.c)
 *     ?ndisCpuInitializeSubsystemPhase1@@YAXXZ @ 0x1C014629C (-ndisCpuInitializeSubsystemPhase1@@YAXXZ.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax
  signed __int32 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  if ( !ndisDllInitialized )
  {
    ndisDllInitialized = 1;
    ndisCpuInitializeSubsystemPhase1();
    ndisMaxCacheLineSize = KeGetRecommendedSharedDataAlignment();
    if ( ndisMaxCacheLineSize < 0x40 )
      ndisMaxCacheLineSize = 64;
    ndisInitializePerProcessorSlotAllocator();
    if ( _InterlockedIncrement(&v3) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 520LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
      qword_1C00E62E0 = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 520LL * ndisMaxNumberOfProcessors);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v0;
}
