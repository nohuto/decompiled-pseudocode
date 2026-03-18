/*
 * XREFs of ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB
 * Callers:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C (-bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x22389D (-vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 *     ?bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@ZKPAKJPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x23F480 (-bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@Z.c)
 */

int __userpurge bStrokeCosmetic@<eax>(
        struct _PATHOBJ *a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct _PATHOBJ *a4,
        struct _LINEATTRS *a5,
        struct _BRUSHOBJ *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  int v9; // ebx
  LONG v10; // eax
  int v11; // ecx
  LONG cstyle; // esi
  char v13; // al
  LONG v14; // eax
  int *v15; // ecx
  int *v16; // esi
  int *v17; // edx
  int v18; // eax
  int v19; // eax
  LONG v20; // esi
  int v21; // ecx
  int e_low; // eax
  bool v23; // sf
  LONG v24; // eax
  int v25; // esi
  FLONG fl; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ebx
  struct _PATHOBJ *v31; // esi
  int v32; // esi
  EPATHOBJ *v33; // edx
  FLONG v34; // ecx
  char flags; // dl
  int v37; // [esp+0h] [ebp-1F0h]
  struct _W32KCDD_ENG_CALLBACKS *v38; // [esp+4h] [ebp-1ECh]
  struct _POINTFIX *count; // [esp+10h] [ebp-1E0h]
  void (__stdcall ***v40)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [esp+14h] [ebp-1DCh]
  POINTFIX *pptfx; // [esp+20h] [ebp-1D0h]
  ULONG pstyle; // [esp+24h] [ebp-1CCh]
  int v45; // [esp+28h] [ebp-1C8h]
  void (__stdcall **v46)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // [esp+2Ch] [ebp-1C4h]
  POINTFIX v47; // [esp+3Ch] [ebp-1B4h] BYREF
  int v48; // [esp+44h] [ebp-1ACh]
  _RUN v49[11]; // [esp+48h] [ebp-1A8h] BYREF
  _BYTE v50[184]; // [esp+A0h] [ebp-150h] BYREF
  struct _PATHDATA v51; // [esp+158h] [ebp-98h] BYREF
  int v52; // [esp+164h] [ebp-8Ch] BYREF
  int v53[16]; // [esp+168h] [ebp-88h] BYREF
  _BYTE v54[68]; // [esp+1A8h] [ebp-48h] BYREF

  memset(v49, 0, 0x54u);
  v9 = 0;
  if ( (a5->fl & 2) != 0 )
  {
    v49[10].iStart = 1;
    v49[6].iStop = (LONG)&gaspAlternateStyle;
    v9 = 1024;
    v49[7].iStart = (LONG)&gaspAlternateStyle;
    v10 = HIWORD(a5->elStyleState.l) & 1;
    v49[8].iStop = 1;
    v49[9].iStart = 1;
    v49[3].iStart = 1;
    v49[3].iStop = 2;
    v49[4].iStart = v10;
    v49[9].iStop = 1;
  }
  else if ( a5->pstyle )
  {
    v11 = *(_DWORD *)(a2 + 28);
    if ( v11 )
    {
      v49[8].iStop = *(_DWORD *)(v11 + 1496);
      v49[9] = *(_RUN *)(v11 + 1500);
    }
    else
    {
      v49[8].iStop = 1;
      v49[9].iStart = 1;
      v49[9].iStop = 3;
    }
    v9 = 1024;
    if ( bUMPDSecurityGateEx() && (cstyle = 16, a5->cstyle > 0x10) )
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:bStrokeCosmetic:bStorkeCosmetic's style index "
          "(pla->cstyle) is greater than STYLE_MAX_COUNT.\n",
          289);
    }
    else
    {
      cstyle = a5->cstyle;
    }
    v13 = a5->fl & 4;
    v49[10].iStart = cstyle;
    v49[8].iStart = v13 != 0;
    v49[6].iStop = (LONG)v53;
    v49[7].iStart = (LONG)v54;
    pstyle = (ULONG)a5->pstyle;
    v14 = 0;
    v49[3].iStart = 0;
    if ( cstyle )
    {
      v15 = &v53[cstyle - 1];
      if ( v15 >= v53 )
      {
        v16 = (int *)pstyle;
        v17 = (int *)v54;
        do
        {
          v18 = *v16++;
          v19 = v49[9].iStop * v18;
          *v15 = v19;
          *v17++ = v19;
          v14 = *v15-- + v49[3].iStart;
          v49[3].iStart = v14;
        }
        while ( (unsigned int)v15 >= v49[6].iStop );
      }
    }
    v20 = 2 * v14;
    v21 = v49[9].iStop * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    v49[3].iStop = v20;
    v23 = v21 + e_low < 0;
    v24 = v21 + e_low;
    v49[4].iStart = v24;
    if ( v23 )
    {
      v24 = 0;
      v49[4].iStart = 0;
    }
    if ( v24 >= v20 )
      v49[4].iStart = v24 % v20;
  }
  v25 = *(_DWORD *)(a2 + 60);
  v45 = *(_DWORD *)(a2 + 52) / 4;
  v46 = *(void (__stdcall ***)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))(a2 + 48);
  fl = a4->fl;
  switch ( v25 )
  {
    case 1:
      fl |= (4 * ((2 * fl) | fl)) | (2 * fl);
      goto LABEL_26;
    case 2:
LABEL_26:
      fl |= 16 * fl;
      goto LABEL_27;
    case 3:
LABEL_27:
      fl |= fl << 8;
      goto LABEL_28;
    case 4:
LABEL_28:
      fl |= fl << 16;
      break;
  }
  v52 = -1;
  v51.count = fl;
  v51.pptfx = (POINTFIX *)~fl;
  v51.flags = 0;
  v27 = (int)(&aiLineMix)[(unsigned __int8)a6 & 0xF];
  v49[0].iStart = *(&v51.flags + (unsigned __int8)v27);
  v49[0].iStop = *(&v51.flags + (v27 >> 8));
  if ( v25 == 5 )
    v28 = 8;
  else
    v28 = 0;
  v29 = v28 | (v9 != 0 ? 4 : 0);
  v40 = &(&gapfnStrip)[v29];
  if ( *(_DWORD *)(a2 + 444) )
    v40 = &(&gapfnStripCddCallback)[v29];
  if ( a3 && *((_BYTE *)a3 + 20) )
  {
    memset(v50, 0, sizeof(v50));
    v30 = v9 | 0x40;
    v31 = a1;
    XCLIPOBJ::vEnumPathStart(a3, a1, (struct SURFACE *)a2, a5);
    while ( 1 )
    {
      v32 = XCLIPOBJ::bEnumPath((XCLIPOBJ *)v31[5].cCurves, v31, 0xB8u, (struct _CLIPLINE *)v50, 1);
      if ( *(_DWORD *)&v50[20] )
      {
        if ( (v30 & 0x400) != 0 )
          v49[4].iStop = *(unsigned __int16 *)&v50[16] + v49[9].iStop * *(unsigned __int16 *)&v50[18];
        if ( !bLines(
                (struct _BMINFO *)&v50[8],
                (struct _POINTFIX *)&v50[24],
                *(struct _POINTFIX **)&v50[20],
                v49,
                0,
                (struct _LINESTATE *)v40,
                (struct _RECTL *)v30,
                v46,
                v45,
                *(unsigned int **)(a2 + 444),
                v37,
                v38) )
          break;
      }
      if ( !v32 )
        return 1;
      v31 = a1;
    }
    return 0;
  }
  else
  {
    v47.x = 0;
    v47.y = 0;
    memset(&v51, 0, sizeof(v51));
    v33 = (EPATHOBJ *)a1;
    v34 = a1[1].fl;
    a1->fl &= ~8u;
    *(_DWORD *)(v34 + 52) = *(_DWORD *)(v34 + 20);
    while ( 1 )
    {
      v48 = EPATHOBJ::bEnum(v33, &v51);
      count = (struct _POINTFIX *)v51.count;
      if ( !v51.count )
        break;
      flags = v51.flags;
      if ( (v51.flags & 1) != 0 )
      {
        v47 = *v51.pptfx;
        count = (struct _POINTFIX *)(v51.count - 1);
        pptfx = v51.pptfx + 1;
      }
      else
      {
        pptfx = v51.pptfx;
      }
      v49[4].iStart &= -((v51.flags & 4) == 0);
      if ( count )
      {
        if ( !bLines(
                (struct _BMINFO *)pptfx,
                0,
                count,
                v49,
                0,
                (struct _LINESTATE *)v40,
                (struct _RECTL *)v9,
                v46,
                v45,
                *(unsigned int **)(a2 + 444),
                v37,
                v38) )
          return 0;
        flags = v51.flags;
      }
      if ( (flags & 8) != 0
        && !bLines(
              (struct _BMINFO *)&v47,
              0,
              (struct _POINTFIX *)1,
              v49,
              0,
              (struct _LINESTATE *)v40,
              (struct _RECTL *)v9,
              v46,
              v45,
              *(unsigned int **)(a2 + 444),
              v37,
              v38) )
      {
        return 0;
      }
      if ( !v48 )
        break;
      v33 = (EPATHOBJ *)a1;
    }
    if ( v9 )
      a5->elStyleState.e = (unsigned __int16)(v49[4].iStart % (unsigned int)v49[9].iStop) | ((unsigned __int16)(v49[4].iStart / (unsigned int)v49[9].iStop) << 16);
    return 1;
  }
}
