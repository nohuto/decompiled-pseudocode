/*
 * XREFs of _ValidateExternalLogFont@4 @ 0xDAF6C
 * Callers:
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 *     ?GetLogFontFromUserProfile@@YG?AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z @ 0xDAE42 (-GetLogFontFromUserProfile@@YG-AUtagLOGFONTW@@PAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     _GreSelectFont@8 @ 0x5AA52 (_GreSelectFont@8.c)
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 */

BOOL __thiscall ValidateExternalLogFont(void *this)
{
  BOOL v1; // esi
  HDC v2; // edi
  int FontIndirectW; // eax
  int v4; // ebx
  int CharDimensions; // eax
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h] BYREF

  v1 = 0;
  v8 = 0;
  v2 = *(HDC *)(_gpDispInfo + 32);
  FontIndirectW = GreCreateFontIndirectW((int)this, 0);
  v4 = FontIndirectW;
  if ( FontIndirectW )
  {
    v7 = GreSelectFont(v2, FontIndirectW);
    CharDimensions = GetCharDimensions(v2, 0, &v8);
    if ( v8 > 0 && CharDimensions > 0 && v8 < 0x7FFF )
      v1 = CharDimensions < 0x7FFF;
    GreSelectFont(v2, v7);
    GreDeleteObject(v4);
  }
  return v1;
}
