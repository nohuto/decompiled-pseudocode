/*
 * XREFs of ?PanTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1F68ED
 * Callers:
 *     <none>
 * Callees:
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *prclDst,
        struct _RECTL *a6,
        ULONG iTransColor,
        ULONG ulReserved)
{
  struct _PANDEV *dhpdev; // ebx
  BOOL v9; // esi
  struct _SURFOBJ *v11; // [esp+0h] [ebp-F0h]
  struct _RECTL *v12; // [esp+0h] [ebp-F0h]
  struct _CLIPOBJ **v13; // [esp+4h] [ebp-ECh]
  struct _CLIPOBJ *v14; // [esp+4h] [ebp-ECh]
  SURFOBJ *psoSrc; // [esp+14h] [ebp-DCh] BYREF
  SURFOBJ *psoDst; // [esp+18h] [ebp-D8h] BYREF
  int v17; // [esp+1Ch] [ebp-D4h] BYREF
  RECTL *prclSrc; // [esp+20h] [ebp-D0h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-CCh]
  _BYTE v20[196]; // [esp+28h] [ebp-C8h] BYREF

  v17 = 0;
  psoSrc = a2;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pxlo = a4;
  prclSrc = a6;
  psoDst = a1;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v20, dhpdev, &psoDst, &psoSrc, prclDst, a6, &v17, a3);
  if ( bIgnoreDeviceSurfaceUpdates(v11, v13) )
  {
    v9 = 1;
  }
  else
  {
    v9 = EngTransparentBlt(psoDst, psoSrc, a3, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
    if ( v17 == 1 )
      vPanningUpdate((struct _PANDEV *)a3, v12, v14);
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v20);
  return v9;
}
