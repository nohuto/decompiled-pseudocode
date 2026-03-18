/*
 * XREFs of HalpPowerInitSystem @ 0x14099D460
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140A64D94 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A64F74 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C49E48 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
