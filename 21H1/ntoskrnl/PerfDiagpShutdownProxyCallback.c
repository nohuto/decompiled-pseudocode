/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x14092B4D0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1407B988C (PerfDiagpRequestState.c)
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
