/*
 * XREFs of TtmpTsmTestTimeout @ 0x1408F9C00
 * Callers:
 *     TtmpTsmEvaluateTimeouts @ 0x1408F9AC8 (TtmpTsmEvaluateTimeouts.c)
 * Callees:
 *     <none>
 */

char __fastcall TtmpTsmTestTimeout(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( a1 )
  {
    if ( a1 <= a2 )
      return 1;
    *a3 = a1;
  }
  return 0;
}
