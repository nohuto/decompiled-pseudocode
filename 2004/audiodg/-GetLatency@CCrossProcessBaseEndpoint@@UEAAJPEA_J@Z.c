/*
 * XREFs of ?GetLatency@CCrossProcessBaseEndpoint@@UEAAJPEA_J@Z @ 0x140057F50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetLatency(CCrossProcessBaseEndpoint *this, __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      *a2 = *((_QWORD *)this + 21);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetLatency", 0x150u, v2);
  return v2;
}
