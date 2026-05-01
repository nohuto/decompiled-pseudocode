/*
 * XREFs of ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x180135504
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18011F678 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1801296C4 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180124DB8 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<CAppManagerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    qword_18059FD88 = &IamTraceLogging::`vftable';
    v5 = &qword_18059FD88;
    atexit(a2);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)&qword_18059FD88);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &qword_18059FD88);
  }
  return v5;
}
