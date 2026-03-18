/*
 * XREFs of PerfDiagpShutdownProxyCallback @ 0x1409325B0
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1407CB28C (PerfDiagpRequestState.c)
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
