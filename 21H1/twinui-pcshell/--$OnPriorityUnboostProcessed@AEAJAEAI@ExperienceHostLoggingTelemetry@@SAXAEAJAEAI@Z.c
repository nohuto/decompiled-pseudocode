/*
 * XREFs of ??$OnPriorityUnboostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x18005FE50
 * Callers:
 *     ?UnboostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800600D0 (-UnboostPriority@PriorityBoostHelper@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005FCC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

ULONG __fastcall ExperienceHostLoggingTelemetry::OnPriorityUnboostProcessed<long &,unsigned int &>(int *a1, int *a2)
{
  __int64 v4; // r9
  ULONG result; // eax
  _DWORD *v6; // rcx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v8; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-10h] BYREF
  WINBOOL v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( InitOnceBeginInitialize(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, &v10, (LPVOID *)&v9) && v10 )
  {
    v9 = qword_1805A00D8;
    qword_1805A00D8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A00F0 = (struct _tlgProvider_t *)&`ExperienceHostLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A00D8, qword_1805A00F0, v7);
    InitOnceComplete(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, qword_1805A00D8);
  }
  result = (unsigned int)v9;
  v6 = (_DWORD *)v9[1];
  if ( *v6 > 5u )
  {
    v11 = *a2;
    v8 = *a1;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (__int64)v6,
             byte_1804DE15A,
             0LL,
             v4,
             (__int64)&v8,
             (__int64)&v11);
  }
  return result;
}
