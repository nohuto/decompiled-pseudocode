/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C017F558
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0162A54 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0180C40 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C01644C0 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0179DB0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C017E4EC (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     RIMSetContactEndState @ 0x1C017F9C8 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int16 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdi
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v22 = 0LL;
  v21 = 0;
  if ( !*(_QWORD *)(v6 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  RIMSetContactEndState(v6, a3, a4, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *(_WORD *)(a3 + 2400);
  v20[0] = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (__int64)v20, a3 + 2400, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, a3, (int)a3 + 2400, &v22, &v21);
    v19 = v22;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v17, 1, 48, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, v16);
      }
    }
    else
    {
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, v22, v21, (_DWORD *)(a3 + 2392));
    }
    if ( v19 )
      Win32FreePool(v19, v17, v18);
  }
}
