/*
 * XREFs of ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x18004F058
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18004EFCC (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180050490 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18004F128 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

char __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(__int64 a1, int a2, int a3, int a4)
{
  char result; // al
  _DWORD *v9; // rcx
  int v10; // ecx
  int v11; // r9d
  __int64 v12; // r8
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+44h] [rbp-1Ch] BYREF
  int v16; // [rsp+48h] [rbp-18h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp+20h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0318;
    qword_1805A0318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0330 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0318, qword_1805A0330, v13);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805A0318);
  }
  result = (char)Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    result = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( result )
    {
      v12 = *(_QWORD *)(a1 + 48);
      v14 = a4;
      v15 = a3;
      v16 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v10,
               (unsigned int)&unk_1804EF51C,
               (int)v12 + 8,
               v11,
               (__int64)&v16,
               (__int64)&v15,
               (__int64)&v14);
    }
  }
  return result;
}
