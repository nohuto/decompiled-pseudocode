/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x1403785C0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x1403781E4 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x140388334 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x14038D690 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039EE54 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403A4F50 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A54E4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403A85A0 (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403A8ECC (HalpHvDiscover.c)
 *     HvlStartBootLogicalProcessors @ 0x1403AB304 (HvlStartBootLogicalProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403B6F3C (HalpMmReservePageTablePages.c)
 *     HalpIsEFIRuntimeActive @ 0x1403C8000 (HalpIsEFIRuntimeActive.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1404BEA10 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407A2D44 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x1407A2E74 (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x1409BF624 (VfAvlInitializeTreeEx.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A36610 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140A3667C (HalpInitializeInterrupts.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
