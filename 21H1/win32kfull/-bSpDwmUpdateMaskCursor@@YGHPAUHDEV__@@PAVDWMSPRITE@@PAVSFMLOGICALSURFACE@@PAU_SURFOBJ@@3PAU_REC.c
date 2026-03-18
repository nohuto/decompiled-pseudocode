/*
 * XREFs of ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742
 * Callers:
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 * Callees:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vSpDwmMaskToARGB@@YGXPAU_SURFOBJ@@0PAH@Z @ 0x1CDB5C (-vSpDwmMaskToARGB@@YGXPAU_SURFOBJ@@0PAH@Z.c)
 */

int __userpurge bSpDwmUpdateMaskCursor@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        SURFOBJ *a4,
        SURFOBJ *a5,
        XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _RECTL *a8,
        unsigned int *a9,
        struct SFMLOGICALSURFACE **a10)
{
  int DIB; // ebx
  SURFOBJ *v11; // eax
  XLATEOBJ *v12; // esi
  int inited; // eax
  SURFOBJ *v14; // esi
  SURFOBJ *v15; // edi
  int v16; // edx
  int v17; // ecx
  XLATEOBJ *v19; // [esp-4h] [ebp-84h]
  struct _SURFOBJ *v20; // [esp+0h] [ebp-80h]
  struct _RECTL *v21; // [esp+0h] [ebp-80h]
  int *v22; // [esp+4h] [ebp-7Ch]
  struct SFMLOGICALSURFACE **v23; // [esp+4h] [ebp-7Ch]
  _DWORD v24[2]; // [esp+10h] [ebp-70h] BYREF
  unsigned int cy; // [esp+18h] [ebp-68h]
  int v26; // [esp+1Ch] [ebp-64h]
  int v27; // [esp+20h] [ebp-60h]
  int v28; // [esp+24h] [ebp-5Ch]
  SURFACE *v29; // [esp+28h] [ebp-58h] BYREF
  char v30; // [esp+2Ch] [ebp-54h]
  int v31; // [esp+30h] [ebp-50h]
  int v32; // [esp+34h] [ebp-4Ch]
  HDEV v33; // [esp+38h] [ebp-48h]
  unsigned int *v34; // [esp+3Ch] [ebp-44h]
  int v35; // [esp+40h] [ebp-40h]
  struct PALETTE *v36; // [esp+44h] [ebp-3Ch]
  SURFACE *v37; // [esp+48h] [ebp-38h] BYREF
  char v38; // [esp+4Ch] [ebp-34h]
  int v39; // [esp+50h] [ebp-30h]
  SURFOBJ *psoDest; // [esp+54h] [ebp-2Ch]
  SURFOBJ *v41; // [esp+58h] [ebp-28h]
  SURFOBJ *psoSrc; // [esp+5Ch] [ebp-24h]
  XLATEOBJ *pxlo; // [esp+60h] [ebp-20h] BYREF
  SURFOBJ *v44; // [esp+64h] [ebp-1Ch] BYREF
  XLATEOBJ *v45; // [esp+68h] [ebp-18h] BYREF
  RECTL prclDest; // [esp+6Ch] [ebp-14h] BYREF

  v33 = a3;
  v45 = a6;
  v32 = a2;
  v34 = (unsigned int *)a8;
  v35 = a1;
  v24[1] = a4->sizlBitmap.cx;
  cy = a4->sizlBitmap.cy;
  v41 = a4;
  v28 = 1;
  psoSrc = a5;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v24[0] = 6;
  v27 = 0;
  DIB = SURFMEM::bCreateDIB((SURFMEM *)&v29, (struct _DEVBITMAPINFO *)v24, 0, 0, 0, 0, 0, 0, 1, 0, 0);
  if ( DIB )
  {
    if ( a5 )
    {
      cy >>= 1;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)&v37, (struct _DEVBITMAPINFO *)v24, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    }
    if ( DIB )
    {
      v44 = SURFACE::pSurfobj(v29);
      v11 = SURFACE::pSurfobj(v37);
      v12 = v45;
      psoDest = v11;
      v45 = 0;
      pxlo = 0;
      prclDest.left = v12->iUniq;
      v12 = (XLATEOBJ *)((char *)v12 + 4);
      prclDest.top = v12->iUniq;
      v12 = (XLATEOBJ *)((char *)v12 + 4);
      prclDest.right = v12->iUniq;
      prclDest.bottom = v12->flXlate;
      v36 = ppalMono;
      if ( v37
        && EXLATEOBJ::bInitXlateObj(
             (int *)&pxlo,
             0,
             0,
             (_DWORD *)psoSrc[1].sizlBitmap.cy,
             gppalRGB,
             (int)ppalDefault,
             (int)ppalDefault,
             0,
             0xFFFFFF,
             0,
             0) )
      {
        DIB = EngCopyBits(psoDest, psoSrc, 0, pxlo, &prclDest, (POINTL *)&prclDest);
      }
      inited = EXLATEOBJ::bInitXlateObj(
                 (int *)&v45,
                 0,
                 0,
                 v36,
                 gppalRGB,
                 (int)ppalDefault,
                 (int)ppalDefault,
                 0,
                 0xFFFFFF,
                 0,
                 0);
      v14 = v41;
      v15 = v44;
      if ( inited )
      {
        prclDest.bottom += v41->sizlBitmap.cy >> 1;
        DIB = EngCopyBits(v44, v41, 0, v45, &prclDest, (POINTL *)&prclDest);
      }
      if ( DIB )
      {
        v44 = 0;
        vSpDwmMaskToARGB((struct _SURFOBJ *)&v44, v20, v22);
        v16 = v35;
        v19 = (XLATEOBJ *)v34;
        v17 = v32;
        *(_DWORD *)(v35 + 132) = (v44 != 0 ? 4 : 0) | *(_DWORD *)(v35 + 132) & 0xFFFFFFFB;
        prclDest.top += v14->sizlBitmap.cy >> 1;
        DIB = bSpDwmUpdateSpriteShape(
                v16,
                v17,
                v33,
                v15,
                (struct SFMLOGICALSURFACE *)&prclDest,
                (struct _SURFOBJ *)v15[1].sizlBitmap.cy,
                a7,
                0,
                v19,
                v21,
                v23);
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v45);
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v37);
  SURFMEM::~SURFMEM((SURFMEM *)&v29);
  return DIB;
}
