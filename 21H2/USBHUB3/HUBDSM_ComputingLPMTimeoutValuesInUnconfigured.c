/*
 * XREFs of HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1C0023210
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C002DC74 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 */

__int64 __fastcall HUBDSM_ComputingLPMTimeoutValuesInUnconfigured(__int64 a1)
{
  return HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(*(_QWORD *)(a1 + 960));
}
