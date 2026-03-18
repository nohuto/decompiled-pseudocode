/*
 * XREFs of _GetOemBitmapInfoForDpi@8 @ 0x911CC
 * Callers:
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     _NtUserGetOemBitmapSize@8 @ 0x163B1A (_NtUserGetOemBitmapSize@8.c)
 *     ?BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z @ 0x1A4FE9 (-BltMe4Times@@YGXIHHPAUHDC__@@PAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z @ 0x91206 (-EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z.c)
 */

struct OEMBITMAPSET **__fastcall GetOemBitmapInfoForDpi(int a1, int a2)
{
  int v2; // edi
  struct OEMBITMAPSET **v4; // esi
  struct OEMBITMAPSET *v6; // [esp+0h] [ebp-Ch]
  unsigned int v7; // [esp+4h] [ebp-8h]

  v2 = a2;
  if ( !a2 )
    v2 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  v4 = &gOemBitmapSet + 189 * GetDpiCacheSlot(v2);
  EnsureOemBitmapInfoForDpiSlot(v6, v7);
  return &v4[2 * a1 + 3];
}
