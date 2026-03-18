/*
 * XREFs of ?vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z @ 0xBB026
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vSrcCopyS1D4(struct BLTINFO *a1)
{
  char *v1; // eax
  char v2; // dl
  char v3; // bl
  char v4; // cl
  struct BLTINFO *v5; // ebx
  int v6; // edi
  unsigned int v7; // edx
  char v8; // cl
  char v9; // ch
  int v10; // edi
  int v11; // eax
  _BYTE *v12; // edi
  _BYTE *v13; // esi
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int i; // ebx
  unsigned int v18; // ecx
  unsigned __int8 v19; // al
  int v20; // ebx
  unsigned __int8 v21; // dl
  _BYTE *v22; // ebx
  unsigned __int8 v23; // al
  unsigned int v24; // edx
  int v25; // edx
  unsigned int *v26; // esi
  unsigned __int8 *v27; // edi
  int v28; // eax
  unsigned int v29; // edx
  char v30; // bl
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // edx
  int *v34; // esi
  _BYTE *v35; // edi
  int v36; // ebx
  char v37; // cl
  unsigned int v38; // ecx
  char v39; // cl
  unsigned int v40; // edx
  int v41; // [esp+Ch] [ebp-40h]
  char v42; // [esp+Ch] [ebp-40h]
  int v43; // [esp+Ch] [ebp-40h]
  int v44; // [esp+10h] [ebp-3Ch]
  int v45; // [esp+10h] [ebp-3Ch]
  unsigned int v46; // [esp+10h] [ebp-3Ch]
  char v47; // [esp+14h] [ebp-38h]
  char v48; // [esp+14h] [ebp-38h]
  int v49; // [esp+1Ch] [ebp-30h]
  unsigned int v50; // [esp+20h] [ebp-2Ch]
  int v51; // [esp+24h] [ebp-28h]
  int v52; // [esp+24h] [ebp-28h]
  int v53; // [esp+28h] [ebp-24h]
  char v54; // [esp+2Ch] [ebp-20h]
  unsigned int v55; // [esp+30h] [ebp-1Ch]
  int v56; // [esp+34h] [ebp-18h]
  int v57; // [esp+38h] [ebp-14h]
  int v58; // [esp+3Ch] [ebp-10h]
  int v59; // [esp+3Ch] [ebp-10h]
  unsigned int v60; // [esp+3Ch] [ebp-10h]
  int v61; // [esp+40h] [ebp-Ch]
  int v62; // [esp+40h] [ebp-Ch]
  int v63; // [esp+40h] [ebp-Ch]
  int v64; // [esp+40h] [ebp-Ch]
  int v65; // [esp+40h] [ebp-Ch]
  int v66; // [esp+40h] [ebp-Ch]
  int v67; // [esp+40h] [ebp-Ch]
  _BYTE v68[5]; // [esp+44h] [ebp-8h]
  char v69; // [esp+49h] [ebp-3h]
  char v70; // [esp+4Ah] [ebp-2h]
  char v71; // [esp+4Bh] [ebp-1h]
  char v72; // [esp+54h] [ebp+8h]

  v41 = *((_DWORD *)a1 + 10);
  v1 = *(char **)(*(_DWORD *)a1 + 16);
  v2 = *v1;
  v3 = v1[4];
  LOBYTE(v1) = 16 * *v1;
  v68[1] = v3 | (unsigned __int8)v1;
  v68[0] = v2 | (unsigned __int8)v1;
  LOBYTE(v1) = 16 * v3;
  v4 = v3 | (16 * v3);
  v5 = a1;
  v68[2] = v2 | (unsigned __int8)v1;
  v68[3] = v4;
  v6 = *((_DWORD *)a1 + 11);
  v51 = *((_DWORD *)a1 + 9);
  v7 = v6 & 7;
  v55 = v7;
  v50 = v51 & 7;
  v8 = (v51 & 7) - (v6 & 7);
  if ( v50 < v7 )
    v8 += 8;
  v9 = 8 - v8;
  v44 = *((_DWORD *)a1 + 4);
  v57 = *((_DWORD *)a1 + 8);
  v56 = *((_DWORD *)a1 + 7);
  v49 = v6 + v44;
  v70 = v8;
  v69 = 8 - v8;
  v61 = (v6 + v44) >> 3;
  if ( v61 == v6 >> 3 )
  {
    v19 = 0;
    v71 = 0;
  }
  else
  {
    v71 = 1;
    v10 = v6 + 7;
    v62 = v61 - (v10 >> 3);
    v11 = v62;
    v12 = (_BYTE *)(*((_DWORD *)a1 + 2) + ((v10 >> 1) & 0xFFFFFFFC));
    v53 = v57 - 4 * v62;
    v13 = (_BYTE *)(*((_DWORD *)a1 + 1) + ((int)(v51 + (-v7 & 7)) >> 3));
    v52 = v56 - v62;
    if ( *((_DWORD *)a1 + 5) )
    {
      if ( v8 )
      {
        v20 = *((_DWORD *)a1 + 5);
        v54 = v8;
        do
        {
          --v20;
          v21 = *v13 << v8;
          v59 = v20;
          v68[4] = v21;
          if ( v13 == &v13[v11] )
          {
            v8 = v54;
          }
          else
          {
            v22 = &v13[v11];
            v47 = v69;
            v23 = v21;
            do
            {
              v24 = v23 | ((unsigned __int8)*++v13 >> v47);
              v8 = v54;
              *v12 = v68[v24 >> 6];
              v12[1] = v68[(v24 >> 4) & 3];
              v12[2] = v68[(v24 >> 2) & 3];
              v12[3] = v68[v24 & 3];
              v12 += 4;
              v23 = *v13 << v54;
            }
            while ( v13 != v22 );
            v11 = v62;
            v20 = v59;
          }
          v12 += v53;
          v13 += v52;
        }
        while ( v20 );
      }
      else
      {
        v14 = v62;
        v15 = *((_DWORD *)a1 + 5);
        do
        {
          v58 = v15 - 1;
          v16 = &v13[v14] >= v13 ? v14 : 0;
          if ( v16 )
          {
            for ( i = 0; i != v16; ++i )
            {
              v18 = (unsigned __int8)*v13;
              *v12 = v68[v18 >> 6];
              v12[1] = v68[(v18 >> 4) & 3];
              v12[2] = v68[(v18 >> 2) & 3];
              v12[3] = v68[v18 & 3];
              v12 += 4;
              ++v13;
            }
            v14 = v62;
          }
          v12 += v53;
          v13 += v52;
          v15 = v58;
        }
        while ( v58 );
      }
      v5 = a1;
      v8 = v70;
      v7 = v55;
      v9 = v69;
    }
    v19 = v71;
  }
  if ( v7 | v19 ^ 1 )
  {
    v25 = dword_25D640[v7];
    v60 = v25;
    if ( !v71 )
      v60 = dword_25D620[v49 & 7] & v25;
    v26 = (unsigned int *)(*((_DWORD *)v5 + 2) + ((*((int *)v5 + 11) >> 1) & 0xFFFFFFFC));
    v27 = (unsigned __int8 *)(*((_DWORD *)v5 + 1) + (*((int *)v5 + 9) >> 3));
    v45 = v44 + v50;
    v28 = *((_DWORD *)v5 + 5);
    if ( v28 )
    {
      if ( v50 < v55 )
      {
        do
        {
          v32 = *v27 >> v9;
          v27 += v56;
          LOBYTE(v65) = v68[v32 >> 6];
          BYTE1(v65) = v68[(v32 >> 4) & 3];
          BYTE2(v65) = v68[(v32 >> 2) & 3];
          HIBYTE(v65) = v68[v32 & 3];
          --v28;
          *v26 = v60 & v65 | ~v60 & *v26;
          v26 = (unsigned int *)((char *)v26 + v57);
        }
        while ( v28 );
      }
      else if ( v45 <= 8 )
      {
        v30 = v8;
        do
        {
          v31 = (unsigned __int8)(*v27 << v30);
          v27 += v56;
          LOBYTE(v64) = v68[v31 >> 6];
          BYTE1(v64) = v68[(v31 >> 4) & 3];
          BYTE2(v64) = v68[(v31 >> 2) & 3];
          HIBYTE(v64) = v68[v31 & 3];
          --v28;
          *v26 = v60 & v64 | ~v60 & *v26;
          v26 = (unsigned int *)((char *)v26 + v57);
        }
        while ( v28 );
      }
      else
      {
        do
        {
          v29 = (unsigned __int8)(*v27 << v8) | (v27[1] >> v9);
          v27 += v56;
          LOBYTE(v63) = v68[v29 >> 6];
          BYTE1(v63) = v68[(v29 >> 4) & 3];
          BYTE2(v63) = v68[(v29 >> 2) & 3];
          HIBYTE(v63) = v68[v29 & 3];
          --v28;
          *v26 = v60 & v63 | ~v60 & *v26;
          v26 = (unsigned int *)((char *)v26 + v57);
        }
        while ( v28 );
      }
      v5 = a1;
    }
  }
  if ( (v49 & 7) != 0 )
  {
    if ( v71 )
    {
      v33 = dword_25D620[v49 & 7];
      v46 = v33;
      v34 = (int *)(*((_DWORD *)v5 + 2) + ((v49 >> 1) & 0xFFFFFFFC));
      v35 = (_BYTE *)(*((_DWORD *)v5 + 1) + ((*((_DWORD *)v5 + 10) - 1) >> 3));
      v36 = *((_DWORD *)v5 + 5);
      if ( v36 )
      {
        if ( (((_BYTE)v41 - 1) & 7u) < (((_BYTE)v49 - 1) & 7u) )
        {
          v39 = v69;
          v72 = v70;
          v48 = v69;
          v43 = ~v33;
          do
          {
            v40 = (unsigned __int8)(*(v35 - 1) << v72) | ((unsigned __int8)*v35 >> v39);
            v35 += v56;
            LOBYTE(v67) = v68[v40 >> 6];
            BYTE1(v67) = v68[(v40 >> 4) & 3];
            BYTE2(v67) = v68[(v40 >> 2) & 3];
            HIBYTE(v67) = v68[v40 & 3];
            *v34 = v46 & v67 | v43 & *v34;
            v34 = (int *)((char *)v34 + v57);
            v39 = v48;
            --v36;
          }
          while ( v36 );
        }
        else
        {
          v37 = v70;
          v42 = v70;
          do
          {
            v38 = (unsigned __int8)(*v35 << v37);
            v35 += v56;
            LOBYTE(v66) = v68[v38 >> 6];
            BYTE1(v66) = v68[(v38 >> 4) & 3];
            BYTE2(v66) = v68[(v38 >> 2) & 3];
            HIBYTE(v66) = v68[v38 & 3];
            *v34 = v33 & v66 | ~v33 & *v34;
            v34 = (int *)((char *)v34 + v57);
            v37 = v42;
            --v36;
          }
          while ( v36 );
        }
      }
    }
  }
}
