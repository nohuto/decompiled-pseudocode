/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x14092FD80
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1407CF54C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpShutdownProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( Level == 85 )
      PerfDiagpRequestState(7);
  }
}
