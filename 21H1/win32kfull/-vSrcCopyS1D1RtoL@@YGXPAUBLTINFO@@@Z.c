/*
 * XREFs of ?vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z @ 0x22F886
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

void __stdcall vSrcCopyS1D1RtoL(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  _BYTE *v2; // ebx
  unsigned int v3; // edx
  char v4; // al
  int v5; // eax
  unsigned int v6; // ecx
  _BYTE *v7; // esi
  int v8; // edx
  unsigned __int8 *v9; // edi
  int v10; // ebx
  unsigned __int8 v11; // dl
  int v12; // ebx
  char v13; // cl
  char v14; // dl
  unsigned __int8 v15; // al
  char v16; // dl
  char v17; // al
  unsigned __int8 v18; // dl
  char v19; // dl
  char v20; // cl
  int v21; // edi
  int v22; // eax
  _BYTE *v23; // edi
  unsigned __int8 *v24; // esi
  size_t v25; // ecx
  int v26; // eax
  int v27; // ebx
  size_t v28; // ebx
  char v29; // dh
  unsigned __int8 *v30; // ebx
  char v31; // al
  unsigned __int8 v32; // dh
  unsigned int v33; // edx
  int v34; // edi
  int v35; // esi
  unsigned int v36; // eax
  unsigned __int8 *v37; // esi
  unsigned __int8 v38; // dl
  unsigned __int8 v39; // al
  unsigned __int8 v40; // dl
  char v41; // al
  char v42; // cl
  unsigned __int8 v43; // al
  char v44; // cl
  unsigned int v45; // [esp+18h] [ebp-28h]
  int v46; // [esp+1Ch] [ebp-24h]
  int v47; // [esp+1Ch] [ebp-24h]
  _BYTE *v48; // [esp+1Ch] [ebp-24h]
  unsigned int v49; // [esp+20h] [ebp-20h]
  int v50; // [esp+20h] [ebp-20h]
  BOOL v51; // [esp+24h] [ebp-1Ch]
  size_t v52; // [esp+24h] [ebp-1Ch]
  int v53; // [esp+28h] [ebp-18h]
  char v54; // [esp+2Ch] [ebp-14h]
  int v55; // [esp+30h] [ebp-10h]
  int v56; // [esp+30h] [ebp-10h]
  char v57; // [esp+30h] [ebp-10h]
  int v58; // [esp+34h] [ebp-Ch]
  int v59; // [esp+38h] [ebp-8h]
  char v60; // [esp+3Dh] [ebp-3h]
  char v61; // [esp+3Eh] [ebp-2h]
  char v62; // [esp+3Fh] [ebp-1h]

  v1 = a1;
  v2 = 0;
  v51 = 1;
  v55 = *((_DWORD *)a1 + 11);
  v3 = v55 & 7;
  v49 = *((_DWORD *)a1 + 9) & 7;
  v45 = (unsigned __int8)v3;
  v4 = v49 - (v55 & 7);
  if ( v49 < v3 )
    v4 += 8;
  v62 = v4;
  v60 = 8 - v4;
  v46 = *((_DWORD *)a1 + 4);
  v54 = v55 - v46;
  v59 = *((_DWORD *)a1 + 8);
  v58 = *((_DWORD *)a1 + 7);
  v5 = (v55 - v46) >> 3;
  v56 = v55 >> 3;
  v53 = v5;
  v61 = -1 << (7 - v3);
  if ( v5 == v56 )
  {
    v61 &= 255 >> ((v54 + 1) & 7);
    v6 = *((_DWORD *)a1 + 9) & 7;
    if ( v49 < v3 )
      v51 = (int)(v49 - v46) < -1;
  }
  else
  {
    v6 = *((_DWORD *)a1 + 9) & 7;
  }
  v47 = ((_BYTE)v3 + 1) & 7;
  if ( v47 | (v5 == v56) )
  {
    v7 = (_BYTE *)(v56 + *((_DWORD *)a1 + 2));
    v8 = *((_DWORD *)a1 + 5);
    v9 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (*((int *)a1 + 9) >> 3));
    if ( v8 )
    {
      if ( v6 <= v45 )
      {
        if ( v6 >= v45 )
        {
          do
          {
            v20 = v61 & *v9;
            v9 += v58;
            *v7 = ~v61 & *v7 | v20;
            v7 += v59;
            --v8;
          }
          while ( v8 );
        }
        else
        {
          v12 = *((_DWORD *)a1 + 5);
          if ( v51 )
          {
            v13 = v62;
            do
            {
              v14 = *(v9 - 1);
              v15 = *v9;
              v9 += v58;
              v16 = v14 << v13;
              v13 = v62;
              *v7 = ~v61 & *v7 | v61 & ((v15 >> v60) | v16);
              v7 += v59;
              --v12;
            }
            while ( v12 );
          }
          else
          {
            v17 = v61;
            do
            {
              v18 = *v9;
              v9 += v58;
              v19 = ~v61 & *v7 | v17 & (v18 >> v60);
              v17 = v61;
              *v7 = v19;
              v7 += v59;
              --v12;
            }
            while ( v12 );
          }
        }
      }
      else
      {
        v10 = *((_DWORD *)a1 + 5);
        do
        {
          v11 = *v9;
          v9 += v58;
          *v7 = ~v61 & *v7 | v61 & (v11 << v62);
          v7 += v59;
          --v10;
        }
        while ( v10 );
      }
      v1 = a1;
      v2 = 0;
    }
    else
    {
      v1 = a1;
    }
  }
  v21 = v56;
  if ( v53 != v56 )
  {
    v22 = *((_DWORD *)v1 + 2);
    v2 = (_BYTE *)(v22 + v53);
    v23 = (_BYTE *)(v22 + ((*((_DWORD *)v1 + 11) - 7) >> 3));
    v24 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + ((*((_DWORD *)v1 + 9) - v47) >> 3));
    v25 = (size_t)&v23[-v22 - v53];
    v48 = (_BYTE *)(v22 + v53);
    v52 = v25;
    v26 = *((_DWORD *)a1 + 5);
    if ( v26 )
    {
      if ( v62 )
      {
        v28 = v25;
        do
        {
          --v26;
          v29 = *v24 >> v60;
          v50 = v26;
          if ( v24 != &v24[-v28] )
          {
            v30 = &v24[-v28];
            do
            {
              v31 = v29 | (*--v24 << v62);
              v32 = *v24;
              *v23-- = v31;
              v29 = v32 >> v60;
            }
            while ( v24 != v30 );
            v26 = v50;
            v28 = v25;
          }
          v23 += v25 + v59;
          v24 += v25 + v58;
        }
        while ( v26 );
      }
      else
      {
        v27 = *((_DWORD *)a1 + 5);
        do
        {
          memmove(&v23[-v25 + 1], &v24[-v25 + 1], v25);
          v23 += v59;
          v24 += v58;
          v25 = v52;
          --v27;
        }
        while ( v27 );
      }
      v2 = v48;
    }
    v21 = v56;
  }
  v33 = (v54 + 1) & 7;
  v57 = -1 << (8 - v33);
  if ( ((v54 + 1) & 7) != 0 && v53 != v21 )
  {
    v34 = *((_DWORD *)a1 + 5);
    v35 = *((_DWORD *)a1 + 10) + 1;
    v36 = v35 & 7;
    v37 = (unsigned __int8 *)(*((_DWORD *)a1 + 1) + (v35 >> 3));
    if ( v34 )
    {
      if ( v36 <= v33 )
      {
        if ( v36 >= v33 )
        {
          v41 = -1 << (8 - v33);
          do
          {
            v42 = v41 & *v2;
            v43 = *v37;
            v37 += v58;
            v44 = ~v57 & v43 | v42;
            v41 = -1 << (8 - v33);
            *v2 = v44;
            v2 += v59;
            --v34;
          }
          while ( v34 );
        }
        else
        {
          do
          {
            v40 = *v37;
            v37 += v58;
            *v2 = v57 & *v2 | ~v57 & (v40 >> v60);
            v2 += v59;
            --v34;
          }
          while ( v34 );
        }
      }
      else
      {
        do
        {
          v38 = v37[1];
          v39 = *v37;
          v37 += v58;
          *v2 = v57 & *v2 | ~v57 & ((v39 << v62) | (v38 >> v60));
          v2 += v59;
          --v34;
        }
        while ( v34 );
      }
    }
  }
}
