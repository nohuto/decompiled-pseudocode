/*
 * XREFs of _GreCreateDIBitmapReal@52 @ 0x76A92
 * Callers:
 *     _NtGdiCreateDIBitmapInternal@44 @ 0x74B78 (_NtGdiCreateDIBitmapInternal@44.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _NtGdiCreateDIBSection@36 @ 0x768A6 (_NtGdiCreateDIBSection@36.c)
 *     ?ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z @ 0x77B00 (-ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z.c)
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     _NtGdiCreateSessionMappedDIBSection@32 @ 0xE0450 (_NtGdiCreateSessionMappedDIBSection@32.c)
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z @ 0x21BA5A (-GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z.c)
 *     _GreCreateDIBBrush@24 @ 0x21DE30 (_GreCreateDIBBrush@24.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0xF98E0 (-vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 *     ?apalColorSet@XEPALOBJ@@QAEXPAVPALETTE@@@Z @ 0x1D37C0 (-apalColorSet@XEPALOBJ@@QAEXPAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z @ 0x223482 (-vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z @ 0x223520 (-vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z.c)
 */

int __thiscall GreCreateDIBitmapReal(
        HDC this,
        void *a2,
        int a3,
        int a4,
        unsigned int a5,
        size_t a6,
        unsigned int a7,
        unsigned int a8,
        void *a9,
        char a10,
        unsigned int a11,
        _DWORD *a12)
{
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  unsigned int v16; // esi
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // esi
  struct tagRGBQUAD *v21; // edi
  unsigned int v22; // ecx
  size_t v23; // ecx
  void *v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // edi
  int v28; // esi
  int DCDpiScaleValue; // esi
  int v30; // ebx
  int v31; // eax
  _DWORD *v32; // ecx
  _DWORD *v33; // edi
  int v34; // [esp-4h] [ebp-C8h]
  int v35; // [esp-4h] [ebp-C8h]
  int v36; // [esp-4h] [ebp-C8h]
  ULONG *v37; // [esp+0h] [ebp-C4h]
  DC *v38; // [esp+14h] [ebp-B0h]
  int v39; // [esp+18h] [ebp-ACh]
  int v40; // [esp+1Ch] [ebp-A8h]
  unsigned int v41; // [esp+34h] [ebp-90h]
  void *Src; // [esp+3Ch] [ebp-88h]
  void *v43; // [esp+40h] [ebp-84h]
  unsigned int v44; // [esp+44h] [ebp-80h]
  int v45; // [esp+48h] [ebp-7Ch]
  int v46; // [esp+4Ch] [ebp-78h] BYREF
  unsigned int v47; // [esp+50h] [ebp-74h]
  unsigned int v48; // [esp+54h] [ebp-70h]
  int v49; // [esp+58h] [ebp-6Ch]
  int v50; // [esp+5Ch] [ebp-68h]
  int v51; // [esp+60h] [ebp-64h]
  int v52; // [esp+64h] [ebp-60h]
  int v53; // [esp+68h] [ebp-5Ch] BYREF
  char v54; // [esp+6Ch] [ebp-58h]
  int v55; // [esp+70h] [ebp-54h]
  unsigned int v56; // [esp+74h] [ebp-50h]
  unsigned int v57; // [esp+78h] [ebp-4Ch]
  unsigned int v58; // [esp+7Ch] [ebp-48h]
  int v59; // [esp+80h] [ebp-44h]
  HDC v60; // [esp+84h] [ebp-40h]
  char v61; // [esp+8Bh] [ebp-39h] BYREF
  int *v62; // [esp+8Ch] [ebp-38h] BYREF
  int v63; // [esp+90h] [ebp-34h]
  unsigned int v64; // [esp+94h] [ebp-30h]
  int v65; // [esp+98h] [ebp-2Ch] BYREF
  DC *v66; // [esp+9Ch] [ebp-28h] BYREF
  _DWORD v67[3]; // [esp+A0h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+ACh] [ebp-18h]

  v60 = this;
  v43 = a2;
  v49 = 0;
  v50 = 0;
  v59 = a4;
  if ( a4 != 1 )
  {
    if ( a4 == 3 )
    {
      if ( (a10 & 1) == 0 )
        goto LABEL_73;
    }
    else if ( a4 )
    {
      goto LABEL_73;
    }
  }
  if ( !a7 && (a10 & 8) != 0 )
    goto LABEL_73;
  if ( !a3 )
    goto LABEL_73;
  if ( a5 < 0x28 )
    goto LABEL_73;
  v12 = *(_DWORD *)a3;
  v56 = v12;
  if ( a5 < v12 )
    goto LABEL_73;
  if ( v12 >= 0x28 )
  {
    v13 = *(_DWORD *)(a3 + 16);
    if ( v13 == 4 || v13 == 5 )
      goto LABEL_73;
  }
  if ( v56 < 0x28 )
    goto LABEL_73;
  v52 = *(_DWORD *)(a3 + 4);
  if ( v52 <= 0 )
    goto LABEL_73;
  v14 = *(_DWORD *)(a3 + 8);
  if ( !v14 )
    goto LABEL_73;
  v51 = 0;
  v47 = v52;
  if ( v14 < 0 )
  {
    v14 = -v14;
    v51 = 1;
  }
  v48 = v14;
  v46 = *(unsigned __int16 *)(a3 + 14);
  v52 = *(_DWORD *)(a3 + 16);
  v41 = *(_DWORD *)(a3 + 32);
  Src = (void *)(a3 + v56);
  v57 = 0;
  v58 = 0;
  v44 = 0;
  v15 = v59;
  if ( !v52 )
  {
    switch ( v46 )
    {
      case 1:
        v46 = 1;
        v35 = 2;
        break;
      case 4:
        v46 = 2;
        v35 = 16;
        break;
      case 8:
        v46 = 3;
        v16 = 256;
        goto LABEL_63;
      default:
        v15 = v59 != 1 ? v59 : 0;
        v16 = 0;
        v64 = 0;
        switch ( v46 )
        {
          case 24:
            v46 = 5;
            goto LABEL_25;
          case 16:
            v46 = 4;
            v57 = 31744;
            v58 = 992;
            v44 = 31;
            v34 = 2;
            goto LABEL_26;
          case 32:
            v46 = 6;
LABEL_25:
            v34 = 8;
LABEL_26:
            v17 = v34;
            v18 = 512;
            goto LABEL_27;
        }
LABEL_73:
        EngSetLastError(0x57u);
        return 0;
    }
    v16 = v35;
LABEL_63:
    v64 = v16;
    v17 = 1;
    v18 = 1024;
    goto LABEL_27;
  }
  if ( v52 != 3 )
  {
    if ( v52 != 10 )
      goto LABEL_73;
    DCOBJ::DCOBJ((DCOBJ *)&v66, v60);
    if ( !v66 || !DC::bIsCMYKColor(v66) )
      goto LABEL_121;
    switch ( v46 )
    {
      case 1:
        v46 = 1;
        v36 = 2;
        v45 = 1;
        break;
      case 4:
        v46 = 2;
        v36 = 16;
        v45 = 1;
        break;
      case 8:
        v46 = 3;
        v16 = 256;
        v45 = 1;
LABEL_90:
        v64 = v16;
        v59 = 1024;
        goto LABEL_91;
      case 32:
        v46 = 6;
        v16 = 0;
        v64 = 0;
        v45 = 16;
        v59 = 512;
LABEL_91:
        DCOBJ::~DCOBJ((DCOBJ *)&v66);
        v17 = v45;
        v18 = v59;
        goto LABEL_27;
      default:
LABEL_121:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)&v66);
        return 0;
    }
    v16 = v36;
    goto LABEL_90;
  }
  if ( a5 < 0x34 || v59 )
    goto LABEL_73;
  Src = (void *)(a3 + 40);
  v57 = *(_DWORD *)(a3 + 40);
  v58 = *(_DWORD *)(a3 + 44);
  v44 = *(_DWORD *)(a3 + 48);
  v16 = 0;
  v64 = 0;
  v17 = 2;
  v18 = 512;
  if ( v46 == 16 )
  {
    v46 = 4;
  }
  else
  {
    if ( v46 != 32 )
      goto LABEL_73;
    v46 = 6;
  }
