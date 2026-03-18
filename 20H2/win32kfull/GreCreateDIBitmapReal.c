/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C00961AC
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00937E0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00957D0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0095C30 (NtGdiCreateDIBSection.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0107390 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C012D450 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01373DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C0152498 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B4E64 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0092534 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0099080 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C00FE8B4 (GreGetDCDpiScaleValue.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0102BAC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ @ 0x1C015EA14 (-Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0276074 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BC07C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BC138 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        int a2,
        void *a3,
        __int64 a4,
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
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  void *v27; // rsi
  _QWORD *v28; // r12
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // r13d
  unsigned __int64 v32; // rsi
  void *v33; // rax
  void *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  DYNAMICMODECHANGESHARELOCK *v38; // rcx
  HDC v39; // r15
  ULONG v40; // ecx
  __int64 v41; // rcx
  unsigned int *v42; // rax
  unsigned int *v43; // rsi
  unsigned int v44; // r8d
  int v45; // esi
  __int64 v46; // rbx
  DYNAMICMODECHANGESHARELOCK *v47; // rcx
  int DCDpiScaleValue; // eax
  __int64 v49; // rcx
  __int64 v50; // rbx
  int v52; // [rsp+64h] [rbp-104h]
  __int64 v53; // [rsp+70h] [rbp-F8h] BYREF
  char v54; // [rsp+78h] [rbp-F0h]
  int v55; // [rsp+7Ch] [rbp-ECh]
  __int64 v56; // [rsp+80h] [rbp-E8h] BYREF
  int v57; // [rsp+88h] [rbp-E0h]
  char v58[4]; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v59; // [rsp+94h] [rbp-D4h]
  void *v60; // [rsp+98h] [rbp-D0h]
  int v61; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v62; // [rsp+A4h] [rbp-C4h]
  unsigned int v63; // [rsp+A8h] [rbp-C0h]
  _DWORD v64[3]; // [rsp+ACh] [rbp-BCh] BYREF
  int v65; // [rsp+B8h] [rbp-B0h]
  int v66; // [rsp+BCh] [rbp-ACh]
  unsigned int v67; // [rsp+C0h] [rbp-A8h]
  int v68; // [rsp+C4h] [rbp-A4h]
  unsigned int v69; // [rsp+C8h] [rbp-A0h]
  int v70; // [rsp+CCh] [rbp-9Ch]
  unsigned int v71; // [rsp+D0h] [rbp-98h]
  void *v72; // [rsp+D8h] [rbp-90h]
  _QWORD v73[2]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v74[2]; // [rsp+F0h] [rbp-78h] BYREF
  DC *v75[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v76[2]; // [rsp+110h] [rbp-58h] BYREF
  void *v77; // [rsp+120h] [rbp-48h]
  int v79; // [rsp+178h] [rbp+10h] BYREF
  void *Src; // [rsp+180h] [rbp+18h]

  Src = a3;
  v79 = a2;
  memset(v64, 0, sizeof(v64));
  v66 = 0;
  v14 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_123;
  v15 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_123;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_123;
  if ( !a4 )
    goto LABEL_123;
  v16 = a6;
  if ( a6 < 0x28 )
    goto LABEL_123;
  v17 = *(_DWORD *)a4;
  v59 = v17;
  v69 = v17;
  if ( a6 < v17
    || v17 < 0x28
    || (unsigned int)(*(_DWORD *)(a4 + 16) - 4) <= 1
    || *(int *)(a4 + 4) <= 0
    || !*(_DWORD *)(a4 + 8) )
  {
    goto LABEL_123;
  }
  v65 = (unsigned int)Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled() != 0 ? 0x4000000 : 0;
  v62 = *(_DWORD *)(a4 + 4);
  v18 = *(_DWORD *)(a4 + 8);
  if ( v18 >= 0 )
  {
    v63 = *(_DWORD *)(a4 + 8);
  }
  else
  {
    v63 = -v18;
    if ( (unsigned int)Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled() )
      v65 |= 1u;
    else
      v65 = 1;
  }
  v19 = *(unsigned __int16 *)(a4 + 14);
  v61 = v19;
  v20 = *(_DWORD *)(a4 + 16);
  v68 = v20;
  v70 = v20;
  v67 = *(_DWORD *)(a4 + 32);
  v71 = v67;
  v60 = (void *)(a4 + v59);
  if ( v20 )
  {
    if ( v20 == 3 )
    {
      if ( v16 >= 0x34 && !v14 )
      {
        v60 = (void *)(a4 + 40);
        v24 = *(_DWORD *)(a4 + 40);
        v26 = *(_DWORD *)(a4 + 44);
        v25 = *(_DWORD *)(a4 + 48);
        v22 = 0;
        v23 = 512;
        if ( v19 == 16 )
        {
          v61 = 4;
          goto LABEL_58;
        }
        if ( v19 == 32 )
        {
          v61 = 6;
          goto LABEL_58;
        }
      }
      goto LABEL_123;
    }
    if ( v20 != 10 )
      goto LABEL_123;
    DCOBJ::DCOBJ((DCOBJ *)v75, a1);
    if ( !v75[0] || !(unsigned int)DC::bIsCMYKColor(v75[0]) )
      goto LABEL_122;
    switch ( v61 )
    {
      case 1:
        v61 = 1;
        v22 = 2;
        break;
      case 4:
        v61 = 2;
        v22 = 16;
        break;
      case 8:
        v61 = 3;
        v22 = 256;
        break;
      case 32:
        v61 = 6;
        v22 = 0;
        v23 = 512;
        v15 = 16;
LABEL_55:
        DCOBJ::~DCOBJ((DCOBJ *)v75);
        goto LABEL_56;
      default:
LABEL_122:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v75);
        return 0LL;
    }
    v15 = 1;
    v23 = 1024;
    goto LABEL_55;
  }
  switch ( v19 )
  {
    case 1:
      v61 = 1;
      v22 = 2;
      goto LABEL_33;
    case 4:
      v61 = 2;
      v22 = 16;
      goto LABEL_33;
    case 8:
      v61 = 3;
      v22 = 256;
LABEL_33:
      v15 = 1;
      v23 = 1024;
LABEL_56:
      v24 = 0;
      goto LABEL_57;
  }
  v21 = 0;
  if ( v14 != 1 )
    v21 = v14;
  v14 = v21;
  v22 = 0;
  v23 = 512;
  if ( v19 == 16 )
  {
    v61 = 4;
    v24 = 31744;
    v25 = 31;
    v26 = 992;
    a5 = v14;
    goto LABEL_58;
  }
  if ( v19 == 24 )
  {
    v61 = 5;
    goto LABEL_29;
  }
  if ( v19 != 32 )
  {
LABEL_123:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v61 = 6;
LABEL_29:
  v15 = 8;
  a5 = v21;
  v24 = 0;
LABEL_57:
  v25 = 0;
  v26 = 0;
LABEL_58:
  v57 = 0;
  v56 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v56, v15, v22, 0LL, v24, v26, v25, v23, 1) )
  {
LABEL_59:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v56);
    return 0LL;
  }
  *(_QWORD *)&v64[1] = *(_QWORD *)v56;
  v53 = 0LL;
  v54 = 0;
  v55 = 0;
  v27 = 0LL;
  v72 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v56 + 24) |= 0x8000u;
    v27 = Src;
    v72 = a8;
    if ( !Src )
    {
LABEL_86:
      SURFMEM::~SURFMEM((SURFMEM *)&v53);
      goto LABEL_59;
    }
    Src = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v76, a1);
    if ( v76[0] && (*(_DWORD *)(*(_QWORD *)(v76[0] + 48LL) + 40LL) & 0x8000) != 0 )
      v65 |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v76);
  }
  v52 = a11 & 8;
  v28 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v53,
          (struct _DEVBITMAPINFO *)&v61,
          v27,
          v72,
          a9,
          a10,
          a12,
          0,
          1,
          v52 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v53 + 100) && *(_QWORD *)(v53 + 192) && *(_DWORD *)(v53 + 64) != a7 )
  {
    goto LABEL_86;
  }
  if ( Src )
  {
    v29 = *(_DWORD *)(v53 + 64);
    if ( v29 > a7 )
      goto LABEL_96;
    LODWORD(v72) = *(_DWORD *)(v53 + 64);
    v77 = *(void **)(v53 + 72);
    memmove(v77, Src, v29);
    v30 = v59;
  }
  else
  {
    v30 = v59;
  }
  if ( v67 && v67 < v22 )
    v22 = v67;
  if ( !v22 )
    goto LABEL_92;
  v31 = v16 - v30;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v32 = 2LL * v22;
      if ( v32 <= 0xFFFFFFFF && v31 >= v32 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v73, a1);
        if ( !v73[0] )
        {
LABEL_85:
          DCOBJ::~DCOBJ((DCOBJ *)v73);
          goto LABEL_86;
        }
        v33 = (void *)AllocFreeTmpBuffer(2 * v22);
        v34 = v33;
        if ( !v33 )
        {
          EngSetLastError(0xEu);
          goto LABEL_85;
        }
        memmove(v33, v60, 2LL * v22);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v79);
        v36 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v73) + 16);
        if ( !v36 )
          v36 = *(_QWORD *)(v35 + 1808);
        XEPALOBJ::vGetEntriesFrom(&v56, *(_QWORD *)(v37 + 88), v36, v34, v22);
        FreeTmpBuffer(v34);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v38);
        DCOBJ::~DCOBJ((DCOBJ *)v73);
        goto LABEL_92;
      }
      goto LABEL_96;
    }
