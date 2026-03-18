/*
 * XREFs of _ComputeRGBLUTAA @ 0x1BDE20
 * Callers:
 *     _CreateHalftoneBrushPat @ 0xF9AD2 (_CreateHalftoneBrushPat.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ComputeChecksum @ 0xED870 (_ComputeChecksum.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _Log @ 0x1BC88F (_Log.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 */

unsigned __int32 __fastcall ComputeRGBLUTAA(_DWORD *a1, int a2, int *a3)
{
  __int16 v3; // ax
  signed __int32 v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // ecx
  int *v15; // edx
  bool v16; // zf
  int v17; // edi
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _BYTE *v38; // esi
  char v39; // al
  int v40; // eax
  int v41; // esi
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // eax
  int v47; // esi
  int v48; // eax
  int v49; // eax
  int *v50; // edx
  int v51; // eax
  unsigned __int32 result; // eax
  __int16 v53; // ax
  unsigned int v54; // edi
  unsigned int v55; // esi
  _DWORD *v56; // ecx
  int v57; // eax
  _WORD *v58; // edi
  unsigned int v59; // esi
  _DWORD *v60; // edx
  int v61; // ebx
  unsigned __int8 *v62; // ecx
  int v63; // eax
  _BYTE *v64; // ecx
  unsigned int v65; // ebx
  int v66; // [esp-4h] [ebp-1D0h]
  int v67; // [esp-4h] [ebp-1D0h]
  int v68; // [esp-4h] [ebp-1D0h]
  int v69; // [esp-4h] [ebp-1D0h]
  int v70; // [esp-4h] [ebp-1D0h]
  int v71[8]; // [esp+10h] [ebp-1BCh] BYREF
  unsigned int v72; // [esp+30h] [ebp-19Ch]
  unsigned int v73; // [esp+34h] [ebp-198h]
  int v74; // [esp+38h] [ebp-194h]
  int v75; // [esp+3Ch] [ebp-190h]
  int v76; // [esp+40h] [ebp-18Ch]
  int v77; // [esp+44h] [ebp-188h]
  char *v78; // [esp+48h] [ebp-184h]
  int v79; // [esp+4Ch] [ebp-180h]
  int v80; // [esp+50h] [ebp-17Ch]
  int v81; // [esp+54h] [ebp-178h]
  int *v82; // [esp+58h] [ebp-174h]
  int v83; // [esp+5Ch] [ebp-170h]
  int v84; // [esp+60h] [ebp-16Ch]
  unsigned int v85; // [esp+64h] [ebp-168h]
  _WORD *v86; // [esp+68h] [ebp-164h]
  unsigned __int8 *v87; // [esp+6Ch] [ebp-160h]
  int v88; // [esp+70h] [ebp-15Ch]
  int *v89; // [esp+74h] [ebp-158h]
  _BYTE *v90; // [esp+78h] [ebp-154h]
  _DWORD *v91; // [esp+7Ch] [ebp-150h]
  signed __int32 v92[58]; // [esp+80h] [ebp-14Ch] BYREF
  _WORD v93[12]; // [esp+168h] [ebp-64h] BYREF
  _DWORD v94[8]; // [esp+180h] [ebp-4Ch] BYREF
  _DWORD v95[3]; // [esp+1A0h] [ebp-2Ch]
  char *v96; // [esp+1ACh] [ebp-20h]
  char *v97; // [esp+1B0h] [ebp-1Ch]
  char *v98; // [esp+1B4h] [ebp-18h]
  int v99; // [esp+1B8h] [ebp-14h]
  int v100; // [esp+1BCh] [ebp-10h]
  int v101; // [esp+1C0h] [ebp-Ch]

  v91 = a1;
  v89 = a3;
  memset(v71, 0, sizeof(v71));
  v3 = 255;
  qmemcpy(v92, (const void *)(a2 + 56), 0xE4u);
  *(_DWORD *)(a2 + 56) &= 0xFFFFECC1;
  v73 = 255;
  qmemcpy(v93, (const void *)a2, sizeof(v93));
  qmemcpy(v94, (const void *)(a2 + 24), sizeof(v94));
  v4 = v92[0];
  if ( (v92[0] & 0x2000) == 0 )
    v3 = 0;
  v93[11] = v3;
  v5 = 0;
  v93[10] = v3;
  *(_WORD *)(a2 + 2) &= 0xFFFCu;
  *(_DWORD *)(a2 + 8) = 0;
  *(_WORD *)(a2 + 6) = 0;
  *(_WORD *)(a2 + 16) = -21555;
  *(_WORD *)(a2 + 18) = -1;
  v6 = v94[5];
  *(_DWORD *)(a2 + 12) = 1450709556;
  v101 = 1000000;
  v100 = 1000000;
  v99 = 1000000;
  v95[2] = v6;
  v95[1] = v6;
  v95[0] = v6;
  v72 = 0;
  v98 = 0;
  v97 = 0;
  v96 = 0;
  if ( (v4 & 0x40000) != 0 )
  {
    v94[2] = MulFD6(299000, v94[3]);
    v7 = MulFD6((int)&loc_1BD50, v94[3]);
    v4 = v92[0];
    v94[4] = v7;
    v94[3] -= v94[2] + v7;
    *(_WORD *)((char *)&v94[6] + 1) = 256;
    HIBYTE(v94[6]) = 2;
    HIWORD(v94[0]) = 0;
    BYTE1(v94[0]) = 0;
LABEL_5:
    v8 = v91;
    goto LABEL_6;
  }
  if ( (v4 & 0x10000) == 0 )
    goto LABEL_5;
  v8 = v91;
  v16 = (v91[41] & 0x4000) == 0;
  v99 = v91[112];
  v100 = v91[111];
  v101 = v91[110];
  if ( !v16 )
  {
    v96 = (char *)(v91 + 126);
    v97 = (char *)(v91 + 120);
    v98 = (char *)(v91 + 114);
  }
LABEL_6:
  if ( ((unsigned int)&loc_20000 & v4) == 0 )
    v94[7] = 1000000;
  v9 = ComputeChecksum((unsigned __int8 *)&v92[1], v4 & 0x40321000, 0xCu);
  v10 = ComputeChecksum((unsigned __int8 *)&v92[4], v9, 0xCu);
  v11 = ComputeChecksum((unsigned __int8 *)v93, v10, 0x18u);
  v12 = ComputeChecksum((unsigned __int8 *)v94, v11, 0x20u);
  v13 = *((unsigned __int16 *)v8 + 3507);
  v14 = *((unsigned __int16 *)v8 + 3506);
  v84 = v13;
  v15 = v89;
  v80 = v13;
  if ( *v89 != v12 )
  {
    v16 = (v92[0] & 0x1000) == 0;
    *v89 = v12;
    *((_WORD *)v8 + 3506) = 256;
    v85 = 256;
    if ( !v16 )
    {
      qmemcpy(v71, (char *)&RegData + 32 * *((unsigned __int8 *)v8 + 22), sizeof(v71));
      v8 = v91;
    }
    v87 = (unsigned __int8 *)(1000000 - v94[7]);
    v82 = v15 + 7;
    v83 = v94[5] - 1;
    v17 = 3;
    if ( ((unsigned __int8)~LOBYTE(v94[0]) & _bittest(v92, 0x14u) & 1) != 0 )
      v90 = (_BYTE *)v8[1754];
    else
      v90 = 0;
    v75 = ~v83;
    while ( 1 )
    {
      v18 = *((unsigned __int8 *)&v94[6] + v17);
      v86 = (_WORD *)(v17 - 1);
      v81 = 0;
      v19 = v92[v17 + 3];
      v79 = v92[v17];
      v76 = *(&v99 + v18);
      v94[5] = v95[v18];
      v74 = *((unsigned __int8 *)v94 + v18 + 1);
      v77 = v94[v18 + 2];
      v78 = (&v96)[v18];
      v20 = 0;
      v89 = (int *)v19;
      do
      {
        v21 = DivFD6(v20, 255);
        LOWORD(v22) = v92[0];
        v88 = v21;
        if ( (v92[0] & 2) != 0 )
        {
          v21 = RaisePower(v21, v79, 0);
          LOWORD(v22) = v92[0];
        }
        if ( (v22 & 8) != 0 )
        {
          if ( v21 <= v92[12] )
          {
            v23 = MulFD6(v21, v92[14]);
            goto LABEL_27;
          }
          if ( v21 < v92[13] )
          {
            v23 = MulFD6(v21 - v92[12], v92[16]);
LABEL_27:
            v21 = v23;
          }
          else
          {
            v21 = MulFD6(v21 - v92[13], v92[15]) + 1000000;
          }
          LOWORD(v22) = v92[0];
        }
        if ( (v22 & 0x10) != 0 )
        {
          v21 = MulFD6(v21, v92[7]);
          LOWORD(v22) = v92[0];
        }
        if ( (v22 & 0x20) != 0 )
          v21 += v92[8];
        if ( (v22 & 0x100) != 0 )
        {
          v66 = LogFilterMax;
          v24 = Log(7 * v21 + 1000000);
          v21 = DivFD6(v24, v66);
          LOWORD(v22) = v92[0];
        }
        if ( v21 >= 0 )
        {
          if ( v21 > 1000000 )
            v21 = 1000000;
        }
        else
        {
          v21 = 0;
        }
        if ( (v22 & 0x200) != 0 )
          v21 = 1000000 - v21;
        if ( (v22 & 0x1000) != 0 )
        {
          if ( v21 > v71[1] )
          {
            if ( v21 < v71[2] )
            {
              if ( v21 <= 79996 )
              {
                v36 = DivFD6(v21, 9033000);
              }
              else
              {
                v68 = DivFD6((int)&loc_27100 + v21, 1160000);
                v34 = DivFD6((int)&loc_27100 + v21, 1160000);
                v69 = MulFD6(v34, v68);
                v35 = DivFD6((int)&loc_27100 + v21, 1160000);
                v36 = MulFD6(v35, v69);
              }
              v70 = v71[7];
              v37 = Log(v36);
              v32 = MulFD6(v37, v70);
              v33 = v71[6];
            }
            else
            {
              v28 = 1000000 - v71[2];
              v29 = DivFD6(v21 - v71[2], 1000000 - v71[2]);
              v30 = RaisePower(v29, (int)&loc_1E8480, 0);
              v31 = MulFD6(v30, v28);
              v32 = MulFD6(v71[2] + v31, v71[5]);
              v33 = v71[4];
            }
            v22 = v33 + 50 + v32;
          }
          else
          {
            v25 = DivFD6(v21, v71[1]);
            v67 = v71[1];
            v26 = RaisePower(1000000 - v25, (int)&loc_16E360, 0);
            v27 = MulFD6(1000000 - v26, v67);
            v22 = MulFD6(v27, v71[3]) + 50;
          }
          v19 = (int)v89;
          v21 = v22 / 100;
          LOBYTE(v22) = v92[0];
        }
        if ( v21 >= 0 )
        {
          if ( v21 > 1000000 )
            v21 = 1000000;
        }
        else
        {
          v21 = 0;
        }
        if ( (v22 & 4) != 0 )
          v21 = RaisePower(v21, v19, 0);
        v38 = v90;
        if ( v90 )
        {
          v39 = MulFD6(v21, 255);
          v21 = v88;
          *v38 = v39;
          v90 = v38 + 1;
        }
        if ( (v94[0] & 1) == 0 )
          v21 = 1000000 - v21;
        if ( v78 )
        {
          v40 = 0;
          v41 = -1;
          do
          {
            ++v41;
            v42 = v40;
            v40 = *(_DWORD *)&v78[4 * v41];
          }
          while ( v21 > v40 );
          v43 = DivFD6(v21 - v42, v40 - v42);
          v44 = MulFD6(v43, 4095);
          v45 = v94[5] + v44 + (v41 << 12);
        }
        else
        {
          v46 = MulFD6(v21, v77);
          v45 = v94[5] + v46;
        }
        v88 = MulFD6(v45 & (unsigned int)v83, v76);
        v47 = ((v45 & v75) << v74) | v88;
        if ( v21 > v94[7] )
        {
          v48 = DivFD6(v21 - v94[7], (int)v87);
          v49 = RaisePower(v48, (int)&loc_1E8480, 0);
          v47 |= (unsigned int)MulFD6(v49, 1365) << 21;
        }
        v50 = v82;
        v51 = v81;
        *v82 = v47;
        v19 = (int)v89;
        v20 = v51 + 1;
        v82 = v50 + 1;
        v81 = v20;
      }
      while ( v20 < 256 );
      v17 = (int)v86;
      if ( !v86 )
      {
        v8 = v91;
        v14 = v85;
        v13 = v80;
        break;
      }
    }
  }
  result = v92[0] & 0x300000;
  if ( (v92[0] & 0x300000) == 0x300000 && v14 != v13 )
  {
    v87 = (unsigned __int8 *)v8[1754];
    v86 = v87 + 768;
    v91 = v87 + 2304;
    v53 = v84;
    *((_WORD *)v8 + 3506) = v84;
    *((_WORD *)v8 + 3507) = v53;
    v54 = 127;
    v85 = (v80 * ((unsigned int)(unsigned __int8)-((v94[0] & 1) != 0) + 65280) + 127) / 0xFF;
    v90 = (_BYTE *)((unsigned __int8)-((v94[0] & 1) != 0) + 65280 - v85);
    v55 = v85;
    v56 = v91;
    do
    {
      v57 = v54 / v73;
      v54 += v55;
      *((_WORD *)v56 + v5++) = v57;
    }
    while ( v5 < 0x100 );
    v58 = v86;
    v59 = 127;
    if ( (v94[0] & 1) != 0 )
    {
      qmemcpy(v86, v91, 0x200u);
      v59 = 127;
    }
    else
    {
      v60 = v91;
      v61 = 768;
      v62 = v87;
      do
      {
        v63 = *v62++;
        *v58++ = *((_WORD *)v60 + v63);
        --v61;
      }
      while ( v61 );
    }
    v64 = v90;
    v65 = v72;
    do
    {
      result = v59 / 0xFF;
      v59 += (unsigned int)v64;
      *((_WORD *)v91 + v65++) = result;
    }
    while ( v65 < 0x100 );
  }
  return result;
}
