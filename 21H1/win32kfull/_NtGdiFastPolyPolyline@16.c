/*
 * XREFs of _NtGdiFastPolyPolyline@16 @ 0xF7700
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QAEPAVREGION@@XZ @ 0x538D4 (-prgnEffRao@XDCOBJ@@QAEPAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x5A866 (--0DEVLOCKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA (-vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ??0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z @ 0xF6A1A (--0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7 (--0EPATHOBJ@@QAE@XZ.c)
 *     ??0PATH@@QAE@XZ @ 0x1E4107 (--0PATH@@QAE@XZ.c)
 *     ?bMakePathRecords@@YGHPAU_PATHRECORD@@PBKJPAU_POINTL@@KJJPAU_RECTFX@@PAPAU1@@Z @ 0x1FF4CC (-bMakePathRecords@@YGHPAU_PATHRECORD@@PBKJPAU_POINTL@@KJJPAU_RECTFX@@PAPAU1@@Z.c)
 */

int __stdcall NtGdiFastPolyPolyline(HDC a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // esi
  struct _PATHRECORD *v7; // ecx
  unsigned int v8; // edx
  _DWORD *v9; // eax
  int v10; // eax
  struct _PATHRECORD *v11; // edi
  unsigned int v12; // eax
  int v14; // ecx
  int v15; // esi
  unsigned int *v16; // edx
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // edx
  DC *v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  MIX v25; // esi
  struct REGION *v26; // eax
  struct ECLIPOBJ *v27; // ecx
  BRUSHOBJ *v28; // edx
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // [esp-4h] [ebp-2F4h]
  struct _RECTFX *v33; // [esp+0h] [ebp-2F0h]
  struct _PATHRECORD **v34; // [esp+4h] [ebp-2ECh]
  _BYTE v35[48]; // [esp+10h] [ebp-2E0h] BYREF
  _DWORD v36[12]; // [esp+40h] [ebp-2B0h] BYREF
  LONG v37[4]; // [esp+70h] [ebp-280h] BYREF
  _DWORD v38[3]; // [esp+80h] [ebp-270h] BYREF
  LINEATTRS *v39; // [esp+8Ch] [ebp-264h]
  unsigned int v40; // [esp+90h] [ebp-260h]
  _DWORD *v41; // [esp+94h] [ebp-25Ch]
  struct _PATHRECORD *v42; // [esp+98h] [ebp-258h]
  MIX v43; // [esp+9Ch] [ebp-254h]
  unsigned int v44; // [esp+A0h] [ebp-250h]
  int v45; // [esp+A4h] [ebp-24Ch]
  int v46; // [esp+A8h] [ebp-248h]
  unsigned int v47; // [esp+ACh] [ebp-244h]
  struct _PATHRECORD *v48; // [esp+B0h] [ebp-240h]
  struct _POINTL *v49; // [esp+B4h] [ebp-23Ch]
  unsigned int v50; // [esp+B8h] [ebp-238h]
  DC *v51[3]; // [esp+BCh] [ebp-234h] BYREF
  _BYTE *v52; // [esp+C8h] [ebp-228h]
  unsigned int *v53; // [esp+CCh] [ebp-224h]
  int v54; // [esp+D0h] [ebp-220h]
  _BYTE v55[20]; // [esp+D4h] [ebp-21Ch] BYREF
  _BYTE *v56; // [esp+E8h] [ebp-208h]
  int v57; // [esp+ECh] [ebp-204h] BYREF
  int v58; // [esp+F0h] [ebp-200h] BYREF
  int v59; // [esp+F4h] [ebp-1FCh]
  int v60; // [esp+F8h] [ebp-1F8h]
  int v61; // [esp+FCh] [ebp-1F4h]
  int v62; // [esp+108h] [ebp-1E8h]
  int v63; // [esp+10Ch] [ebp-1E4h]
  char v64; // [esp+1E4h] [ebp-10Ch] BYREF
  char v65[120]; // [esp+1E8h] [ebp-108h] BYREF
  _BYTE v66[100]; // [esp+260h] [ebp-90h] BYREF
  int v67; // [esp+2C4h] [ebp-2Ch] BYREF
  int v68; // [esp+2C8h] [ebp-28h]
  int v69; // [esp+2CCh] [ebp-24h]
  int v70; // [esp+2D0h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+2D8h] [ebp-18h]

  v53 = a2;
  v47 = a3;
  v48 = 0;
  v54 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v51, a1);
  if ( v51[0] && (*((_DWORD *)v51[0] + 6) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v51, 516);
    v39 = (LINEATTRS *)((char *)v51[0] + 140);
    v4 = *((_DWORD *)v51[0] + 255);
    v5 = *(_DWORD *)(v4 + 184);
    if ( (v5 & 0x1000) != 0 )
      GreDCSelectBrush(v51[0], *(_DWORD *)(v4 + 188));
    if ( (v5 & 0x2000) != 0 )
      GreDCSelectPen(v51[0], *(_DWORD *)(*((_DWORD *)v51[0] + 255) + 192));
    if ( a4 )
    {
      ms_exc.registration.TryLevel = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      if ( a4 <= 0x3FFFFFFF )
      {
        v6 = 4 * a4;
        if ( 4 * a4 && (v6 + v47 > _MmUserProbeAddress || v6 + v47 < v47) )
          *(_BYTE *)_MmUserProbeAddress = 0;
        v7 = 0;
        v42 = 0;
        v8 = a4;
        v40 = a4;
        v9 = (_DWORD *)v47;
        v41 = (_DWORD *)v47;
        do
        {
          v7 = (struct _PATHRECORD *)((char *)v7 + *v9);
          v42 = v7;
          v41 = ++v9;
          v40 = --v8;
        }
        while ( v8 );
        if ( (unsigned int)v7 <= 0x1FFFFFFF )
        {
          v10 = 2 * (_DWORD)v7;
          if ( 8 * (_DWORD)v7 && ((unsigned int)&a2[v10] > _MmUserProbeAddress || &a2[v10] < a2) )
            *(_BYTE *)_MmUserProbeAddress = 0;
          v48 = v7;
        }
      }
      ms_exc.registration.TryLevel = -2;
      v11 = v48;
      if ( !v48
        || a4 >= 0x8000000
        || (unsigned int)v48 >= 0x8000000
        || (*((_BYTE *)v51[0] + 172) & 1) != 0
        || (v39->fl & 3) != 0
        || v39->pstyle )
      {
        goto LABEL_83;
      }
      v49 = 0;
      v50 = 0;
      EPATHOBJ::EPATHOBJ((EPATHOBJ *)v36);
      PATH::PATH((PATH *)v55);
      v52 = 0;
      memset(v66, 0, sizeof(v66));
      v12 = 8 * ((_DWORD)v11 + 2 * a4);
      v44 = v12;
      if ( v12 <= 0x64 )
      {
        v52 = v66;
      }
      else
      {
        if ( v12 <= 0x2710000 )
          v52 = (_BYTE *)AllocFreeTmpBuffer(8 * ((_DWORD)v11 + 2 * a4));
        if ( !v52 )
          goto LABEL_31;
      }
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v35, (struct XDCOBJ *)v51, 0);
      if ( (v35[12] & 1) == 0 )
      {
        v31 = XDCOBJ::bFullScreen(v51);
        goto LABEL_78;
      }
      v14 = *((_DWORD *)v51[0] + 7) & 1;
      v49 = (struct _POINTL *)*((_DWORD *)v51[0] + 2 * v14 + 262);
      v50 = *((_DWORD *)v51[0] + 2 * v14 + 263);
      v15 = 1;
      v54 = 1;
      v46 = 1;
      v45 = 0;
      v16 = v53;
      v17 = v38[0];
      if ( (*(_BYTE *)(v38[0] + 56) & 2) != 0 )
      {
        if ( *(_DWORD *)(*((_DWORD *)v51[0] + 255) + 228) == 1 )
        {
LABEL_38:
          v49 = (struct _POINTL *)((char *)v49 + (*(int *)(v17 + 48) >> 4));
          v50 += *(int *)(v17 + 52) >> 4;
LABEL_43:
          v36[0] = v46 != 0 ? 4 : 0;
          ms_exc.registration.TryLevel = 2;
          v18 = bMakePathRecords(v48, v53, a4, v49, v50, (int)&v58, (int)&v57, v33, v34) & v15;
          v54 = v18;
          ms_exc.registration.TryLevel = -2;
          v19 = v61;
          if ( v46 )
          {
            v67 = v58;
            v68 = v59;
            v20 = v60;
            v69 = v60;
            v70 = v61;
            if ( (v58 & 0xF8000000) != 0
              || (v60 & 0xF8000000) != 0
              || (v59 & 0xF8000000) != 0
              || (v61 & 0xF8000000) != 0 )
            {
              v45 = 1;
            }
            v58 *= 16;
            v60 *= 16;
            v59 *= 16;
            v61 *= 16;
          }
          else
          {
            v67 = v58 >> 4;
            v68 = v59 >> 4;
            v20 = (v60 + 15) >> 4;
            v69 = v20;
            v19 = (v61 + 15) >> 4;
            v70 = v19;
            if ( (v20 ^ v60) < 0 || (v19 ^ v61) < 0 )
              v45 = 1;
          }
          if ( v19 == 0x7FFFFFFF || v20 == 0x7FFFFFFF )
          {
            v45 = 1;
          }
          else
          {
            v70 = ++v19;
            v69 = v20 + 1;
          }
          if ( !v18 )
          {
            if ( v52 != v66 )
              FreeTmpBuffer(v52);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v35);
LABEL_31:
            DCOBJ::~DCOBJ((DCOBJ *)v51);
            return 0;
          }
          v56 = v52;
          v63 = 0;
          v62 = 0;
          v36[1] = (char *)v48 - a4;
          v36[2] = v55;
          v21 = v51[0];
          if ( (*((_BYTE *)v51[0] + 24) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate((XDCOBJ *)v51, (struct ECLIPOBJ *)v19, (struct ERECTL *)&v67);
            v21 = v51[0];
          }
          if ( *((struct PEN **)v21 + 24) == gpPenNull )
            goto LABEL_76;
          v44 = *((_DWORD *)v21 + 126);
          if ( !v44 )
            goto LABEL_76;
          v22 = *(_DWORD *)(v44 + 88);
          v23 = *((_DWORD *)v21 + 15);
          v53 = (unsigned int *)((char *)v21 + 1276);
          if ( *((_DWORD *)v21 + 319) == -1 )
          {
            *(_DWORD *)(*((_DWORD *)v21 + 255) + 184) |= 2u;
            v21 = v51[0];
          }
          v43 = *((_DWORD *)v21 + 255);
          v47 = *(_DWORD *)(v43 + 184);
          if ( (((unsigned __int8)v47 | *((_BYTE *)v21 + 236)) & 2) != 0 )
          {
            *(_DWORD *)(v43 + 184) = v47 & 0xFFFFFFFD;
            *((_DWORD *)v51[0] + 59) &= ~2u;
            EBRUSHOBJ::vInitBrush(v53, v51[0], *((_DWORD *)v51[0] + 24), v23, v22, v44, 0);
            v21 = v51[0];
          }
          v24 = ((*(_BYTE *)(*((_DWORD *)v21 + 255) + 232) - 1) & 0xF) + 1;
          v25 = (v24 << 8) | v24;
          v43 = v25;
          v32 = v45;
          v26 = XDCOBJ::prgnEffRao(v51);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v64, v26, (struct ERECTL *)&v67, v32);
          if ( ERECTL::bEmpty((ERECTL *)v65) )
          {
LABEL_76:
            v54 = 1;
LABEL_79:
            if ( v52 != v66 )
              FreeTmpBuffer(v52);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v35);
            goto LABEL_83;
          }
          v28 = (BRUSHOBJ *)v53;
          if ( (*((_BYTE *)v51[0] + 24) & 0xE0) != 0 && (v53[19] & 0x100) == 0 )
          {
            v37[0] = *(_DWORD *)v27;
            v37[1] = *((_DWORD *)v27 + 1);
            v37[2] = *((_DWORD *)v27 + 2);
            v37[3] = *((_DWORD *)v27 + 3);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v51, v27, v37);
            v25 = v43;
            v28 = (BRUSHOBJ *)v53;
          }
          v29 = (_DWORD *)v44;
          v30 = *(_DWORD *)(v44 + 28);
          ++*(_DWORD *)(v44 + 56);
          if ( (v29[18] & 0x20) != 0 )
            v31 = (*(int (__stdcall **)(_DWORD *, _DWORD *, char *, _DWORD, BRUSHOBJ *, _DWORD, LINEATTRS *, MIX))(v30 + 1956))(
                    v29 + 4,
                    v36,
                    &v64,
                    0,
                    v28,
                    0,
                    v39,
                    v25);
          else
            v31 = EngStrokePath((SURFOBJ *)(v29 + 4), (PATHOBJ *)v36, (CLIPOBJ *)&v64, 0, v28, 0, v39, v25);
