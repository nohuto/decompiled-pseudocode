/*
 * XREFs of ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820 (-bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C (-bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ?bParityViolatingXform@@YGHPAVDCOBJ@@@Z @ 0xAEC38 (-bParityViolatingXform@@YGHPAVDCOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge bGetNtoD_Win31@<eax>(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _FD_XFORM *a3,
        struct tagLOGFONTW *a4,
        struct IFIOBJ *a5,
        struct DCOBJ *a6,
        struct DCOBJ *a7,
        struct _POINTL *const a8,
        int a9)
{
  int v9; // ebx
  int v11; // ecx
  int *v12; // esi
  LONG lfHeight; // ecx
  int v14; // eax
  int v15; // esi
  struct tagLOGFONTW *v16; // ebx
  struct MATRIX *v17; // esi
  char CurrentThreadDpiAwarenessContext; // al
  int v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // esi
  int v26; // edx
  int v27; // eax
  int *v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // [esp-4h] [ebp-130h]
  unsigned int v38; // [esp+0h] [ebp-12Ch]
  struct DCOBJ *v39; // [esp+0h] [ebp-12Ch]
  int v40; // [esp+4h] [ebp-128h]
  _DWORD v41[3]; // [esp+10h] [ebp-11Ch] BYREF
  _DWORD *v42; // [esp+1Ch] [ebp-110h]
  int *v43; // [esp+20h] [ebp-10Ch]
  struct tagLOGFONTW *v44; // [esp+24h] [ebp-108h]
  struct MATRIX *v45; // [esp+28h] [ebp-104h] BYREF
  int v46; // [esp+2Ch] [ebp-100h] BYREF
  int v47; // [esp+30h] [ebp-FCh]
  _BYTE v48[60]; // [esp+34h] [ebp-F8h] BYREF
  int v49[15]; // [esp+70h] [ebp-BCh] BYREF
  _BYTE v50[60]; // [esp+ACh] [ebp-80h] BYREF
  _DWORD v51[15]; // [esp+E8h] [ebp-44h] BYREF

  v45 = (struct MATRIX *)a3;
  v9 = 0;
  v44 = a4;
  v43 = a1;
  v42 = a2;
  memset(v49, 0, sizeof(v49));
  memset(v51, 0, sizeof(v51));
  if ( *(_DWORD *)a6 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)v45 + 48);
    if ( (v11 & 0x3000010) == 0 )
    {
      v26 = 0;
      if ( _gbDBCSCodePage && (((unsigned int)&loc_1FFFFC + 4) & v11) != 0 )
      {
        v37 = v43[2];
        if ( (*(_BYTE *)(*(_DWORD *)(v44->lfHeight + 1020) + 340) & 0x40) != 0 )
          v26 = (3600 - lNormAngle(v37)) / 900 % 4;
        else
          v26 = lNormAngle(v37) / 900;
      }
      if ( v26 )
      {
        v29 = v26 - 1;
        if ( !v29 )
        {
          v33 = *(_DWORD *)a6;
          *a2 = 0;
          a2[3] = 0;
          a2[2] = (&galFloatNeg)[v33];
          a2[1] = (&galFloatNeg)[*((_DWORD *)a6 + 1)];
          return 1;
        }
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            v31 = *((_DWORD *)a6 + 1);
            *a2 = 0;
            a2[3] = 0;
            a2[1] = (&galFloat)[v31];
            a2[2] = (&galFloat)[*(_DWORD *)a6];
          }
          return 1;
        }
        v32 = *(_DWORD *)a6;
        a2[1] = 0;
        a2[2] = 0;
        *a2 = (&galFloatNeg)[v32];
        v28 = (&galFloat)[*((_DWORD *)a6 + 1)];
      }
      else
      {
        v27 = *(_DWORD *)a6;
        a2[1] = 0;
        a2[2] = 0;
        *a2 = (&galFloat)[v27];
        v28 = (&galFloatNeg)[*((_DWORD *)a6 + 1)];
      }
      a2[3] = v28;
      return 1;
    }
  }
  v12 = v43;
  if ( bGetNtoW_Win31(v43, v49, v45, v44, a5, a7, v38, v40) )
  {
    lfHeight = v44->lfHeight;
    v41[0] = v51;
    v41[2] = 0;
    v47 = 4;
    if ( (*(_DWORD *)(*(_DWORD *)(lfHeight + 1020) + 340) & 0x802) == 0x802 || ((unsigned __int8)a5 & 2) != 0 )
    {
      qmemcpy(v51, v49, sizeof(v51));
      v12 = v43;
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)v41, (struct MATRIX *)v49, (struct MATRIX *)(lfHeight + 240), 0) )
        return v9;
      if ( v51[0] )
        v51[1] -= v47;
      if ( v51[2] )
        v51[3] -= v47;
      if ( v51[4] )
        v51[5] -= v47;
      if ( v51[6] )
        v51[7] -= v47;
    }
    v14 = *(_DWORD *)(*(_DWORD *)v45 + 48);
    if ( (v14 & 4) == 0 )
    {
      v15 = v12[2];
      if ( (((unsigned int)&loc_1FFFFC + 4) & v14) != 0 )
      {
        v34 = lNormAngle(v15);
        v15 = 900 * (v34 / 900 % v47);
      }
      if ( v15 && (((unsigned __int8)a5 & 1) == 0 || _gbDBCSCodePage) )
      {
        if ( bParityViolatingXform(v39) )
          v15 = -v15;
        ltoef_c(v15, &v46);
        EFLOATEXT::operator/=(10);
        memset(v50, 0, sizeof(v50));
        *(_QWORD *)v50 = efCos(v46, v47);
        *(_QWORD *)&v50[24] = *(_QWORD *)v50;
        *(_QWORD *)&v50[8] = efSin(v46, v47);
        *(_QWORD *)&v50[16] = *(_QWORD *)&v50[8];
        EFLOAT::vNegate((EFLOAT *)&v50[8]);
        memset(&v50[32], 0, 16);
        qmemcpy(v48, v51, sizeof(v48));
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)v41, (struct MATRIX *)v48, (struct MATRIX *)v50, 0) )
          return v9;
      }
      v16 = v44;
      v45 = *(struct MATRIX **)(v44->lfHeight + 36);
      v17 = v45;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v19 = 96;
      if ( (*((_BYTE *)v17 + 24) & 1) == 0 || (v20 = CurrentThreadDpiAwarenessContext & 0xF, v20 == 2) || v20 == 1 )
        v47 = *((_DWORD *)v17 + 365);
      else
        v47 = 96;
      v21 = W32GetCurrentThreadDpiAwarenessContext();
      if ( (*((_BYTE *)v17 + 24) & 1) == 0 || (v22 = v21 & 0xF, v22 == 2) || v22 == 1 )
        v19 = *((_DWORD *)v17 + 366);
      if ( v47 != v19 )
      {
        v35 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v45);
        ltoef_c(v35, &v46);
        v36 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v45);
        EFLOATEXT::operator/=(v36);
        qmemcpy(v50, (const void *)(v16->lfHeight + 240), sizeof(v50));
        if ( *(_DWORD *)&v50[8]
          || __PAIR64__(*(unsigned int *)&v50[12], 0) != *(unsigned int *)&v50[16]
          || *(_DWORD *)&v50[20] )
        {
          mulff3_c(v51, v51, &v46);
          divff3_c(&v51[6], &v51[6], &v46);
        }
        else
        {
          divff3_c(&v51[2], &v51[2], &v46);
          mulff3_c(&v51[4], &v51[4], &v46);
        }
      }
    }
    v23 = eftof_c(v51);
    v24 = v42;
    *v42 = v23;
    v24[1] = eftof_c(&v51[2]);
    v24[2] = eftof_c(&v51[4]);
    v24[3] = eftof_c(&v51[6]);
    return 1;
  }
  return 0;
}
