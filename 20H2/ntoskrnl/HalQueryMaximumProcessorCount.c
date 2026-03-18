/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037B0B0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x14037ACD4 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14038B544 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x1403906F0 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A1AB4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403AEB94 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403B1C50 (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403B257C (HalpHvDiscover.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B38F0 (HvlStartBootLogicalProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BA80C (HalpMmReservePageTablePages.c)
 *     HalpIsEFIRuntimeActive @ 0x1403CBA50 (HalpIsEFIRuntimeActive.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1404C2630 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B46E4 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B4814 (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x1409C5644 (VfAvlInitializeTreeEx.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A45C40 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140A45CAC (HalpInitializeInterrupts.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 *     ExInitializeHandleTablePackage @ 0x140A77104 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
