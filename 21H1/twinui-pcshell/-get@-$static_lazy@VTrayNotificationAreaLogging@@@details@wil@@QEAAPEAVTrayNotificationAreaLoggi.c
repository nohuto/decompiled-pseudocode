/*
 * XREFs of ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x180359AA8
 * Callers:
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180358B44 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?NotifyFailure@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180358FB0 (-NotifyFailure@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180359414 (-ReportStopActivity@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x180359650 (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035979C (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ @ 0x180359880 (-StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TrayNotificationAreaLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805A0F98;
    qword_1805A0F98[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0FB0 = (struct _tlgProvider_t *)&`TrayNotificationAreaLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0F98, qword_1805A0FB0, v3);
    InitOnceComplete(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, qword_1805A0F98);
  }
  return v6;
}
