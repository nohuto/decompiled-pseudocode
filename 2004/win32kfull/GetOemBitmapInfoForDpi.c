/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C0101EAC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     NtUserGetOemBitmapSize @ 0x1C0101BB0 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02482E8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024D6B4 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C0101F0C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  struct OEMBITMAPSET *v4; // rbx

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
    v3 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v3);
  return (char *)v4 + 8 * v2 + 16;
}
