/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C0066F4C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0065070 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C0066570 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C00669D0 (NtGdiCreateDIBSection.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C01071E0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C012B560 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013548C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C014FC98 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B63E4 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019348 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0064144 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078350 (--1DCOBJ@@QEAA@XZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C0102144 (GreGetDCDpiScaleValue.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C02775E4 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BD5DC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD698 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        int a2,
        void *a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  int v14; // r15d
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r10d
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  void *v28; // rsi
  _QWORD *v29; // r12
  int v30; // ecx
  HDC v31; // r13
  __int64 v32; // rbx
  unsigned int v34; // r13d
  __int64 v35; // rcx
  unsigned int *v36; // rax
  unsigned int *v37; // rsi
  unsigned int v38; // r8d
  unsigned int v39; // eax
  unsigned __int64 v40; // rsi
  void *v41; // rax
  void *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  DYNAMICMODECHANGESHARELOCK *v49; // rcx
  ULONG v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // esi
  __int64 v55; // rbx
  DYNAMICMODECHANGESHARELOCK *v56; // rcx
  int DCDpiScaleValue; // eax
  __int64 v58; // rcx
  int v59; // [rsp+64h] [rbp-104h]
  __int64 v60; // [rsp+70h] [rbp-F8h] BYREF
  char v61; // [rsp+78h] [rbp-F0h]
  int v62; // [rsp+7Ch] [rbp-ECh]
  __int64 v63; // [rsp+80h] [rbp-E8h] BYREF
  int v64; // [rsp+88h] [rbp-E0h]
  char v65[8]; // [rsp+90h] [rbp-D8h] BYREF
  void *Src; // [rsp+98h] [rbp-D0h]
  int v67; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v68; // [rsp+A4h] [rbp-C4h]
  unsigned int v69; // [rsp+A8h] [rbp-C0h]
  _DWORD v70[3]; // [rsp+ACh] [rbp-BCh] BYREF
  int v71; // [rsp+B8h] [rbp-B0h]
  int v72; // [rsp+BCh] [rbp-ACh]
  int v73; // [rsp+C0h] [rbp-A8h]
  unsigned int v74; // [rsp+C4h] [rbp-A4h]
  unsigned int v75; // [rsp+C8h] [rbp-A0h]
  int v76; // [rsp+CCh] [rbp-9Ch]
  unsigned int v77; // [rsp+D0h] [rbp-98h]
  unsigned int v78; // [rsp+D4h] [rbp-94h]
  void *v79; // [rsp+D8h] [rbp-90h]
  _QWORD v80[2]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v81[2]; // [rsp+F0h] [rbp-78h] BYREF
  DC *v82[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v83[2]; // [rsp+110h] [rbp-58h] BYREF
  void *v84; // [rsp+120h] [rbp-48h]
  int v86; // [rsp+178h] [rbp+10h] BYREF
  void *v87; // [rsp+180h] [rbp+18h]

  v87 = a3;
  v86 = a2;
  memset(v70, 0, sizeof(v70));
  v72 = 0;
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_76;
  v15 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_76;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_76;
  if ( !a4 )
    goto LABEL_76;
  v16 = a6;
  if ( a6 < 0x28 )
    goto LABEL_76;
  v17 = *a4;
  v73 = v17;
  v76 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_76;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_76;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_76;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_76;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_76;
  v71 = 0;
  v68 = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    v71 = 1;
  }
  v69 = v19;
  v20 = *((unsigned __int16 *)a4 + 7);
  v67 = v20;
  v21 = a4[4];
  v75 = v21;
  v77 = v21;
  v74 = a4[8];
  v78 = v74;
  Src = (char *)a4 + v17;
  if ( v21 )
  {
    if ( v21 == 3 )
    {
      if ( a6 < 0x34 || a5 )
        goto LABEL_76;
      Src = a4 + 10;
      v25 = a4[10];
      v27 = a4[11];
      v26 = a4[12];
      v23 = 0;
      v24 = 512;
      if ( v20 == 16 )
      {
        v67 = 4;
      }
      else
      {
        if ( v20 != 32 )
          goto LABEL_76;
        v67 = 6;
      }
      goto LABEL_27;
    }
    if ( v21 != 10 )
      goto LABEL_76;
    DCOBJ::DCOBJ((DCOBJ *)v82, a1);
    if ( !v82[0] || !(unsigned int)DC::bIsCMYKColor(v82[0]) )
      goto LABEL_121;
    switch ( v67 )
    {
      case 1:
        v67 = 1;
        v23 = 2;
        break;
      case 4:
        v67 = 2;
        v23 = 16;
        break;
      case 8:
        v67 = 3;
        v23 = 256;
        break;
      case 32:
        v67 = 6;
        v23 = 0;
        v24 = 512;
        v15 = 16;
LABEL_92:
        DCOBJ::~DCOBJ((DCOBJ *)v82);
        goto LABEL_69;
      default:
LABEL_121:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v82);
        return 0LL;
    }
    v15 = 1;
    v24 = 1024;
    goto LABEL_92;
  }
  switch ( v20 )
  {
    case 1:
      v67 = 1;
      v23 = 2;
LABEL_68:
      v15 = 1;
      v24 = 1024;
LABEL_69:
      v25 = 0;
      goto LABEL_26;
    case 4:
      v67 = 2;
      v23 = 16;
      goto LABEL_68;
    case 8:
      v67 = 3;
      v23 = 256;
      goto LABEL_68;
  }
  v22 = 0;
  if ( a5 != 1 )
    v22 = a5;
  v14 = v22;
  v23 = 0;
  v24 = 512;
  if ( v20 == 24 )
  {
    v67 = 5;
    goto LABEL_25;
  }
  if ( v20 != 16 )
  {
    if ( v20 == 32 )
    {
      v67 = 6;
LABEL_25:
      v15 = 8;
      a5 = v22;
      v25 = 0;
LABEL_26:
      v26 = 0;
      v27 = 0;
      goto LABEL_27;
    }
LABEL_76:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v67 = 4;
  v25 = 31744;
  v26 = 31;
  v27 = 992;
  a5 = v14;
LABEL_27:
  v64 = 0;
  v63 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v63, v15, v23, 0LL, v25, v27, v26, v24, 1) )
  {
LABEL_96:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v63);
    return 0LL;
  }
  *(_QWORD *)&v70[1] = *(_QWORD *)v63;
  v60 = 0LL;
  v61 = 0;
  v62 = 0;
  v28 = 0LL;
  v79 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v63 + 24) |= 0x8000u;
    v28 = v87;
    v79 = a8;
    if ( !v87 )
    {
LABEL_95:
      SURFMEM::~SURFMEM((SURFMEM *)&v60);
      goto LABEL_96;
    }
    v87 = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v83, a1);
    if ( v83[0] && (*(_DWORD *)(*(_QWORD *)(v83[0] + 48LL) + 40LL) & 0x8000) != 0 )
      v71 |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v83);
  }
  v59 = a11 & 8;
  v29 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v60,
          (struct _DEVBITMAPINFO *)&v67,
          v28,
          v79,
          a9,
          a10,
          a12,
          0,
          1,
          v59 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v60 + 100) && *(_QWORD *)(v60 + 192) && *(_DWORD *)(v60 + 64) != a7 )
  {
    goto LABEL_95;
  }
  if ( v87 )
  {
    v39 = *(_DWORD *)(v60 + 64);
    if ( v39 > a7 )
      goto LABEL_105;
    LODWORD(v79) = *(_DWORD *)(v60 + 64);
    v84 = *(void **)(v60 + 72);
    memmove(v84, v87, v39);
    v30 = v73;
  }
  else
  {
    v30 = v73;
  }
  if ( v74 && v74 < v23 )
    v23 = v74;
  if ( !v23 )
    goto LABEL_39;
  v34 = v16 - v30;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_39;
    v40 = 2LL * v23;
    if ( v40 <= 0xFFFFFFFF && v34 >= v40 )
    {
      v31 = a1;
      DCOBJ::DCOBJ((DCOBJ *)v80, a1);
      if ( v80[0] )
      {
        v41 = (void *)AllocFreeTmpBuffer(2 * v23);
        v42 = v41;
        if ( v41 )
        {
          memmove(v41, Src, 2LL * v23);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v86, v43, v44, v45);
          v47 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v80) + 16);
          if ( !v47 )
            v47 = *(_QWORD *)(v46 + 1808);
          XEPALOBJ::vGetEntriesFrom(&v63, *(_QWORD *)(v48 + 88), v47, v42, v23);
          FreeTmpBuffer(v42);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v49);
          DCOBJ::~DCOBJ((DCOBJ *)v80);
          goto LABEL_40;
        }
        EngSetLastError(0xEu);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v80);
      goto LABEL_95;
    }
    goto LABEL_105;
  }
  if ( 4 * (unsigned __int64)v23 > 0xFFFFFFFF || (v35 = 4 * v23, v34 < (unsigned int)v35) )
  {
LABEL_105:
    v50 = 87;
LABEL_107:
    EngSetLastError(v50);
    goto LABEL_95;
  }
  v36 = (unsigned int *)AllocFreeTmpBuffer(v35);
  v37 = v36;
  if ( !v36 )
  {
    v50 = 14;
    goto LABEL_107;
  }
  memmove(v36, Src, 4LL * v23);
  if ( v75 - 10 <= 2 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v63, v37, v38, v23);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v63, (struct tagRGBQUAD *)v37, 0, v23);
  FreeTmpBuffer(v37);
  if ( (a11 & 4) != 0 && v67 == 3 )
  {
    v31 = a1;
    DCOBJ::DCOBJ((DCOBJ *)v81, a1);
    v54 = 0;
    if ( v81[0] )
    {
      v55 = *(_QWORD *)(v81[0] + 48LL);
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v65, v51, v52, v53);
      if ( *(_DWORD *)(v55 + 2108) == 3 && (*(_DWORD *)(v55 + 2172) & 0x100) != 0 && (*(_DWORD *)(v55 + 40) & 1) != 0 )
      {
        v54 = 1;
        XEPALOBJ::apalColorSet((XEPALOBJ *)&v63, *(struct PALETTE **)(v55 + 1808));
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v56);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v81);
    if ( v54 )
      goto LABEL_40;
    goto LABEL_95;
  }
LABEL_39:
  v31 = a1;
LABEL_40:
  if ( v29 )
  {
    if ( v59 )
      *v29 = 0LL;
    else
      *v29 = *(_QWORD *)(v60 + 72);
  }
  *(_DWORD *)(v60 + 112) |= 0x4000000u;
  v61 |= 1u;
  v64 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v31);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(Src) = v68 / DCDpiScaleValue;
      HIDWORD(Src) = v69 / DCDpiScaleValue;
      v58 = v60;
      *(float *)(v60 + 660) = (float)DCDpiScaleValue;
      *(float *)(v58 + 664) = (float)DCDpiScaleValue;
      *(_DWORD *)(v58 + 116) |= 0x800u;
      *(_QWORD *)(v58 + 668) = Src;
    }
  }
  v32 = *(_QWORD *)(v60 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v63);
  return v32;
}
