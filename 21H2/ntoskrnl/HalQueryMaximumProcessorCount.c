/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14036FA30
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x14036F620 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1403969E8 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x14039E230 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403BB634 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403BE0BC (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403BEA4C (HalpHvDiscover.c)
 *     HalpMmReservePageTablePages @ 0x1403BEC78 (HalpMmReservePageTablePages.c)
 *     HvlStartBootLogicalProcessors @ 0x1403DEDD0 (HvlStartBootLogicalProcessors.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1405104F0 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x140844658 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x14084476C (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x140A7C400 (VfAvlInitializeTreeEx.c)
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140AF89EC (HalpInitializePmcCounterSetInfo.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 *     ExInitializeHandleTablePackage @ 0x140B31380 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14036FA84 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 HalQueryMaximumProcessorCount()
{
  unsigned int v0; // edx
  unsigned int v1; // r10d
  ULONG_PTR BugCheckParameter4; // r10

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptSetProblemEx(0, 11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 722);
    KeBugCheckEx(0x5Cu, 0x8000uLL, HalpInterruptLastProblem, 0LL, BugCheckParameter4);
  }
  if ( (unsigned int)HalpInterruptModel() - 1 <= 3 && HalpNumaConfig )
    v1 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v1 < v0 )
    return v0;
  return v1;
}
