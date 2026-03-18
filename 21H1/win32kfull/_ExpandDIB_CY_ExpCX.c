/*
 * XREFs of _ExpandDIB_CY_ExpCX @ 0x1C7F6C
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _SharpenInput @ 0xFAF6C (_SharpenInput.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 *     _ExpYDIB_ExpCX @ 0x1C70F2 (_ExpYDIB_ExpCX.c)
 */

int __cdecl ExpandDIB_CY_ExpCX(_DWORD *a1)
{
  bool v1; // zf
  int v2; // ebx
  unsigned int v3; // esi
  unsigned __int8 *v4; // edi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned __int8 *v9; // ebx
  int v10; // esi
  unsigned __int8 *v11; // ecx
  int v12; // eax
  int v13; // ecx
  int *v14; // edx
  int v15; // edi
  unsigned __int8 *v16; // edx
  unsigned __int8 *v17; // ebx
  unsigned __int16 v18; // ax
  int v19; // eax
  int v20; // edx
  unsigned __int8 *v21; // ebx
  _BYTE *v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  int *v26; // esi
  _BYTE *v27; // edi
  unsigned __int8 *v28; // ebx
  int v29; // edx
  unsigned __int8 *v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // ebx
  int *v36; // esi
  _BYTE *v37; // edi
  unsigned __int8 *v38; // ebx
  int v39; // ecx
  unsigned __int8 *v40; // eax
  int v41; // eax
  int v42; // edx
  int *v43; // esi
  unsigned __int8 *v44; // edx
  _BYTE *v45; // edi
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // eax
  unsigned __int8 *v49; // ecx
  int v50; // eax
  __int16 v51; // ax
  unsigned __int8 *v53; // [esp-Ch] [ebp-1F0h]
  int *v54; // [esp+8h] [ebp-1DCh]
  int v55; // [esp+Ch] [ebp-1D8h]
  int v56; // [esp+14h] [ebp-1D0h]
  unsigned int *v57; // [esp+18h] [ebp-1CCh]
  int v58; // [esp+1Ch] [ebp-1C8h]
  int v59; // [esp+20h] [ebp-1C4h]
  _BYTE *v60; // [esp+24h] [ebp-1C0h]
  unsigned int v61; // [esp+28h] [ebp-1BCh]
  unsigned __int8 *v62; // [esp+2Ch] [ebp-1B8h]
  unsigned int v63; // [esp+30h] [ebp-1B4h]
  unsigned __int8 *v64; // [esp+34h] [ebp-1B0h]
  int MaxCount; // [esp+38h] [ebp-1ACh]
  int v66; // [esp+3Ch] [ebp-1A8h]
  int v67; // [esp+40h] [ebp-1A4h]
  unsigned __int8 *v68; // [esp+40h] [ebp-1A4h]
  unsigned __int8 *v69; // [esp+44h] [ebp-1A0h]
  int v70; // [esp+48h] [ebp-19Ch]
  int v71; // [esp+4Ch] [ebp-198h]
  _BYTE *v72; // [esp+50h] [ebp-194h]
  unsigned __int8 *v73; // [esp+54h] [ebp-190h]
  unsigned __int8 *Src; // [esp+58h] [ebp-18Ch]
  int v75; // [esp+5Ch] [ebp-188h]
  int v76; // [esp+5Ch] [ebp-188h]
  unsigned __int8 *v77; // [esp+60h] [ebp-184h]
  unsigned __int16 v78; // [esp+62h] [ebp-182h]
  unsigned __int8 *v79; // [esp+64h] [ebp-180h]
  unsigned __int8 *v80; // [esp+64h] [ebp-180h]
  unsigned __int8 *v81; // [esp+68h] [ebp-17Ch]
  unsigned __int8 *v82; // [esp+68h] [ebp-17Ch]
  _DWORD v83[89]; // [esp+6Ch] [ebp-178h] BYREF
  unsigned int v84; // [esp+1D0h] [ebp-14h]
  int v85; // [esp+1D4h] [ebp-10h]
  int v86; // [esp+1D8h] [ebp-Ch]
  int v87; // [esp+1DCh] [ebp-8h]

  v1 = a1[81] == 0;
  qmemcpy(v83, a1, sizeof(v83));
  if ( !v1 )
  {
    v2 = v83[48];
    v57 = *(unsigned int **)(v83[47] + 32);
    v59 = 3 * v83[22];
    v3 = *(_DWORD *)(v83[48] + 28);
    v75 = -1;
    MaxCount = 3 * v83[8];
    v67 = v83[48];
    v63 = v3;
    v61 = v3 + 1024;
    v84 = v3 + 4096;
    v85 = 3 * v83[22] + v3 + 4096;
    v86 = 3 * v83[22] + v85;
    v87 = 3 * v83[22] + v86;
    v4 = (unsigned __int8 *)(3 * v83[22] + 9 + v87 + 3 * v83[8] + 18);
    v73 = (unsigned __int8 *)(3 * v83[22] + 9 + v87);
    v69 = v4;
    Src = &v4[3 * v83[8] + 18];
    v64 = (unsigned __int8 *)(v83[81] + 9);
    v58 = 3 * ((*(_WORD *)(v83[47] + 8) & 1) + (*(_WORD *)(v83[47] + 12) & 0xF)) - 3;
    GetFixupScan((int)v83, v4);
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      GetFixupScan((int)v83, Src);
    else
      memcpy(Src, v4, MaxCount);
    v5 = *(unsigned __int16 *)(v2 + 12);
    v6 = v5 & 0xF;
    v7 = v5 >> 4;
    v8 = v7 + v6;
    if ( v8 )
    {
      v9 = v73;
      v10 = v8;
      do
      {
        --v10;
        v11 = Src;
        v73 = v69;
        v69 = Src;
        ++v75;
        Src = v9;
        v72 = (_BYTE *)*(&v84 + (v75 & 3));
        v12 = v7--;
        if ( v12 <= 0 )
          GetFixupScan((int)v83, v9);
        else
          memcpy(v9, v11, MaxCount);
        v53 = v9;
        v9 = v73;
        v64 = SharpenInput(v83[0], v64, v73, v69, v53, MaxCount);
        ExpYDIB_ExpCX(v57, &v64[v58], v72, &v72[v59]);
      }
      while ( v10 );
      v3 = v63;
      v2 = v67;
    }
    v13 = *(_DWORD *)(v2 + 16);
    v14 = *(int **)(v2 + 32);
    if ( v13 )
    {
      v15 = v75 - 1;
      v76 = v75 - 1;
      do
      {
        v55 = v13 - 1;
        v70 = *v14;
        v71 = v14[1];
        v54 = v14 + 2;
        if ( (*v14 & 0x8000) != 0 )
        {
          v16 = v73;
          v17 = Src;
          v73 = v69;
          v69 = Src;
          Src = (unsigned __int8 *)GetFixupScan((int)v83, v16);
          ++v15;
          v64 = SharpenInput(v83[0], v64, v73, v17, Src, MaxCount);
          v76 = v15;
          ExpYDIB_ExpCX(
            v57,
            &v64[v58],
            (_BYTE *)*(&v84 + (((_BYTE)v15 + 1) & 3)),
            (_BYTE *)(*(&v84 + (((_BYTE)v15 + 1) & 3)) + v59));
          v18 = v70 & 0x3FFF;
        }
        else
        {
          v18 = *v14;
        }
        v78 = v18;
        v66 = v18;
        v56 = -v18;
        v19 = ((_BYTE)v15 + 1) & 3;
        v20 = -(unsigned __int16)v71;
        v21 = (unsigned __int8 *)*(&v84 + (v15 & 3));
        v22 = (_BYTE *)v83[86];
        v62 = (unsigned __int8 *)*(&v84 + v19);
        v23 = 4096 - HIWORD(v71);
        v68 = v21;
        v60 = (_BYTE *)v83[86];
        if ( v78 )
        {
          v24 = -HIWORD(v70);
          v25 = v56;
          v26 = (int *)(v3 + 2048);
          do
          {
            v25 += v66;
            v23 += HIWORD(v71);
            v24 += HIWORD(v70);
            v20 += (unsigned __int16)v71;
            *(v26 - 512) = v25;
            *(v26 - 256) = v24;
            *v26++ = v20;
            v26[255] = v23;
          }
          while ( (unsigned int)(v26 - 512) < v61 );
          v3 = v63;
          v27 = v60;
          v28 = v68;
          v29 = *(&v84 + (((_BYTE)v76 - 1) & 3)) + 1;
          v81 = (unsigned __int8 *)(*(&v84 + (((_BYTE)v76 - 2) & 3)) + 1);
          v30 = v62 + 1;
          v79 = (unsigned __int8 *)v29;
          v77 = v62 + 1;
          do
          {
            v27[2] = (*(_DWORD *)(v63 + 4 * v81[1])
                    + *(_DWORD *)(v63 + 4 * v28[2] + 2048)
                    + *(_DWORD *)(v63 + 4 * *(unsigned __int8 *)(v29 + 1) + 1024)
                    + *(_DWORD *)(v63 + 4 * v30[1] + 3072)) >> 13;
            v27[1] = (*(_DWORD *)(v63 + 4 * *v81)
                    + *(_DWORD *)(v63 + 4 * *v79 + 1024)
                    + *(_DWORD *)(v63 + 4 * *v77 + 3072)
                    + *(_DWORD *)(v63 + 4 * v28[1] + 2048)) >> 13;
            v31 = *v28;
            v28 += 3;
            v32 = *(_DWORD *)(v63 + 4 * v31 + 2048)
                + *(_DWORD *)(v63 + 4 * *(v79 - 1) + 1024)
                + *(_DWORD *)(v63 + 4 * *(v77 - 1) + 3072);
            v33 = *(v81 - 1);
            v81 += 3;
            v34 = *(_DWORD *)(v63 + 4 * v33) + v32;
            v30 = v77 + 3;
            *v27 = v34 >> 13;
            v27 += v83[88];
            v29 = (int)(v79 + 3);
            v77 += 3;
            v79 += 3;
          }
          while ( v27 != (_BYTE *)v83[87] );
        }
        else if ( HIWORD(v70) )
        {
          v35 = -HIWORD(v70);
          v36 = (int *)(v3 + 2048);
          do
          {
            v35 += HIWORD(v70);
            v23 += HIWORD(v71);
            v20 += (unsigned __int16)v71;
            *(v36 - 256) = v35;
            *v36++ = v20;
            v36[255] = v23;
          }
          while ( (unsigned int)(v36 - 512) < v61 );
          v3 = v63;
          v37 = v60;
          v38 = v68;
          v39 = *(&v84 + (((_BYTE)v76 - 1) & 3)) + 1;
          v40 = v62 + 1;
          v82 = (unsigned __int8 *)v39;
          v80 = v62 + 1;
          do
          {
            v37[2] = (*(_DWORD *)(v63 + 4 * v38[2] + 2048)
                    + *(_DWORD *)(v63 + 4 * *(unsigned __int8 *)(v39 + 1) + 1024)
                    + *(_DWORD *)(v63 + 4 * v40[1] + 3072)) >> 13;
            v37[1] = (*(_DWORD *)(v63 + 4 * *v80 + 3072)
                    + *(_DWORD *)(v63 + 4 * *v82 + 1024)
                    + *(_DWORD *)(v63 + 4 * v38[1] + 2048)) >> 13;
            v41 = *v38;
            v38 += 3;
            v42 = *(_DWORD *)(v63 + 4 * v41 + 2048)
                + *(_DWORD *)(v63 + 4 * *(v82 - 1) + 1024)
                + *(_DWORD *)(v63 + 4 * *(v80 - 1) + 3072);
            v40 = v80 + 3;
            v39 = (int)(v82 + 3);
            *v37 = v42 >> 13;
            v37 += v83[88];
            v80 += 3;
            v82 += 3;
          }
          while ( v37 != (_BYTE *)v83[87] );
        }
        else if ( (_WORD)v71 )
        {
          v43 = (int *)(v3 + 3072);
          do
          {
            v20 += (unsigned __int16)v71;
            v23 += HIWORD(v71);
            *(v43 - 256) = v20;
            *v43++ = v23;
          }
          while ( (unsigned int)(v43 - 768) < v61 );
          v3 = v63;
          v44 = v62 + 1;
          v45 = v60;
          do
          {
            v45[2] = (*(_DWORD *)(v63 + 4 * v21[2] + 2048) + *(_DWORD *)(v63 + 4 * v44[1] + 3072)) >> 13;
            v46 = *v44;
            v44 += 3;
            v45[1] = (*(_DWORD *)(v63 + 4 * v46 + 3072) + *(_DWORD *)(v63 + 4 * v21[1] + 2048)) >> 13;
            v47 = *v21;
            v21 += 3;
            *v45 = (*(_DWORD *)(v63 + 4 * v47 + 2048) + *(_DWORD *)(v63 + 4 * *(v44 - 4) + 3072)) >> 13;
            v45 += v83[88];
          }
          while ( v45 != (_BYTE *)v83[87] );
        }
        else
        {
          v48 = v3;
          do
          {
            v23 += HIWORD(v71);
            *(_DWORD *)(v48 + 3072) = v23;
            v48 += 4;
          }
          while ( v48 < v3 + 1024 );
          v49 = v62;
          do
          {
            v22[2] = *(int *)(v3 + 4 * v49[2] + 3072) >> 13;
            v22[1] = *(int *)(v3 + 4 * v49[1] + 3072) >> 13;
            v50 = *v49;
            v49 += 3;
            *v22 = *(int *)(v3 + 4 * v50 + 3072) >> 13;
            v22 += v83[88];
          }
          while ( v22 != (_BYTE *)v83[87] );
        }
        v51 = v83[0];
        if ( SLOBYTE(v83[0]) < 0 )
        {
          ((void (__cdecl *)(_DWORD *))v83[31])(v83);
          v51 = v83[0];
        }
        if ( (v51 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v83);
          LOBYTE(v51) = v83[0];
        }
        if ( (v51 & 0x10) != 0 )
        {
          MappingBGRF((unsigned __int8 *)v83[82], v83[83], v83[59], (unsigned __int8 *)v83[68]);
          v83[68] += v83[71];
          if ( v83[68] == v83[69] )
            v83[68] = v83[70];
        }
        ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v83[43])(
          v83,
          v83[84],
          v83[85],
          v83[21],
          v83[58],
          v83[61],
          v83[61] + v83[65],
          v83[66],
          v83[44]);
        v83[61] += v83[64];
        if ( v83[61] == v83[62] )
          v83[61] = v83[63];
        v83[21] += v83[25];
        v13 = v55;
        v14 = v54;
        v15 = v76;
      }
      while ( v55 );
    }
  }
  return v83[23];
}
