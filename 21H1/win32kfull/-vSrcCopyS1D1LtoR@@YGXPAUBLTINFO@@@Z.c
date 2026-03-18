/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z @ 0x4FE30
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  _BYTE *v1; // edi
  int v2; // edx
  char v3; // al
  int v4; // esi
  int v5; // eax
  _BYTE *v6; // edx
  char *v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int8 v10; // bl
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int8 *v15; // ebx
  int v16; // esi
  char v17; // ch
  char v18; // cl
  char v19; // al
  char v20; // cl
  int v21; // ebx
  _BYTE *v22; // esi
  _BYTE *v23; // edx
  char v24; // ah
  char v25; // al
  char v26; // cl
  char *v27; // edi
  char v28; // bl
  _BYTE *v29; // esi
  char v30; // al
  char v31; // bl
  unsigned __int8 v32; // dl
  char v33; // cl
  char *v34; // edi
  char v35; // bl
  _BYTE *v36; // esi
  char v37; // al
  char v38; // bl
  int v39; // esi
  size_t v40; // eax
  size_t i; // esi
  char *v42; // edi
  unsigned __int8 v43; // dl
  char v44; // al
  char v45; // dl
  char v46; // ah
  unsigned __int8 *v47; // edi
  unsigned __int8 v48; // dl
  char v49; // cl
  char v50; // cl
  char v51; // al
  unsigned __int8 v52; // dl
  char v53; // dl
  char v54; // al
  char v55; // dl
  char v56; // cl
  unsigned __int8 v57; // al
  char v58; // dl
  unsigned __int8 v59; // cl
  char v60; // cl
  char v61; // cl
  char v62; // ah
  char v63; // dl
  unsigned __int8 v64; // al
  char v65; // dl
  int v66; // [esp+Ch] [ebp-44h]
  char v67; // [esp+10h] [ebp-40h]
  BOOL v68; // [esp+14h] [ebp-3Ch]
  int Val; // [esp+18h] [ebp-38h]
  int Vala; // [esp+18h] [ebp-38h]
  unsigned int v71; // [esp+1Ch] [ebp-34h]
  unsigned int v72; // [esp+1Ch] [ebp-34h]
  char *v73; // [esp+20h] [ebp-30h]
  char *v74; // [esp+20h] [ebp-30h]
  char *v75; // [esp+20h] [ebp-30h]
  unsigned int v76; // [esp+24h] [ebp-2Ch]
  int v77; // [esp+28h] [ebp-28h]
  size_t v78; // [esp+28h] [ebp-28h]
  size_t MaxCount; // [esp+2Ch] [ebp-24h]
  int v80; // [esp+34h] [ebp-1Ch]
  char v81; // [esp+34h] [ebp-1Ch]
  _BYTE *v82; // [esp+34h] [ebp-1Ch]
  int v83; // [esp+34h] [ebp-1Ch]
  int v84; // [esp+34h] [ebp-1Ch]
  int v85; // [esp+38h] [ebp-18h]
  int v86; // [esp+38h] [ebp-18h]
  int v87; // [esp+38h] [ebp-18h]
  _BYTE *v88; // [esp+3Ch] [ebp-14h]
  int v89; // [esp+3Ch] [ebp-14h]
  int v90; // [esp+40h] [ebp-10h]
  _BYTE *v91; // [esp+44h] [ebp-Ch]
  int v92; // [esp+48h] [ebp-8h]
  char v93; // [esp+4Dh] [ebp-3h]
  char v94; // [esp+4Eh] [ebp-2h]
  unsigned __int8 v95; // [esp+4Fh] [ebp-1h]

  v1 = 0;
  v68 = 1;
  v91 = 0;
  v2 = *((_DWORD *)a1 + 11);
  v85 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + 4) | (2 * **(_DWORD **)(*(_DWORD *)a1 + 16));
  Val = *((_DWORD *)a1 + 9);
  v76 = Val & 7;
  v71 = v2 & 7;
  v3 = (Val & 7) - (v2 & 7);
  if ( v76 < v71 )
    v3 += 8;
  v94 = v3;
  v4 = *((_DWORD *)a1 + 8);
  v66 = *((_DWORD *)a1 + 4);
  v93 = 8 - v3;
  v92 = v4;
  v67 = v2 + v66;
  v77 = (v2 + v66) >> 3;
  v90 = *((_DWORD *)a1 + 7);
  if ( v77 == v2 >> 3 )
  {
    v95 = 0;
    goto LABEL_10;
  }
  v5 = *((_DWORD *)a1 + 2);
  v6 = (_BYTE *)(v5 + ((v2 + 7) >> 3));
  v7 = (char *)(*((_DWORD *)a1 + 1) + ((int)(Val + (-v71 & 7)) >> 3));
  v95 = 1;
  v91 = (_BYTE *)(v5 + v77);
  v88 = v6;
  MaxCount = v5 + v77 - (_DWORD)v6;
  v73 = v7;
  v78 = v4 - MaxCount;
  Vala = v90 - MaxCount;
  v1 = v91;
  v8 = *((_DWORD *)a1 + 5);
  if ( v94 && v85 && v85 != 3 )
  {
    if ( v85 != 1 )
    {
      if ( v85 != 2 || !v8 )
        goto LABEL_10;
      v33 = v94;
      v34 = v73;
      do
      {
        --v8;
        v35 = *v34 << v33;
        v84 = v8;
        v75 = &v34[MaxCount];
        if ( v34 == &v34[MaxCount] )
        {
          v33 = v94;
        }
        else
        {
          v36 = v88;
          do
          {
            ++v34;
            v33 = v94;
            v37 = ~(v35 | ((unsigned __int8)*v34 >> v93));
            v38 = *v34;
            *v36++ = v37;
            v35 = v38 << v94;
          }
          while ( v34 != v75 );
          v8 = v84;
          v6 = v36;
        }
        v6 += v78;
        v34 += Vala;
        v88 = v6;
      }
      while ( v8 );
      goto LABEL_9;
    }
    if ( v8 )
    {
      v26 = v94;
      v27 = v73;
      do
      {
        --v8;
        v28 = *v27 << v26;
        v83 = v8;
        v74 = &v27[MaxCount];
        if ( v27 == &v27[MaxCount] )
        {
          v26 = v94;
        }
        else
        {
          v29 = v88;
          do
          {
            ++v27;
            v26 = v94;
            v30 = v28 | ((unsigned __int8)*v27 >> v93);
            v31 = *v27;
            *v29++ = v30;
            v28 = v31 << v94;
          }
          while ( v27 != v74 );
          v8 = v83;
          v6 = v29;
        }
        v6 += v78;
        v27 += Vala;
        v88 = v6;
      }
      while ( v8 );
LABEL_9:
      v1 = v91;
    }
  }
  else
  {
    v1 = v91;
    if ( v85 )
    {
      if ( v85 == 1 )
      {
        if ( !v8 )
          goto LABEL_10;
        do
        {
          v80 = v8 - 1;
          memcpy(v6, v7, MaxCount);
          v6 = &v88[v4];
          v8 = v80;
          v7 = &v73[v90];
          v88 += v4;
          v73 += v90;
        }
        while ( v80 );
        goto LABEL_9;
      }
      if ( v85 == 2 )
      {
        if ( v8 )
        {
          do
          {
            --v8;
            for ( i = MaxCount; i; --i )
              *v6++ = ~*v7++;
            v6 += v78;
            v7 += Vala;
          }
          while ( v8 );
          goto LABEL_9;
        }
        goto LABEL_10;
      }
      if ( v85 != 3 )
        goto LABEL_10;
    }
    v39 = *((_DWORD *)a1 + 5);
    if ( v39 )
    {
      v40 = v78;
      do
      {
        --v39;
        if ( MaxCount )
        {
          LOBYTE(Vala) = (v85 == 0) - 1;
          memset(v6, Vala, MaxCount);
          v40 = v78;
          v6 = &v88[MaxCount];
        }
        v6 += v40;
        v88 = v6;
      }
      while ( v39 );
      goto LABEL_9;
    }
  }
