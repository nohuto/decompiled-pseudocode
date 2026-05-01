/*
 * XREFs of ?get@?$static_lazy@VDesktopPositionerTelemetry@@@details@wil@@QEAAPEAVDesktopPositionerTelemetry@@P6AXXZ@Z @ 0x1803F031C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800407AC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1803D3C44 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<DesktopPositionerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    qword_1805CD448 = &IamTraceLogging::`vftable';
    v5 = &qword_1805CD448;
    atexit(a2);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)&qword_1805CD448);
    InitOnceComplete(&`DesktopPositionerTelemetry::Instance'::`2'::wrapper, 0, &qword_1805CD448);
  }
  return v5;
}
