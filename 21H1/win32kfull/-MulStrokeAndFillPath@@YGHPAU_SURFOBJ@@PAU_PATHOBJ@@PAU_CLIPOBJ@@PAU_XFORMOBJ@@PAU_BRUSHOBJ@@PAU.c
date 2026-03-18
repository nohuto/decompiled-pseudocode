/*
 * XREFs of ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     _OffStrokeAndFillPath@48 @ 0x22F539 (_OffStrokeAndFillPath@48.c)
 */

int __stdcall MulStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *plineattrs,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        MIX mixFill,
        FLONG flOptions)
{
  DHPDEV dhpdev; // ebx
  FLOAT_LONG v11; // esi
  struct _SURFOBJ *v12; // ecx
  int v13; // edi
  BOOL v15; // [esp+18h] [ebp-110h]
  _DWORD v16[7]; // [esp+30h] [ebp-F8h] BYREF
  _DWORD v17[7]; // [esp+4Ch] [ebp-DCh] BYREF
  _BYTE v18[48]; // [esp+68h] [ebp-C0h] BYREF
  struct _DISPSURF *v19; // [esp+98h] [ebp-90h]
  SURFOBJ *v20; // [esp+9Ch] [ebp-8Ch]
  CLIPOBJ *v21; // [esp+A0h] [ebp-88h]
  _BYTE v22[68]; // [esp+B0h] [ebp-78h] BYREF
  SURFOBJ *pso; // [esp+F4h] [ebp-34h]
  struct _RECTFX prectfx; // [esp+104h] [ebp-24h] BYREF
  struct _RECTL v25; // [esp+114h] [ebp-14h] BYREF

  dhpdev = a1->dhpdev;
  v11.e = (FLOATL)plineattrs->elStyleState;
  v15 = 1;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v22, v12);
    v15 = EngStrokeAndFillPath(pso, a2, a3, a4, a5, plineattrs, a7, a8, mixFill, flOptions);
    MULTISURF::~MULTISURF((MULTISURF *)v22);
  }
  v13 = 0;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v16,
    a5,
    *((_DWORD *)dhpdev + 2),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v16[0] )
  {
    MULTIBRUSH::MULTIBRUSH(
      (MULTIBRUSH *)v17,
      a7,
      *((_DWORD *)dhpdev + 2),
      (struct _VDEV *)dhpdev,
      *((struct _SURFOBJ **)dhpdev + 6),
      1);
    if ( v17[0] )
    {
      memset(&prectfx, 0, sizeof(prectfx));
      PATHOBJ_vGetBounds(a2, &prectfx);
      v25.left = prectfx.xLeft >> 4;
      v25.top = prectfx.yTop >> 4;
      v25.right = (prectfx.xRight >> 4) + 2;
      v25.bottom = (prectfx.yBottom >> 4) + 2;
      v13 = v15;
      if ( MSURF::bFindSurface((MSURF *)v18, a1, a3, &v25) )
      {
        do
        {
          plineattrs->elStyleState = v11;
          PATHOBJ_vEnumStart(a2);
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v16, v19, (struct SURFACE *)&v20[-1].lDelta);
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v17, v19, (struct SURFACE *)&v20[-1].lDelta);
          v13 &= OffStrokeAndFillPath(v20, a2, v21, a4, a5, plineattrs, a7, a8, mixFill, flOptions);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v16, *((_DWORD *)v19 + 2));
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v17, *((_DWORD *)v19 + 2));
        }
        while ( MSURF::bNextSurface((MSURF *)v18) );
      }
    }
  }
  return v13;
}
