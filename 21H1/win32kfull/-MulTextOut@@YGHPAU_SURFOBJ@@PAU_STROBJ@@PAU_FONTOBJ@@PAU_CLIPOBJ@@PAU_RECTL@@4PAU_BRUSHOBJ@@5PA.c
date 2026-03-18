/*
 * XREFs of ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E
 * Callers:
 *     <none>
 * Callees:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ??0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z @ 0x20150E (--0MULTIBRUSH@@QAE@PAU_BRUSHOBJ@@JPAU_VDEV@@PAU_SURFOBJ@@H@Z.c)
 *     ??0MULTIFONT@@QAE@PAU_FONTOBJ@@JPAU_VDEV@@@Z @ 0x2015B7 (--0MULTIFONT@@QAE@PAU_FONTOBJ@@JPAU_VDEV@@@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??1MULTIFONT@@QAE@XZ @ 0x201732 (--1MULTIFONT@@QAE@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QAEXJ@Z @ 0x205465 (-StoreElement@MULTIBRUSH@@QAEXJ@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     _OffTextOut@48 @ 0x22F6AF (_OffTextOut@48.c)
 */

int __stdcall MulTextOut(
        struct _SURFOBJ *a1,
        struct _STROBJ *pstro,
        struct _FONTOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        MIX mix)
{
  int v10; // ebx
  DHPDEV dhpdev; // esi
  struct _SURFOBJ *v12; // ecx
  RECTL *p_rclBkGround; // eax
  struct _STROBJ *v14; // esi
  int v15; // edi
  RECTL *v16; // edi
  int v17; // edx
  int v19; // [esp+1Ch] [ebp-10Ch] BYREF
  int v20; // [esp+20h] [ebp-108h]
  CLIPOBJ *pco; // [esp+24h] [ebp-104h]
  RECTL *v22; // [esp+28h] [ebp-100h]
  POINTL *pptlOrg; // [esp+2Ch] [ebp-FCh]
  RECTL *prclExtra; // [esp+30h] [ebp-F8h]
  struct _STROBJ *v25; // [esp+34h] [ebp-F4h]
  struct _SURFOBJ *v26; // [esp+38h] [ebp-F0h]
  ULONG cGlyphs; // [esp+3Ch] [ebp-ECh]
  _DWORD v28[7]; // [esp+40h] [ebp-E8h] BYREF
  _DWORD v29[7]; // [esp+5Ch] [ebp-CCh] BYREF
  LONG left; // [esp+78h] [ebp-B0h]
  LONG top; // [esp+7Ch] [ebp-ACh]
  LONG right; // [esp+80h] [ebp-A8h]
  LONG bottom; // [esp+84h] [ebp-A4h]
  _BYTE v34[48]; // [esp+88h] [ebp-A0h] BYREF
  struct _DISPSURF *v35; // [esp+B8h] [ebp-70h]
  int v36; // [esp+BCh] [ebp-6Ch]
  int v37; // [esp+C0h] [ebp-68h]
  _BYTE v38[68]; // [esp+D0h] [ebp-58h] BYREF
  SURFOBJ *pso; // [esp+114h] [ebp-14h]

  pco = a4;
  prclExtra = a5;
  v10 = 1;
  dhpdev = a1->dhpdev;
  v26 = a1;
  v25 = pstro;
  pptlOrg = a9;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    MULTISURF::MULTISURF((MULTISURF *)v38, v12);
    v10 = EngTextOut(pso, pstro, a3, pco, prclExtra, a6, a7, a8, pptlOrg, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v38);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v28,
    a7,
    *((_DWORD *)dhpdev + 2),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v28[0] )
    return 0;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v29,
    a8,
    *((_DWORD *)dhpdev + 2),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    1);
  if ( !v29[0] )
    return 0;
  MULTIFONT::MULTIFONT((MULTIFONT *)&v19, a3, *((_DWORD *)dhpdev + 2), (struct _VDEV *)dhpdev);
  if ( v20 )
  {
    p_rclBkGround = a6;
    if ( !a6 )
      p_rclBkGround = &pstro->rclBkGround;
    cGlyphs = pstro[1].cGlyphs;
    left = p_rclBkGround->left;
    v22 = p_rclBkGround;
    top = p_rclBkGround->top;
    right = p_rclBkGround->right;
    bottom = p_rclBkGround->bottom;
    if ( MSURF::bFindSurface((MSURF *)v34, v26, pco, p_rclBkGround) )
    {
      v14 = v25;
      v15 = v19;
      do
      {
        v14[1].cGlyphs = 0;
        v14[1].flAccel = 0;
        if ( v15 )
          *(_DWORD *)(v15 + 36) = *(_DWORD *)(v20 + 4 * *((_DWORD *)v35 + 2) + 4);
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v28, v35, (struct SURFACE *)(v36 - 16));
        MULTIBRUSH::LoadElement((MULTIBRUSH *)v29, v35, (struct SURFACE *)(v36 - 16));
        v16 = v22;
        v17 = v36;
        v14[1].cGlyphs = cGlyphs;
        v16->left = left;
        v16 = (RECTL *)((char *)v16 + 4);
        v16->left = top;
        v16 = (RECTL *)((char *)v16 + 4);
        v16->left = right;
        v16->top = bottom;
        v14 = v25;
        v10 &= OffTextOut(v17, v25, (int)a3, v37, (int)prclExtra, (int)a6, (int)a7, (int)a8, (int)pptlOrg, mix);
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v28, *((_DWORD *)v35 + 2));
        MULTIBRUSH::StoreElement((MULTIBRUSH *)v29, *((_DWORD *)v35 + 2));
        v15 = v19;
        if ( v19 )
          *(_DWORD *)(v20 + 4 * *((_DWORD *)v35 + 2) + 4) = *(_DWORD *)(v19 + 36);
      }
      while ( MSURF::bNextSurface((MSURF *)v34) );
    }
  }
  else
  {
    v10 = 0;
  }
  MULTIFONT::~MULTIFONT((MULTIFONT *)&v19);
  return v10;
}
