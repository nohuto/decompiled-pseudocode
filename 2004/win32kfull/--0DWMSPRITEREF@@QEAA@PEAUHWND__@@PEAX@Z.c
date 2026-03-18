/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C001F384
 * Callers:
 *     GreDwmNotifySpriteDPIChange @ 0x1C001FA28 (GreDwmNotifySpriteDPIChange.c)
 *     GreGetSpriteAttributes @ 0x1C004C520 (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C004ED50 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026F0D4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C02701B4 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C001FBDC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2, HSPRITE a3)
{
  *(_QWORD *)this = 0LL;
  if ( a2 )
    a3 = DWMSPRITEREF::hspLookupWindow(a2);
  if ( a3 )
    DWMSPRITEREF::LockSpriteObj(this, a3);
  return this;
}
