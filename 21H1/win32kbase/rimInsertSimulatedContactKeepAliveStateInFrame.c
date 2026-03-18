/*
 * XREFs of rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01825FC
 * Callers:
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C017F6B0 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C01644C0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0179DB0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C017E4EC (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     rimSetContactKeepAliveState @ 0x1C018394C (rimSetContactKeepAliveState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimInsertSimulatedContactKeepAliveStateInFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  __int16 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 480);
  v21 = 0LL;
  v20 = 0;
  if ( !*(_QWORD *)(v5 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v10 = *(_DWORD *)(a3 + 32);
  if ( (v10 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v10 = *(_DWORD *)(a3 + 32);
  }
  if ( (v10 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v11 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  rimSetContactKeepAliveState(v5, a3, a4, v11);
  v12 = *(_DWORD *)(v5 + 24);
  v13 = *(_WORD *)(a3 + 2400);
  v19[0] = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v12, v13, (__int64)v19, a3 + 2400, 1);
  v15 = RIMAddSimulatedPointerDeviceData(v14, v5, a3, (int)a3 + 2400, &v21, &v20);
  v18 = v21;
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v16, 1, 47, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, v15);
    }
  }
  else
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, v21, v20, (_DWORD *)(a3 + 2392));
  }
  if ( v18 )
    Win32FreePool(v18, v16, v17);
}
