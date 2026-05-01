/*
 * XREFs of ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x180159B30
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x1801480A0 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x1801494F8 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<IamTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    qword_1805CD078[0] = &IamTraceLogging::`vftable';
    v5 = qword_1805CD078;
    atexit(a2);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1805CD078);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_1805CD078);
  }
  return v5;
}
