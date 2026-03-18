/*
 * XREFs of PerfDiagpSecondaryLogonProxyCallback @ 0x140932580
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x1407CB28C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpSecondaryLogonProxyCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  int v4; // ecx

  if ( ControlCode )
  {
    if ( Level != 85 )
      return;
    v4 = 5;
  }
  else
  {
    v4 = 6;
  }
  PerfDiagpRequestState(v4);
}
