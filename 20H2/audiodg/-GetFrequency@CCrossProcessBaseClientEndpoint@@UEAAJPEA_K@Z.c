/*
 * XREFs of ?GetFrequency@CCrossProcessBaseClientEndpoint@@UEAAJPEA_K@Z @ 0x140060960
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061E18 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetFrequency(
        CCrossProcessBaseClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 88, 1, 1) )
    {
      *a2 = *(unsigned int *)(*((_QWORD *)this - 41) + 188LL);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetFrequency", 0x4DAu, v2);
  return v2;
}
