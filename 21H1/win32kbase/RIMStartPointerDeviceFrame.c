/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C0179BB0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C016269C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C0165CF0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C0168624 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0180C40 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0056DA0 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0177890 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  int v7; // edx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  int v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 49, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
  }
  HoldingFrame = rimFindHoldingFrame(a1, v4);
  if ( !HoldingFrame )
  {
    v10 = Win32AllocPoolZInit(0x58uLL, 0x66687352u);
    HoldingFrame = v10;
    if ( !v10 )
      goto LABEL_29;
    v10[3] = *(_QWORD *)(v4 + 16);
    v11 = (_QWORD *)(a1 + 536);
    v8 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v8 + 8) != a1 + 536 )
      __fastfail(3u);
    *HoldingFrame = v8;
    HoldingFrame[1] = v11;
    *(_QWORD *)(v8 + 8) = HoldingFrame;
    *v11 = HoldingFrame;
  }
  if ( *((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( *((_DWORD *)HoldingFrame + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[10] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[4] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[7] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( HoldingFrame[8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( a3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  *((_DWORD *)HoldingFrame + 4) = 1;
  v6 = 1;
  HoldingFrame[4] = a3;
LABEL_29:
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v14 = *(_QWORD *)(v4 + 472);
    v15 = *(unsigned __int16 *)(v14 + 16);
    v20 = *(unsigned __int16 *)(v14 + 18);
    v18 = HoldingFrame[4];
    v17 = v15;
    v19 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021D0A7,
      v12,
      v13,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v20);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 50, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids, v6);
  }
  return v6;
}
