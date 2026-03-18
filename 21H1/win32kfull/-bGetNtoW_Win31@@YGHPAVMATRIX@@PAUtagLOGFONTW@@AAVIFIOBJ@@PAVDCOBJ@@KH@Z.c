/*
 * XREFs of ?bGetNtoW_Win31@@YGHPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KH@Z @ 0x6769C
 * Callers:
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 * Callees:
 *     ?vNegate@EFLOAT@@QAEXXZ @ 0x22DAE (-vNegate@EFLOAT@@QAEXXZ.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ??_0EFLOATEXT@@QAEXJ@Z @ 0x8938C (--_0EFLOATEXT@@QAEXJ@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QAEKXZ @ 0x893B2 (-ulLogPixelsY@PDEVOBJ@@QAEKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QAEKXZ @ 0x899BE (-ulLogPixelsX@PDEVOBJ@@QAEKXZ.c)
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bIs1@EFLOAT@@QBEHXZ @ 0x247A19 (-bIs1@EFLOAT@@QBEHXZ.c)
 */

int __userpurge bGetNtoW_Win31@<eax>(
        int *a1@<edx>,
        int *a2@<ecx>,
        struct MATRIX *a3,
        struct tagLOGFONTW *a4,
        struct IFIOBJ *a5,
        struct DCOBJ *a6,
        unsigned int a7,
        int a8)
{
  int v8; // ebx
  int *v9; // edi
  _DWORD *lfHeight; // eax
  int v12; // edx
  int DefaultWorldHeight; // esi
  int v14; // ecx
  EFLOAT *v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  char CurrentThreadDpiAwarenessContext; // al
  int v21; // eax
  char v22; // al
  int v23; // eax
  int v24; // eax
  int v25; // esi
  struct MATRIX *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v33; // eax
  _DWORD *v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // esi
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  int v45; // [esp-4h] [ebp-10Ch]
  struct DCOBJ *v46; // [esp+0h] [ebp-108h]
  _DWORD v47[3]; // [esp+Ch] [ebp-FCh] BYREF
  _DWORD v48[2]; // [esp+18h] [ebp-F0h] BYREF
  int *v49; // [esp+20h] [ebp-E8h]
  int v50; // [esp+24h] [ebp-E4h] BYREF
  int v51; // [esp+28h] [ebp-E0h]
  _DWORD v52[2]; // [esp+2Ch] [ebp-DCh] BYREF
  int v53; // [esp+34h] [ebp-D4h] BYREF
  int v54; // [esp+38h] [ebp-D0h]
  int v55; // [esp+3Ch] [ebp-CCh]
  int v56; // [esp+40h] [ebp-C8h] BYREF
  int v57; // [esp+44h] [ebp-C4h]
  _DWORD v58[2]; // [esp+48h] [ebp-C0h] BYREF
  BOOL v59; // [esp+50h] [ebp-B8h] BYREF
  int *v60; // [esp+54h] [ebp-B4h]
  int v61; // [esp+58h] [ebp-B0h]
  int v62; // [esp+5Ch] [ebp-ACh] BYREF
  int v63; // [esp+60h] [ebp-A8h]
  int v64; // [esp+64h] [ebp-A4h] BYREF
  struct MATRIX *v65; // [esp+68h] [ebp-A0h]
  int v66; // [esp+6Ch] [ebp-9Ch] BYREF
  int v67; // [esp+70h] [ebp-98h]
  int v68; // [esp+74h] [ebp-94h] BYREF
  int v69; // [esp+78h] [ebp-90h]
  int v70; // [esp+7Ch] [ebp-8Ch] BYREF
  int v71; // [esp+80h] [ebp-88h]
  int v72; // [esp+84h] [ebp-84h] BYREF
  bool v73; // [esp+8Bh] [ebp-7Dh]
  _BYTE v74[60]; // [esp+8Ch] [ebp-7Ch] BYREF
  _BYTE v75[60]; // [esp+C8h] [ebp-40h] BYREF

  v8 = 0;
  v65 = a3;
  v9 = a2;
  v52[0] = 0;
  v52[1] = 0;
  v48[0] = 0;
  v48[1] = 0;
  lfHeight = (_DWORD *)a4->lfHeight;
  v66 = 0;
  v67 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v54 = 0;
  v60 = a1;
  v49 = a2;
  v72 = (int)a4;
  if ( (lfHeight[117] || lfHeight[118]) && (lfHeight[119] || lfHeight[120]) )
  {
    v12 = 1;
    v55 = 1;
  }
  else
  {
    v12 = 0;
    v55 = 0;
  }
  v73 = ((unsigned __int8)a5 & 2) == 0 && (v12 || (*(_DWORD *)(lfHeight[255] + 340) & 0x1000) == 0);
  DefaultWorldHeight = *a1;
  v61 = 1;
  if ( !DefaultWorldHeight )
    DefaultWorldHeight = lGetDefaultWorldHeight(v46);
  if ( gbShellFontCompatible && !__wcsicmp((const wchar_t *)v60 + 14, L"MS Shell Dlg") && !a6 )
  {
    if ( DefaultWorldHeight <= 0 )
    {
      if ( (unsigned int)(DefaultWorldHeight + 12) <= 3 )
      {
        DefaultWorldHeight = -11;
        goto LABEL_13;
      }
      if ( DefaultWorldHeight <= -16 || DefaultWorldHeight > -13 )
        goto LABEL_12;
      v45 = -13;
      goto LABEL_58;
    }
    if ( DefaultWorldHeight >= 12 )
    {
      if ( DefaultWorldHeight <= 15 )
      {
        DefaultWorldHeight = 14;
        goto LABEL_40;
      }
      if ( DefaultWorldHeight <= 19 )
      {
        v45 = 16;
LABEL_58:
        DefaultWorldHeight = v45;
      }
    }
  }
LABEL_12:
  if ( DefaultWorldHeight <= 0 )
  {
LABEL_13:
    ltoef_c(-DefaultWorldHeight, v52);
    v14 = *(__int16 *)(*(_DWORD *)v65 + 56);
    goto LABEL_14;
  }
LABEL_40:
  ltoef_c(DefaultWorldHeight, v52);
  v14 = *(__int16 *)(*(_DWORD *)v65 + 60) + *(__int16 *)(*(_DWORD *)v65 + 62);
LABEL_14:
  ltoef_c(v14, v48);
  divff3_c(&v53, v52, v48);
  v15 = (EFLOAT *)(v9 + 6);
  v16 = v53;
  v17 = v54;
  v9[6] = v53;
  v9[7] = v17;
  v56 = v16;
  v57 = v17;
  if ( v73 )
  {
    v34 = *(_DWORD **)v72;
    if ( v55 )
    {
      v62 = v34[117];
      v63 = v34[118];
      v68 = v34[119];
      v69 = v34[120];
    }
    else
    {
      v35 = v34[255];
      v36 = *(_DWORD *)(v35 + 340);
      if ( (v36 & 0x1000) == 0 )
      {
        if ( (v36 & 2) != 0 )
        {
          v62 = v34[60];
          v39 = v34[61];
          v63 = v39;
          v40 = v34[66];
          v68 = v40;
          v41 = v34[67];
          v69 = v41;
          if ( v62 )
            v63 = v39 - 4;
          v15 = (EFLOAT *)(v9 + 6);
          if ( v40 )
            v69 = v41 - 4;
        }
        else
        {
          ltoef_c(*(_DWORD *)(v35 + 332), &v62);
          ltoef_c(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v72 + 1020) + 316), &v70);
          divff3_c(&v62, &v62, &v70);
          ltoef_c(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v72 + 1020) + 336), &v68);
          ltoef_c(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v72 + 1020) + 320), &v70);
          divff3_c(&v68, &v68, &v70);
        }
      }
    }
    v61 = EFLOAT::bIs1((EFLOAT *)&v62);
    v59 = v37 < 0;
    if ( !EFLOAT::bIs1((EFLOAT *)&v68) )
      mulff3_c(&v56, &v56, v38);
    if ( v56 < 0 )
      EFLOAT::vNegate((EFLOAT *)&v56);
    if ( v59 )
      EFLOAT::vNegate(v15);
  }
  v18 = *(_DWORD *)(*(_DWORD *)v72 + 36);
  v59 = v18;
  if ( v18 )
  {
    if ( !v60[1] )
      goto LABEL_17;
    v70 = 0;
    v71 = 0;
    ltoef_c(*(__int16 *)(*(_DWORD *)v65 + 76), &v70);
    v50 = v70;
    v51 = v71;
    mulff3_c(&v70, &v70, &v56);
    v64 = 0;
    v58[0] = 0;
    v58[1] = 0;
    v33 = v60[1];
    if ( v33 < 0 )
      v33 = -v33;
    v72 = v33;
    ltoef_c(v33, v58);
    v69 = 1;
    if ( v73 )
    {
      if ( !v61 )
      {
        mulff3_c(v58, v58, &v62);
        v69 = eftol_c(v58, &v72, 1);
      }
      if ( v58[0] < 0 )
        EFLOAT::vNegate((EFLOAT *)v58);
      if ( v72 < 0 )
        v72 = -v72;
    }
    if ( eftol_c(&v70, &v64, 1) && v64 > 0 && v69 && v72 / 256 < v64 || (*(_BYTE *)(*(_DWORD *)v65 + 48) & 4) != 0 )
    {
      divff3_c(&v66, v58, &v50);
    }
    else
    {
LABEL_17:
      v19 = *(_DWORD *)v65;
      if ( (*(_BYTE *)(*(_DWORD *)v65 + 48) & 4) != 0 )
      {
        v66 = v53;
        v67 = v54;
        if ( !v61 )
        {
          mulff3_c(&v66, &v66, &v62);
          if ( v66 < 0 )
            EFLOAT::vNegate((EFLOAT *)&v66);
        }
        v19 = *(_DWORD *)v65;
      }
      else
      {
        v66 = v56;
        v67 = v57;
      }
      v64 = *(_DWORD *)(v19 + 128);
      v72 = *(_DWORD *)(v19 + 132);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( (*(_BYTE *)(v18 + 24) & 1) == 0 || (v21 = CurrentThreadDpiAwarenessContext & 0xF, v21 == 2) || v21 == 1 )
        v69 = *(_DWORD *)(v18 + 1460);
      else
        v69 = 96;
      v22 = W32GetCurrentThreadDpiAwarenessContext();
      if ( (*(_BYTE *)(v18 + 24) & 1) == 0 || (v23 = v22 & 0xF, v23 == 2) || v23 == 1 )
        v24 = *(_DWORD *)(v18 + 1464);
      else
        v24 = 96;
      if ( v69 == v24 || v55 )
      {
        v25 = v64;
      }
      else
      {
        v42 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v59);
        v72 *= v42;
        v43 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v59);
        v25 = v43 * v64;
      }
      if ( v25 != v72 )
      {
        v70 = 0;
        v71 = 0;
        ltoef_c(v72, &v70);
        mulff3_c(&v66, &v66, &v70);
        ltoef_c(v25, &v70);
        divff3_c(&v66, &v66, &v70);
      }
    }
    if ( v61 )
    {
      *v9 = v66;
      v9[1] = v67;
    }
    else
    {
      divff3_c(v9, &v66, &v62);
    }
    v26 = v65;
    v9[8] = 0;
    v9[9] = 0;
    v9[10] = 0;
    v9[11] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v27 = *(_DWORD *)v26;
    v47[0] = v9;
    v47[2] = 0;
    if ( (*(_BYTE *)(v27 + 48) & 4) != 0 )
    {
      v44 = v60[3];
      if ( v44 )
      {
        ltoef_c(v44, &v70);
        EFLOATEXT::operator/=(10);
        memset(v75, 0, sizeof(v75));
        *(_QWORD *)v75 = efCos(v70, v71);
        *(_QWORD *)&v75[24] = *(_QWORD *)v75;
        *(_QWORD *)&v75[8] = efSin(v70, v71);
        *(_QWORD *)&v75[16] = *(_QWORD *)&v75[8];
        EFLOAT::vNegate((EFLOAT *)&v75[16]);
        memset(&v75[32], 0, 16);
        qmemcpy(v74, v9, sizeof(v74));
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)v47, (struct MATRIX *)v74, (struct MATRIX *)v75, 0) )
          return v8;
        v9 = v49;
      }
    }
    v28 = v9[2];
    if ( v28 == 0x80000000 )
    {
      ++v9[3];
      v29 = 0x40000000;
    }
    else
    {
      v29 = -v28;
    }
    v9[2] = v29;
    v30 = v9[6];
    if ( v30 == 0x80000000 )
    {
      ++v9[7];
      v31 = 0x40000000;
    }
    else
    {
      v31 = -v30;
    }
    v9[6] = v31;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v47, 8u);
    return 1;
  }
  return v8;
}
