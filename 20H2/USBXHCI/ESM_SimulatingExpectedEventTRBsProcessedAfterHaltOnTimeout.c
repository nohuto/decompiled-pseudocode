/*
 * XREFs of ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout @ 0x1C004FBB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ESM_SimulatingExpectedEventTRBsProcessedAfterHaltOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(v1 + 80),
      2,
      13,
      122,
      (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 150LL;
}