LABEL_78:
          v54 = v31;
          goto LABEL_79;
        }
        if ( ((*(_BYTE *)(v38[0] + 48) | *(_BYTE *)(v38[0] + 52)) & 0xF) == 0 )
        {
          v17 = v38[0];
          goto LABEL_38;
        }
      }
      v53 = (unsigned int *)&v52[v44 + -8 * (_DWORD)v48];
      ms_exc.registration.TryLevel = 1;
      if ( *(_DWORD *)(*((_DWORD *)v51[0] + 255) + 228) == 2 )
      {
        v46 = 0;
        v54 = EXFORMOBJ::bXform(
                (EXFORMOBJ *)v38,
                (struct _VECTORL *)v16,
                (struct _VECTORFX *)&v52[v44 + -8 * (_DWORD)v48],
                (unsigned int)v48);
        v49 = (struct _POINTL *)(*(_DWORD *)(v38[0] + 48) + 16 * (_DWORD)v49);
        v50 = *(_DWORD *)(v38[0] + 52) + 16 * v50;
        v15 = v54;
      }
      else
      {
        v46 = 1;
        v15 = EXFORMOBJ::bXform((EXFORMOBJ *)v38, (struct _POINTL *)v16, (struct _POINTL *)v53, (unsigned int)v48);
        v54 = v15;
      }
      ms_exc.registration.TryLevel = -2;
      goto LABEL_43;
    }
    v54 = 1;
  }
LABEL_83:
  DCOBJ::~DCOBJ((DCOBJ *)v51);
  return v54;
}
