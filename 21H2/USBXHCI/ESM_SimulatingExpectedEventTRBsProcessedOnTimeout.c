/*
 * XREFs of ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C004FB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ESM_SimulatingExpectedEventTRBsProcessedOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(v1 + 80),
      2,
      13,
      121,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 150LL;
}
