/*
 * XREFs of _pDCIAdjClr @ 0x1BEB31
 * Callers:
 *     _HT_CreateHalftoneBrush@20 @ 0x1BA502 (_HT_CreateHalftoneBrush@20.c)
 *     _HT_CreateStandardMonoPattern@8 @ 0x1BA618 (_HT_CreateStandardMonoPattern@8.c)
 *     _HT_HalftoneBitmap@24 @ 0x1BAB42 (_HT_HalftoneBitmap@24.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _Log @ 0x1BC88F (_Log.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 *     _AdjustSrcDevGamma @ 0x1BCB73 (_AdjustSrcDevGamma.c)
 *     _ComputeColorSpaceXForm @ 0x1BDAAF (_ComputeColorSpaceXForm.c)
 *     _GenCMYMaskXlate @ 0x1BE7D6 (_GenCMYMaskXlate.c)
 *     _TintAngle @ 0x1BE98A (_TintAngle.c)
 *     _CompareMemory @ 0x1C60B6 (_CompareMemory.c)
 */

int __fastcall pDCIAdjClr(int a1, void *a2, unsigned int **a3, unsigned int *a4, __int16 a5, int a6, _DWORD *a7)
{
  unsigned int *v7; // esi
  int v8; // ebx
  bool v9; // zf
  unsigned int i; // esi
  unsigned int *v11; // eax
  unsigned int **v12; // ecx
  __int16 v13; // dx
  __int16 v14; // cx
  const void *v15; // edi
  __int16 v16; // cx
  int v17; // esi
  int v18; // eax
  unsigned int v19; // ebx
  __int16 v20; // dx
  int v21; // ebx
  char v22; // al
  int *v23; // ecx
  unsigned int v24; // ebx
  int v25; // eax
  int v26; // edi
  unsigned int v27; // esi
  int v28; // ecx
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  ULONG v32; // eax
  __int16 v33; // dx
  int v34; // ebx
  int v35; // edi
  char v36; // al
  char v37; // dl
  char v38; // dh
  int v39; // eax
  unsigned __int8 v40; // al
  char v41; // al
  char *v42; // ecx
  char v43; // al
  int v44; // ecx
  __int16 v45; // dx
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // ebx
  unsigned int *v49; // eax
  int v50; // edi
  int v51; // esi
  int v52; // edx
  int v53; // ecx
  int v54; // eax
  unsigned int *v55; // edx
  unsigned int v57[58]; // [esp+10h] [ebp-174h] BYREF
  int v58; // [esp+F8h] [ebp-8Ch]
  int v59; // [esp+FCh] [ebp-88h]
  int v60; // [esp+100h] [ebp-84h]
  int v61; // [esp+104h] [ebp-80h]
  int v62; // [esp+108h] [ebp-7Ch]
  int v63; // [esp+10Ch] [ebp-78h]
  void *v64; // [esp+110h] [ebp-74h]
  unsigned int *v65; // [esp+114h] [ebp-70h]
  int v66; // [esp+118h] [ebp-6Ch]
  _DWORD v67[8]; // [esp+11Ch] [ebp-68h] BYREF
  unsigned int **v68; // [esp+13Ch] [ebp-48h]
  ULONG cjMemSize; // [esp+140h] [ebp-44h] BYREF
  unsigned __int8 v70; // [esp+147h] [ebp-3Dh]
  unsigned int *v71; // [esp+148h] [ebp-3Ch]
  _DWORD v72[6]; // [esp+14Ch] [ebp-38h] BYREF
  _DWORD v73[6]; // [esp+164h] [ebp-20h] BYREF

  v7 = (unsigned int *)a1;
  v68 = a3;
  v64 = a2;
  v65 = (unsigned int *)a1;
  v71 = a4;
  cjMemSize = (ULONG)a4;
  if ( a1 && (v8 = a1 + 32, v9 = *(_DWORD *)(a1 + 32) == 1414021956, v66 = a1 + 32, v9) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 36));
    if ( !v68 )
      return v8;
    v67[6] = 0;
    if ( (a5 & 0x200) != 0 && dwABPreMul[0] )
    {
      dwABPreMul[0] = 0;
      for ( i = 1; i < 0x100; ++i )
        dwABPreMul[i] = (i - 16777217) / i;
      v7 = v65;
    }
    if ( (ULongAdd((unsigned int)v71, 296, (int *)&cjMemSize) & 0x80000000) == 0 )
    {
      v11 = (unsigned int *)EngAllocMem(1u, cjMemSize, 0x30355448u);
      v65 = v11;
      *v68 = v11;
      if ( v11 )
      {
        v12 = *(unsigned int ***)(v8 + 164);
        v13 = a5;
        v68 = v12;
        if ( (char)v12 < 0 )
        {
          v13 = a5 | 8;
          a5 |= 8u;
        }
        v67[1] = a6;
        if ( HIBYTE(a6) == 1 || HIBYTE(a6) == 0xFE && ((unsigned __int16)v12 & 0x300) == 0x300 )
        {
          v13 |= 0x41u;
          a5 = v13;
        }
        v14 = v13 & 0x10;
        v58 = (v13 & 0x10) != 0 ? 3928 : 828;
        v59 = v14 != 0 ? 3932 : 832;
        v60 = v14 != 0 ? 3936 : 836;
        v61 = v14 != 0 ? 3916 : 816;
        v62 = v14 != 0 ? 3920 : 820;
        v63 = v14 != 0 ? 3924 : 824;
        if ( (v13 & 8) != 0 )
        {
          v13 &= ~0x10u;
          a5 = v13;
        }
        v15 = v64;
        if ( !v64 )
          v15 = v7 + 2;
        qmemcpy(v73, v15, sizeof(v73));
        if ( LOWORD(v73[0]) != 24 || (cjMemSize = v73[0], (HIWORD(v73[0]) & 0xFFFFFFFC) != 0) )
        {
          qmemcpy(v73, &gcaDefault, sizeof(v73));
          cjMemSize = v73[0];
        }
        v64 = v7 + 52;
        qmemcpy(v72, v7 + 52, sizeof(v72));
        v71 = v7 + 58;
        qmemcpy(v57, v7 + 58, 0xE4u);
        HIWORD(v73[0]) = BYTE2(cjMemSize) & 3;
        if ( LOWORD(v73[1]) > 8u )
          LOWORD(v73[1]) = 0;
        if ( HIWORD(v73[1]) >= 0x540u )
        {
          if ( HIWORD(v73[1]) > 0xFDE8u )
            HIWORD(v73[1]) = -536;
        }
        else
        {
          HIWORD(v73[1]) = 1344;
        }
        if ( LOWORD(v73[2]) >= 0x540u )
        {
          if ( LOWORD(v73[2]) > 0xFDE8u )
            LOWORD(v73[2]) = -536;
        }
        else
        {
          LOWORD(v73[2]) = 1344;
        }
        if ( HIWORD(v73[2]) >= 0x540u )
        {
          if ( HIWORD(v73[2]) > 0xFDE8u )
            HIWORD(v73[2]) = -536;
        }
        else
        {
          HIWORD(v73[2]) = 1344;
        }
        if ( LOWORD(v73[3]) > 0xFA0u )
          LOWORD(v73[3]) = 4000;
        if ( HIWORD(v73[3]) >= 0x1770u )
        {
          if ( HIWORD(v73[3]) > 0x2710u )
            HIWORD(v73[3]) = 10000;
        }
        else
        {
          HIWORD(v73[3]) = 6000;
        }
        if ( SLOWORD(v73[4]) >= -100 )
        {
          if ( SLOWORD(v73[4]) > 100 )
            LOWORD(v73[4]) = 100;
        }
        else
        {
          LOWORD(v73[4]) = -100;
        }
        if ( SHIWORD(v73[4]) >= -100 )
        {
          if ( SHIWORD(v73[4]) > 100 )
            HIWORD(v73[4]) = 100;
        }
        else
        {
          HIWORD(v73[4]) = -100;
        }
        v16 = v73[5];
        if ( SLOWORD(v73[5]) >= -100 )
        {
          if ( SLOWORD(v73[5]) <= 100 )
            goto LABEL_57;
          v16 = 100;
        }
        else
        {
          v16 = -100;
        }
        LOWORD(v73[5]) = v16;
LABEL_57:
        if ( SHIWORD(v73[5]) >= -100 )
        {
          if ( SHIWORD(v73[5]) > 100 )
            HIWORD(v73[5]) = 100;
        }
        else
        {
          HIWORD(v73[5]) = -100;
        }
        if ( (v13 & 1) != 0 || v16 == -100 )
          v73[5] = 65436;
        if ( (v13 & 2) != 0 )
          HIWORD(v73[0]) = BYTE2(cjMemSize) & 2 | 1;
        v17 = v66;
        LOWORD(v73[0]) = v13 & 0x8059;
        v18 = AdjustSrcDevGamma(v66, v57, (unsigned __int16 *)v73, HIBYTE(a6), v13);
        cjMemSize = 2;
        if ( v18 || !CompareMemory(24) )
        {
          v21 = v57[0] & 0x1007;
          v57[0] = v21;
          if ( (a5 & 0x40) != 0 )
          {
            v21 |= 0x2000u;
            v57[0] = v21;
          }
          v22 = BYTE2(v73[0]);
          if ( (v73[0] & 0x20000) != 0 )
          {
            if ( !LogFilterMax )
            {
              LogFilterMax = Log(8000000);
              v22 = BYTE2(v73[0]);
            }
            v21 |= 0x100u;
            v57[0] = v21;
          }
          if ( (v22 & 1) != 0 )
          {
            v21 |= 0x200u;
            v57[0] = v21;
          }
          v23 = (int *)(v17 + 24);
          if ( ((v73[0] ^ v72[0]) & 0x8008) != 0 )
          {
            ComputeColorSpaceXForm(v17, (int *)(((v21 & 1) != 0 ? 0xFFFFFFDC : 0) + v17 + 60), &v57[37], -1);
            v21 = v57[0];
            v23 = (int *)(v17 + 24);
          }
          if ( LOWORD(v73[1]) != LOWORD(v72[1]) )
          {
            ComputeColorSpaceXForm(v17, v23, &v57[17], LOWORD(v73[1]));
            v21 = v57[0];
          }
          if ( (v21 & 0x2000) != 0 || CompareMemory(36) )
            v24 = v21 & 0xFFFF7FFF;
          else
            v24 = v21 | 0x8000;
          v25 = 100 * LOWORD(v73[3]);
          v26 = 100 * HIWORD(v73[3]);
          v57[12] = v25;
          v57[13] = v26;
          if ( v25 || v26 != 1000000 )
          {
            v19 = v24 | 8;
            v57[0] = v19;
            v27 = v19;
            v57[14] = DivFD6(0, 100 * LOWORD(v73[3]));
            v57[15] = DivFD6(0, 100 * (10000 - HIWORD(v73[3])));
            v25 = DivFD6(1000000, v26 - v57[12]);
          }
          else
          {
            v19 = v24 & 0xFFFFFFF7;
            v57[12] = 100 * LOWORD(v73[3]);
            v57[0] = v19;
            v27 = v19;
            v57[13] = 1000000;
            v57[15] = v57[12];
            v57[14] = v57[12];
          }
          v57[16] = v25;
          if ( LOWORD(v73[4]) )
          {
            v57[7] = RaisePower((int)&loc_F7CD8, SLOWORD(v73[4]), 2);
            v19 = v27 | 0x10;
            v57[0] = v27 | 0x10;
            v27 |= 0x10u;
          }
          if ( HIWORD(v73[4]) )
          {
            v19 = v27 | 0x20;
            v57[0] = v27 | 0x20;
            v27 |= 0x20u;
            v57[8] = 3750 * SHIWORD(v73[4]);
          }
          if ( (v27 & 0x2000) != 0 )
          {
            v20 = (__int16)v68;
          }
          else
          {
            v28 = 10000 * SLOWORD(v73[5]);
            v57[9] = v28 + 1000000;
            if ( v28 )
            {
              v19 = v27 | 0x40;
              v57[0] = v27 | 0x40;
              v27 |= 0x40u;
            }
            if ( HIWORD(v73[5]) )
            {
              TintAngle((int *)&v57[10], (int *)&v57[11]);
              v19 = v57[0] | 0x80;
              v57[0] = v19;
              v27 = v19;
            }
            v20 = (__int16)v68;
            if ( ((unsigned __int8)v68 & 4) != 0 && (v27 & 0x1001) == 0x1000 )
            {
              v19 = v27 | 0x400;
              v57[0] = v27 | 0x400;
              if ( ((unsigned __int8)v68 & 1) != 0 )
              {
                v19 = v27 | 0xC00;
                v57[0] = v27 | 0xC00;
              }
            }
          }
          qmemcpy(v64, v73, 0x18u);
          qmemcpy(v71, v57, 0xE4u);
          v17 = v66;
        }
        else
        {
          v19 = v57[0];
          v20 = (__int16)v68;
        }
        v29 = v19 & 0x3DB4BFFF;
        v57[0] = v29;
        if ( (v29 & 0x97FE) == 0 )
        {
          v29 |= 0x80000000;
          v57[0] = v29;
        }
        if ( (v29 & 0x84C0) == 0 || (v29 & 0x2000) != 0 )
        {
          v29 |= 0x40000000u;
          v57[0] = v29;
        }
        if ( (v20 & 0x1000) != 0 || (a5 & 0x20) != 0 )
        {
          v29 |= (unsigned int)&loc_80000;
          v57[0] = v29;
        }
        v30 = v29;
        if ( (a5 & 0x80u) != 0 )
        {
          v29 |= 0x100000u;
          v57[0] = v29;
          if ( (a5 & 0x100) != 0 )
          {
            v29 = v30 | 0x300000;
LABEL_117:
            v57[0] = v29;
            goto LABEL_118;
          }
          if ( (a5 & 0x200) != 0 )
          {
            v29 = v30 | 0x900000;
            v57[0] = v30 | 0x900000;
          }
          if ( (a5 & 0x400) != 0 )
          {
            v29 |= 0x1000000u;
            goto LABEL_117;
          }
        }
LABEL_118:
        if ( (a5 & 4) != 0 )
        {
          v29 |= 0x4000u;
          v57[0] = v29;
        }
        v67[7] = 1000000;
        v67[0] = 67372032;
        memset(v72, 0, sizeof(v72));
        LOBYTE(v67[1]) = 3;
        if ( (v29 & 0x2000) != 0 )
        {
          v29 |= 0x40000u;
          v67[5] = 0;
          v57[0] = v29;
          LOBYTE(v67[0]) = 1;
          v31 = 0xFFFF;
        }
        else
        {
          v67[5] = 4096;
          v31 = 4095;
        }
        v67[2] = v31;
        v67[3] = v31;
        v67[4] = v31;
        if ( HIBYTE(v67[1]) <= 0xFCu )
        {
          if ( HIBYTE(v67[1]) != 252 )
          {
            if ( HIBYTE(v67[1]) != 1 )
            {
              if ( HIBYTE(v67[1]) != 2 )
              {
                if ( (unsigned int)HIBYTE(v67[1]) - 5 <= 1 )
                {
                  v67[5] = 0;
                  HIWORD(v67[0]) = 0;
                  BYTE1(v67[0]) = 0;
                  v67[4] = 255;
                  v67[3] = 255;
                  v67[2] = 255;
                  v72[1] = 1;
                  v72[2] = 2;
                }
                goto LABEL_167;
              }
              goto LABEL_137;
            }
            BYTE2(v67[1]) = 0;
            goto LABEL_167;
          }
          if ( BYTE2(v67[1]) )
            BYTE2(v67[1]) &= (BYTE2(v67[1]) != 4) - 1;
          memset(&v72[3], 255, 12);
          v67[4] = 126975;
          v67[2] = 126975;
          v67[3] = 258047;
          v72[1] = 132120576;
          v72[2] = -134217728;
          HIWORD(v67[0]) = 3849;
LABEL_166:
          v72[0] = (char *)&loc_1EFFFF + 1;
          goto LABEL_167;
        }
        if ( HIBYTE(v67[1]) == 253 )
        {
          v72[1] = 65011712;
          v67[4] = 126975;
          v67[3] = 126975;
          v67[2] = 126975;
          v72[2] = 2080374784;
          v72[5] = 2147450879;
          v72[4] = 2147450879;
          v72[3] = 2147450879;
          HIWORD(v67[0]) = 3593;
          goto LABEL_166;
        }
        v32 = HIBYTE(v67[1]) - 254;
        if ( HIBYTE(v67[1]) != 254 )
        {
          if ( HIBYTE(v67[1]) == 255 )
          {
            BYTE2(v67[1]) = 4;
            v57[0] = v29 | 0x4000;
LABEL_137:
            v72[0] = 0x100000;
            v72[1] = (char *)&loc_1FFFFC + 4;
            v72[2] = 0x400000;
            v72[3] = 0x10000;
            v72[4] = &loc_20000;
            v72[5] = 0x40000;
            HIWORD(v67[0]) = 1541;
            v67[5] = 0;
          }
LABEL_167:
          v49 = v65;
          v67[6] = DstOrderTable[BYTE2(v67[1])];
          v48 = v67[6];
          qmemcpy(v65 + 6, v67, 0x20u);
          qmemcpy(v49, v73, 0x18u);
          v50 = v66;
          v51 = BYTE1(v48);
          *(_DWORD *)(v63 + v66) = v72[BYTE1(v48)];
          v52 = BYTE2(v48);
          v48 >>= 24;
          *(_DWORD *)(v62 + v50) = v72[v52];
          *(_DWORD *)(v61 + v50) = v72[v48];
          v53 = v58;
          *(_DWORD *)(v60 + v50) = v72[v51 + 3];
          *(_DWORD *)(v59 + v50) = v72[v52 + 3];
          v54 = v72[v48 + 3];
          v8 = v50;
          v55 = v65;
          *(_DWORD *)(v53 + v50) = v54;
          v55[71] = v50 + 20;
          v55[72] = v50 + 788;
          qmemcpy(v55 + 14, v57, 0xE4u);
          v55[73] = v50 + 800;
          return v8;
        }
        v33 = (__int16)v68;
        if ( ((unsigned __int16)v68 & 0x100) == 0 )
        {
          v72[0] = 458752;
          v67[4] = 20479;
          v67[3] = 20479;
          v67[2] = 20479;
          v72[1] = 3670016;
          v72[2] = 29360128;
          HIWORD(v67[0]) = 2567;
          BYTE2(v67[1]) = 4;
          v57[0] = v29 & 0xFFFEFFFF;
          goto LABEL_167;
        }
        v34 = v29 | 0x10000;
        v71 = 0;
        v57[0] = v34;
        if ( *(_BYTE *)(v17 + 784) )
        {
          v32 = GenCMYMaskXlate(
                  (_BYTE *)(v17 + 528),
                  (unsigned __int16)v68 & 0x2000,
                  *(unsigned __int8 *)(v17 + 428),
                  *(unsigned __int8 *)(v17 + 429),
                  *(unsigned __int8 *)(v17 + 430));
          v33 = (__int16)v68;
          *(_BYTE *)(v17 + 784) = 0;
        }
        v35 = v33 & 0x2000;
        if ( (v33 & 0x2000) != 0 )
        {
          LOWORD(v71) = -254;
        }
        else
        {
          LOBYTE(v32) = (_BYTE)v71;
          cjMemSize = v32;
        }
        v36 = ((v35 == 0) - 1) ^ *(_BYTE *)(v17 + 432);
        HIBYTE(v71) = (v35 == 0) - 1;
        BYTE2(v71) = v36;
        if ( (v33 & 0x200) != 0 )
        {
          HIWORD(v67[1]) = -1280;
          v72[2] = 16711680;
          v72[1] = 16711680;
          v72[0] = 16711680;
LABEL_163:
          v72[5] = v71;
          v72[4] = v71;
          v72[3] = v71;
          goto LABEL_167;
        }
        v37 = 7;
        v38 = 10;
        v39 = (*(unsigned __int8 *)(v17 + 430) << 12) - 1;
        HIWORD(v67[0]) = 2567;
        v67[2] = v39;
        v67[3] = (*(unsigned __int8 *)(v17 + 429) << 12) - 1;
        v67[4] = (*(unsigned __int8 *)(v17 + 428) << 12) - 1;
        v72[0] = *(unsigned __int16 *)(v17 + 438);
        v72[1] = *(unsigned __int16 *)(v17 + 436);
        v72[2] = *(unsigned __int16 *)(v17 + 434);
        v40 = *(_BYTE *)(v17 + 433);
        v70 = v40;
        if ( v40 < 4u || v40 > 5u )
        {
          HIWORD(v67[0]) = 2310;
          v44 = 250;
          HIBYTE(v67[1]) = -6;
          v37 = 6;
          v38 = 9;
          if ( !v35 )
          {
LABEL_155:
            if ( *(_DWORD *)(v17 + 452) )
            {
              v67[7] = *(_DWORD *)(v17 + 452);
              LOBYTE(v45) = v37 - 4;
              v57[0] = (unsigned int)&loc_20000 | v34;
              HIBYTE(v45) = v38 - 4;
              BYTE1(v67[0]) = 0;
              HIWORD(v67[0]) = v45;
              v46 = v44 - 248;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( v47 )
                {
                  if ( v47 == 1 )
                    HIBYTE(v67[1]) = -9;
                }
                else
                {
                  HIBYTE(v67[1]) = -10;
                }
              }
              else
              {
                HIBYTE(v67[1]) = -11;
              }
            }
            BYTE2(v67[1]) = 0;
            goto LABEL_163;
          }
          v34 |= 0x2000000u;
          BYTE2(v71) = *(_BYTE *)(v17 + 783);
          v43 = *(_BYTE *)(v17 + 528);
        }
        else
        {
          v9 = v40 == 4;
          v41 = cjMemSize;
          if ( v9 )
          {
            HIBYTE(v67[1]) = -7;
          }
          else
          {
            HIBYTE(v67[1]) = -8;
            v41 = cjMemSize | 1;
          }
          v34 |= 0x400000u;
          LOBYTE(v71) = v41 & 3;
          v42 = (char *)*(&p8BPPXlate + (v41 & 3));
          BYTE2(v71) = v42[(v70 == 4 ? 0 : 0x49) + 292];
          v43 = *v42;
          v44 = (v70 == 4) + 248;
        }
        HIBYTE(v71) = v43;
        v57[0] = v34;
        goto LABEL_155;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v8 + 4));
  }
  else
  {
    *a7 = -12;
  }
  return 0;
}
