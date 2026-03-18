/*
 * XREFs of ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     _OffStrokePath@40 @ 0x22F5F4 (_OffStrokePath@40.c)
 */

int __stdcall MulStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  int v8; // ebx
  FLOAT_LONG v9; // esi
  struct _VDEV *v10; // edx
  struct _SURFOBJ *v11; // ecx
  BRUSHOBJ *v12; // edi
  struct SURFACE *p_lDelta; // eax
  struct _VDEV *dhpdev; // [esp+20h] [ebp-E8h]
  _DWORD v16[7]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v17[48]; // [esp+48h] [ebp-C0h] BYREF
  struct _DISPSURF *v18; // [esp+78h] [ebp-90h]
  SURFOBJ *v19; // [esp+7Ch] [ebp-8Ch]
  CLIPOBJ *v20; // [esp+80h] [ebp-88h]
  _BYTE v21[68]; // [esp+90h] [ebp-78h] BYREF
  SURFOBJ *pso; // [esp+D4h] [ebp-34h]
  struct _RECTFX prectfx; // [esp+E4h] [ebp-24h] BYREF
  struct _RECTL v24; // [esp+F4h] [ebp-14h] BYREF

  v8 = 1;
  v9.e = (FLOATL)plineattrs->elStyleState;
  dhpdev = (struct _VDEV *)a1->dhpdev;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v21, v11);
    v12 = a5;
    v8 = EngStrokePath(pso, a2, a3, a4, a5, a6, plineattrs, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v21);
    v10 = dhpdev;
  }
  else
  {
    v12 = a5;
  }
  MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v16, v12, *((_DWORD *)v10 + 2), v10, *((struct _SURFOBJ **)v10 + 6), 1);
  if ( !v16[0] )
    return 0;
  memset(&prectfx, 0, sizeof(prectfx));
  PATHOBJ_vGetBounds(a2, &prectfx);
  v24.left = prectfx.xLeft >> 4;
  v24.top = prectfx.yTop >> 4;
  v24.right = (prectfx.xRight >> 4) + 2;
  v24.bottom = (prectfx.yBottom >> 4) + 2;
  if ( MSURF::bFindSurface((MSURF *)v17, a1, a3, &v24) )
  {
    do
    {
      PATHOBJ_vEnumStart(a2);
      p_lDelta = (struct SURFACE *)&v19[-1].lDelta;
      plineattrs->elStyleState = v9;
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v16, v18, p_lDelta);
      v8 &= OffStrokePath(v19, a2, v20, a4, a5, a6, plineattrs, mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v16, *((_DWORD *)v18 + 2));
    }
    while ( MSURF::bNextSurface((MSURF *)v17) );
  }
  return v8;
}