LABEL_92:
    v39 = a1;
    goto LABEL_93;
  }
  if ( 4 * (unsigned __int64)v22 > 0xFFFFFFFF || (v41 = 4 * v22, v31 < (unsigned int)v41) )
  {
LABEL_96:
    v40 = 87;
LABEL_97:
    EngSetLastError(v40);
    goto LABEL_86;
  }
  v42 = (unsigned int *)AllocFreeTmpBuffer(v41);
  v43 = v42;
  if ( !v42 )
  {
    v40 = 14;
    goto LABEL_97;
  }
  memmove(v42, v60, 4LL * v22);
  if ( (unsigned int)(v68 - 10) <= 2 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v56, v43, v44, v22);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v56, (struct tagRGBQUAD *)v43, 0, v22);
  FreeTmpBuffer(v43);
  if ( (a11 & 4) == 0 || v61 != 3 )
    goto LABEL_92;
  v39 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v74, a1);
  v45 = 0;
  if ( v74[0] )
  {
    v46 = *(_QWORD *)(v74[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v58);
    if ( *(_DWORD *)(v46 + 2108) == 3 && (*(_DWORD *)(v46 + 2172) & 0x100) != 0 && (*(_DWORD *)(v46 + 40) & 1) != 0 )
    {
      v45 = 1;
      XEPALOBJ::apalColorSet((XEPALOBJ *)&v56, *(struct PALETTE **)(v46 + 1808));
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v47);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v74);
  if ( !v45 )
    goto LABEL_86;
LABEL_93:
  if ( v28 )
  {
    if ( v52 )
      *v28 = 0LL;
    else
      *v28 = *(_QWORD *)(v53 + 72);
  }
  if ( !(unsigned int)Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled() )
    *(_DWORD *)(v53 + 112) |= 0x4000000u;
  v54 |= 1u;
  v57 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v39);
    if ( DCDpiScaleValue > 1 )
    {
      LODWORD(v60) = v62 / DCDpiScaleValue;
      HIDWORD(v60) = v63 / DCDpiScaleValue;
      v49 = v53;
      *(float *)(v53 + 660) = (float)DCDpiScaleValue;
      *(float *)(v49 + 664) = (float)DCDpiScaleValue;
      *(_DWORD *)(v49 + 116) |= 0x800u;
      *(_QWORD *)(v49 + 668) = v60;
    }
  }
  v50 = *(_QWORD *)(v53 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v53);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v56);
  return v50;
}
