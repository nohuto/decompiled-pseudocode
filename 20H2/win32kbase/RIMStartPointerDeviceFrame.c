/*
 * XREFs of RIMStartPointerDeviceFrame @ 0x1C0171450
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015D440 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01783B8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0178B10 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     rimFindHoldingFrame @ 0x1C0077A78 (rimFindHoldingFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C016F130 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edx
  int v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

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
    v12 = Win32AllocPoolZInit(0x58uLL, 0x66687352u);
    HoldingFrame = v12;
    if ( !v12 )
      goto LABEL_29;
    v12[3] = *(_QWORD *)(v4 + 16);
    v13 = (_QWORD *)(a1 + 536);
    v8 = *(_QWORD *)(a1 + 536);
    if ( *(_QWORD *)(v8 + 8) != a1 + 536 )
      __fastfail(3u);
    *HoldingFrame = v8;
    HoldingFrame[1] = v13;
    *(_QWORD *)(v8 + 8) = HoldingFrame;
    *v13 = HoldingFrame;
  }
  if ( *((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( *((_DWORD *)HoldingFrame + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[10] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[4] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[7] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( HoldingFrame[8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  if ( a3 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v10, v11);
  *((_DWORD *)HoldingFrame + 4) = 1;
  v6 = 1;
  HoldingFrame[4] = a3;
LABEL_29:
  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v16 = *(_QWORD *)(v4 + 472);
    v17 = *(unsigned __int16 *)(v16 + 16);
    v22 = *(unsigned __int16 *)(v16 + 18);
    v20 = HoldingFrame[4];
    v19 = v17;
    v21 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0244A70,
      byte_1C02156C8,
      v14,
      v15,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v22);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v7, 1, 50, (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids, v6);
  }
  return v6;
}
