/*
 * XREFs of ACPIInitializeDDBs @ 0x1C00BE840
 * Callers:
 *     ACPIInitialize @ 0x1C00BEBFC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     ACPITableLoad @ 0x1C0025650 (ACPITableLoad.c)
 *     AMLILoadDDB @ 0x1C00BE218 (AMLILoadDDB.c)
 *     ACPILoadTableCheckSum @ 0x1C00BE480 (ACPILoadTableCheckSum.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C056C (Simulator_NotifyTablesAreLoaded.c)
 */

__int64 ACPIInitializeDDBs()
{
  __int64 v0; // r8
  int v1; // r9d
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  __m128i *v4; // rsi
  int v5; // ecx
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64 *)AcpiDynamicDataBlockTableList == &AcpiDynamicDataBlockTableList )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x26u,
        (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids);
    return (unsigned int)-1072431079;
  }
  else
  {
    ACPITableLoad(18LL, 1, 0LL);
    v2 = (__int64 *)AcpiDynamicDataBlockTableList;
    v3 = 0;
    while ( v2 != &AcpiDynamicDataBlockTableList )
    {
      v4 = (__m128i *)v2[3];
      v8 = 0LL;
      if ( !ACPILoadTableCheckSum(v4, v4->m128i_u32[1], v0, v1) )
        KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, (ULONG_PTR)v4, v4[2].m128i_u32[0]);
      v5 = AMLILoadDDB(v4->m128i_i32, &v8);
      if ( v5 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = v5;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0x25u,
            (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids,
            v7);
        }
        KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, (ULONG_PTR)v4, v4[2].m128i_u32[0]);
      }
      v2[2] = v8;
      v2 = (__int64 *)*v2;
    }
    ACPITableLoad(18LL, 2, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_NotifyTablesAreLoaded();
  }
  return v3;
}
