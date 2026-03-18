/*
 * XREFs of ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2
 * Callers:
 *     ?PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F5F1D (-PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1F63F9 (-PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1F652F (-PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1F67CE (-PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 * Callees:
 *     ?vLockBmpAndPrepareForPunt@PANSURFLOCK@@QAEXXZ @ 0x1F6F63 (-vLockBmpAndPrepareForPunt@PANSURFLOCK@@QAEXXZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1F6FC9 (-vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 */

PANSURFLOCK *__thiscall PANSURFLOCK::PANSURFLOCK(
        PANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _RECTL *a4,
        int *a5,
        struct _CLIPOBJ *a6)
{
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = (int)*a3;
  *a5 = 0;
  v8 = *(unsigned __int16 *)(v7 + 48);
  if ( v8 == 3 )
  {
    *(_DWORD *)this = v7;
    PANSURFLOCK::vLockBmpAndPrepareForPunt(this);
  }
  else if ( (_WORD)v8 == 1 )
  {
    *((_DWORD *)this + 2) = a2;
    PANSURFLOCK::vLockShadow(this, a4, a6, 0);
    v9 = *((_DWORD *)this + 2);
    *a5 = 1;
    *a3 = *(struct _SURFOBJ **)(v9 + 52);
  }
  return this;
}
