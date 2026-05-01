/*
 * XREFs of ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1803C6D50
 * Callers:
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1803BD23C (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 * Callees:
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1800816EC (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@6666666@Z @ 0x1803BD954 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView_(
        VoiceAssistantPositionerTelemetry *this,
        struct IApplicationView *a2,
        char a3,
        struct tagRECT *a4,
        int a5,
        int a6,
        struct tagSIZE a7)
{
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+80h] [rbp-11h] BYREF
  WINBOOL v15; // [rsp+84h] [rbp-Dh] BYREF
  LONG cy; // [rsp+88h] [rbp-9h] BYREF
  LONG cx; // [rsp+8Ch] [rbp-5h] BYREF
  int v18; // [rsp+90h] [rbp-1h] BYREF
  int v19; // [rsp+94h] [rbp+3h] BYREF
  LONG bottom; // [rsp+98h] [rbp+7h] BYREF
  LONG right; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG top; // [rsp+A0h] [rbp+Fh] BYREF
  LONG left; // [rsp+A4h] [rbp+13h] BYREF
  _QWORD *v24; // [rsp+A8h] [rbp+17h] BYREF
  __int64 CensoredAumidFromView; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+B8h] [rbp+27h] BYREF

  v24 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v15, (LPVOID *)&v24) && v15 )
  {
    v24 = &qword_18059FF68;
    qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
    qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v10);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
  }
  v11 = (_DWORD *)v24[1];
  if ( *v11 > 4u )
  {
    cy = a7.cy;
    cx = a7.cx;
    v18 = a6;
    v19 = a5;
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v14 = a3;
    CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v26 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v11,
      (unsigned __int8 *)dword_1804F726A,
      v12,
      v13,
      (__int64)&v26,
      (const WCHAR **)&CensoredAumidFromView,
      (__int64)&v14,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&cx,
      (__int64)&cy);
  }
}
