/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z @ 0x224D70
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ?bIs16@EFLOAT@@QBEHXZ @ 0x21C813 (-bIs16@EFLOAT@@QBEHXZ.c)
 *     ?vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z @ 0x2252AD (-vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z.c)
 */

void __thiscall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, struct RFONTOBJ *a3, LONG a4, LONG a5, int *a6)
{
  int v6; // ebx
  _DWORD *v7; // edx
  BOOL v8; // eax
  struct ESTROBJ *v9; // edi
  struct _GLYPHPOS *v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned __int16 *v13; // edx
  int v14; // eax
  POINTL *v15; // ecx
  int v16; // esi
  int v17; // esi
  int v18; // eax
  signed int v19; // eax
  int v20; // ecx
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // esi
  int v29; // esi
  int v30; // eax
  struct ESTROBJ *v31; // ecx
  int *v32; // edi
  unsigned int v33; // [esp-18h] [ebp-B4h]
  int v34; // [esp+0h] [ebp-9Ch]
  int v35; // [esp+4h] [ebp-98h]
  int v36; // [esp+10h] [ebp-8Ch]
  int v37; // [esp+14h] [ebp-88h]
  int v38; // [esp+18h] [ebp-84h]
  int v39; // [esp+1Ch] [ebp-80h]
  BOOL v40; // [esp+20h] [ebp-7Ch]
  int v41; // [esp+28h] [ebp-74h]
  int v42; // [esp+2Ch] [ebp-70h]
  int v43; // [esp+30h] [ebp-6Ch]
  int v44; // [esp+34h] [ebp-68h]
  int v45; // [esp+38h] [ebp-64h]
  int v46; // [esp+3Ch] [ebp-60h]
  int v47; // [esp+40h] [ebp-5Ch]
  int v48; // [esp+44h] [ebp-58h]
  int v49; // [esp+48h] [ebp-54h] BYREF
  int v50; // [esp+4Ch] [ebp-50h]
  int v51; // [esp+50h] [ebp-4Ch] BYREF
  int v52; // [esp+54h] [ebp-48h]
  int v53; // [esp+58h] [ebp-44h] BYREF
  int v54; // [esp+5Ch] [ebp-40h]
  int v55; // [esp+60h] [ebp-3Ch] BYREF
  int v56; // [esp+64h] [ebp-38h]
  struct ESTROBJ *v57; // [esp+68h] [ebp-34h]
  int v58; // [esp+6Ch] [ebp-30h]
  int v59; // [esp+70h] [ebp-2Ch]
  int v60; // [esp+74h] [ebp-28h]
  int v61; // [esp+78h] [ebp-24h]
  signed int v62; // [esp+7Ch] [ebp-20h]
  signed int v63; // [esp+80h] [ebp-1Ch]
  int v64; // [esp+84h] [ebp-18h]
  int v65; // [esp+88h] [ebp-14h]
  int v66; // [esp+8Ch] [ebp-10h] BYREF
  POINTL *p_ptl; // [esp+90h] [ebp-Ch]
  int v68; // [esp+94h] [ebp-8h]
  struct XDCOBJ *v69; // [esp+A4h] [ebp+8h]
  RFONTOBJ *y; // [esp+A8h] [ebp+Ch]

  v6 = 0;
  v57 = this;
  v7 = *(_DWORD **)a3;
  if ( !*(_DWORD *)(*(_DWORD *)a3 + 640) )
  {
    v41 = v7[118];
    v42 = v7[119];
    v43 = v7[120];
    v44 = v7[121];
    v45 = v7[109];
    v46 = v7[110];
    v47 = v7[111];
    v48 = v7[112];
    v49 = v7[126];
    v50 = v7[127];
    v51 = v7[128];
    v52 = v7[129];
    v38 = v7[122];
    v53 = v38;
    v39 = v7[123];
    v54 = v39;
    v36 = v7[113];
    v55 = v36;
    v37 = v7[114];
    v56 = v37;
    v40 = EFLOAT::bIs16((EFLOAT *)&v53);
    v8 = EFLOAT::bIs16((EFLOAT *)&v55);
    v9 = v57;
    v54 = v8;
    v60 = 0;
    v10 = (struct _GLYPHPOS *)*((_DWORD *)v57 + 12);
    v59 = *(_DWORD *)(v11 + 320);
    v12 = *(_DWORD *)(v11 + 324);
    v13 = (unsigned __int16 *)*((_DWORD *)v57 + 8);
    v56 = v12;
    v10->ptl.x = a4;
    p_ptl = &v10->ptl;
    v10->ptl.y = a5;
    v63 = 0x80000000;
    v62 = 0x80000000;
    v33 = *(_DWORD *)v9;
    v61 = 0x7FFFFFFF;
    v64 = 0x7FFFFFFF;
    v68 = 0;
    v65 = 0;
    v58 = 0;
    v66 = 0;
    if ( RFONTOBJ::bGetGlyphMetricsPlus(a3, v33, v10, v13, &v66, a2, v9) )
    {
      if ( v66 )
      {
        v14 = *((_DWORD *)v9 + 12);
        *((_DWORD *)v9 + 48) |= 2u;
        *((_DWORD *)v9 + 7) = v14;
      }
      v69 = 0;
      if ( *(_DWORD *)v9 )
      {
        v15 = p_ptl;
        v16 = 0;
        do
        {
          y = (RFONTOBJ *)v15[-1].y;
          vGenWidths(
            &v51,
            &v49,
            *((struct EFLOAT **)y + 2),
            *((struct EFLOAT **)y + 5),
            *((_DWORD *)y + 6),
            v59,
            v34,
            v35);
          v17 = v60 + v16;
          v68 = v17;
          v18 = v6 + lCvt(v51, v52, v17);
          if ( v18 + v56 < v64 )
            v64 = v18 + v56;
          v19 = v59 + v18;
          if ( v19 > v62 )
            v62 = v19;
          v20 = lCvt(v49, v50, v17) - *((_DWORD *)y + 2) / 2;
          v66 = v20;
          if ( *((_DWORD *)y + 3) + v20 - 4 < v61 )
            v61 = *((_DWORD *)y + 3) + v20 - 4;
          if ( v20 + *((_DWORD *)y + 4) + 4 > v63 )
            v63 = v20 + *((_DWORD *)y + 4) + 4;
          v21 = lCvt(v45, v46, v6);
          v22 = lCvt(v41, v42, v68);
          p_ptl->x = a4 + v21 + v22 - *((_DWORD *)y + 13) / 2;
          v23 = lCvt(v47, v48, v6);
          v24 = lCvt(v43, v44, v68);
          p_ptl->y = a5 + v23 + v24 - *((_DWORD *)y + 15) / 2;
          v25 = *a6 + v58;
          v26 = a6[1] + v65;
          v58 = v25;
          v65 = v26;
          if ( v40 )
          {
            v16 = 16 * v25;
          }
          else
          {
            v27 = lCvt(v38, v39, v25);
            v26 = v65;
            v16 = v27;
          }
          v68 = v16;
          if ( v54 )
            v6 = 16 * v26;
          else
            v6 = lCvt(v36, v37, v26);
          a6 += 2;
          v15 = p_ptl + 2;
          v69 = (struct XDCOBJ *)((char *)v69 + 1);
          p_ptl += 2;
        }
        while ( (unsigned int)v69 < *(_DWORD *)v9 );
      }
      v28 = lCvt(v45, v46, v6);
      *((_DWORD *)v9 + 15) = lCvt(v41, v42, v68) + v28;
      v29 = lCvt(v47, v48, v6);
      v30 = lCvt(v43, v44, v68);
      v31 = v57;
      *((_DWORD *)v9 + 16) = v30 + v29;
      v32 = (int *)((char *)v9 + 76);
      *((_DWORD *)v31 + 48) |= 4u;
      *v32++ = v61;
      *v32++ = v62;
      *v32 = v63;
      v32[1] = v64;
    }
  }
}
