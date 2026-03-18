/*
 * XREFs of HalStartDynamicProcessor @ 0x140508D60
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpMcUpdateLock @ 0x1403989A4 (HalpMcUpdateLock.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403B3BA0 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpCheckNumaConfiguration @ 0x14051E118 (HalpCheckNumaConfiguration.c)
 *     HalpUpdateNumaConfiguration @ 0x14051E7B4 (HalpUpdateNumaConfiguration.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     HalpInterruptStartProcessor @ 0x140A53F54 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int started; // ebx

  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  if ( a2 >= (unsigned int)HalpQueryMaximumRegisteredProcessorCount()
    || !HalpInterruptClusterModeEnabled && !HalpInterruptPhysicalModeOnly && a2 >= HalpInterruptLogicalFlatLimit )
  {
    return 2LL;
  }
  if ( !HalpHiberInProgress )
  {
    MmLockPagableSectionByHandle(HalpSleepPageLock);
    HalpMcUpdateLock(v9, v8);
    if ( !(unsigned __int8)HalpCheckNumaConfiguration(a3, a4) )
      return 2LL;
  }
  started = HalpInterruptStartProcessor(a2, a3, 1LL, a1);
  if ( started != 4 && !HalpHiberInProgress )
    HalpUpdateNumaConfiguration(a3, a4);
  return started;
}
