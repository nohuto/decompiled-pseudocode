/*
 * XREFs of _OffStrokeAndFillPath@48 @ 0x22F539
 * Callers:
 *     ?SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1DC5A3 (-SpStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_.c)
 *     ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE (-MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ?PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z @ 0x22EE45 (-PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z.c)
 */

BOOL __fastcall OffStrokeAndFillPath(
        int (__stdcall *a1)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG),
        int *a2,
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  int v12; // esi
  int v13; // edi
  POINTL *v14; // ebx
  BOOL v15; // ebx
  int v16; // edi
  int v17; // esi
  int v19; // [esp+Ch] [ebp-Ch] BYREF
  int v20; // [esp+10h] [ebp-8h]
  int (__stdcall *v21)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // [esp+14h] [ebp-4h]
  POINTL *pptlBrushOrga; // [esp+3Ch] [ebp+24h]

  v13 = a2[1];
  v12 = *a2;
  v21 = a1;
  PATHOBJ_vOffset(ppo, v12, v13);
  CLIPOBJ_vOffset(pco, v12, v13);
  v19 = 0;
  v20 = 0;
  v14 = pptlBrushOrg;
  if ( pptlBrushOrg )
  {
    v19 = v12 + pptlBrushOrg->x;
    v14 = (POINTL *)&v19;
    v20 = v13 + pptlBrushOrg->y;
  }
  pptlBrushOrga = (POINTL *)v21(pso, ppo, pco, pxo, pboStroke, plineattrs, pboFill, v14, mixFill, flOptions);
  if ( pptlBrushOrga )
    v15 = (BOOL)pptlBrushOrga;
  else
    v15 = EngStrokeAndFillPath(pso, ppo, pco, pxo, pboStroke, plineattrs, pboFill, v14, mixFill, flOptions);
  v16 = -v13;
  v17 = -v12;
  PATHOBJ_vOffset(ppo, v17, v16);
  CLIPOBJ_vOffset(pco, v17, v16);
  return v15;
}
