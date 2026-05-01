/*
 * XREFs of ?IsEnabled@CommonPeopleTelemetry@@SA_NE_K@Z @ 0x18025F720
 * Callers:
 *     ??$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneViewChange@@@Z @ 0x18025C8B0 (--$PeoplePaneViewChanged@AEAW4PeoplePaneViewChange@@@CommonPeopleTelemetry@@SAXAEAW4PeoplePaneVi.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180051D24 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x18025D410 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall CommonPeopleTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonPeopleTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`CommonPeopleTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1805CD020;
    qword_1805CD020 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_44e945012bab8f6b706c51efd447e7a2_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<CommonPeopleTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
