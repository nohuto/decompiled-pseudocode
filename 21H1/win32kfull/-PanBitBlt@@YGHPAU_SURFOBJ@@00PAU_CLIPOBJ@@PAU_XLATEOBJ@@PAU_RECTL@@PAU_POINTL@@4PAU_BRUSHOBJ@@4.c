/*
 * XREFs of ?PanBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1F57FD
 * Callers:
 *     ?PanCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x1F59DC (-PanCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 * Callees:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

int __stdcall PanBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *prclTrg,
        struct _POINTL *pptlSrc,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        ROP4 rop4)
{
  int v11; // esi
  struct _PANDEV *dhpdev; // edx
  LONG left; // ecx
  LONG right; // eax
  int v15; // eax
  LONG top; // ecx
  LONG bottom; // eax
  int v18; // eax
  LONG v19; // eax
  BOOL v20; // ebx
  struct _SURFOBJ *v22; // [esp+0h] [ebp-120h]
  struct _RECTL *v23; // [esp+0h] [ebp-120h]
  struct _CLIPOBJ **v24; // [esp+4h] [ebp-11Ch]
  struct _CLIPOBJ *v25; // [esp+4h] [ebp-11Ch]
  SURFOBJ *psoSrc; // [esp+18h] [ebp-108h] BYREF
  SURFOBJ *psoTrg; // [esp+1Ch] [ebp-104h] BYREF
  int v28; // [esp+20h] [ebp-100h] BYREF
  struct _RECTL v29; // [esp+24h] [ebp-FCh] BYREF
  LONG x; // [esp+34h] [ebp-ECh]
  LONG y; // [esp+38h] [ebp-E8h]
  struct _CLIPOBJ *v32; // [esp+3Ch] [ebp-E4h]
  struct _SURFOBJ *v33; // [esp+40h] [ebp-E0h]
  POINTL *pptlBrush; // [esp+44h] [ebp-DCh]
  BRUSHOBJ *pbo; // [esp+48h] [ebp-D8h]
  POINTL *pptlMask; // [esp+4Ch] [ebp-D4h]
  XLATEOBJ *pxlo; // [esp+50h] [ebp-D0h]
  SURFOBJ *psoMask; // [esp+54h] [ebp-CCh]
  _BYTE v39[196]; // [esp+58h] [ebp-C8h] BYREF

  v28 = 0;
  psoMask = a3;
  v32 = a4;
  pxlo = a5;
  pptlMask = a8;
  pbo = a9;
  v11 = 1;
  pptlBrush = a10;
  dhpdev = 0;
  v33 = a1;
  psoTrg = a1;
  psoSrc = a2;
  if ( a1->iType == 1 )
    dhpdev = (struct _PANDEV *)a1->dhpdev;
  if ( a2 && a2->iType == 1 )
    dhpdev = (struct _PANDEV *)a2->dhpdev;
  if ( pptlSrc && a2 )
  {
    left = prclTrg->left;
    x = pptlSrc->x;
    v29.left = x;
    y = pptlSrc->y;
    v29.top = y;
    right = prclTrg->right;
    if ( right < left )
      v15 = left - right;
    else
      v15 = right - left;
    top = prclTrg->top;
    v29.right = x + v15;
    bottom = prclTrg->bottom;
    if ( bottom < top )
      v18 = top - bottom;
    else
      v18 = bottom - top;
    v19 = y + v18;
  }
  else
  {
    v19 = 0;
    memset(&v29, 0, 12);
  }
  v29.bottom = v19;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v39, dhpdev, &psoTrg, &psoSrc, prclTrg, &v29, &v28, v32);
  if ( !bIgnoreDeviceSurfaceUpdates(v22, v24) )
  {
    v20 = EngBitBlt(psoTrg, psoSrc, psoMask, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    if ( v28 == 1 )
      vPanningUpdate((struct _PANDEV *)a4, v23, v25);
    v11 = v20;
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v39);
  return v11;
}
