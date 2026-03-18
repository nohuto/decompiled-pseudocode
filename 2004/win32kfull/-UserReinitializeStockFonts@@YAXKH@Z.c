/*
 * XREFs of ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C000AC8C
 * Callers:
 *     UserOnGreTextReady @ 0x1C0009D2C (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C000AEC0 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 */

void __fastcall UserReinitializeStockFonts()
{
  __int64 v0; // rbx
  __int64 SystemFont; // rax
  __int64 SessionDpiServerInfo; // rbx
  __int64 v3; // rax

  GreReinitializeStockFonts();
  v0 = Get96DpiServerInfo();
  SystemFont = GreGetSystemFont(0LL);
  *(_QWORD *)(v0 + 24) = SystemFont;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), SystemFont);
  *(_DWORD *)(v0 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL));
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v3 = GreGetSystemFont(1LL);
  *(_QWORD *)(SessionDpiServerInfo + 24) = v3;
  GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v3);
  GreSelectFont(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(SessionDpiServerInfo + 24));
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL));
  UpdateDpiMetricsCacheDPISERVERINFO();
}
