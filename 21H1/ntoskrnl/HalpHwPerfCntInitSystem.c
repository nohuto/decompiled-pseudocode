/*
 * XREFs of HalpHwPerfCntInitSystem @ 0x140996BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCompleteInitializeProfiling @ 0x140996C24 (HalpCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140996C4C (HalpInitializeProfiling.c)
 *     HalpInitializePmcCounterSetInfo @ 0x140A36610 (HalpInitializePmcCounterSetInfo.c)
 */

__int64 __fastcall HalpHwPerfCntInitSystem(int a1, unsigned int a2)
{
  switch ( a1 )
  {
    case 13:
      off_140C007D0[0] = (__int64 (__fastcall *)())HalpAllocatePmcCounterSet;
      off_140C007E0[0] = (__int64 (__fastcall *)())HalpFreePmcCounterSet;
      off_140C007D8[0] = (__int64 (__fastcall *)())HalpCollectPmcCounters;
      HalpInitializePmcCounterSetInfo();
      HalpInitializeProfiling(a2);
      HalpPerfInterruptHandlerRegistrationLock = 0LL;
      return 0LL;
    case 17:
      goto LABEL_6;
    case 19:
      HalpInitializeProfiling(a2);
LABEL_6:
      HalpCompleteInitializeProfiling();
      break;
  }
  return 0LL;
}
