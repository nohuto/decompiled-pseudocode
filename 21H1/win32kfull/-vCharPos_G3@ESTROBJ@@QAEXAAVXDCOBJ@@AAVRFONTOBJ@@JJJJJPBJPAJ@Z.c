/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z @ 0x2249F0
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z @ 0xE29E4 (-bCalcBreakExtra@@YGEVEFLOAT@@JJPAJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ?vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z @ 0x2252AD (-vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z.c)
 */

void __thiscall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        int a8,
        const int *a9,
        int *a10)
{
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  struct ESTROBJ *v13; // edi
  int v14; // edx
  struct _GLYPHPOS *v15; // edx
  unsigned __int16 *v16; // ecx
  struct ESTROBJ *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  POINTL *v21; // eax
  LONG y; // esi
  int v23; // ebx
  int v24; // eax
  char *v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  signed int v29; // eax
  int v30; // eax
  int v31; // eax
  POINTL *v32; // ecx
  int *v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct ESTROBJ *v37; // ecx
  int *v38; // edi
  unsigned int v39; // [esp-18h] [ebp-9Ch]
  int v40; // [esp+0h] [ebp-84h]
  int v41; // [esp+4h] [ebp-80h]
  int v42; // [esp+Ch] [ebp-78h]
  int v43; // [esp+10h] [ebp-74h]
  int v44; // [esp+14h] [ebp-70h]
  int v45; // [esp+18h] [ebp-6Ch]
  int v46; // [esp+1Ch] [ebp-68h]
  int v47; // [esp+20h] [ebp-64h]
  int v48; // [esp+24h] [ebp-60h]
  int v49; // [esp+28h] [ebp-5Ch]
  int v50; // [esp+2Ch] [ebp-58h]
  int v51; // [esp+30h] [ebp-54h] BYREF
  int v52; // [esp+34h] [ebp-50h]
  int v53; // [esp+38h] [ebp-4Ch] BYREF
  int v54; // [esp+3Ch] [ebp-48h]
  int v55; // [esp+40h] [ebp-44h]
  LONG v56; // [esp+44h] [ebp-40h]
  int v57; // [esp+48h] [ebp-3Ch]
  int v58; // [esp+4Ch] [ebp-38h]
  struct EFLOAT *v59; // [esp+50h] [ebp-34h]
  int v60; // [esp+54h] [ebp-30h]
  signed int v61; // [esp+58h] [ebp-2Ch]
  signed int v62; // [esp+5Ch] [ebp-28h]
  int v63; // [esp+60h] [ebp-24h]
  struct ESTROBJ *v64; // [esp+64h] [ebp-20h]
  int v65; // [esp+68h] [ebp-1Ch] BYREF
  POINTL *p_ptl; // [esp+6Ch] [ebp-18h]
  int v67; // [esp+70h] [ebp-14h]
  int v68; // [esp+74h] [ebp-10h]
  char v69; // [esp+7Bh] [ebp-9h]

  v64 = this;
  v10 = 0;
  v11 = *(_DWORD *)a3;
  if ( !*(_DWORD *)(*(_DWORD *)a3 + 640) )
  {
    v12 = *(_DWORD *)(v11 + 504);
    v57 = 0;
    v47 = *(_DWORD *)(v11 + 472);
    v48 = *(_DWORD *)(v11 + 476);
    v49 = *(_DWORD *)(v11 + 480);
    v50 = *(_DWORD *)(v11 + 484);
    v13 = v64;
    v51 = v12;
    v52 = *(_DWORD *)(v11 + 508);
    v53 = *(_DWORD *)(v11 + 512);
    v54 = *(_DWORD *)(v11 + 516);
    v44 = *(_DWORD *)(v11 + 488);
    v45 = *(_DWORD *)(v11 + 492);
    v42 = *(_DWORD *)(v11 + 496);
    v43 = *(_DWORD *)(v11 + 500);
    v68 = 0;
    v67 = 0;
    v59 = *(struct EFLOAT **)(v11 + 320);
    if ( !a9 )
    {
      *((_DWORD *)v64 + 24) = 0;
      *((_DWORD *)v13 + 25) = 0;
      v57 = 0;
      if ( a6 )
        *((_DWORD *)v13 + 24) = lCvt(*(_DWORD *)(*(_DWORD *)a3 + 488), *(_DWORD *)(*(_DWORD *)a3 + 492), a6);
      if ( bCalcBreakExtra(a7, a8, (int *)v13 + 25, *(_DWORD *)(*(_DWORD *)a3 + 488), *(_DWORD *)(*(_DWORD *)a3 + 492)) )
      {
        vGenWidths(&v53, &v51, *(struct EFLOAT **)(*(_DWORD *)a3 + 528), v59, 0, (int)v59, v40, v41);
        v14 = *((_DWORD *)v13 + 24);
        if ( v68 + v67 + v14 + *((_DWORD *)v13 + 25) < 0 )
          *((_DWORD *)v13 + 25) = -(v68 + v14 + v67);
        v57 = *(_DWORD *)(*(_DWORD *)a3 + 524);
      }
    }
    v15 = (struct _GLYPHPOS *)*((_DWORD *)v13 + 12);
    v16 = (unsigned __int16 *)*((_DWORD *)v13 + 8);
    v60 = 0x7FFFFFFF;
    v63 = 0x7FFFFFFF;
    v15->ptl.x = a4;
    v17 = v64;
    p_ptl = &v15->ptl;
    v15->ptl.y = a5;
    v18 = *(_DWORD *)a3;
    v58 = 0;
    v46 = *(_DWORD *)(v18 + 324);
    v62 = 0x80000000;
    v61 = 0x80000000;
    v39 = *(_DWORD *)v17;
    v65 = 0;
    if ( RFONTOBJ::bGetGlyphMetricsPlus(a3, v39, v15, v16, &v65, a2, v17) )
    {
      v19 = *((_DWORD *)v17 + 48);
      if ( v65 )
      {
        v20 = *((_DWORD *)v17 + 12);
        v19 |= 2u;
        *((_DWORD *)v17 + 48) = v19;
        *((_DWORD *)v17 + 7) = v20;
      }
      if ( (*(_BYTE *)(*(_DWORD *)a3 + 280) & 0x10) == 0 || (v69 = 1, (v19 & 0x1400) != 0) )
        v69 = 0;
      v55 = 0;
      if ( *(_DWORD *)v17 )
      {
        v21 = p_ptl;
        while ( 1 )
        {
          y = v21[-1].y;
          v56 = y;
          vGenWidths(
            &v53,
            &v51,
            *(struct EFLOAT **)(y + 8),
            *(struct EFLOAT **)(y + 20),
            *(_DWORD *)(y + 24),
            (int)v59,
            v40,
            v41);
          v23 = v68 + v10;
          v24 = lCvt(v53, v54, v23);
          if ( v24 + v46 < v63 )
            v63 = v24 + v46;
          v25 = (char *)v59 + v24;
          if ( (int)v25 > v61 )
            v61 = (signed int)v25;
          v65 = *(_DWORD *)(y + 8);
          v26 = lCvt(v51, v52, v23);
          v27 = v26 - v65 / 2;
          if ( v69 )
          {
            if ( v27 - 4 < v60 )
              v60 = v27 - 4;
            v28 = v65;
          }
          else
          {
            if ( v27 + *(_DWORD *)(y + 12) - 4 < v60 )
              v60 = v27 + *(_DWORD *)(y + 12) - 4;
            v28 = *(_DWORD *)(y + 16);
          }
          v29 = v27 + v28 + 4;
          if ( v29 > v62 )
            v62 = v29;
          v30 = lCvt(v47, v48, v23);
          p_ptl->x = a4 - *(_DWORD *)(v56 + 52) / 2 + v30;
          v31 = lCvt(v49, v50, v23);
          v32 = p_ptl;
          p_ptl->y = a5 - *(_DWORD *)(v56 + 60) / 2 + v31;
          if ( !a9 )
            break;
          v58 += *a9++;
          v33 = a10;
          v10 = lCvt(v44, v45, v58);
          if ( a10 )
          {
            v34 = v58;
LABEL_38:
            *v33 = v34;
            a10 = v33 + 1;
          }
LABEL_39:
          v21 = p_ptl + 2;
          p_ptl += 2;
          if ( (unsigned int)++v55 >= *(_DWORD *)v17 )
            goto LABEL_40;
        }
        v10 = v67 + *((_DWORD *)v17 + 24) + v23;
        v35 = *((_DWORD *)v17 + 25);
        if ( v35 )
        {
          if ( v32[-1].x == v57 )
            v10 += v35;
        }
        v33 = a10;
        if ( !a10 )
          goto LABEL_39;
        v34 = lCvt(v42, v43, v10);
        goto LABEL_38;
      }
LABEL_40:
      *((_DWORD *)v17 + 15) = lCvt(v47, v48, v10);
      v36 = lCvt(v49, v50, v10);
      v37 = v64;
      *((_DWORD *)v17 + 16) = v36;
      v38 = (int *)((char *)v17 + 76);
      *((_DWORD *)v37 + 48) |= 4u;
      *v38++ = v60;
      *v38++ = v61;
      *v38 = v62;
      v38[1] = v63;
    }
  }
}
