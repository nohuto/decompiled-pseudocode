/*
 * XREFs of WmipFreeTraceDeviceList @ 0x1407AF2A0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1403C2D10 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1407AF204 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x14092FF48 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1402729C4 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
