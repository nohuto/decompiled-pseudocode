/*
 * XREFs of ?GetFramesPerPacket@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x1400638D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005FA1C (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140060CB0 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetFramesPerPacket(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int FramesPerPacket; // ebx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  FramesPerPacket = 0;
  if ( *((_BYTE *)this + 96) )
  {
    if ( a2 )
    {
      if ( *((_BYTE *)this + 1472) )
      {
        *a2 = *((_DWORD *)this + 367);
        return FramesPerPacket;
      }
      FramesPerPacket = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(this, &v7);
      if ( (FramesPerPacket & 0x80000000) == 0 )
      {
        *a2 = v7;
        return FramesPerPacket;
      }
    }
    else
    {
      FramesPerPacket = -2147467261;
    }
  }
  else
  {
    FramesPerPacket = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper(
    "CSpatialCrossProcessClientOutputEndpoint::GetFramesPerPacket",
    40,
    FramesPerPacket,
    a4);
  return FramesPerPacket;
}
