/*
 * XREFs of ?GetFramesPerPacket@CCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140057E90
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140059398 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFramesPerPacket(CCrossProcessBaseEndpoint *this, unsigned int *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    if ( a2 )
    {
      *a2 = *((_DWORD *)this + 24);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFramesPerPacket", 0x1F9u, v2);
  return v2;
}
