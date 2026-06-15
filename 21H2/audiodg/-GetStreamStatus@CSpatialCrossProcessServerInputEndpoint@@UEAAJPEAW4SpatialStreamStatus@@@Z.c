/*
 * XREFs of ?GetStreamStatus@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAW4SpatialStreamStatus@@@Z @ 0x14006DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006B848 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetStreamStatus(
        CSpatialCrossProcessServerInputEndpoint *this,
        enum SpatialStreamStatus *a2)
{
  unsigned int v2; // ebx
  BOOL v3; // ecx
  BOOL *v4; // r9
  __int64 v5; // r10

  v2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetStreamStatus", 182, v2, (__int64)a2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v3 = CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16)) != 0;
  *v4 = v3;
  if ( *(_BYTE *)(v5 + 1481) )
    *v4 = v3 | 2;
  return v2;
}
