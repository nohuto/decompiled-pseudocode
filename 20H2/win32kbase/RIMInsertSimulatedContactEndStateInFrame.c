/*
 * XREFs of RIMInsertSimulatedContactEndStateInFrame @ 0x1C0177428
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015D440 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0178B10 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C017ACDC (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015BC10 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171650 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01763BC (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     RIMSetContactEndState @ 0x1C0177898 (RIMSetContactEndState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMInsertSimulatedContactEndStateInFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v6; // rdi
  int v7; // r14d
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int16 v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rdi
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v7 = a4;
  v21 = 0LL;
  v20 = 0;
  if ( !*(_QWORD *)(v6 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*(_DWORD *)(a3 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v11 = a6;
  v12 = a5;
  *(_DWORD *)(a3 + 2340) |= 1u;
  RIMSetContactEndState(v6, a3, v7, v12, v11);
  v13 = *(_DWORD *)(v6 + 24);
  v14 = *(_WORD *)(a3 + 2400);
  v19[0] = 0LL;
  InputTraceLogging::RIM::PopulateContact(a2, v13, v14, (__int64)v19, a3 + 2400, 2);
  if ( (*(_DWORD *)(a3 + 32) & 4) == 0 )
  {
    v16 = RIMAddSimulatedPointerDeviceData(v15, v6, a3, a3 + 2400, &v21, &v20);
    v18 = v21;
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
      RIMStoreRawDataInPointerDeviceFrame(a1, a2, v21, v20, (_DWORD *)(a3 + 2392));
    }
    if ( v18 )
      Win32FreePool(v18);
  }
}
