/*
 * XREFs of ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x1801355A0
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x1801239D4 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180124DB8 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<IamTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    qword_18059FDA8 = &IamTraceLogging::`vftable';
    v5 = &qword_18059FDA8;
    atexit(a2);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)&qword_18059FDA8);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &qword_18059FDA8);
  }
  return v5;
}
