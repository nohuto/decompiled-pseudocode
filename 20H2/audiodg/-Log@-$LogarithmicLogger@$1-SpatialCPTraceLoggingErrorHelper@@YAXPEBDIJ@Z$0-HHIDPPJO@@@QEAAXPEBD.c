/*
 * XREFs of ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14006A9E0
 * Callers:
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x140069E04 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006854C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8

  if ( (int)a4 >= 0 )
  {
    *a1 = 0;
    a1[1] = 1;
    return;
  }
  v5 = 2289827938LL;
  if ( (_DWORD)a4 != -2005139358 )
  {
    v5 = (unsigned int)a4;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 655, v5, a4);
    return;
  }
  if ( ++*a1 == a1[1] )
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 655, 2289827938LL, a4);
    a1[1] *= 2;
    return;
  }
  if ( !(unsigned __int8)*a1 )
    goto LABEL_9;
}
