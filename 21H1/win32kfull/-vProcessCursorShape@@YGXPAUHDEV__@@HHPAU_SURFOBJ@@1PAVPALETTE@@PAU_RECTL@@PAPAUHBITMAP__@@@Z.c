/*
 * XREFs of ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE
 * Callers:
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z @ 0x93840 (-vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z.c)
 *     _EngEraseSurface@12 @ 0x93A4A (_EngEraseSurface@12.c)
 *     ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162 (-bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vProcessCursorShape(
        int a1@<edx>,
        struct _XLATEOBJ *a2,
        int a3,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a5,
        struct _SURFOBJ *a6,
        struct PALETTE *a7,
        struct _RECTL *a8,
        HBITMAP *a9)
{
  int v9; // eax
  LONG v10; // ecx
  LONG v11; // eax
  LONG v12; // edx
  int *cy; // eax
  XLATEOBJ *v14; // esi
  SURFOBJ *v15; // edi
  char *v16; // eax
  struct _XLATEOBJ *v17; // eax
  struct _SURFOBJ *v18; // [esp+0h] [ebp-90h]
  struct _RECTL *v19; // [esp+0h] [ebp-90h]
  struct _RECTL *v20; // [esp+4h] [ebp-8Ch]
  struct _RECTL *v21; // [esp+4h] [ebp-8Ch]
  _DWORD v22[4]; // [esp+10h] [ebp-80h] BYREF
  int v23; // [esp+20h] [ebp-70h]
  int v24; // [esp+24h] [ebp-6Ch]
  LONG v25; // [esp+28h] [ebp-68h]
  LONG v26; // [esp+2Ch] [ebp-64h]
  struct PALETTE *v27; // [esp+30h] [ebp-60h]
  struct PALETTE *v28; // [esp+34h] [ebp-5Ch]
  int v29; // [esp+38h] [ebp-58h]
  SURFOBJ *psoDest; // [esp+3Ch] [ebp-54h]
  SURFACE *v31; // [esp+40h] [ebp-50h] BYREF
  char v32; // [esp+44h] [ebp-4Ch]
  int v33; // [esp+48h] [ebp-48h]
  struct _SURFOBJ *v34; // [esp+4Ch] [ebp-44h] BYREF
  XLATEOBJ *pxlo; // [esp+50h] [ebp-40h] BYREF
  struct _SURFOBJ *v36; // [esp+54h] [ebp-3Ch]
  int v37; // [esp+58h] [ebp-38h]
  RECTL prclDest; // [esp+5Ch] [ebp-34h] BYREF
  RECTL v39; // [esp+6Ch] [ebp-24h] BYREF
  RECTL prcl; // [esp+7Ch] [ebp-14h] BYREF

  v37 = a3;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v22[3] = 0;
  prcl.right = 0;
  prcl.bottom = 0;
  memset(&prclDest, 0, sizeof(prclDest));
  v29 = a1;
  v36 = a6;
  v28 = a7;
  v25 = a1 != 0 ? 3 : 0;
  if ( *(_DWORD *)a7 )
  {
    GreDeleteObject(*(_DWORD *)a7);
    *(_DWORD *)v28 = 0;
  }
  vCalculateCursorBounds(a6, v18, v20);
  v9 = *(_DWORD *)(v37 + 20);
  prcl.left = 0;
  prcl.top = 0;
  v10 = *(_DWORD *)(v37 + 16);
  prcl.right = v10;
  v11 = v9 / 2;
  v12 = v11;
  v26 = v11;
  prcl.bottom = v11;
  if ( v29 )
  {
    v10 += 9;
    v12 = v11 + 7;
    prcl.right = v10;
    prcl.bottom = v11 + 7;
  }
  v22[1] = v10;
  v22[2] = v12;
  v22[0] = 6;
  v24 = 1;
  if ( psoSrc && (cy = (int *)psoSrc[1].sizlBitmap.cy) != 0 )
    v23 = *cy;
  else
    v23 = 0;
  if ( SURFMEM::bCreateDIB((SURFMEM *)&v31, (struct _DEVBITMAPINFO *)v22, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
  {
    v14 = 0;
    psoDest = SURFACE::pSurfobj(v31);
    v34 = 0;
    pxlo = 0;
    v27 = gppalRGB;
    if ( EXLATEOBJ::bInitXlateObj(
           (int *)&v34,
           0,
           0,
           ppalMono,
           gppalRGB,
           (int)ppalDefault,
           (int)ppalDefault,
           0,
           0xFFFFFF,
           0,
           0) )
    {
      if ( !psoSrc )
      {
        v15 = psoDest;
LABEL_17:
        if ( v29 )
        {
          EngEraseSurface(v15, &prcl, 0);
          v17 = (struct _XLATEOBJ *)bShadowAlphaCursor(
                                      psoSrc,
                                      v34,
                                      (struct _SURFOBJ *)v14,
                                      (struct _XLATEOBJ *)v36,
                                      a2,
                                      v19,
                                      (int)v21);
        }
        else
        {
          v17 = a2;
        }
        if ( v17 )
        {
          v32 |= 1u;
          HmgSetOwner(*((_DWORD *)v31 + 5), 0, 5);
          *(_DWORD *)v28 = *((_DWORD *)v31 + 5);
        }
        goto LABEL_22;
      }
      if ( EXLATEOBJ::bInitXlateObj((int *)&pxlo, 0, 0, a5, v27, (int)ppalDefault, (int)ppalDefault, 0, 0, 0, 0) )
      {
        v14 = pxlo;
        v15 = psoDest;
        prclDest.right = *(_DWORD *)(v37 + 16);
        prclDest.bottom = v26;
        EngCopyBits(psoDest, psoSrc, 0, pxlo, &prclDest, &gptlZero);
        vCalculateCursorBounds(v36, (struct _SURFOBJ *)v19, v21);
        if ( (v14->flXlate & 1) != 0 && psoSrc->iBitmapFormat == 6 )
        {
          EngEraseSurface(v15, &prcl, 0);
          v39.left = v25;
          v16 = (char *)v36->dhpdev + v25;
          v39.top = v25;
          v39.right = (LONG)v16;
          v39.bottom = (LONG)v36->hdev + v25;
          EngCopyBits(v15, psoSrc, 0, 0, &v39, &gptlZero);
        }
        goto LABEL_17;
      }
    }
LABEL_22:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v34);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v31);
}
