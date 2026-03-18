/*
 * XREFs of ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762
 * Callers:
 *     <none>
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     _OffGradientFill@48 @ 0xBDDCE (_OffGradientFill@48.c)
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QAE@XZ @ 0x1DA696 (--1MULTISURF@@QAE@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 *     ?bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x205F5F (-bFindSurface@MSURF@@QAEHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QAEHXZ @ 0x2062FC (-bNextSurface@MSURF@@QAEHXZ.c)
 *     ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708 (-vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 */

int __stdcall MulGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *pco,
        struct _XLATEOBJ *pxlo,
        struct _TRIVERTEX *a4,
        _DWORD *nVertex,
        void *a6,
        ULONG nMesh,
        struct _RECTL *a8,
        struct _POINTL *a9,
        ULONG ulMode)
{
  struct _RECTL *v10; // edx
  int Surface; // eax
  int v12; // ebx
  int v13; // edi
  struct _XLATEOBJ *v14; // ecx
  int v15; // ecx
  bool v16; // zf
  FLONG flXlate; // ecx
  int v18; // edx
  int inited; // eax
  BOOL (__stdcall *v20)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // eax
  BOOL v22; // [esp+10h] [ebp-C8h] BYREF
  ULONG iUniq; // [esp+14h] [ebp-C4h]
  int v24; // [esp+18h] [ebp-C0h]
  struct PALETTE *v25; // [esp+1Ch] [ebp-BCh]
  ULONG cEntries; // [esp+20h] [ebp-B8h]
  POINTL *pptlDitherOrg; // [esp+24h] [ebp-B4h]
  int v28; // [esp+28h] [ebp-B0h]
  PVOID pMesh; // [esp+2Ch] [ebp-ACh]
  TRIVERTEX *pVertex; // [esp+30h] [ebp-A8h]
  struct PALETTE *v31; // [esp+34h] [ebp-A4h]
  _BYTE v32[48]; // [esp+38h] [ebp-A0h] BYREF
  _DWORD *v33; // [esp+68h] [ebp-70h]
  int v34; // [esp+6Ch] [ebp-6Ch]
  struct _CLIPOBJ *v35; // [esp+70h] [ebp-68h]
  LONG *v36; // [esp+74h] [ebp-64h]
  _BYTE v37[28]; // [esp+80h] [ebp-58h] BYREF
  int v38; // [esp+9Ch] [ebp-3Ch]
  char v39; // [esp+A0h] [ebp-38h]
  int v40; // [esp+A4h] [ebp-34h]
  SURFOBJ *psoDest; // [esp+C4h] [ebp-14h]
  RECTL *prclExtents; // [esp+C8h] [ebp-10h]

  pVertex = a4;
  pMesh = a6;
  v28 = (int)a8;
  pptlDitherOrg = a9;
  v22 = 1;
  if ( IsMetaDevBitmapForMirroring((int)a1) )
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    MULTISURF::vInit((MULTISURF *)v37, a1, v10);
    v22 = EngGradientFill(psoDest, pco, pxlo, pVertex, (ULONG)nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    MULTISURF::~MULTISURF((MULTISURF *)v37);
    v10 = (struct _RECTL *)v28;
  }
  Surface = MSURF::bFindSurface((MSURF *)v32, a1, pco, v10);
  v12 = v22;
  while ( Surface )
  {
    v13 = v34;
    v22 = 0;
    if ( *(_DWORD *)(v34 + 44) <= 3u )
    {
      v14 = pxlo;
      if ( v33[4] )
      {
        v15 = v33[9];
        v16 = (*(_DWORD *)(v15 + 1456) & 0x100) == 0;
        v25 = ppalDefault;
        v31 = gppalRGB;
        if ( !v16 )
          v25 = DrvRealizeHalftonePalette(v15, 0);
        if ( pxlo )
          iUniq = pxlo[1].iUniq;
        else
          iUniq = 0;
        if ( pxlo )
          v24 = *(_DWORD *)&pxlo[1].iSrcType;
        else
          v24 = 0;
        if ( pxlo )
          flXlate = pxlo[1].flXlate;
        else
          flXlate = 0;
        if ( pxlo )
          cEntries = pxlo[2].cEntries;
        else
          cEntries = 0;
        if ( pxlo )
          v18 = *(_DWORD *)&pxlo[2].iSrcType;
        else
          v18 = 0;
        inited = EXLATEOBJ::bInitXlateObj(
                   &v22,
                   v18,
                   cEntries,
                   v31,
                   *(_DWORD **)(v13 + 72),
                   (int)v25,
                   (int)v25,
                   flXlate,
                   v24,
                   iUniq,
                   0);
        v13 = v34;
        v14 = pxlo;
        if ( inited )
          v14 = (struct _XLATEOBJ *)v22;
      }
    }
    else
    {
      v14 = 0;
    }
    if ( ((unsigned int)&loc_20000 & *(_DWORD *)(v13 + 56)) != 0 )
      v20 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v33[10] + 2172);
    else
      v20 = EngGradientFill;
    v12 &= (unsigned int)OffGradientFill(
                           (int (__stdcall *)(int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *, int, int, int *, int *, int))v20,
                           v36,
                           v13,
                           v35,
                           (int)v14,
                           pVertex,
                           nVertex,
                           (int)pMesh,
                           nMesh,
                           (_DWORD *)v28,
                           &pptlDitherOrg->x,
                           ulMode);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    Surface = MSURF::bNextSurface((MSURF *)v32);
  }
  return v12;
}
