/*
 * XREFs of ACPIInitializeDDBs @ 0x1C00BD6E4
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     AMLILoadDDB @ 0x1C00BD7A8 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1C00BD8B0 (ACPILoadTableCheckSum.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0760 (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  __int64 *v0; // rdi
  unsigned int v1; // ebx
  ULONG_PTR v2; // rsi
  int v3; // ecx
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x26u,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    v0 = (__int64 *)AcpiDynamicDataBlockTableList;
    v1 = 0;
    while ( v0 != &AcpiDynamicDataBlockTableList )
    {
      v2 = v0[3];
      v6 = 0LL;
      if ( !(unsigned __int8)ACPILoadTableCheckSum(v2, *(unsigned int *)(v2 + 4)) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v2, *(unsigned int *)(v2 + 32));
      v3 = AMLILoadDDB(v2, &v6);
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = v3;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0x25u,
            (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
            v5);
        }
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v2, *(unsigned int *)(v2 + 32));
      }
      v0[2] = v6;
      v0 = (__int64 *)*v0;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return v1;
}
