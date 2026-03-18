/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C337C
 * Callers:
 *     GrePtInSprite @ 0x1C00C2CB8 (GrePtInSprite.c)
 *     GreNotifyDirtySprite @ 0x1C00F9F64 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00FAABC (GreAdjustSpriteDirtyAccum.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026E7FC (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C33AC (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00C33E0 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMALTSPRITEREF::hspLookupWindow(a2);
  DWMALTSPRITEREF::AltLockSpriteObj(this, v3);
  return this;
}
