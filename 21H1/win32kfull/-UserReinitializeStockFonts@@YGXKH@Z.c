/*
 * XREFs of ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A
 * Callers:
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 */

void __fastcall UserReinitializeStockFonts(int a1, int a2)
{
  _DWORD *v2; // esi
  int SystemFont; // eax
  int *SessionDpiServerInfo; // esi
  int v5; // eax

  GreReinitializeStockFonts(a1, a2);
  v2 = (_DWORD *)Get96DpiServerInfo();
  SystemFont = GreGetSystemFont(0);
  v2[5] = SystemFont;
  GreSelectFont(*(HDC *)(_gpDispInfo + 32), SystemFont);
  v2[6] = GetCharDimensions(*(HDC *)(_gpDispInfo + 32), v2 + 8, v2 + 7);
  SessionDpiServerInfo = (int *)GetSessionDpiServerInfo();
  v5 = GreGetSystemFont(1);
  SessionDpiServerInfo[5] = v5;
  GreSelectFont(*(HDC *)(_gpDispInfo + 32), v5);
  GreSelectFont(*(HDC *)(_gpDispInfo + 36), SessionDpiServerInfo[5]);
  SessionDpiServerInfo[6] = GetCharDimensions(
                              *(HDC *)(_gpDispInfo + 32),
                              SessionDpiServerInfo + 8,
                              SessionDpiServerInfo + 7);
  UpdateDpiMetricsCacheDPISERVERINFO();
}
