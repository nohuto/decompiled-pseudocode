/*
 * XREFs of ??$Created@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0@Z @ 0x180088AEC
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180010988 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1801C3AF0 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

char __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::Created<unsigned short const *,unsigned short const *>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  char result; // al
  _DWORD *v7; // rcx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[4]; // [rsp+38h] [rbp-20h] BYREF
  WINBOOL v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v13, (LPVOID *)&v14) && v13 )
  {
    v14 = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  result = (char)v14;
  v7 = (_DWORD *)v14[1];
  if ( *v7 > 5u )
  {
    result = tlgKeywordOn((__int64)v7, 0x200000000000LL);
    if ( result )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v11 = *a3;
      v12[0] = *a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
               v9,
               (int)&dword_1804FEE3F,
               (int)v10 + 8,
               (__int64)v12,
               (__int64)&v11);
    }
  }
  return result;
}
