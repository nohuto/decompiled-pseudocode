/*
 * XREFs of ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x180159960
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x180147F30 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180149348 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<IamTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5) && (_DWORD)v4 )
  {
    qword_1805CC0D8[0] = &IamTraceLogging::`vftable';
    v5 = qword_1805CC0D8;
    atexit(a2);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1805CC0D8);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_1805CC0D8);
  }
  return v5;
}
