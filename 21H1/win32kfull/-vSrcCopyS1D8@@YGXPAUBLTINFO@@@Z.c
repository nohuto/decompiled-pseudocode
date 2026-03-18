/*
 * XREFs of ?vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z @ 0xC2E4E
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

void __stdcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // ebx
  int v2; // edi
  char *v3; // ecx
  char v4; // al
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  char v9; // cl
  unsigned int v10; // edx
  char v11; // ch
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // edi
  _BYTE *v15; // esi
  int v16; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // edx
  unsigned int v20; // eax
  unsigned __int8 v21; // dl
  int v22; // ebx
  char v23; // cl
  unsigned __int8 v24; // al
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // edi
  _BYTE *v28; // esi
  unsigned int v29; // ebx
  unsigned __int8 v30; // cl
  unsigned int v31; // ebx
  int v32; // edi
  _BYTE *v33; // esi
  unsigned int v34; // eax
  char v35; // ch
  unsigned __int8 v36; // ch
  int v37; // edi
  unsigned int v38; // ebx
  _BYTE *v39; // esi
  unsigned int v40; // eax
  unsigned __int8 v41; // ch
  int v42; // esi
  unsigned int v43; // ebx
  _BYTE *v44; // edi
  unsigned int v45; // eax
  unsigned int v46; // edx
  int v47; // esi
  unsigned int v48; // eax
  _BYTE *v49; // esi
  unsigned int v50; // ecx
  int v51; // edi
  char v52; // cl
  int v53; // eax
  unsigned __int8 v54; // bl
  bool v55; // cf
  int v56; // ecx
  int i; // edi
  unsigned int v58; // eax
  char v59; // al
  char v60; // bh
  unsigned __int8 v61; // bl
  int v62; // ecx
  int v63; // esi
  _BYTE *v64; // edi
  unsigned int v65; // eax
  int v66; // [esp+Ch] [ebp-88h]
  char v67; // [esp+10h] [ebp-84h]
  unsigned int v68; // [esp+14h] [ebp-80h]
  unsigned int v69; // [esp+18h] [ebp-7Ch]
  int v70; // [esp+1Ch] [ebp-78h]
  int v71; // [esp+20h] [ebp-74h]
  unsigned int v72; // [esp+28h] [ebp-6Ch]
  int v73; // [esp+28h] [ebp-6Ch]
  int v74; // [esp+28h] [ebp-6Ch]
  unsigned int v75; // [esp+2Ch] [ebp-68h]
  int v76; // [esp+30h] [ebp-64h]
  char v77; // [esp+30h] [ebp-64h]
  char v78; // [esp+34h] [ebp-60h]
  char v79; // [esp+34h] [ebp-60h]
  char v80; // [esp+34h] [ebp-60h]
  _BYTE *v81; // [esp+38h] [ebp-5Ch]
  char v82; // [esp+38h] [ebp-5Ch]
  BOOL v83; // [esp+3Ch] [ebp-58h]
  _BYTE *v84; // [esp+3Ch] [ebp-58h]
  int v85; // [esp+40h] [ebp-54h]
  int v86; // [esp+40h] [ebp-54h]
  _BYTE *v87; // [esp+40h] [ebp-54h]
  _BYTE v88[4]; // [esp+44h] [ebp-50h]
  int v89; // [esp+48h] [ebp-4Ch]
  char v90; // [esp+4Ch] [ebp-48h]
  char v91; // [esp+4Dh] [ebp-47h]
  unsigned __int8 v92; // [esp+4Eh] [ebp-46h]
  unsigned __int8 v93; // [esp+4Fh] [ebp-45h]
  _DWORD v94[2]; // [esp+50h] [ebp-44h]
  int v95; // [esp+58h] [ebp-3Ch]
  int v96; // [esp+5Ch] [ebp-38h]
  int v97; // [esp+60h] [ebp-34h]
  int v98; // [esp+64h] [ebp-30h]
  int v99; // [esp+68h] [ebp-2Ch]
  int v100; // [esp+6Ch] [ebp-28h]
  int v101; // [esp+70h] [ebp-24h]
  int v102; // [esp+74h] [ebp-20h]
  int v103; // [esp+78h] [ebp-1Ch]
  int v104; // [esp+7Ch] [ebp-18h]
  int v105; // [esp+80h] [ebp-14h]
  int v106; // [esp+84h] [ebp-10h]
  int v107; // [esp+88h] [ebp-Ch]
  int v108; // [esp+8Ch] [ebp-8h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 11);
  v83 = 1;
  v3 = *(char **)(*(_DWORD *)a1 + 16);
  v4 = *v3;
  v5 = *((_DWORD *)v3 + 1);
  v6 = *(_DWORD *)v3;
  v7 = *(_DWORD *)v3 | (*(_DWORD *)v3 << 8);
  v88[0] = v4;
  v88[1] = v5;
  v8 = *((_DWORD *)a1 + 9);
  v94[0] = (v7 << 16) | v7;
  v101 = v5 | (v94[0] << 8);
  v97 = v6 | (v101 << 8);
  v103 = v5 | (v97 << 8);
  v98 = v6 | (v103 << 8);
  v95 = v6 | (v98 << 8);
  v102 = v5 | (v95 << 8);
  v105 = v5 | (v102 << 8);
  v107 = v5 | (v105 << 8);
  v108 = v5 | (v107 << 8);
  v100 = v6 | (v108 << 8);
  v104 = v5 | (v100 << 8);
  v106 = v5 | (v104 << 8);
  v72 = v8 & 7;
  v99 = v6 | (v106 << 8);
  v69 = v2 & 7;
  v96 = v6 | (v99 << 8);
  v94[1] = v6 | (v96 << 8);
  v9 = v72 - v69;
  if ( v72 < v69 )
    v9 += 8;
  v10 = *((_DWORD *)a1 + 4);
  v11 = 8 - v9;
  v71 = *((_DWORD *)a1 + 8);
  v70 = *((_DWORD *)a1 + 7);
  v68 = v2 + v10;
  v91 = v9;
  v90 = 8 - v9;
  v75 = v10;
  v89 = (int)(v2 + v10) >> 3;
  if ( v89 == v2 >> 3 )
  {
    v92 = 0;
    v83 = (int)(v10 + v72) > 8;
  }
  else
  {
    v12 = v2 + 7;
    v75 = 8 - v69;
    v13 = v89 - (v12 >> 3);
    v14 = (_DWORD *)(*((_DWORD *)a1 + 2) + (v12 & 0xFFFFFFF8));
    v15 = (_BYTE *)(*((_DWORD *)a1 + 1) + ((v8 + ((8 - (unsigned __int8)v69) & 7)) >> 3));
    v92 = 1;
    v66 = v71 - 8 * v13;
    v1 = a1;
    v76 = v70 - v13;
    v89 = v13;
    v16 = *((_DWORD *)a1 + 5);
    if ( v16 )
    {
      if ( v9 )
      {
        v22 = v71 - 8 * v13;
        v67 = v9;
        do
        {
          --v16;
          v93 = *v15 << v67;
          v86 = v16;
          v81 = &v15[v13];
          if ( v15 != &v15[v13] )
          {
            v23 = v90;
            v24 = v93;
            v78 = v90;
            do
            {
              v25 = v24 | ((unsigned __int8)*++v15 >> v23);
              *v14 = v94[v25 >> 4];
              v14[1] = v94[v25 & 0xF];
              v14 += 2;
              v24 = *v15 << v67;
              v23 = v78;
            }
            while ( v15 != v81 );
            v13 = v89;
            v16 = v86;
            v22 = v66;
          }
          v15 += v76;
          v14 = (_DWORD *)((char *)v14 + v22);
        }
        while ( v16 );
      }
      else
      {
        v17 = *((_DWORD *)a1 + 5);
        do
        {
          v85 = --v17;
          if ( (&v15[v13] >= v15 ? v13 : 0) != 0 )
          {
            v18 = 0;
            v19 = &v15[v13] >= v15 ? v13 : 0;
            do
            {
              v20 = (unsigned __int8)*v15;
              *v14 = v94[v20 >> 4];
              v14[1] = v94[v20 & 0xF];
              v14 += 2;
              ++v15;
              ++v18;
            }
            while ( v18 != v19 );
            v13 = v89;
            v17 = v85;
          }
          v14 = (_DWORD *)((char *)v14 + v66);
          v15 += v76;
        }
        while ( v17 );
      }
      v1 = a1;
      v9 = v91;
      v11 = v90;
    }
  }
  v21 = v92;
  if ( v69 | v92 ^ 1 )
  {
    v26 = *((_DWORD *)v1 + 11) + *((_DWORD *)v1 + 2);
    v27 = *((_DWORD *)v1 + 5);
    v28 = (_BYTE *)(*((_DWORD *)v1 + 1) + (*((int *)v1 + 9) >> 3));
    v87 = v28;
    if ( v27 )
    {
      v29 = v75;
      if ( v72 <= v69 )
      {
        do
        {
          --v27;
          v93 = *v28;
          v41 = v93 << v72;
          v89 = v27;
          if ( (v29 + v26 >= v26 ? v29 : 0) != 0 )
          {
            v42 = 0;
            v43 = v29 + v26 >= v26 ? v29 : 0;
            v44 = (_BYTE *)v26;
            do
            {
              v45 = v41;
              v41 *= 2;
              *v44++ = v88[v45 >> 7];
              ++v42;
            }
            while ( v42 != v43 );
            v28 = v87;
            v27 = v89;
            v29 = v75;
          }
          v28 += v70;
          v26 += v71;
          v87 = v28;
        }
        while ( v27 );
      }
      else if ( v83 )
      {
        v79 = v9;
        do
        {
          --v27;
          v93 = ((unsigned __int8)(*v28 << v79) | (unsigned __int8)(v28[1] >> v11)) << v69;
          v89 = v27;
          if ( (v29 + v26 >= v26 ? v29 : 0) != 0 )
          {
            v30 = v93;
            v31 = v29 + v26 >= v26 ? v29 : 0;
            v32 = 0;
            v33 = (_BYTE *)v26;
            do
            {
              v34 = v30;
              v30 *= 2;
              *v33++ = v88[v34 >> 7];
              ++v32;
            }
            while ( v32 != v31 );
            v28 = v87;
            v27 = v89;
            v29 = v75;
          }
          v28 += v70;
          v26 += v71;
          v11 = v90;
          v87 = v28;
        }
        while ( v27 );
      }
      else
      {
        v77 = v9;
        do
        {
          --v27;
          v35 = *v28 << v9;
          v93 = *v28;
          v36 = v35 << v69;
          v89 = v27;
          if ( (v29 + v26 >= v26 ? v29 : 0) != 0 )
          {
            v37 = 0;
            v38 = v29 + v26 >= v26 ? v29 : 0;
            v39 = (_BYTE *)v26;
            do
            {
              v40 = v36;
              v36 *= 2;
              *v39++ = v88[v40 >> 7];
              ++v37;
            }
            while ( v37 != v38 );
            v28 = v87;
            v27 = v89;
            v29 = v75;
          }
          v28 += v70;
          v26 += v71;
          v9 = v77;
          v87 = v28;
        }
        while ( v27 );
      }
      v1 = a1;
    }
    v21 = v92;
  }
  if ( (v68 & 7) != 0 )
  {
    if ( v21 )
    {
      v46 = *((_DWORD *)v1 + 2) + (v68 & 0xFFFFFFF8);
      v47 = *((_DWORD *)v1 + 10) - 1;
      v48 = v47 & 7;
      v49 = (_BYTE *)(*((_DWORD *)v1 + 1) + (v47 >> 3));
      v50 = ((_BYTE)v68 - 1) & 7;
      v84 = v49;
      v89 = v50 + 1;
      v51 = *((_DWORD *)v1 + 5);
      if ( v51 )
      {
        if ( v48 < v50 )
        {
          v59 = v91;
          v60 = v90;
          v82 = v91;
          do
          {
            --v51;
            v61 = (*v49 >> v60) | (*(v49 - 1) << v59);
            v74 = v51;
            v62 = v46 + v89 >= v46 ? v89 : 0;
            if ( v62 )
            {
              v63 = 0;
              v64 = (_BYTE *)v46;
              do
              {
                v65 = v61;
                v61 *= 2;
                *v64++ = v88[v65 >> 7];
                ++v63;
              }
              while ( v63 != v62 );
              v49 = v84;
              v51 = v74;
            }
            v49 += v70;
            v46 += v71;
            v59 = v82;
            v84 = v49;
          }
          while ( v51 );
        }
        else
        {
          v52 = v91;
          v53 = v89;
          v80 = v91;
          do
          {
            --v51;
            v54 = *v49 << v52;
            v55 = v46 + v53 < v46;
            v53 = v89;
            v73 = v51;
            v56 = v55 ? 0 : v89;
            if ( v56 )
            {
              for ( i = 0; i != v56; ++i )
              {
                v58 = v54;
                v54 *= 2;
                *(_BYTE *)(i + v46) = v88[v58 >> 7];
              }
              v51 = v73;
              v53 = v89;
            }
            v46 += v71;
            v49 += v70;
            v52 = v80;
          }
          while ( v51 );
        }
      }
    }
  }
}
