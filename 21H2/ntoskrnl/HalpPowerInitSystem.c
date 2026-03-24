/*
 * XREFs of HalpPowerInitSystem @ 0x1409A0D80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406D0CD0 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140A6949C (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C49FE8 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
