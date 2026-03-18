/*
 * XREFs of HalpPowerInitSystem @ 0x140A5B230
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140B236AC (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B2388C (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140C4C028 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
