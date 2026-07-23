/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x14037AE50
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x14038BDE4 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x140390D10 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A98D4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403AC990 (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403AD2BC (HalpHvDiscover.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B6AB8 (HvlStartBootLogicalProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403BB37C (HalpMmReservePageTablePages.c)
 *     HalpIsEFIRuntimeActive @ 0x1403CC590 (HalpIsEFIRuntimeActive.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1404C4240 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9864 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9994 (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x1409C3634 (VfAvlInitializeTreeEx.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A3A690 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140A3A6FC (HalpInitializeInterrupts.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 *     ExInitializeHandleTablePackage @ 0x140A75084 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
