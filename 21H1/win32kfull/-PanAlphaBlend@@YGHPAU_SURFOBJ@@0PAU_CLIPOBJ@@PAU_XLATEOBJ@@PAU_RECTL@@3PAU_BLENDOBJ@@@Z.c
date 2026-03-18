/*
 * XREFs of ?PanAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1F56EE
 * Callers:
 *     <none>
 * Callees:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDest,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  struct _PANDEV *dhpdev; // ebx
  BOOL v8; // esi
  struct _SURFOBJ *v10; // [esp+0h] [ebp-F0h]
  struct _RECTL *v11; // [esp+0h] [ebp-F0h]
  struct _CLIPOBJ **v12; // [esp+4h] [ebp-ECh]
  struct _CLIPOBJ *v13; // [esp+4h] [ebp-ECh]
  SURFOBJ *psoSrc; // [esp+10h] [ebp-E0h] BYREF
  SURFOBJ *psoDest; // [esp+14h] [ebp-DCh] BYREF
  int v16; // [esp+18h] [ebp-D8h] BYREF
  BLENDOBJ *pBlendObj; // [esp+1Ch] [ebp-D4h]
  RECTL *prclSrc; // [esp+20h] [ebp-D0h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-CCh]
  _BYTE v20[196]; // [esp+28h] [ebp-C8h] BYREF

  v16 = 0;
  psoSrc = a2;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pxlo = a4;
  prclSrc = a6;
  psoDest = a1;
  pBlendObj = a7;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v20, dhpdev, &psoDest, &psoSrc, prclDest, a6, &v16, a3);
  if ( bIgnoreDeviceSurfaceUpdates(v10, v12) )
  {
    v8 = 1;
  }
  else
  {
    v8 = EngAlphaBlend(psoDest, psoSrc, a3, pxlo, prclDest, prclSrc, pBlendObj);
    if ( v16 == 1 )
      vPanningUpdate((struct _PANDEV *)a3, v11, v13);
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v20);
  return v8;
}
