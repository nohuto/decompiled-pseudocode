/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037B300
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140228E60 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x14037AF24 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14038BC94 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x140390BC0 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A2374 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403A85B0 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A8B44 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403ABC00 (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403AC52C (HalpHvDiscover.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6948 (HvlStartBootLogicalProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BB20C (HalpMmReservePageTablePages.c)
 *     HalpIsEFIRuntimeActive @ 0x1403CC420 (HalpIsEFIRuntimeActive.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1404C4000 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9344 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9474 (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x1409C2634 (VfAvlInitializeTreeEx.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A39690 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140A396FC (HalpInitializeInterrupts.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 *     ExInitializeHandleTablePackage @ 0x140A74084 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037B354 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalQueryMaximumProcessorCount(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( !HalpInterruptMaxProcessors || !HalpNumaInitializationComplete )
  {
    HalpInterruptLastProblem = 11;
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0xBuLL, 0LL, 0LL);
  }
  if ( (unsigned int)HalpInterruptModel(a1, 0LL) - 1 <= 3 && HalpNumaConfig )
    v1 = *(_DWORD *)(HalpNumaConfig + 60);
  if ( v1 < v2 )
    return v2;
  return v1;
}
