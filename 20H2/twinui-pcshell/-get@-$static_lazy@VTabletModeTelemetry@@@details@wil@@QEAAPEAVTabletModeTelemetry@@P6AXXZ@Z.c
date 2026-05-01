/*
 * XREFs of ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x180400B84
 * Callers:
 *     ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x1800B8DF4 (--$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z.c)
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BB7C8 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1803F2740 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F3D84 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1803F8CC8 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     atexit @ 0x18008D254 (atexit.c)
 *     ?Create@DesktopPositionerTelemetry@@IEAAXXZ @ 0x1803D3C44 (-Create@DesktopPositionerTelemetry@@IEAAXXZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TabletModeTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    qword_1805CC780[0] = &IamTraceLogging::`vftable';
    v5 = qword_1805CC780;
    atexit(a2);
    DesktopPositionerTelemetry::Create((DesktopPositionerTelemetry *)qword_1805CC780);
    InitOnceComplete(&`TabletModeTelemetry::Instance'::`2'::wrapper, 0, qword_1805CC780);
  }
  return v5;
}
