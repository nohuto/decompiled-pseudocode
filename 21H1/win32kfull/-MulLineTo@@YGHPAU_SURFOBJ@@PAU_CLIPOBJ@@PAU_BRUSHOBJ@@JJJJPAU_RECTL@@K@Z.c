/*
 * XREFs of ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11
 * Callers:
 *     <none>
 * Callees:
 *     _OffLineTo@44 @ 0xBC28A (_OffLineTo@44.c)
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

int __stdcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  int v9; // edi
  DHPDEV v10; // edx
  int v11; // ebx
  int i; // eax
  int (__stdcall *v13)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, int, LONG, int, LONG, RECTL *, MIX); // ecx
  DHPDEV dhpdev; // [esp+18h] [ebp-C0h]
  _DWORD v16[7]; // [esp+1Ch] [ebp-BCh] BYREF
  _BYTE v17[48]; // [esp+38h] [ebp-A0h] BYREF
  struct _DISPSURF *v18; // [esp+68h] [ebp-70h]
  int v19; // [esp+6Ch] [ebp-6Ch]
  struct _CLIPOBJ *v20; // [esp+70h] [ebp-68h]
  LONG *v21; // [esp+74h] [ebp-64h]
  _BYTE v22[28]; // [esp+80h] [ebp-58h] BYREF
  int v23; // [esp+9Ch] [ebp-3Ch]
  char v24; // [esp+A0h] [ebp-38h]
  int v25; // [esp+A4h] [ebp-34h]
  SURFOBJ *pso; // [esp+C4h] [ebp-14h]
  RECTL *prclBounds; // [esp+C8h] [ebp-10h]

  v9 = 1;
  dhpdev = a1->dhpdev;
  v11 = 0;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    MULTISURF::vInit((MULTISURF *)v22, a1, a8);
    v9 = EngLineTo(pso, a2, a3, x1, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v22);
    v10 = dhpdev;
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v16,
    a3,
    *((_DWORD *)v10 + 2),
    (struct _VDEV *)v10,
    *((struct _SURFOBJ **)v10 + 6),
    0);
  if ( v16[0] )
  {
    for ( i = MSURF::bFindSurface((MSURF *)v17, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v17) )
    {
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v16, v18, (struct SURFACE *)(v19 - 16));
      if ( (*(_DWORD *)(v19 + 56) & 0x100) != 0 )
        v13 = *(int (__stdcall **)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, int, LONG, int, LONG, RECTL *, MIX))(*((_DWORD *)v18 + 10) + 2024);
      else
        v13 = EngLineTo;
      v9 &= OffLineTo(v13, v21, (SURFOBJ *)v19, v20, a3, x1, y1, x2, y2, a8, mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v16, *((_DWORD *)v18 + 2));
    }
    return v9;
  }
  return v11;
}
