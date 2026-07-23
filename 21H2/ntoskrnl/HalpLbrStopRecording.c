/*
 * XREFs of HalpLbrStopRecording @ 0x140867080
 * Callers:
 *     <none>
 * Callees:
 *     HalpLbrConfigurationWorker @ 0x140866F1C (HalpLbrConfigurationWorker.c)
 */

__int64 __fastcall HalpLbrStopRecording(int a1)
{
  if ( !HalpLbrIsInUse )
    return 290LL;
  if ( a1 != HalpLbrCurrentHandle )
    return 3221225480LL;
  HalpLbrAreOperationsAllowed = 0;
  HalpLbrConfigurationWorker(0, 0);
  _interlockedbittestandreset(&KiCpuTracingFlags, 1u);
  _InterlockedCompareExchange(&HalpLbrIsInUse, 0, 1);
  return 0LL;
}
