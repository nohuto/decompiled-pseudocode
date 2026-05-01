/*
 * XREFs of ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x18027F7E0
 * Callers:
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180274F18 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005F678 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18005F9E4 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x180266754 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapSz@G@@U3.c)
 */

char __fastcall TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::UnmetTabRequirementsChanged(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  _QWORD *v8; // rax
  _DWORD *v9; // rbx
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+78h] [rbp+7h] BYREF
  int v16; // [rsp+7Ch] [rbp+Bh] BYREF
  int v17; // [rsp+80h] [rbp+Fh] BYREF
  int v18; // [rsp+84h] [rbp+13h] BYREF
  int v19; // [rsp+88h] [rbp+17h] BYREF
  __int64 v20; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+98h] [rbp+27h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+67h] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn(v8[1], 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v11 = SQM::CensorAppID(*(LPCWSTR *)(a4 + 552), v10);
      v12 = *(_QWORD *)(a1 + 48);
      v20 = (__int64)v11;
      v18 = a3;
      v21 = a4 + 36;
      v22 = *(_QWORD *)(a4 + 8);
      v23 = *(_QWORD *)a4;
      LODWORD(v24) = *(_DWORD *)(a4 + 24);
      v15 = *(_DWORD *)(a4 + 32);
      v16 = *(_DWORD *)(a4 + 20);
      v17 = *(_DWORD *)(a4 + 16);
      v19 = a2;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                     (__int64)v9,
                     (unsigned __int8 *)dword_18050CC0E,
                     (const GUID *)(v12 + 8),
                     v13,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v24,
                     (__int64)&v23,
                     (__int64)&v22,
                     (const WCHAR **)&v21,
                     (const WCHAR **)&v20);
    }
  }
  return (char)v8;
}
