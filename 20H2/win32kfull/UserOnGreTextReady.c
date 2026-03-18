/*
 * XREFs of UserOnGreTextReady @ 0x1C0022DC8
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012AFF0 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C0022640 (xxxLW_LoadFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00232F4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00239FC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0023B4C (xxxSetWindowNCMetrics.c)
 */

_BOOL8 UserOnGreTextReady()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int16 LogPixels; // ax
  struct _UNICODE_STRING *v4; // rax
  __int64 v5; // rcx
  BOOL v6; // ebx
  struct _UNICODE_STRING *v7; // rsi
  BOOL v8; // edi
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  LogPixels = DrvGetLogPixels(v1, v0, v2);
  UserReinitializeStockFonts(LogPixels, 0);
  xxxLW_LoadFonts(0LL);
  v4 = (struct _UNICODE_STRING *)CreateProfileUserName(&v10);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v8 = xxxSetWindowNCMetrics(v4, 0LL) != 0;
    SetMinMetrics(v7);
    v6 = (unsigned int)SetIconMetrics(v7) != 0 && v8;
    FreeProfileUserName(v7, &v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
