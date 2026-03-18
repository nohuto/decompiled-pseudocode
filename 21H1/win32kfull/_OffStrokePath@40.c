/*
 * XREFs of _OffStrokePath@40 @ 0x22F5F4
 * Callers:
 *     ?SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1DC97B (-SpStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@.c)
 *     ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E (-MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ?PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z @ 0x22EE45 (-PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z.c)
 */

BOOL __fastcall OffStrokePath(
        int (__stdcall *a1)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX),
        int *a2,
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  int v10; // ebx
  int v11; // edi
  POINTL *v12; // esi
  BOOL v13; // esi
  int v14; // ebx
  int v15; // edi
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int (__stdcall *v19)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // [esp+14h] [ebp-4h]
  POINTL *pptlBrushOrga; // [esp+34h] [ebp+1Ch]

  v10 = a2[1];
  v11 = *a2;
  v19 = a1;
  PATHOBJ_vOffset(ppo, v11, v10);
  CLIPOBJ_vOffset(pco, v11, v10);
  v17 = 0;
  v18 = 0;
  v12 = pptlBrushOrg;
  if ( pptlBrushOrg )
  {
    v17 = v11 + pptlBrushOrg->x;
    v12 = (POINTL *)&v17;
    v18 = v10 + pptlBrushOrg->y;
  }
  pptlBrushOrga = (POINTL *)v19(pso, ppo, pco, pxo, pbo, v12, plineattrs, mix);
  if ( !pptlBrushOrga && ((plineattrs->fl & 1) != 0 || (ppo->fl & 1) != 0) )
    v13 = EngStrokePath(pso, ppo, pco, pxo, pbo, v12, plineattrs, mix);
  else
    v13 = (BOOL)pptlBrushOrga;
  v14 = -v10;
  v15 = -v11;
  PATHOBJ_vOffset(ppo, v15, v14);
  CLIPOBJ_vOffset(pco, v15, v14);
  return v13;
}
