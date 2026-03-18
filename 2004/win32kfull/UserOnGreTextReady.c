/*
 * XREFs of UserOnGreTextReady @ 0x1C0009D2C
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00093D8 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C0009720 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C000AC8C (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     SetIconMetrics @ 0x1C000AFC0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C000B1DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  BOOL v8; // ebx
  struct _UNICODE_STRING *v9; // rsi
  BOOL v10; // edi
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0);
  v4 = (struct _UNICODE_STRING *)CreateProfileUserName(&v12);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v10 = xxxSetWindowNCMetrics(v4, 0LL) != 0;
    SetMinMetrics(v9);
    v8 = (unsigned int)SetIconMetrics(v9) != 0 && v10;
    FreeProfileUserName(v9, &v12);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
