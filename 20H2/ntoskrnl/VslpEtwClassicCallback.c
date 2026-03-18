/*
 * XREFs of VslpEtwClassicCallback @ 0x140893200
 * Callers:
 *     <none>
 * Callees:
 *     VslpSkStopProfiling @ 0x1404FC54C (VslpSkStopProfiling.c)
 *     VslpSkStartProfiling @ 0x140893450 (VslpSkStartProfiling.c)
 */

void __fastcall VslpEtwClassicCallback(__int64 a1, char a2, __int64 a3)
{
  if ( !a2 )
  {
    if ( !VslpLoggerId )
      return;
    VslpSkStopProfiling();
    goto LABEL_7;
  }
  if ( !VslpLoggerId && (int)VslpSkStartProfiling(a3) < 0 )
LABEL_7:
    VslpLoggerId = 0LL;
}
