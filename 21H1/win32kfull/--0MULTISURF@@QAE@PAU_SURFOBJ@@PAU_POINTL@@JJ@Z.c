/*
 * XREFs of ??0MULTISURF@@QAE@PAU_SURFOBJ@@PAU_POINTL@@JJ@Z @ 0x2016E0
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 * Callees:
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

MULTISURF *__thiscall MULTISURF::MULTISURF(MULTISURF *this, struct _SURFOBJ *a2, struct _POINTL *a3, int a4, int a5)
{
  LONG y; // edx
  LONG v7; // eax
  struct _RECTL v9; // [esp+8h] [ebp-10h] BYREF

  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( a2 )
  {
    y = a3->y;
    v7 = a3->x + a4;
    v9.left = a3->x;
    v9.right = v7;
    v9.top = y;
    v9.bottom = y + a5;
    MULTISURF::vInit(this, a2, &v9);
  }
  else
  {
    MULTISURF::vInit(this, 0, 0);
  }
  return this;
}
