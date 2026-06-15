/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessServerInputEndpoint@@UEAAJXZ @ 0x14006DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::ProcessComplete(
        CSpatialCrossProcessServerInputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v4 = -2005139437;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ProcessComplete", 133, 2289827859LL, a4);
  }
  return v4;
}
