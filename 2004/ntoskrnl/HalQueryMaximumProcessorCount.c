/*
 * XREFs of HalQueryMaximumProcessorCount @ 0x140379380
 * Callers:
 *     PpmParkSteerInterrupts @ 0x14021DC00 (PpmParkSteerInterrupts.c)
 *     RtlpHpHeapCreate @ 0x140378FA4 (RtlpHpHeapCreate.c)
 *     HalpEfiLockOutRuntimeCallsForSystemSleep @ 0x1403892A4 (HalpEfiLockOutRuntimeCallsForSystemSleep.c)
 *     HalpHvTimerInitialize @ 0x14038E200 (HalpHvTimerInitialize.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039F5E4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerInitSystem @ 0x1403AC010 (HalpTimerInitSystem.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403AC5A4 (HalpMmAllocatePerProcessorMemory.c)
 *     HalpTimerRegister @ 0x1403AF660 (HalpTimerRegister.c)
 *     HalpHvDiscover @ 0x1403AFF8C (HalpHvDiscover.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     HalpMmReservePageTablePages @ 0x1403B7D6C (HalpMmReservePageTablePages.c)
 *     HalpIsEFIRuntimeActive @ 0x1403C8E10 (HalpIsEFIRuntimeActive.c)
 *     HalpEfiBugCheckAddPagesCallback @ 0x1404BF110 (HalpEfiBugCheckAddPagesCallback.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407A5594 (HalpQueryAcpiResourceRequirements.c)
 *     HalpInterruptGetIrtInfo @ 0x1407A56C4 (HalpInterruptGetIrtInfo.c)
 *     VfAvlInitializeTreeEx @ 0x1409BF634 (VfAvlInitializeTreeEx.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A3F9A0 (HalpInitializePmcCounterSetInfo.c)
 *     HalpInitializeInterrupts @ 0x140A3FA0C (HalpInitializeInterrupts.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 *     ExInitializeHandleTablePackage @ 0x140A70E84 (ExInitializeHandleTablePackage.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
