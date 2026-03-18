/*
 * XREFs of ?PanStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1F62D2
 * Callers:
 *     <none>
 * Callees:
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z @ 0x1F53B5 (--0MULTIPANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@1PAU_RECTL@@2PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1MULTIPANSURFLOCK@@QAE@XZ @ 0x1F5607 (--1MULTIPANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *prclDest,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  BOOL v11; // esi
  struct _PANDEV *dhpdev; // [esp-1Ch] [ebp-110h]
  struct _SURFOBJ *v14; // [esp+0h] [ebp-F4h]
  struct _RECTL *v15; // [esp+0h] [ebp-F4h]
  struct _CLIPOBJ **v16; // [esp+4h] [ebp-F0h]
  struct _CLIPOBJ *v17; // [esp+4h] [ebp-F0h]
  int v18; // [esp+24h] [ebp-D0h] BYREF
  SURFOBJ *psoDest; // [esp+28h] [ebp-CCh] BYREF
  SURFOBJ *psoSrc; // [esp+2Ch] [ebp-C8h] BYREF
  CLIPOBJ *pco; // [esp+30h] [ebp-C4h]
  _BYTE v22[188]; // [esp+34h] [ebp-C0h] BYREF

  v18 = 0;
  psoSrc = a2;
  pco = a4;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  psoDest = a1;
  MULTIPANSURFLOCK::MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v22, dhpdev, &psoDest, &psoSrc, prclDest, a9, &v18, a4);
  if ( bIgnoreDeviceSurfaceUpdates(v14, v16) )
  {
    v11 = 1;
  }
  else
  {
    v11 = EngStretchBlt(psoDest, psoSrc, a3, pco, a5, a6, a7, prclDest, a9, a10, iMode);
    if ( v18 == 1 )
      vPanningUpdate((struct _PANDEV *)pco, v15, v17);
  }
  MULTIPANSURFLOCK::~MULTIPANSURFLOCK((MULTIPANSURFLOCK *)v22);
  return v11;
}
