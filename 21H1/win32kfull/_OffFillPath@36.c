/*
 * XREFs of _OffFillPath@36 @ 0x22F0D3
 * Callers:
 *     ?SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1DB6EA (-SpFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534 (-MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ?PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z @ 0x22EE45 (-PATHOBJ_vOffset@@YIXPAU_PATHOBJ@@JJ@Z.c)
 */

BOOL __fastcall OffFillPath(
        int (__stdcall *a1)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG),
        int *a2,
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  int v9; // ebx
  int v10; // edi
  POINTL *v11; // esi
  BOOL v12; // esi
  int v13; // ebx
  int v14; // edi
  int v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h]
  int (__stdcall *v18)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // [esp+14h] [ebp-4h]
  POINTL *pptlBrushOrga; // [esp+30h] [ebp+18h]

  v9 = a2[1];
  v10 = *a2;
  v18 = a1;
  PATHOBJ_vOffset(ppo, v10, v9);
  CLIPOBJ_vOffset(pco, v10, v9);
  v16 = 0;
  v17 = 0;
  v11 = pptlBrushOrg;
  if ( pptlBrushOrg )
  {
    v16 = v10 + pptlBrushOrg->x;
    v11 = (POINTL *)&v16;
    v17 = v9 + pptlBrushOrg->y;
  }
  pptlBrushOrga = (POINTL *)v18(pso, ppo, pco, pbo, v11, mix, flOptions);
  if ( pptlBrushOrga )
    v12 = (BOOL)pptlBrushOrga;
  else
    v12 = EngFillPath(pso, ppo, pco, pbo, v11, mix, flOptions);
  v13 = -v9;
  v14 = -v10;
  PATHOBJ_vOffset(ppo, v14, v13);
  CLIPOBJ_vOffset(pco, v14, v13);
  return v12;
}
