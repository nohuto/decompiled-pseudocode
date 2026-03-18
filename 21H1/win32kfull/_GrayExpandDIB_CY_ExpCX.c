/*
 * XREFs of _GrayExpandDIB_CY_ExpCX @ 0x1C9C3C
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GraySharpenInput @ 0xFACE0 (_GraySharpenInput.c)
 *     _MappingBGRF @ 0xFAEEE (_MappingBGRF.c)
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 *     _AlphaBlendBGRF @ 0x1C60DE (_AlphaBlendBGRF.c)
 *     _GrayExpYDIB_ExpCX @ 0x1C92C6 (_GrayExpYDIB_ExpCX.c)
 */

int __cdecl GrayExpandDIB_CY_ExpCX(_DWORD *a1)
{
  bool v1; // zf
  int v2; // edi
  char *v3; // ebx
  unsigned __int8 *v4; // esi
  unsigned int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebx
  unsigned __int8 *v9; // edi
  unsigned __int8 *v10; // ecx
  int v11; // eax
  int v12; // ecx
  int *v13; // edx
  int v14; // edi
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // esi
  char *v17; // ebx
  unsigned __int16 v18; // ax
  unsigned __int8 *v19; // ebx
  int v20; // eax
  unsigned __int8 *v21; // esi
  int v22; // ecx
  _WORD *v23; // edi
  int v24; // esi
  int *v25; // ebx
  int v26; // edx
  int v27; // edi
  unsigned __int8 *v28; // esi
  _WORD *v29; // edi
  unsigned int v30; // edx
  int v31; // edx
  int v32; // esi
  int *v33; // ebx
  int v34; // edx
  unsigned __int8 *v35; // esi
  unsigned int v36; // edx
  int v37; // eax
  int v38; // edx
  int *v39; // ebx
  int v40; // edx
  int v41; // ebx
  int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  __int16 v45; // ax
  unsigned __int8 *v47; // [esp-Ch] [ebp-1F4h]
  int *v48; // [esp+8h] [ebp-1E0h]
  int v49; // [esp+Ch] [ebp-1DCh]
  _DWORD *v50; // [esp+18h] [ebp-1D0h]
  int v51; // [esp+1Ch] [ebp-1CCh]
  int v52; // [esp+20h] [ebp-1C8h]
  _WORD *v53; // [esp+24h] [ebp-1C4h]
  int v54; // [esp+24h] [ebp-1C4h]
  int v55; // [esp+28h] [ebp-1C0h]
  int v56; // [esp+28h] [ebp-1C0h]
  int v57; // [esp+2Ch] [ebp-1BCh]
  int v58; // [esp+2Ch] [ebp-1BCh]
  unsigned __int8 *v59; // [esp+30h] [ebp-1B8h]
  _BYTE *v60; // [esp+3Ch] [ebp-1ACh]
  unsigned __int8 *v61; // [esp+3Ch] [ebp-1ACh]
  int v62; // [esp+40h] [ebp-1A8h]
  unsigned int v63; // [esp+44h] [ebp-1A4h]
  char *v64; // [esp+48h] [ebp-1A0h]
  size_t MaxCount; // [esp+4Ch] [ebp-19Ch]
  unsigned __int8 *Src; // [esp+50h] [ebp-198h]
  char *v67; // [esp+54h] [ebp-194h]
  unsigned __int8 *v68; // [esp+58h] [ebp-190h]
  unsigned __int16 v69; // [esp+5Eh] [ebp-18Ah]
  int v70; // [esp+60h] [ebp-188h]
  int v71; // [esp+64h] [ebp-184h]
  int v72; // [esp+68h] [ebp-180h]
  int v73; // [esp+68h] [ebp-180h]
  unsigned int v74; // [esp+6Ch] [ebp-17Ch]
  _DWORD v75[89]; // [esp+70h] [ebp-178h] BYREF
  unsigned int v76; // [esp+1D4h] [ebp-14h]
  int v77; // [esp+1D8h] [ebp-10h]
  int v78; // [esp+1DCh] [ebp-Ch]
  int v79; // [esp+1E0h] [ebp-8h]

  v1 = a1[81] == 0;
  qmemcpy(v75, a1, sizeof(v75));
  if ( !v1 )
  {
    v2 = v75[48];
    v72 = -1;
    v62 = v75[48];
    v51 = (*(_WORD *)(v75[47] + 12) & 0xF) - 1 + (*(_WORD *)(v75[47] + 8) & 1);
    v50 = *(_DWORD **)(v75[47] + 32);
    v74 = *(_DWORD *)(v75[48] + 28);
    v52 = v75[22];
    v76 = v74 + 4096;
    v77 = v75[22] + v74 + 4096;
    v63 = v74 + 1024;
    v78 = v75[22] + v77;
    v79 = v75[22] + v75[22] + v77;
    MaxCount = v75[8];
    v68 = (unsigned __int8 *)(v75[22] + 3 + v79);
    v3 = (char *)&v68[v75[8] + 6];
    v67 = v3;
    v4 = (unsigned __int8 *)&v3[v75[8] + 6];
    v64 = (char *)(v75[81] + 3);
    Src = v4;
    GetFixupScan((int)v75, v3);
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      GetFixupScan((int)v75, v4);
    else
      memcpy(v4, v3, MaxCount);
    v5 = *(unsigned __int16 *)(v2 + 12);
    v6 = v5 & 0xF;
    v7 = v5 >> 4;
    v8 = v6 + v7;
    if ( v6 + v7 )
    {
      v9 = v68;
      do
      {
        --v8;
        v10 = Src;
        v68 = (unsigned __int8 *)v67;
        v67 = (char *)Src;
        ++v72;
        Src = v9;
        v60 = (_BYTE *)*(&v76 + (v72 & 3));
        v11 = v7--;
        if ( v11 <= 0 )
          GetFixupScan((int)v75, v9);
        else
          memcpy(v9, v10, MaxCount);
        v47 = v9;
        v9 = v68;
        v64 = GraySharpenInput(v75[0], v64, v68, v67, v47, MaxCount);
        GrayExpYDIB_ExpCX(v50, (unsigned __int8 *)&v64[v51], v60, &v60[v52]);
      }
      while ( v8 );
      v2 = v62;
    }
    v12 = *(_DWORD *)(v2 + 16);
    v13 = *(int **)(v2 + 32);
    if ( v12 )
    {
      v14 = v72 - 1;
      v73 = v72 - 1;
      do
      {
        v49 = v12 - 1;
        v70 = *v13;
        v71 = v13[1];
        v48 = v13 + 2;
        if ( (*v13 & 0x8000) != 0 )
        {
          v15 = v68;
          v16 = (unsigned __int8 *)v67;
          v17 = (char *)Src;
          v68 = (unsigned __int8 *)v67;
          v67 = (char *)Src;
          Src = (unsigned __int8 *)GetFixupScan((int)v75, v15);
          ++v14;
          v64 = GraySharpenInput(v75[0], v64, v16, v17, Src, MaxCount);
          v73 = v14;
          GrayExpYDIB_ExpCX(
            v50,
            (unsigned __int8 *)&v64[v51],
            (_BYTE *)*(&v76 + (((_BYTE)v14 + 1) & 3)),
            (_BYTE *)(*(&v76 + (((_BYTE)v14 + 1) & 3)) + v52));
          v18 = v70 & 0x3FFF;
        }
        else
        {
          v18 = *v13;
        }
        v69 = v18;
        v55 = v18;
        v57 = -v18;
        v19 = (unsigned __int8 *)*(&v76 + (((_BYTE)v14 + 1) & 3));
        v20 = HIWORD(v71);
        v21 = (unsigned __int8 *)*(&v76 + (v14 & 3));
        v22 = 256 - HIWORD(v71);
        v23 = (_WORD *)v75[86];
        v59 = v19;
        v61 = v21;
        v53 = (_WORD *)v75[86];
        if ( v69 )
        {
          v24 = -HIWORD(v70);
          v25 = (int *)(v74 + 2048);
          v26 = -(unsigned __int16)v71;
          v27 = v57;
          do
          {
            v27 += v55;
            v22 += v20;
            v24 += HIWORD(v70);
            v26 += (unsigned __int16)v71;
            *(v25 - 512) = v27;
            *(v25 - 256) = v24;
            *v25++ = v26;
            v25[255] = v22;
            v20 = HIWORD(v71);
          }
          while ( (unsigned int)(v25 - 512) < v63 );
          v28 = v61;
          v29 = v53;
          v30 = v74;
          v56 = *(&v76 + (((_BYTE)v73 - 1) & 3)) - (_DWORD)v61;
          v58 = *(&v76 + (((_BYTE)v73 - 2) & 3)) - (_DWORD)v61;
          do
          {
            v31 = (*(_DWORD *)(v74 + 4 * *v28 + 2048)
                 + *(_DWORD *)(v74 + 4 * v28[v58])
                 + *(_DWORD *)(v74 + 4 * v28[v59 - v61] + 3072)
                 + *(_DWORD *)(v30 + 4 * v28[v56] + 1024)) >> 5;
            ++v28;
            *v29 = v31;
            v30 = v74;
            v29 = (_WORD *)((char *)v29 + v75[88]);
          }
          while ( v29 != (_WORD *)v75[87] );
        }
        else if ( HIWORD(v70) )
        {
          v32 = -HIWORD(v70);
          v33 = (int *)(v74 + 2048);
          v34 = -(unsigned __int16)v71;
          do
          {
            v32 += HIWORD(v70);
            v22 += v20;
            v34 += (unsigned __int16)v71;
            *(v33 - 256) = v32;
            *v33++ = v34;
            v33[255] = v22;
            v20 = HIWORD(v71);
          }
          while ( (unsigned int)(v33 - 512) < v63 );
          v35 = v61;
          v36 = v74;
          v37 = *(&v76 + (((_BYTE)v73 - 1) & 3)) - (_DWORD)v61;
          v54 = v37;
          do
          {
            v38 = *(_DWORD *)(v74 + 4 * *v35 + 2048)
                + *(_DWORD *)(v74 + 4 * v35[v59 - v61] + 3072)
                + *(_DWORD *)(v36 + 4 * v35[v37] + 1024);
            v37 = v54;
            ++v35;
            *v23 = v38 >> 5;
            v36 = v74;
            v23 = (_WORD *)((char *)v23 + v75[88]);
          }
          while ( v23 != (_WORD *)v75[87] );
        }
        else if ( (_WORD)v71 )
        {
          v39 = (int *)(v74 + 3072);
          v40 = -(unsigned __int16)v71;
          do
          {
            v40 += (unsigned __int16)v71;
            v22 += v20;
            *(v39 - 256) = v40;
            *v39++ = v22;
            v20 = HIWORD(v71);
          }
          while ( (unsigned int)(v39 - 768) < v63 );
          v41 = v59 - v21;
          do
          {
            v42 = (*(_DWORD *)(v74 + 4 * *v21 + 2048) + *(_DWORD *)(v74 + 4 * v21[v41] + 3072)) >> 5;
            ++v21;
            *v23 = v42;
            v23 = (_WORD *)((char *)v23 + v75[88]);
          }
          while ( v23 != (_WORD *)v75[87] );
        }
        else
        {
          v43 = v74;
          do
          {
            v22 += HIWORD(v71);
            *(_DWORD *)(v43 + 3072) = v22;
            v43 += 4;
          }
          while ( v43 < v63 );
          do
          {
            v44 = *(int *)(v74 + 4 * *v19++ + 3072) >> 5;
            *v23 = v44;
            v23 = (_WORD *)((char *)v23 + v75[88]);
          }
          while ( v23 != (_WORD *)v75[87] );
        }
        v45 = v75[0];
        if ( SLOBYTE(v75[0]) < 0 )
        {
          ((void (__cdecl *)(_DWORD *))v75[31])(v75);
          v45 = v75[0];
        }
        if ( (v45 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v75);
          LOBYTE(v45) = v75[0];
        }
        if ( (v45 & 0x10) != 0 )
        {
          MappingBGRF((unsigned __int8 *)v75[82], v75[83], v75[59], (unsigned __int8 *)v75[68]);
          v75[68] += v75[71];
          if ( v75[68] == v75[69] )
            v75[68] = v75[70];
        }
        ((void (__cdecl *)(_DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))v75[43])(
          v75,
          v75[84],
          v75[85],
          v75[21],
          v75[58],
          v75[61],
          v75[61] + v75[65],
          v75[66],
          v75[44]);
        v75[61] += v75[64];
        if ( v75[61] == v75[62] )
          v75[61] = v75[63];
        v75[21] += v75[25];
        v12 = v49;
        v13 = v48;
        v14 = v73;
      }
      while ( v49 );
    }
  }
  return v75[23];
}
