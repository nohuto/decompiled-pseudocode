/*
 * XREFs of HalStartDynamicProcessor @ 0x1404BC2E0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA678 (KiStartDynamicProcessor.c)
 *     HalpInterruptReinitialize @ 0x140995D78 (HalpInterruptReinitialize.c)
 * Callees:
 *     HalpMcUpdateLock @ 0x140387EE4 (HalpMcUpdateLock.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A2374 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpCheckNumaConfiguration @ 0x1404D1BA0 (HalpCheckNumaConfiguration.c)
 *     HalpUpdateNumaConfiguration @ 0x1404D1F34 (HalpUpdateNumaConfiguration.c)
 *     MmLockPagableSectionByHandle @ 0x1406EF0C0 (MmLockPagableSectionByHandle.c)
 *     HalpInterruptStartProcessor @ 0x140999F74 (HalpInterruptStartProcessor.c)
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
