/*
 * XREFs of WmipFreeTraceDeviceList @ 0x1407BD1E0
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1403C5480 (WmipBuildTraceDeviceList.c)
 *     WmiTraceRundownNotify @ 0x1407BD144 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x140935D78 (WmiSetNetworkNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14023FFF4 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
