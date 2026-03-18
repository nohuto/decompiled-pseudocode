/*
 * XREFs of ?PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z @ 0x22EE45
 * Callers:
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     _OffFillPath@36 @ 0x22F0D3 (_OffFillPath@36.c)
 *     _OffStrokeAndFillPath@48 @ 0x22F539 (_OffStrokeAndFillPath@48.c)
 *     _OffStrokePath@40 @ 0x22F5F4 (_OffStrokePath@40.c)
 * Callees:
 *     <none>
 */

void __fastcall PATHOBJ_vOffset(struct _PATHOBJ *a1, int a2, int a3)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a2 || a3 )
  {
    v3[1] = a3;
    v3[0] = a2;
    EPATHOBJ::vOffset((EPATHOBJ *)a1, (struct EPOINTL *)v3);
  }
}
