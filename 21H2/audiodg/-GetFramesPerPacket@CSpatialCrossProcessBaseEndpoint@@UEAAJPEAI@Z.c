/*
 * XREFs of ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140069920
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14006C1C0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14006C560 (-GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14006868C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned __int32 v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v2 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    v2 = -2005139437;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket", 486, v2, (__int64)a2);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 161) + 44LL), 0, 0);
  v5 = *((_DWORD *)this + 71);
  v6 = v5;
  if ( v4 < v5 )
    v6 = v4;
  if ( !v6 )
    v6 = v5;
  *a2 = v6;
  return v2;
}
