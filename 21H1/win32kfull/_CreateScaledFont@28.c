/*
 * XREFs of _CreateScaledFont@28 @ 0x155260
 * Callers:
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     ?EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z @ 0x15501A (-EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YGXPAUtagDpiKMMetricsCacheNode@@@Z @ 0x155135 (-RefreshDpiKMMetricsCacheNode@@YGXPAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall CreateScaledFont(struct HLFONT__ *a1, int *a2, int a3, INT b, int *a5, _DWORD *a6, void *a7)
{
  int v7; // edi
  int FontIndirectW; // eax
  int CharDimensions; // eax
  int v13; // [esp+18h] [ebp-6Ch]
  INT a[25]; // [esp+1Ch] [ebp-68h] BYREF

  v7 = 0;
  memset(a, 0, 0x5Cu);
  *a2 = 0;
  if ( GreExtGetObjectW(a1, 92, a) )
  {
    a[0] = EngMulDiv(a[0], b, 96);
    a[1] = EngMulDiv(a[1], b, 96);
    FontIndirectW = GreCreateFontIndirectW((int)a, 136);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v7 = 1;
      if ( a5 || a6 || a7 )
      {
        v13 = GreSelectFont(*(HDC *)(_gpDispInfo + 32), FontIndirectW);
        CharDimensions = GetCharDimensions(*(HDC *)(_gpDispInfo + 32), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFont(*(HDC *)(_gpDispInfo + 32), v13);
      }
    }
  }
  return v7;
}
