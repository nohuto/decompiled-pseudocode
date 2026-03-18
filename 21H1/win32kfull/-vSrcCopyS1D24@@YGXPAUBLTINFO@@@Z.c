/*
 * XREFs of ?vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z @ 0x2313BE
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

void __stdcall vSrcCopyS1D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned int v2; // edi
  _DWORD *v3; // ecx
  unsigned int v4; // ecx
  char v5; // bl
  char v6; // bh
  int v7; // edx
  _BYTE *v8; // edi
  int v9; // ecx
  int v10; // eax
  _BYTE *v11; // esi
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  unsigned __int8 v16; // al
  char v17; // cl
  unsigned int v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  unsigned __int8 v22; // dl
  int v23; // eax
  _BYTE *v24; // edi
  int v25; // edx
  int v26; // esi
  unsigned __int8 v27; // ah
  _BYTE *v28; // esi
  unsigned int v29; // ecx
  int v30; // ecx
  char v31; // si
  char v32; // bh
  _BYTE *v33; // esi
  unsigned __int8 v34; // bh
  unsigned int v35; // ecx
  int v36; // ecx
  char v37; // cl
  _BYTE *v38; // esi
  unsigned __int8 v39; // bh
  unsigned int v40; // ecx
  int v41; // ecx
  unsigned int v42; // edx
  int v43; // edi
  unsigned int v44; // eax
  _BYTE *v45; // edi
  int v46; // esi
  unsigned int v47; // ecx
  unsigned __int8 v48; // ah
  _BYTE *v49; // ebx
  unsigned int v50; // ecx
  int v51; // ecx
  unsigned __int8 v52; // bl
  _BYTE *v53; // esi
  unsigned int v54; // ecx
  int v55; // ecx
  int v56; // [esp+Ch] [ebp-50h]
  int v57; // [esp+10h] [ebp-4Ch]
  int v58; // [esp+10h] [ebp-4Ch]
  unsigned int v59; // [esp+14h] [ebp-48h]
  int v60; // [esp+18h] [ebp-44h]
  _BYTE *v61; // [esp+18h] [ebp-44h]
  BOOL v62; // [esp+20h] [ebp-3Ch]
  int v63; // [esp+24h] [ebp-38h]
  int v64; // [esp+28h] [ebp-34h]
  unsigned int v65; // [esp+2Ch] [ebp-30h]
  int v66; // [esp+2Ch] [ebp-30h]
  int v67; // [esp+30h] [ebp-2Ch]
  int v68; // [esp+30h] [ebp-2Ch]
  int v69; // [esp+30h] [ebp-2Ch]
  char v70; // [esp+30h] [ebp-2Ch]
  int v71; // [esp+34h] [ebp-28h]
  int v72; // [esp+34h] [ebp-28h]
  int v73; // [esp+38h] [ebp-24h]
  _BYTE *v74; // [esp+38h] [ebp-24h]
  char v75; // [esp+38h] [ebp-24h]
  unsigned int v76; // [esp+3Ch] [ebp-20h]
  int v77; // [esp+3Ch] [ebp-20h]
  int v78; // [esp+3Ch] [ebp-20h]
  int v79; // [esp+40h] [ebp-1Ch]
  int v80; // [esp+40h] [ebp-1Ch]
  int v81; // [esp+40h] [ebp-1Ch]
  int v82; // [esp+48h] [ebp-14h]
  int v83; // [esp+48h] [ebp-14h]
  _BYTE *v84; // [esp+48h] [ebp-14h]
  unsigned __int8 v85; // [esp+4Fh] [ebp-Dh]
  _DWORD v86[2]; // [esp+50h] [ebp-Ch]

  v1 = a1;
  v62 = 1;
  v2 = *((_DWORD *)a1 + 4);
  v82 = *((_DWORD *)a1 + 11);
  v76 = v2;
  v60 = v2 + v82;
  v3 = *(_DWORD **)(*(_DWORD *)a1 + 16);
  v86[0] = *v3;
  v86[1] = v3[1];
  v4 = v82 & 7;
  v57 = *((_DWORD *)a1 + 9);
  v65 = v57 & 7;
  v5 = (v57 & 7) - v4;
  v59 = v4;
  if ( v65 < v4 )
    v5 += 8;
  v6 = 8 - v5;
  v64 = *((_DWORD *)a1 + 8);
  v63 = *((_DWORD *)a1 + 7);
  if ( v60 >> 3 == v82 >> 3 )
  {
    v85 = 0;
    v62 = (int)(v2 + v65) > 8;
  }
  else
  {
    v85 = 1;
    v7 = (v60 >> 3) - ((v82 + 7) >> 3);
    v79 = v7;
    v8 = (_BYTE *)(*((_DWORD *)a1 + 1) + ((v57 + ((8 - (unsigned __int8)v4) & 7)) >> 3));
    v9 = v64 - 24 * v7;
    v56 = v9;
    v58 = v63 - v7;
    v10 = *((_DWORD *)a1 + 5);
    if ( v10 )
    {
      v11 = (_BYTE *)(*((_DWORD *)a1 + 2) + 3 * ((v82 + 7) & 0xFFFFFFF8));
      if ( v5 )
      {
        do
        {
          v78 = --v10;
          v74 = &v8[v7];
          if ( v8 != &v8[v7] )
          {
            v16 = *v8 << v5;
            v17 = 8 - v5;
            do
            {
              v18 = v16 | ((unsigned __int8)*++v8 >> v17);
              v19 = (v18 >> 5) & 4;
              *v11 = *((_BYTE *)v86 + v19);
              v11[1] = *((_BYTE *)v86 + v19 + 1);
              v11[2] = *((_BYTE *)v86 + v19 + 2);
              v11[3] = *((_BYTE *)v86 + ((v18 >> 4) & 4));
              v11[4] = *((_BYTE *)v86 + ((v18 >> 4) & 4) + 1);
              v11[5] = *((_BYTE *)v86 + ((v18 >> 4) & 4) + 2);
              v11[6] = *((_BYTE *)v86 + ((v18 >> 3) & 4));
              v11[7] = *((_BYTE *)v86 + ((v18 >> 3) & 4) + 1);
              v11[8] = *((_BYTE *)v86 + ((v18 >> 3) & 4) + 2);
              v11[9] = *((_BYTE *)v86 + ((v18 >> 2) & 4));
              v11[10] = *((_BYTE *)v86 + ((v18 >> 2) & 4) + 1);
              v11[11] = *((_BYTE *)v86 + ((v18 >> 2) & 4) + 2);
              v11[12] = *((_BYTE *)v86 + ((v18 >> 1) & 4));
              v11[13] = *((_BYTE *)v86 + ((v18 >> 1) & 4) + 1);
              v11[14] = *((_BYTE *)v86 + ((v18 >> 1) & 4) + 2);
              v11[15] = *((_BYTE *)v86 + (v18 & 4));
              v11[16] = *((_BYTE *)v86 + (v18 & 4) + 1);
              v20 = v18 & 2;
              v11[17] = *((_BYTE *)v86 + (v18 & 4) + 2);
              v21 = v18 & 1;
              v11[18] = *((_BYTE *)v86 + 2 * v20);
              v11[19] = *((_BYTE *)v86 + 2 * v20 + 1);
              v11[20] = *((_BYTE *)v86 + 2 * v20 + 2);
              v11[21] = v86[v21];
              v11[22] = BYTE1(v86[v21]);
              v11[23] = BYTE2(v86[v21]);
              v11 += 24;
              v16 = *v8 << v5;
              v17 = 8 - v5;
            }
            while ( v8 != v74 );
            v7 = v79;
            v10 = v78;
          }
          v11 += v56;
          v8 += v58;
        }
        while ( v10 );
      }
      else
      {
        do
        {
          v83 = 0;
          v77 = v10 - 1;
          v73 = &v8[v7] >= v8 ? v7 : 0;
          if ( v73 )
          {
            do
            {
              v12 = (unsigned __int8)*v8;
              v13 = (v12 >> 5) & 4;
              *v11 = *((_BYTE *)v86 + v13);
              v11[1] = *((_BYTE *)v86 + v13 + 1);
              v11[2] = *((_BYTE *)v86 + v13 + 2);
              v11[3] = *((_BYTE *)v86 + ((v12 >> 4) & 4));
              v11[4] = *((_BYTE *)v86 + ((v12 >> 4) & 4) + 1);
              v11[5] = *((_BYTE *)v86 + ((v12 >> 4) & 4) + 2);
              v11[6] = *((_BYTE *)v86 + ((v12 >> 3) & 4));
              v11[7] = *((_BYTE *)v86 + ((v12 >> 3) & 4) + 1);
              v11[8] = *((_BYTE *)v86 + ((v12 >> 3) & 4) + 2);
              v11[9] = *((_BYTE *)v86 + ((v12 >> 2) & 4));
              v11[10] = *((_BYTE *)v86 + ((v12 >> 2) & 4) + 1);
              v11[11] = *((_BYTE *)v86 + ((v12 >> 2) & 4) + 2);
              v11[12] = *((_BYTE *)v86 + ((v12 >> 1) & 4));
              v11[13] = *((_BYTE *)v86 + ((v12 >> 1) & 4) + 1);
              v11[14] = *((_BYTE *)v86 + ((v12 >> 1) & 4) + 2);
              v11[15] = *((_BYTE *)v86 + (v12 & 4));
              v11[16] = *((_BYTE *)v86 + (v12 & 4) + 1);
              v14 = v12 & 2;
              v11[17] = *((_BYTE *)v86 + (v12 & 4) + 2);
              v15 = v12 & 1;
              v11[18] = *((_BYTE *)v86 + 2 * v14);
              v11[19] = *((_BYTE *)v86 + 2 * v14 + 1);
              v11[20] = *((_BYTE *)v86 + 2 * v14 + 2);
              v11[21] = v86[v15];
              v11[22] = BYTE1(v86[v15]);
              v11[23] = BYTE2(v86[v15]);
              v11 += 24;
              ++v8;
              ++v83;
            }
            while ( v83 != v73 );
            v7 = v79;
            v9 = v56;
          }
          v8 += v58;
          v11 += v9;
          --v10;
        }
        while ( v77 );
      }
      v1 = a1;
    }
    v4 = v59;
    v76 = 8 - v59;
  }
  v22 = v85;
  if ( v4 | v85 ^ 1 )
  {
    v23 = *((_DWORD *)v1 + 5);
    v24 = (_BYTE *)(*((_DWORD *)v1 + 1) + (*((int *)v1 + 9) >> 3));
    v25 = *((_DWORD *)v1 + 2) + 3 * *((_DWORD *)v1 + 11);
    v84 = v24;
    if ( !v23 )
    {
LABEL_43:
      v22 = v85;
      goto LABEL_44;
    }
    if ( v65 <= v4 )
    {
      v68 = 3 * v76;
      v37 = v65;
      do
      {
        v81 = v23 - 1;
        v38 = (_BYTE *)v25;
        v39 = *v24 << v37;
        --v23;
        if ( v25 != v25 + v68 )
        {
          do
          {
            v40 = v39;
            v39 *= 2;
            v41 = (v40 >> 5) & 4;
            *v38 = *((_BYTE *)v86 + v41);
            v38[1] = *((_BYTE *)v86 + v41 + 1);
            v38[2] = *((_BYTE *)v86 + v41 + 2);
            v38 += 3;
          }
          while ( v38 != (_BYTE *)(v25 + v68) );
          v24 = v84;
          v23 = v81;
          v37 = v65;
        }
        v24 += v63;
        v25 += v64;
        v84 = v24;
      }
      while ( v23 );
    }
    else
    {
      if ( v62 )
      {
        v26 = *((_DWORD *)v1 + 5);
        v71 = 3 * v76;
        do
        {
          --v26;
          v27 = ((unsigned __int8)(*v24 << v5) | (unsigned __int8)(v24[1] >> v6)) << v59;
          v80 = v26;
          if ( v25 != v25 + v71 )
          {
            v28 = (_BYTE *)v25;
            do
            {
              v29 = v27;
              v27 *= 2;
              v30 = (v29 >> 5) & 4;
              *v28 = *((_BYTE *)v86 + v30);
              v28[1] = *((_BYTE *)v86 + v30 + 1);
              v28[2] = *((_BYTE *)v86 + v30 + 2);
              v28 += 3;
            }
            while ( v28 != (_BYTE *)(v25 + v71) );
            v24 = v84;
            v26 = v80;
          }
          v24 += v63;
          v25 += v64;
          v84 = v24;
        }
        while ( v26 );
        goto LABEL_42;
      }
      v31 = v5;
      v67 = 3 * v76;
      do
      {
        v32 = *v24 << v31;
        --v23;
        v33 = (_BYTE *)v25;
        v34 = v32 << v59;
        if ( v25 != v25 + v67 )
        {
          do
          {
            v35 = v34;
            v34 *= 2;
            v36 = (v35 >> 5) & 4;
            *v33 = *((_BYTE *)v86 + v36);
            v33[1] = *((_BYTE *)v86 + v36 + 1);
            v33[2] = *((_BYTE *)v86 + v36 + 2);
            v33 += 3;
          }
          while ( v33 != (_BYTE *)(v25 + v67) );
          v24 = v84;
        }
        v24 += v63;
        v25 += v64;
        v31 = v5;
        v84 = v24;
      }
      while ( v23 );
    }
    v6 = 8 - v5;
LABEL_42:
    v1 = a1;
    goto LABEL_43;
  }
LABEL_44:
  if ( (v60 & 7) != 0 )
  {
    if ( v22 )
    {
      v42 = *((_DWORD *)v1 + 2) + 3 * (v60 & 0xFFFFFFF8);
      v43 = *((_DWORD *)v1 + 10) - 1;
      v44 = v43 & 7;
      v45 = (_BYTE *)(*((_DWORD *)v1 + 1) + (v43 >> 3));
      v46 = *((_DWORD *)v1 + 5);
      v47 = ((_BYTE)v60 - 1) & 7;
      v61 = v45;
      if ( v46 )
      {
        if ( v44 < v47 )
        {
          v70 = v5;
          v72 = 3 * (v47 + 1);
          do
          {
            --v46;
            v52 = (*v45 >> v6) | (*(v45 - 1) << v70);
            v66 = v46;
            if ( v42 != v42 + v72 )
            {
              v53 = (_BYTE *)v42;
              do
              {
                v54 = v52;
                v52 *= 2;
                v55 = (v54 >> 5) & 4;
                *v53 = *((_BYTE *)v86 + v55);
                v53[1] = *((_BYTE *)v86 + v55 + 1);
                v53[2] = *((_BYTE *)v86 + v55 + 2);
                v53 += 3;
              }
              while ( v53 != (_BYTE *)(v42 + v72) );
              v45 = v61;
              v46 = v66;
            }
            v45 += v63;
            v42 += v64;
            v61 = v45;
          }
          while ( v46 );
        }
        else
        {
          v75 = v5;
          v69 = 3 * (v47 + 1);
          do
          {
            v48 = *v45 << v5;
            --v46;
            v49 = (_BYTE *)v42;
            if ( v42 != v42 + v69 )
            {
              do
              {
                v50 = v48;
                v48 *= 2;
                v51 = (v50 >> 5) & 4;
                *v49 = *((_BYTE *)v86 + v51);
                v49[1] = *((_BYTE *)v86 + v51 + 1);
                v49[2] = *((_BYTE *)v86 + v51 + 2);
                v49 += 3;
              }
              while ( v49 != (_BYTE *)(v42 + v69) );
            }
            v42 += v64;
            v45 += v63;
            v5 = v75;
          }
          while ( v46 );
        }
      }
    }
  }
}
