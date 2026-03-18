/*
 * XREFs of ?PanGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F5F1D
 * Callers:
 *     <none>
 * Callees:
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z @ 0x1F55A2 (--0PANSURFLOCK@@QAE@PAU_PANDEV@@PAPAU_SURFOBJ@@PAU_RECTL@@PAHPAU_CLIPOBJ@@@Z.c)
 *     ??1PANSURFLOCK@@QAE@XZ @ 0x1F56B1 (--1PANSURFLOCK@@QAE@XZ.c)
 *     ?bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1F6BFD (-bIgnoreDeviceSurfaceUpdates@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F73AF (-vPanningUpdate@@YGXPAU_PANDEV@@PAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 */

BOOL __stdcall PanGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        ULONG nVertex,
        void *a6,
        ULONG nMesh,
        struct _RECTL *prclExtents,
        struct _POINTL *a9,
        ULONG ulMode)
{
  struct _PANDEV *dhpdev; // ebx
  BOOL v11; // esi
  struct _SURFOBJ *v13; // [esp+0h] [ebp-90h]
  struct _RECTL *v14; // [esp+0h] [ebp-90h]
  struct _CLIPOBJ **v15; // [esp+4h] [ebp-8Ch]
  struct _CLIPOBJ *v16; // [esp+4h] [ebp-8Ch]
  SURFOBJ *psoDest; // [esp+10h] [ebp-80h] BYREF
  int v18; // [esp+14h] [ebp-7Ch] BYREF
  POINTL *pptlDitherOrg; // [esp+18h] [ebp-78h]
  PVOID pMesh; // [esp+1Ch] [ebp-74h]
  TRIVERTEX *pVertex; // [esp+20h] [ebp-70h]
  XLATEOBJ *pxlo; // [esp+24h] [ebp-6Ch]
  _BYTE v23[100]; // [esp+28h] [ebp-68h] BYREF

  v18 = 0;
  dhpdev = (struct _PANDEV *)a1->dhpdev;
  pxlo = a3;
  pVertex = a4;
  pMesh = a6;
  pptlDitherOrg = a9;
  psoDest = a1;
  PANSURFLOCK::PANSURFLOCK((PANSURFLOCK *)v23, dhpdev, &psoDest, prclExtents, &v18, a2);
  if ( bIgnoreDeviceSurfaceUpdates(v13, v15) )
  {
    v11 = 1;
  }
  else
  {
    v11 = EngGradientFill(psoDest, a2, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    if ( v18 == 1 )
      vPanningUpdate((struct _PANDEV *)a2, v14, v16);
  }
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)v23);
  return v11;
}
