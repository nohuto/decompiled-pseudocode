/*
 * XREFs of HalpPowerInitSystem @ 0x14099BCC0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406EF480 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140A653B4 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A65594 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C49FA8 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
