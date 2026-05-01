/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1800547BC
 * Callers:
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005477C (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

char __fastcall _TlgActivityBase<wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>::zInternalStart(
        __int64 a1)
{
  char result; // al
  _DWORD *v3; // rcx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_1805A0318;
    qword_1805A0318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0330 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0318, qword_1805A0330, v4);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805A0318);
  }
  result = (char)v6;
  v3 = (_DWORD *)v6[1];
  if ( *v3 > 5u && (result = tlgKeywordOn((__int64)v3, 0x400000000000LL)) != 0 )
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  else
    *(_OWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 1;
  return result;
}
