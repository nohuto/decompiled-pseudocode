/*
 * XREFs of TtmpTraceLoggingCallback @ 0x140901F60
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x1408FBDA0 (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
