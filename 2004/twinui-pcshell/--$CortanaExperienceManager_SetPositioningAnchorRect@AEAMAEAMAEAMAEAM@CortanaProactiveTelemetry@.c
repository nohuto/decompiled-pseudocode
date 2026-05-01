/*
 * XREFs of ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1802091D0
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x18020E490 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180209550 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

LPVOID __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  int v8; // r9d
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID result; // rax
  _DWORD *v11; // rcx
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  WINBOOL fPending; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+54h] [rbp-2Ch] BYREF
  int v17; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+5Ch] [rbp-24h] BYREF
  int v19; // [rsp+60h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD2A0;
    qword_1805CD2A0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD2B8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD2A0, qword_1805CD2B8, v9);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CD2A0);
  }
  result = Context;
  v11 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v11 > 5u )
  {
    v12 = *a3;
    v16 = *a4;
    v13 = *a2;
    v17 = v12;
    v14 = *a1;
    v18 = v13;
    v19 = v14;
    v21 = 0x1000000LL;
    return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     (_DWORD)v11,
                     (unsigned int)&unk_180508025,
                     0,
                     v8,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v21);
  }
  return result;
}
