/*
 * XREFs of ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C004EFE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ESM_SimulatingEndpointHaltReceivedOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(v1 + 80),
      2,
      13,
      122,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 154LL;
}
