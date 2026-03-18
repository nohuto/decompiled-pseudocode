/*
 * XREFs of ?bCheckSurfaceRect@@YGHPAU_SURFOBJ@@PAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x216A83
 * Callers:
 *     ?bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x2169C0 (-bCheckMask@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngEraseSurface@12 @ 0x2181D1 (_NtGdiEngEraseSurface@12.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bCheckSurfaceRect@<eax>(
        HSURF *p_hsurf@<edx>,
        _DWORD *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _CLIPOBJ *a5)
{
  int v5; // ebx
  BOOL v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v11; // [esp+4h] [ebp-18h]
  HSURF v12; // [esp+8h] [ebp-14h] BYREF
  HSURF v13; // [esp+Ch] [ebp-10h]
  HSURF v14; // [esp+10h] [ebp-Ch]
  HSURF v15; // [esp+14h] [ebp-8h]

  v11 = a2;
  v5 = 1;
  if ( a2 )
  {
    if ( a3 )
      v6 = LOBYTE(a3->sizlBitmap.cy) == 0;
    else
      v6 = 1;
    if ( !v6 )
      p_hsurf = &a3->hsurf;
    if ( p_hsurf )
    {
      if ( (int)*p_hsurf > (int)p_hsurf[2] || (int)p_hsurf[1] > (int)p_hsurf[3] )
        v5 = 0;
      v12 = *p_hsurf;
      v13 = p_hsurf[1];
      v14 = p_hsurf[2];
      v15 = p_hsurf[3];
      if ( (int)a2[14] < 0 )
      {
        v7 = (_DWORD *)a2[3];
        if ( v7 )
        {
          if ( ((unsigned int)&loc_20000 & v7[6]) != 0 )
          {
            v8 = v7[459];
            p_hsurf = &v12;
            v9 = v7[460];
            v12 = (HSURF)((char *)v12 - v8);
            v14 = (HSURF)((char *)v14 - v8);
            v13 = (HSURF)((char *)v13 - v9);
            v15 = (HSURF)((char *)v15 - v9);
            a2 = v11;
          }
        }
      }
      if ( v5 && ((int)p_hsurf[2] > a2[4] || (int)*p_hsurf < 0 || (int)p_hsurf[3] > a2[5] || (int)p_hsurf[1] < 0) )
        return 0;
    }
  }
  return v5;
}
