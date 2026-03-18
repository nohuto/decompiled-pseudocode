/*
 * XREFs of ??0PATHSTACKOBJ@@QAE@XZ @ 0x1E4387
 * Callers:
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 * Callees:
 *     ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7 (--0EPATHOBJ@@QAE@XZ.c)
 */

PATHSTACKOBJ *__thiscall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this)
{
  PATHSTACKOBJ *v1; // ecx
  PATHSTACKOBJ *result; // eax

  EPATHOBJ::EPATHOBJ(this);
  *((_DWORD *)v1 + 88) = 256;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 2) = (char *)v1 + 72;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 86) = 0;
  *((_DWORD *)v1 + 22) = (char *)v1 + 344;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  *((_DWORD *)v1 + 27) = 0;
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 28) = 0;
  *((_DWORD *)v1 + 87) = (char *)v1 + 356;
  result = v1;
  *((_DWORD *)v1 + 1) = 0;
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 32) = 1;
  *((_DWORD *)v1 + 33) = 1;
  return result;
}
