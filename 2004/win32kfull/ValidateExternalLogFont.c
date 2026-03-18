/*
 * XREFs of ValidateExternalLogFont @ 0x1C000C020
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C000A8A0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C000BE74 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     GreCreateFontIndirectW @ 0x1C001D8A0 (GreCreateFontIndirectW.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1)
{
  HDC v1; // rsi
  __int64 FontIndirectW; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp

  v1 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0LL);
  v3 = FontIndirectW;
  if ( FontIndirectW )
  {
    v4 = GreSelectFont(v1, FontIndirectW);
    GetCharDimensions(v1);
    GreSelectFont(v1, v4);
    GreDeleteObject(v3);
  }
  return 0LL;
}
