/*
 * XREFs of ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     _OffFillPath@36 @ 0x22F0D3 (_OffFillPath@36.c)
 */

int __stdcall MulFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        MIX mix,
        FLONG flOptions)
{
  int v7; // esi
  DHPDEV dhpdev; // edi
  int i; // eax
  _DWORD v11[7]; // [esp+1Ch] [ebp-DCh] BYREF
  _BYTE v12[48]; // [esp+38h] [ebp-C0h] BYREF
  struct _DISPSURF *v13; // [esp+68h] [ebp-90h]
  SURFOBJ *v14; // [esp+6Ch] [ebp-8Ch]
  CLIPOBJ *v15; // [esp+70h] [ebp-88h]
  _BYTE v16[68]; // [esp+80h] [ebp-78h] BYREF
  SURFOBJ *pso; // [esp+C4h] [ebp-34h]
  struct _RECTFX prectfx; // [esp+D4h] [ebp-24h] BYREF
  struct _RECTL v19; // [esp+E4h] [ebp-14h] BYREF

  v7 = 1;
  dhpdev = a1->dhpdev;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v16, a1);
    v7 = EngFillPath(pso, a2, a3, a4, a5, mix, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v16);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v11,
    a4,
    *((_DWORD *)dhpdev + 2),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v11[0] )
    return 0;
  memset(&prectfx, 0, sizeof(prectfx));
  PATHOBJ_vGetBounds(a2, &prectfx);
  v19.left = prectfx.xLeft >> 4;
  v19.top = prectfx.yTop >> 4;
  v19.right = (prectfx.xRight >> 4) + 2;
  v19.bottom = (prectfx.yBottom >> 4) + 2;
  for ( i = MSURF::bFindSurface((MSURF *)v12, a1, a3, &v19); i; i = MSURF::bNextSurface((MSURF *)v12) )
  {
    PATHOBJ_vEnumStart(a2);
    MULTIBRUSH::LoadElement((MULTIBRUSH *)v11, v13, (struct SURFACE *)&v14[-1].lDelta);
    v7 &= OffFillPath(v14, a2, v15, a4, a5, mix, flOptions);
    MULTIBRUSH::StoreElement((MULTIBRUSH *)v11, *((_DWORD *)v13 + 2));
  }
  return v7;
}
