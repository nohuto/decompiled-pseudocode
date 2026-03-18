/*
 * XREFs of ?PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1F652F
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        MIX mix)
{
  struct _PANDEV *dhpdev; // edi
  BOOL v9; // esi
  struct _SURFOBJ *v11; // [esp+0h] [ebp-B0h]
  struct _RECTL *v12; // [esp+0h] [ebp-B0h]
  struct _CLIPOBJ **v13; // [esp+4h] [ebp-ACh]
  struct _CLIPOBJ *v14; // [esp+4h] [ebp-ACh]
  SURFOBJ *pso; // [esp+10h] [ebp-A0h] BYREF
  int v16; // [esp+14h] [ebp-9Ch] BYREF
  LINEATTRS *plineattrs; // [esp+18h] [ebp-98h]
  POINTL *pptlBrushOrg; // [esp+1Ch] [ebp-94h]
  BRUSHOBJ *pbo; // [esp+20h] [ebp-90h]
  XFORMOBJ *pxo; // [esp+24h] [ebp-8Ch]
  struct _RECTL v21; // [esp+28h] [ebp-88h] BYREF
  struct _RECTFX prectfx; // [esp+38h] [ebp-78h] BYREF
  _BYTE v23[100]; // [esp+48h] [ebp-68h] BYREF

  pxo = a4;
  pbo = a5;
  pptlBrushOrg = a6;
  v16 = 0;
  plineattrs = a7;
  pso = a1;
  memset(&prectfx, 0, sizeof(prectfx));
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v21.left = prectfx.xLeft >> 4;
  v21.top = prectfx.yTop >> 4;
  v21.right = (prectfx.xRight + 15) >> 4;
  v21.bottom = (prectfx.yBottom + 15) >> 4;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v23, dhpdev, &pso, &v21, &v16, a3);
  if ( bIgnoreDeviceSurfaceUpdates(v11, v13) )
  {
    v9 = 1;
  }
  else
  {
    v9 = EngStrokePath(pso, ppo, a3, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    if ( v16 == 1 )
      vPanningUpdate((struct _PANDEV *)a3, v12, v14);
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v23);
  return v9;
}
