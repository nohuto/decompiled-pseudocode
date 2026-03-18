/*
 * XREFs of ?PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1F63F9
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  struct _PANDEV *dhpdev; // edi
  BOOL v11; // esi
  struct _SURFOBJ *v13; // [esp+0h] [ebp-B8h]
  struct _RECTL *v14; // [esp+0h] [ebp-B8h]
  struct _CLIPOBJ **v15; // [esp+4h] [ebp-B4h]
  struct _CLIPOBJ *v16; // [esp+4h] [ebp-B4h]
  SURFOBJ *pso; // [esp+14h] [ebp-A4h] BYREF
  int v18; // [esp+18h] [ebp-A0h] BYREF
  POINTL *pptlBrushOrg; // [esp+1Ch] [ebp-9Ch]
  BRUSHOBJ *pboFill; // [esp+20h] [ebp-98h]
  LINEATTRS *plineattrs; // [esp+24h] [ebp-94h]
  BRUSHOBJ *pboStroke; // [esp+28h] [ebp-90h]
  XFORMOBJ *pxo; // [esp+2Ch] [ebp-8Ch]
  struct _RECTL v24; // [esp+30h] [ebp-88h] BYREF
  _RECTFX prectfx; // [esp+40h] [ebp-78h] BYREF
  _BYTE v26[100]; // [esp+50h] [ebp-68h] BYREF

  pxo = a4;
  pboStroke = a5;
  plineattrs = a6;
  pboFill = a7;
  v18 = 0;
  pptlBrushOrg = a8;
  pso = a1;
  memset(&prectfx, 0, sizeof(prectfx));
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  PATHOBJ_vGetBounds(ppo, &prectfx);
  v24.left = prectfx.xLeft >> 4;
  v24.top = prectfx.yTop >> 4;
  v24.right = (prectfx.xRight + 15) >> 4;
  v24.bottom = (prectfx.yBottom + 15) >> 4;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v26, dhpdev, &pso, &v24, &v18, a3);
  if ( bIgnoreDeviceSurfaceUpdates(v13, v15) )
  {
    v11 = 1;
  }
  else
  {
    v11 = EngStrokeAndFillPath(pso, ppo, a3, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    if ( v18 == 1 )
      vPanningUpdate((struct _PANDEV *)a3, v14, v16);
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v26);
  return v11;
}