LABEL_10:
  v89 = 255 >> v71;
  if ( v95 )
  {
    v9 = 255 >> v71;
  }
  else
  {
    LOBYTE(v9) = (-1 << (8 - (v67 & 7))) & v89;
    LOBYTE(v89) = v9;
    v68 = (int)(v66 + v76) > 8;
  }
  v10 = v95;
  if ( !(v71 | v95 ^ 1) )
    goto LABEL_13;
  v21 = *((_DWORD *)a1 + 5);
  v22 = (_BYTE *)(*((_DWORD *)a1 + 2) + (*((int *)a1 + 11) >> 3));
  v23 = (_BYTE *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 3));
  v82 = v23;
  if ( !v85 )
  {
    v11 = v92;
    if ( v21 )
    {
      v50 = ~(_BYTE)v9;
      do
      {
        *v22 &= v50;
        v22 += v92;
        --v21;
      }
      while ( v21 );
    }
    goto LABEL_80;
  }
  if ( v85 != 1 )
  {
    if ( v85 == 2 )
    {
      if ( !v21 )
        goto LABEL_32;
      if ( v76 <= v71 )
      {
        v46 = ~(_BYTE)v9;
        if ( v76 >= v71 )
        {
          do
          {
            v49 = v89 & ~*v23;
            v23 += v90;
            *v22 = v46 & *v22 | v49;
            v22 += v92;
            --v21;
          }
          while ( v21 );
          goto LABEL_31;
        }
        v47 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 3));
        do
        {
          v48 = *v47;
          v47 += v90;
          *v22 = v46 & *v22 | v89 & ~(v48 >> v93);
          v11 = v92;
          v22 += v92;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        v42 = (char *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 3));
        if ( v68 )
        {
          do
          {
            v43 = v42[1];
            v44 = *v42;
            v42 += v90;
            *v22 = ~(_BYTE)v9 & *v22 | v89 & ~((v44 << v94) | (v43 >> v93));
            v11 = v92;
            v22 += v92;
            --v21;
          }
          while ( v21 );
        }
        else
        {
          do
          {
            v45 = *v42;
            v42 += v90;
            *v22 = ~(_BYTE)v9 & *v22 | v89 & ~(v45 << v94);
            v11 = v92;
            v22 += v92;
            --v21;
          }
          while ( v21 );
        }
      }
      v1 = v91;
    }
    else
    {
      v11 = v92;
      if ( v85 == 3 && v21 )
      {
        do
        {
          *v22 |= v9;
          v22 += v92;
          --v21;
        }
        while ( v21 );
      }
    }