LABEL_27:
  v63 = 0;
  v62 = 0;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v62, v17, v16, 0, v57, v58, v44, v18, 1) )
  {
LABEL_95:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v62);
    return 0;
  }
  v50 = *v62;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v58 = 0;
  v57 = 0;
  if ( (a10 & 2) != 0 )
  {
    v62[4] |= 0x8000u;
    v58 = (unsigned int)a2;
    v57 = a7;
    if ( !a2 )
      goto LABEL_94;
    v43 = 0;
  }
  else if ( v60 )
  {
    DCOBJ::DCOBJ((DCOBJ *)&v66, v60);
    if ( v66 && (*(_DWORD *)(*((_DWORD *)v66 + 9) + 24) & 0x8000) != 0 )
      v51 |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)&v66);
  }
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v53,
          (struct _DEVBITMAPINFO *)&v46,
          (void *)v58,
          (void *)v57,
          a8,
          a9,
          a11,
          0,
          1,
          (a10 & 8) != 0,
          a12 != 0)
    || !*(_WORD *)(v53 + 64) && *(_DWORD *)(v53 + 124) && *(_DWORD *)(v53 + 40) != a6 )
  {
    goto LABEL_94;
  }
  if ( v43 )
  {
    v23 = *(_DWORD *)(v53 + 40);
    if ( v23 > a6 )
    {
LABEL_106:
      EngSetLastError(0x57u);
      goto LABEL_94;
    }
    ms_exc.registration.TryLevel = 0;
    memcpy(*(void **)(v53 + 44), v43, v23);
    ms_exc.registration.TryLevel = -2;
  }
  if ( v41 && v41 < v16 )
    v16 = v41;
  if ( !v16 )
    goto LABEL_40;
  v56 = a5 - v56;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_40;
    if ( ULongLongToULong(2LL * v16, v37) < 0 || v56 < 2 * v16 )
      goto LABEL_106;
    DCOBJ::DCOBJ((DCOBJ *)&v66, v60);
    if ( v66 )
    {
      v24 = (void *)AllocFreeTmpBuffer(2 * v16);
      if ( v24 )
      {
        memcpy(v24, Src, 2 * v16);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v61);
        v26 = *((_DWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)&v66) + 22);
        if ( !v26 )
          v26 = *(_DWORD *)(v25 + 1112);
        XEPALOBJ::vGetEntriesFrom(&v62, *((_DWORD *)v66 + 15), v26, v24, v16);
        FreeTmpBuffer(v24);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
        DCOBJ::~DCOBJ((DCOBJ *)&v66);
        goto LABEL_40;
      }
      EngSetLastError(0xEu);
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v66);
LABEL_94:
    SURFMEM::~SURFMEM((SURFMEM *)&v53);
    goto LABEL_95;
  }
  if ( ULongLongToULong(4LL * v16, v37) < 0 || v56 < 4 * v16 )
    goto LABEL_106;
  v21 = (struct tagRGBQUAD *)AllocFreeTmpBuffer(4 * v16);
  if ( !v21 )
  {
    EngSetLastError(0xEu);
    goto LABEL_94;
  }
  memcpy(v21, Src, 4 * v16);
  if ( v52 == 10 || v52 == 12 || v52 == 11 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v62, v21, v22, v16);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v62, v21, 0, v16);
  FreeTmpBuffer(v21);
  if ( (a10 & 4) != 0 && v46 == 3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)&v66, v60);
    v27 = 0;
    if ( v66 )
    {
      v28 = *((_DWORD *)v66 + 9);
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v61);
      if ( *(_DWORD *)(v28 + 1404) == 3 && (*(_DWORD *)(v28 + 1456) & 0x100) != 0 && (*(_BYTE *)(v28 + 24) & 1) != 0 )
      {
        v27 = 1;
        XEPALOBJ::apalColorSet((XEPALOBJ *)&v62, *(struct PALETTE **)(v28 + 1112));
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v66);
    if ( !v27 )
      goto LABEL_94;
  }
LABEL_40:
  if ( a12 )
  {
    if ( (a10 & 8) != 0 )
      *a12 = 0;
    else
      *a12 = *(_DWORD *)(v53 + 44);
  }
  *(_DWORD *)(v53 + 72) |= 0x4000000u;
  v54 |= 1u;
  v63 = 1;
  if ( (a10 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v60);
    if ( DCDpiScaleValue > 1 )
    {
      ltoef_c(DCDpiScaleValue, &v65);
      ltoef_c(DCDpiScaleValue, v67);
      v30 = v47 / DCDpiScaleValue;
      v31 = v48 / DCDpiScaleValue;
      v38 = v66;
      v39 = v67[0];
      v40 = v67[1];
      v32 = (_DWORD *)v53;
      v33 = (_DWORD *)(v53 + 460);
      *(_DWORD *)(v53 + 460) = v65;
      *++v33 = v38;
      *++v33 = v39;
      v33[1] = v40;
      v32[19] |= 0x800u;
      v32[119] = v30;
      v32[120] = v31;
    }
  }
  v19 = *(_DWORD *)(v53 + 20);
  SURFMEM::~SURFMEM((SURFMEM *)&v53);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v62);
  return v19;
}
