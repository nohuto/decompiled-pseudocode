/*
 * XREFs of EtwCheckCoverage @ 0x180085AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl EtwCheckCoverage(PTELEMETRY_COVERAGE_POINT CoveragePoint)
{
  unsigned int *TelemetryCoverageHeader; // rdx
  ULONG Hash; // r8d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r10
  unsigned int *v8; // rcx
  unsigned int *i; // rax

  TelemetryCoverageHeader = (unsigned int *)NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader || (*((_BYTE *)TelemetryCoverageHeader + 2) & 1) != 0 )
    return 0;
  Hash = CoveragePoint->Hash;
  v5 = TelemetryCoverageHeader[1];
  v6 = Hash & TelemetryCoverageHeader[2];
  v7 = (unsigned __int64)&TelemetryCoverageHeader[v5 + 13];
  if ( v6 >= (unsigned int)v5 )
    v6 = v6 - (unsigned int)v5 < (unsigned int)v5 ? v6 - v5 : 0;
  v8 = &TelemetryCoverageHeader[v6 + 13];
  i = v8;
  if ( (unsigned __int64)v8 >= v7 )
  {
LABEL_10:
    for ( i = TelemetryCoverageHeader + 13; i < v8; ++i )
    {
      if ( !*i )
        goto LABEL_8;
      if ( *i == Hash )
        goto LABEL_9;
    }
    i = 0LL;
  }
  else
  {
    while ( *i )
    {
      if ( *i == Hash )
        goto LABEL_9;
      if ( (unsigned __int64)++i >= v7 )
        goto LABEL_10;
    }
  }
LABEL_8:
  if ( *i != Hash )
    return 0;
LABEL_9:
  CoveragePoint->LastCoveredRound = TelemetryCoverageHeader[6];
  return 1;
}