LABEL_80:
    v10 = v95;
    goto LABEL_14;
  }
  if ( v21 )
  {
    if ( v76 > v71 )
    {
      if ( v68 )
      {
        do
        {
          *v22 = ~(_BYTE)v9 & *v22 | v89 & ((*v82 << v94) | (v23[1] >> v93));
          v22 += v92;
          v23 = &v82[v90];
          v82 += v90;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        do
        {
          *v22 = ~(_BYTE)v9 & *v22 | v89 & (*v23 << v94);
          v22 += v92;
          v23 = &v82[v90];
          v82 += v90;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v24 = ~(_BYTE)v9;
      if ( v76 < v71 )
      {
        do
        {
          *v22 = v24 & *v22 | v89 & (*v23 >> v93);
          v22 += v92;
          v23 = &v82[v90];
          v82 += v90;
          --v21;
        }
        while ( v21 );
      }
      else
      {
        do
        {
          v25 = *v23 & v89;
          v23 += v90;
          *v22 = v25 | v24 & *v22;
          v22 += v92;
          --v21;
        }
        while ( v21 );
      }
    }
LABEL_31:
    v1 = v91;
  }
LABEL_32:
  v10 = v95;
LABEL_13:
  v11 = v92;
LABEL_14:
  v12 = 255 >> ((v66 + *((_BYTE *)a1 + 44)) & 7);
  v81 = v12;
  if ( (v67 & 7) != 0 && v10 )
  {
    v13 = *((_DWORD *)a1 + 10) - 1;
    v14 = v13 & 7;
    v15 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (v13 >> 3));
    v72 = (v67 - 1) & 7;
    v16 = *((_DWORD *)a1 + 5);
    if ( v85 )
    {
      v86 = v85 - 1;
      if ( v86 )
      {
        v87 = v86 - 1;
        if ( v87 )
        {
          if ( v87 == 1 && v16 )
          {
            v51 = ~(_BYTE)v12;
            do
            {
              *v1 |= v51;
              v1 += v11;
              --v16;
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          if ( v14 <= v72 )
          {
            if ( v14 >= v72 )
            {
              do
              {
                v59 = *v15;
                v15 += v90;
                v60 = v81 & *v1 | ~(v12 | v59);
                LOBYTE(v12) = v81;
                *v1 = v60;
                v1 += v11;
                --v16;
              }
              while ( v16 );
            }
            else
            {
              v54 = v94;
              do
              {
                v55 = *(v15 - 1);
                v56 = v54;
                v57 = *v15;
                v15 += v90;
                v58 = v81 & *v1 | ~(v81 | (v57 >> v93) | (v55 << v56));
                v54 = v94;
                *v1 = v58;
                v1 += v92;
                --v16;
              }
              while ( v16 );
            }
          }
          else
          {
            do
            {
              v52 = *v15;
              v15 += v90;
              v53 = v81 & *v1 | ~(v12 | (v52 << v94));
              LOBYTE(v12) = v81;
              *v1 = v53;
              v1 += v92;
              --v16;
            }
            while ( v16 );
          }
        }
      }
      else if ( v16 )
      {
        if ( v14 > v72 )
        {
          do
          {
            v32 = *v15;
            v15 += v90;
            *v1 = v12 & *v1 | ~(_BYTE)v12 & (v32 << v94);
            v1 += v92;
            --v16;
          }
          while ( v16 );
        }
        else if ( v14 < v72 )
        {
          v61 = v94;
          v62 = ~(_BYTE)v12;
          do
          {
            v63 = *(v15 - 1);
            v64 = *v15;
            v15 += v90;
            v65 = v63 << v61;
            v61 = v94;
            *v1 = v81 & *v1 | v62 & ((v64 >> v93) | v65);
            v1 += v92;
            --v16;
          }
          while ( v16 );
        }
        else
        {
          v17 = ~(_BYTE)v12;
          do
          {
            v18 = v12 & *v1;
            v19 = *v15 & v17;
            v15 += v90;
            v20 = v19 | v18;
            LOBYTE(v12) = v81;
            *v1 = v20;
            v1 += v11;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    else
    {
      for ( ; v16; --v16 )
      {
        *v1 &= v12;
        v1 += v11;
      }
    }
  }
}
