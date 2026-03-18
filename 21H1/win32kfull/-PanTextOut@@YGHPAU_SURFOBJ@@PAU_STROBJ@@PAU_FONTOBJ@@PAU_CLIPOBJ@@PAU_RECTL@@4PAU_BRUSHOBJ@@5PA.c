/*
 * XREFs of ?PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1F67CE
 * Callers:
 *     <none>
 * Callees:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *a2,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *prclOpaque,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  struct _PANDEV *dhpdev; // edx
  RECTL *p_rclBkGround; // eax
  BOOL v12; // esi
  struct _SURFOBJ *v14; // [esp+0h] [ebp-B8h]
  struct _RECTL *v15; // [esp+0h] [ebp-B8h]
  struct _CLIPOBJ **v16; // [esp+4h] [ebp-B4h]
  struct _CLIPOBJ *v17; // [esp+4h] [ebp-B4h]
  SURFOBJ *pso; // [esp+14h] [ebp-A4h] BYREF
  int v19; // [esp+18h] [ebp-A0h] BYREF
  struct _CLIPOBJ *v20; // [esp+1Ch] [ebp-9Ch]
  struct _SURFOBJ *v21; // [esp+20h] [ebp-98h]
  POINTL *pptlOrg; // [esp+24h] [ebp-94h]
  BRUSHOBJ *pboOpaque; // [esp+28h] [ebp-90h]
  BRUSHOBJ *pboFore; // [esp+2Ch] [ebp-8Ch]
  RECTL *prclExtra; // [esp+30h] [ebp-88h]
  FONTOBJ *pfo; // [esp+34h] [ebp-84h]
  STROBJ *pstro; // [esp+38h] [ebp-80h]
  struct _PANDEV *v28; // [esp+3Ch] [ebp-7Ch]
  struct _RECTL v29; // [esp+40h] [ebp-78h] BYREF
  _BYTE v30[100]; // [esp+50h] [ebp-68h] BYREF

  v19 = 0;
  pfo = a3;
  v20 = a4;
  prclExtra = a5;
  pboFore = a7;
  pboOpaque = a8;
  pptlOrg = a9;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  v21 = a1;
  pso = a1;
  p_rclBkGround = &a2->rclBkGround;
  pstro = a2;
  v28 = dhpdev;
  if ( prclOpaque )
    p_rclBkGround = prclOpaque;
  v29 = *p_rclBkGround;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v30, dhpdev, &pso, &v29, &v19, v20);
  if ( bIgnoreDeviceSurfaceUpdates(v14, v16) )
  {
    v12 = 1;
  }
  else
  {
    v12 = EngTextOut(pso, pstro, pfo, a4, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    if ( v19 == 1 )
      vPanningUpdate((struct _PANDEV *)a4, v15, v17);
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v30);
  return v12;
}
