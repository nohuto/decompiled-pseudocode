/*
 * XREFs of ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1802CE1D8
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18004F604 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _lambda_66b4be155c180cbf0fecfe62468dbd4c_::operator() @ 0x18004F768 (_lambda_66b4be155c180cbf0fecfe62468dbd4c_--operator().c)
 *     _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x18004FF28 (_lambda_3d1fcc114f22629400696f1d7422949c_--operator().c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802CAEDC (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802CF23C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewManagerInteropTraceLogging::Create(ViewManagerInteropTraceLogging *this)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v3; // rax
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_1805CC5B0;
    qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v2);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
  }
  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v5[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(ViewManagerInteropTraceLogging *))(v3 + 8))(this);
}
