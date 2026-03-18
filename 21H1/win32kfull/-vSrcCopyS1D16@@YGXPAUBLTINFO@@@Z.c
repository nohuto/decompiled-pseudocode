/*
 * XREFs of ?vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z @ 0x230BCA
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // edi
  unsigned int v4; // esi
  struct BLTINFO *v5; // edi
  unsigned int v6; // eax
  unsigned __int8 v7; // bl
  int v8; // eax
  unsigned __int8 v9; // bh
  int v10; // ecx
  unsigned __int8 *v11; // esi
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // edi
  unsigned int v15; // ecx
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // edx
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // bh
  unsigned __int8 v22; // bh
  char v23; // al
  int v24; // eax
  char v25; // cl
  char *v26; // esi
  unsigned int v27; // edx
  int v28; // eax
  char v29; // cl
  int v30; // edi
  int v31; // eax
  unsigned __int8 v32; // bl
  unsigned __int8 v33; // bh
  char v34; // al
  unsigned __int8 v35; // bh
  unsigned int v36; // ecx
  int v37; // esi
  _WORD *v38; // edi
  unsigned int v39; // eax
  char v40; // cl
  char v41; // bh
  unsigned __int8 v42; // bh
  unsigned int v43; // ecx
  int v44; // esi
  _WORD *v45; // edi
  unsigned int v46; // eax
  char v47; // bh
  unsigned __int8 v48; // bh
  unsigned int v49; // ecx
  int v50; // esi
  _WORD *v51; // edi
  unsigned int v52; // eax
  unsigned int v53; // esi
  int v54; // edx
  unsigned int v55; // eax
  unsigned __int8 *v56; // edx
  int v57; // edi
  unsigned int v58; // ecx
  unsigned __int8 v59; // bl
  unsigned __int8 v60; // bl
  unsigned int v61; // ecx
  int v62; // edx
  _WORD *v63; // edi
  unsigned int v64; // eax
  unsigned __int8 v65; // bh
  char v66; // bl
  unsigned __int8 v67; // al
  unsigned __int8 v68; // bl
  unsigned int v69; // ecx
  int v70; // edi
  _WORD *v71; // edx
  unsigned int v72; // eax
  unsigned int v73; // [esp+Ch] [ebp-5Ch]
  int v74; // [esp+10h] [ebp-58h]
  int v75; // [esp+10h] [ebp-58h]
  unsigned int v76; // [esp+14h] [ebp-54h]
  int v77; // [esp+18h] [ebp-50h]
  int v78; // [esp+1Ch] [ebp-4Ch]
  _WORD v79[2]; // [esp+20h] [ebp-48h]
  struct BLTINFO *v80; // [esp+24h] [ebp-44h]
  int v81; // [esp+28h] [ebp-40h]
  int v82; // [esp+2Ch] [ebp-3Ch]
  unsigned int v83; // [esp+30h] [ebp-38h]
  BOOL v84; // [esp+34h] [ebp-34h]
  int v85; // [esp+38h] [ebp-30h]
  int v86; // [esp+3Ch] [ebp-2Ch]
  unsigned int v87; // [esp+40h] [ebp-28h]
  int v88; // [esp+44h] [ebp-24h]
  unsigned __int8 v89; // [esp+4Ah] [ebp-1Eh]
  unsigned __int8 v90; // [esp+4Bh] [ebp-1Dh]
  int v91; // [esp+4Ch] [ebp-1Ch]
  char v92; // [esp+53h] [ebp-15h]
  _DWORD v93[4]; // [esp+54h] [ebp-14h]

  v80 = a1;
  v1 = *((_DWORD *)a1 + 11);
  v2 = *(_DWORD *)a1;
  v91 = *((_DWORD *)a1 + 4);
  v81 = v1 + v91;
  v3 = *(_DWORD **)(v2 + 16);
  v85 = v1;
  v84 = 1;
  v4 = (v3[1] << 16) | v3[1];
  v93[0] = (*v3 << 16) | *v3;
  v93[3] = v4;
  v93[1] = HIWORD(v93[0]) | (v4 << 16);
  v93[2] = (v93[0] << 16) | HIWORD(v4);
  v79[0] = *(_WORD *)v3;
  LOWORD(v2) = *((_WORD *)v3 + 2);
  v5 = a1;
  v79[1] = v2;
  v74 = *((_DWORD *)a1 + 9);
  v73 = v74 & 7;
  v6 = v1 & 7;
  v7 = (v74 & 7) - v6;
  v76 = v6;
  if ( v73 < v6 )
    v7 += 8;
  v89 = 8 - v7;
  v78 = *((_DWORD *)a1 + 8);
  v77 = *((_DWORD *)a1 + 7);
  v90 = v7;
  v86 = v81 >> 3;
  if ( v81 >> 3 == v85 >> 3 )
  {
    v9 = 0;
    v92 = 0;
    v84 = (int)(v73 + v91) > 8;
  }
  else
  {
    v8 = *((_DWORD *)a1 + 2);
    v9 = 1;
    v92 = 1;
    v91 = v8 + 2 * ((v85 + 7) & 0xFFFFFFF8);
    v10 = v86 - ((v85 + 7) >> 3);
    v82 = 8 - v76;
    v86 = v10;
    v11 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + ((v74 + ((8 - (unsigned __int8)v76) & 7)) >> 3));
    v85 = v77 - v10;
    v12 = *((_DWORD *)a1 + 5);
    v75 = v78 - 16 * v10;
    v88 = v12;
    if ( v12 )
    {
      if ( v7 )
      {
        v16 = (_DWORD *)v91;
        v17 = v10;
        v18 = v88;
        v19 = v7;
        v20 = v89;
        v87 = v19;
        do
        {
          v21 = *v11;
          v88 = v18 - 1;
          v22 = v21 << v19;
          v91 = (int)&v11[v17];
          if ( v11 != &v11[v17] )
          {
            v23 = v20;
            v83 = v20;
            do
            {
              v19 = v22 | (*++v11 >> v23);
              *v16 = v93[v19 >> 6];
              v16[1] = v93[(v19 >> 4) & 3];
              v16[2] = v93[(v19 >> 2) & 3];
              v24 = v93[v19 & 3];
              LOBYTE(v19) = v87;
              v25 = v87;
              v16[3] = v24;
              v16 += 4;
              v23 = v83;
              v22 = *v11 << v25;
            }
            while ( v11 != (unsigned __int8 *)v91 );
            v17 = v86;
          }
          v16 = (_DWORD *)((char *)v16 + v75);
          v11 += v85;
          v18 = v88;
        }
        while ( v88 );
        v7 = v90;
        v9 = v92;
      }
      else
      {
        v13 = (_DWORD *)v91;
        do
        {
          v91 = 0;
          v88 = v12 - 1;
          v87 = &v11[v10] >= v11 ? v10 : 0;
          if ( v87 )
          {
            v14 = &v11[v10] >= v11 ? v10 : 0;
            do
            {
              v15 = *v11;
              *v13 = v93[v15 >> 6];
              v13[1] = v93[(v15 >> 4) & 3];
              v13[2] = v93[(v15 >> 2) & 3];
              v13[3] = v93[v15 & 3];
              v13 += 4;
              ++v11;
              ++v91;
            }
            while ( v91 != v14 );
            v10 = v86;
          }
          v13 = (_DWORD *)((char *)v13 + v75);
          v11 += v85;
          v12 = v88;
        }
        while ( v88 );
      }
      v5 = v80;
    }
    v91 = v82;
  }
  if ( v76 | v9 ^ 1 )
  {
    v26 = (char *)(*((_DWORD *)v5 + 1) + (*((int *)v5 + 9) >> 3));
    v27 = *((_DWORD *)v5 + 2) + 2 * *((_DWORD *)v5 + 11);
    v86 = (int)v26;
    v28 = *((_DWORD *)v5 + 5);
    v88 = v28;
    if ( v28 )
    {
      v29 = v73;
      v30 = v28;
      if ( v73 <= v76 )
      {
        v82 = 2 * v91;
        v83 = (unsigned int)(2 * v91) >> 1;
        do
        {
          --v30;
          v47 = *v26;
          v84 = 0;
          v48 = v47 << v29;
          v88 = v30;
          v87 = v27;
          v49 = v27 + v82 >= v27 ? v83 : 0;
          if ( v49 )
          {
            v50 = v84;
            v51 = (_WORD *)v27;
            do
            {
              v52 = v48;
              v48 *= 2;
              ++v50;
              *v51++ = v79[v52 >> 7];
            }
            while ( v50 != v49 );
            v26 = (char *)v86;
            v30 = v88;
          }
          v26 += v77;
          v27 += v78;
          v29 = v73;
          v86 = (int)v26;
        }
        while ( v30 );
      }
      else if ( v84 )
      {
        v31 = v7;
        v32 = v89;
        v82 = v31;
        v83 = 2 * v91;
        v87 = (unsigned int)(2 * v91) >> 1;
        do
        {
          v33 = v26[1];
          v34 = *v26;
          --v30;
          v85 = 0;
          v35 = ((unsigned __int8)(v34 << v82) | (unsigned __int8)(v33 >> v32)) << v76;
          v88 = v30;
          v84 = v27;
          v36 = v27 + v83 >= v27 ? v87 : 0;
          if ( v36 )
          {
            v37 = v85;
            v38 = (_WORD *)v27;
            do
            {
              v39 = v35;
              v35 *= 2;
              ++v37;
              *v38++ = v79[v39 >> 7];
            }
            while ( v37 != v36 );
            v26 = (char *)v86;
            v30 = v88;
          }
          v26 += v77;
          v27 += v78;
          v86 = (int)v26;
        }
        while ( v30 );
        v7 = v90;
      }
      else
      {
        v40 = v7;
        v82 = 2 * v91;
        v85 = v7;
        v83 = (unsigned int)(2 * v91) >> 1;
        do
        {
          v41 = *v26;
          --v30;
          v84 = 0;
          v42 = v41 << v40 << v76;
          v88 = v30;
          v87 = v27;
          v43 = v27 + v82 >= v27 ? v83 : 0;
          if ( v43 )
          {
            v44 = v84;
            v45 = (_WORD *)v27;
            do
            {
              v46 = v42;
              v42 *= 2;
              ++v44;
              *v45++ = v79[v46 >> 7];
            }
            while ( v44 != v43 );
            v26 = (char *)v86;
            v30 = v88;
          }
          v26 += v77;
          v27 += v78;
          v40 = v85;
          v86 = (int)v26;
        }
        while ( v30 );
      }
      v5 = v80;
      v9 = v92;
    }
  }
  if ( (v81 & 7) != 0 )
  {
    if ( v9 )
    {
      v53 = *((_DWORD *)v5 + 2) + 2 * (v81 & 0xFFFFFFF8);
      v54 = *((_DWORD *)v5 + 10) - 1;
      v55 = v54 & 7;
      v56 = (unsigned __int8 *)(*((_DWORD *)v5 + 1) + (v54 >> 3));
      v57 = *((_DWORD *)v5 + 5);
      v58 = ((_BYTE)v81 - 1) & 7;
      v91 = (int)v56;
      if ( v57 )
      {
        if ( v55 < v58 )
        {
          v65 = v89;
          v82 = v7;
          v83 = 2 * v58 + 2;
          v87 = v83 >> 1;
          do
          {
            --v57;
            v66 = *(v56 - 1);
            v67 = *v56;
            v85 = 0;
            v68 = (v67 >> v65) | (v66 << v82);
            v81 = v57;
            v84 = v53;
            v69 = v53 + v83 >= v53 ? v87 : 0;
            if ( v69 )
            {
              v70 = v85;
              v71 = (_WORD *)v53;
              do
              {
                v72 = v68;
                v68 *= 2;
                ++v70;
                *v71++ = v79[v72 >> 7];
              }
              while ( v70 != v69 );
              v56 = (unsigned __int8 *)v91;
              v57 = v81;
            }
            v56 += v77;
            v53 += v78;
            v91 = (int)v56;
          }
          while ( v57 );
        }
        else
        {
          v82 = v7;
          v83 = 2 * v58 + 2;
          v87 = v83 >> 1;
          do
          {
            --v57;
            v59 = *v56;
            v85 = 0;
            v60 = v59 << v82;
            v81 = v57;
            v84 = v53;
            v61 = v53 + v83 >= v53 ? v87 : 0;
            if ( v61 )
            {
              v62 = v85;
              v63 = (_WORD *)v53;
              do
              {
                v64 = v60;
                v60 *= 2;
                ++v62;
                *v63++ = v79[v64 >> 7];
              }
              while ( v62 != v61 );
              v56 = (unsigned __int8 *)v91;
              v57 = v81;
            }
            v56 += v77;
            v53 += v78;
            v91 = (int)v56;
          }
          while ( v57 );
        }
      }
    }
  }
}
