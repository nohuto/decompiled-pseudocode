/*
 * XREFs of ?bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z @ 0x1DE69D
 * Callers:
 *     ?GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1DB0D0 (-GdiSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vSpDeleteShape@@YGXPAVSPRITE@@@Z @ 0x9EDE8 (-vSpDeleteShape@@YGXPAVSPRITE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 */

BOOL __userpurge bSpUpdateCursor@<eax>(
        SURFOBJ *a1@<edx>,
        int a2@<ecx>,
        struct SPRITE *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7)
{
  int v8; // eax
  SURFOBJ *v9; // esi
  SURFOBJ *v10; // edx
  struct _SURFOBJ *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v15; // [esp-Ch] [ebp-78h]
  unsigned int v16; // [esp+0h] [ebp-6Ch]
  struct _RECTL *v17; // [esp+4h] [ebp-68h]
  _DWORD v18[6]; // [esp+10h] [ebp-5Ch] BYREF
  _DWORD *v19; // [esp+28h] [ebp-44h]
  struct _POINTL *v20; // [esp+2Ch] [ebp-40h]
  int v21; // [esp+30h] [ebp-3Ch]
  struct SPRITE *v22; // [esp+34h] [ebp-38h]
  SURFACE *v23; // [esp+38h] [ebp-34h] BYREF
  char v24; // [esp+3Ch] [ebp-30h]
  int v25; // [esp+40h] [ebp-2Ch]
  SURFOBJ *psoSrc; // [esp+44h] [ebp-28h]
  BOOL v27; // [esp+48h] [ebp-24h]
  struct _SURFOBJ *v28; // [esp+4Ch] [ebp-20h]
  SURFOBJ *v29; // [esp+50h] [ebp-1Ch]
  RECTL prclDest; // [esp+54h] [ebp-18h] BYREF

  v20 = a4;
  v28 = a5;
  memset(&prclDest, 0, sizeof(prclDest));
  psoSrc = a1;
  v22 = a3;
  memset(v18, 0, sizeof(v18));
  v19 = *(_DWORD **)(a2 + 12);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v8 = *v19;
  *(_DWORD *)(a2 + 60) = a5->dhsurf;
  v21 = v8;
  *(_DWORD *)(a2 + 64) = a5->hsurf;
  *(_DWORD *)(a2 + 68) = a5->dhpdev;
  *(_DWORD *)(a2 + 72) = a5->hdev;
  v9 = psoSrc;
  if ( psoSrc )
  {
    v10 = *(SURFOBJ **)(a2 + 84);
    v29 = v10;
    v27 = 1;
    if ( !v10 )
      goto LABEL_8;
    if ( v10->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v10->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
    {
      bDeleteSurface(v10->hsurf);
      v10 = 0;
      v29 = 0;
    }
    if ( !v10 )
    {
LABEL_8:
      v18[1] = v9->sizlBitmap.cx;
      v18[2] = v9->sizlBitmap.cy;
      v18[4] = 0;
      v18[0] = 1;
      v18[5] = 1;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v23, (struct _DEVBITMAPINFO *)v18, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
      {
        v11 = SURFACE::pSurfobj(v23);
        v24 |= 1u;
        v15 = *(_DWORD *)(v12 + 20);
        v29 = v11;
        HmgSetOwner(v15, 0, 5);
      }
      v10 = v29;
    }
    *(_DWORD *)(a2 + 84) = v10;
    if ( v10 )
    {
      prclDest.left = (LONG)v28->dhsurf;
      prclDest.top = (LONG)v28->hsurf;
      prclDest.right = (LONG)v28->dhpdev;
      prclDest.bottom = (LONG)v28->hdev;
      prclDest.bottom += v10->sizlBitmap.cy >> 1;
      EngCopyBits(v10, psoSrc, 0, 0, &prclDest, (POINTL *)&prclDest);
    }
    if ( v22 )
    {
      bSpCreateShape(&gptlZero, (int *)a2, v22, v20, v28, *(struct _XLATEOBJ **)(v21 + 1112), 0, 0, 0, v16, v17);
      v27 = *(_DWORD *)(a2 + 88) != 0;
    }
    else
    {
      vSpDeleteShape((void *)a2);
    }
    v13 = v19;
    *(_DWORD *)(a2 + 4) = 0x1000000;
    *(_DWORD *)(a2 + 108) = v13[20];
    *(_DWORD *)(a2 + 104) = v13[19];
  }
  else
  {
    *(_WORD *)(a2 + 140) = 0;
    *(_DWORD *)(a2 + 4) = 2;
    *(_BYTE *)(a2 + 143) = 1;
    *(_BYTE *)(a2 + 142) = -1;
    bSpCreateShape(
      &gptlZero,
      (int *)a2,
      a3,
      0,
      v28,
      (struct _XLATEOBJ *)gppalRGB,
      (struct _RECTL *)6,
      (struct PALETTE *)1,
      0,
      v16,
      v17);
    v27 = *(_DWORD *)(a2 + 88) != 0;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v23);
  return v27;
}
