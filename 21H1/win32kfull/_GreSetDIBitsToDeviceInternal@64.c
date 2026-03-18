/*
 * XREFs of _GreSetDIBitsToDeviceInternal@64 @ 0x4E312
 * Callers:
 *     _NtGdiSetDIBitsToDeviceInternal@64 @ 0x75458 (_NtGdiSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreSetDIBitsInternal@40 @ 0x226CEF (_GreSetDIBitsInternal@40.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE (-bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC (-bDpiScaleTransform@DC@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?vRefPalette@XEPALOBJ@@QAEXXZ @ 0xADBF4 (-vRefPalette@XEPALOBJ@@QAEXXZ.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0xF98E0 (-vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 *     ?vScale@ERECTL@@QAEXABVPOINTFL@@@Z @ 0x1CDA4B (-vScale@ERECTL@@QAEXABVPOINTFL@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z @ 0x223482 (-vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z @ 0x223520 (-vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92 (-bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z @ 0x2269E2 (-bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z.c)
 *     ?vScale@EPOINTL@@QAEXABVPOINTFL@@@Z @ 0x226A07 (-vScale@EPOINTL@@QAEXABVPOINTFL@@@Z.c)
 */

LONG __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        ULONG a2,
        LONG a3,
        int a4,
        int a5,
        ULONG a6,
        int a7,
        LONG a8,
        LONG a9,
        void *a10,
        int a11,
        unsigned int a12,
        ULONG a13,
        unsigned int a14,
        int a15,
        int a16)
{
  int v17; // edx
  unsigned int v18; // eax
  int v19; // edi
  unsigned int v20; // esi
  LONG cx; // eax
  HDEV v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  LONG v28; // ebx
  DHSURF dhsurf; // esi
  int v30; // eax
  int v31; // eax
  int v32; // edx
  ULONG *v33; // esi
  ERECTL *v34; // ecx
  struct ERECTL *v35; // ecx
  _DWORD *v36; // ebx
  int v37; // ecx
  int v38; // eax
  int v39; // edi
  struct PALETTE *v40; // esi
  PVOID v41; // eax
  int v42; // esi
  int v43; // edi
  int v44; // eax
  unsigned int XlateObject; // eax
  DHSURF v46; // ebx
  unsigned int v47; // esi
  DC *v48; // ecx
  struct REGION *v49; // eax
  ULONG *v50; // ecx
  ULONG cjBits; // ebx
  SURFACE *v52; // ecx
  struct _SURFOBJ *v53; // eax
  void (__stdcall *v54)(ULONG, struct _SURFOBJ *, _DWORD, char *, XLATEOBJ *, _DWORD, _DWORD, LONG *, struct _CLIPOBJ *, _DWORD, int); // edx
  struct _SURFOBJ *v55; // eax
  void (__stdcall *v56)(ULONG, struct _SURFOBJ *, char *, XLATEOBJ *, LONG *, void **); // edx
  ERECTL *v57; // ecx
  ULONG *v58; // ecx
  char *v59; // esi
  ULONG v60; // edi
  ULONG v61; // edx
  DC *v62; // ecx
  struct REGION *v63; // eax
  struct ECLIPOBJ *v64; // ecx
  ULONG v65; // ebx
  SURFACE *v66; // ecx
  struct _SURFOBJ *v67; // eax
  int (__stdcall *v68)(ULONG, struct _SURFOBJ *, _DWORD, char *, XLATEOBJ *, _DWORD, _DWORD, LONG *, struct _CLIPOBJ *, _DWORD, int); // edx
  int v69; // eax
  struct _SURFOBJ *v70; // eax
  int (__stdcall *v71)(ULONG, struct _SURFOBJ *, char *, XLATEOBJ *, LONG *, void **); // edx
  struct _RECTL *v73; // [esp+2Ch] [ebp-1B0h]
  unsigned int v74; // [esp+2Ch] [ebp-1B0h]
  ULONG *v75; // [esp+2Ch] [ebp-1B0h]
  unsigned int v76; // [esp+2Ch] [ebp-1B0h]
  ULONG *v77; // [esp+2Ch] [ebp-1B0h]
  struct _RECTL *v78; // [esp+30h] [ebp-1ACh]
  unsigned int v80; // [esp+40h] [ebp-19Ch]
  unsigned int v81; // [esp+44h] [ebp-198h]
  XLATEOBJ *v82; // [esp+48h] [ebp-194h]
  unsigned int v83; // [esp+4Ch] [ebp-190h]
  int v84; // [esp+50h] [ebp-18Ch]
  LONG v85; // [esp+54h] [ebp-188h]
  SURFACE *v86; // [esp+58h] [ebp-184h] BYREF
  int v87; // [esp+5Ch] [ebp-180h]
  int v88; // [esp+60h] [ebp-17Ch]
  unsigned int v89; // [esp+64h] [ebp-178h] BYREF
  unsigned int v90; // [esp+68h] [ebp-174h]
  struct _SURFOBJ v91; // [esp+6Ch] [ebp-170h] BYREF
  struct tagRGBQUAD *v92; // [esp+A0h] [ebp-13Ch]
  int v93; // [esp+A4h] [ebp-138h]
  char *v94; // [esp+A8h] [ebp-134h]
  int v95; // [esp+ACh] [ebp-130h]
  ULONG v96; // [esp+B0h] [ebp-12Ch]
  _DWORD v97[2]; // [esp+B4h] [ebp-128h] BYREF
  unsigned int v98; // [esp+BCh] [ebp-120h]
  unsigned int v99; // [esp+C0h] [ebp-11Ch]
  void *iUniq; // [esp+C4h] [ebp-118h] BYREF
  LONG left; // [esp+C8h] [ebp-114h]
  LONG top; // [esp+CCh] [ebp-110h]
  LONG right; // [esp+D0h] [ebp-10Ch]
  int v104; // [esp+D4h] [ebp-108h]
  int v105; // [esp+D8h] [ebp-104h]
  int v106; // [esp+DCh] [ebp-100h]
  int v107; // [esp+E0h] [ebp-FCh] BYREF
  int v108; // [esp+E4h] [ebp-F8h]
  struct _POINTL v109; // [esp+E8h] [ebp-F4h] BYREF
  int v110; // [esp+F0h] [ebp-ECh]
  _DWORD v111[3]; // [esp+F4h] [ebp-E8h] BYREF
  int v112; // [esp+100h] [ebp-DCh]
  _DWORD v113[3]; // [esp+108h] [ebp-D4h] BYREF
  int v114; // [esp+114h] [ebp-C8h]
  struct _CLIPOBJ v115; // [esp+124h] [ebp-B8h] BYREF
  int v116; // [esp+13Ch] [ebp-A0h]
  int v117; // [esp+140h] [ebp-9Ch]
  ULONG v118; // [esp+144h] [ebp-98h] BYREF
  ULONG v119; // [esp+148h] [ebp-94h]
  char *v120; // [esp+14Ch] [ebp-90h]
  int v121; // [esp+150h] [ebp-8Ch]
  char v122[4]; // [esp+154h] [ebp-88h] BYREF
  _BYTE v123[64]; // [esp+158h] [ebp-84h] BYREF
  int v124; // [esp+198h] [ebp-44h]
  int v125; // [esp+19Ch] [ebp-40h]
  int v126; // [esp+1C4h] [ebp-18h]
  int v127; // [esp+1CCh] [ebp-10h]
  unsigned int v128; // [esp+210h] [ebp+34h]

  v96 = a6;
  v91.cjBits = a2;
  v106 = a4;
  iUniq = a10;
  v93 = a16;
  if ( (GreGetLayout(a1) & 1) != 0 )
    v91.cjBits = a4 + a2 - 1;
  v17 = a11;
  if ( !a11 )
    goto LABEL_205;
  if ( !a10 )
    goto LABEL_205;
  if ( a12 > 2 )
    goto LABEL_205;
  if ( a14 < 0x28 )
    goto LABEL_205;
  v18 = *(_DWORD *)a11;
  v95 = v18;
  if ( v18 < 0x28 )
    goto LABEL_205;
  v94 = *(char **)(a11 + 4);
  if ( (int)v94 <= 0 )
    goto LABEL_205;
  v91.sizlBitmap.cx = *(_DWORD *)(a11 + 8);
  if ( !v91.sizlBitmap.cx )
    goto LABEL_205;
  v19 = *(_DWORD *)(a11 + 16);
  v20 = *(unsigned __int16 *)(a11 + 14);
  v92 = (struct tagRGBQUAD *)(a11 + v18);
  cx = v91.sizlBitmap.cx;
  v89 = 0;
  memset(&v91.pvBits, 0, 24);
  v22 = *(HDEV *)(a11 + 32);
  v104 = v19;
  v91.hdev = v22;
  if ( v91.sizlBitmap.cx < 0 )
  {
    *(_DWORD *)&v91.iType = 1;
    if ( v19 && v19 != 3 && v19 != 4 && v19 != 5 && v19 != 10 && v19 != 12 && v19 != 11 )
      goto LABEL_205;
    cx = -v91.sizlBitmap.cx;
    v91.sizlBitmap.cx = -v91.sizlBitmap.cx;
  }
  v23 = 0;
  v90 = 0;
  v99 = 0;
  v98 = 0;
  v105 = 0;
  if ( v19 != 3 )
  {
    if ( !v19 )
    {
      if ( v20 == 1 )
      {
        v80 = 2;
        v91.pvBits = (PVOID)1;
        v81 = 1;
      }
      else
      {
        if ( v20 == 4 )
        {
          v91.pvBits = (PVOID)2;
          v80 = 16;
        }
        else
        {
          if ( v20 != 8 )
          {
            v80 = 0;
            v83 = 512;
            v27 = a12 != 1 ? a12 : 0;
            a12 = v27;
            switch ( v20 )
            {
              case 0x10u:
                v91.pvBits = (PVOID)4;
                v90 = 31744;
                v99 = 992;
                v98 = 31;
                v81 = 2;
                break;
              case 0x18u:
                v91.pvBits = (PVOID)5;
                v81 = 8;
                break;
              case 0x20u:
                v91.pvBits = (PVOID)6;
                v81 = 8;
                goto LABEL_46;
              default:
                goto LABEL_205;
            }
            a12 = v27;
LABEL_46:
            if ( ULongLongToULong(v20 * (unsigned __int64)(unsigned int)v94, (ULONG *)v73) < 0 )
              goto LABEL_29;
            v26 = 31;
            goto LABEL_28;
          }
          v91.pvBits = (PVOID)3;
          v80 = 256;
        }
        v81 = 1;
      }
      v83 = 1024;
      goto LABEL_46;
    }
    if ( v19 == 10 )
    {
      v86 = 0;
      v87 = 0;
      v88 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v86, a1);
      if ( !v86 || !DC::bIsCMYKColor(v86) )
        goto LABEL_68;
      if ( v20 == 1 )
      {
        v80 = 2;
        v91.pvBits = (PVOID)1;
        v81 = 1;
      }
      else
      {
        switch ( v20 )
        {
          case 4u:
            v91.pvBits = (PVOID)2;
            v80 = 16;
            break;
          case 8u:
            v91.pvBits = (PVOID)3;
            v80 = 256;
            break;
          case 0x20u:
            v80 = 0;
            v91.pvBits = (PVOID)6;
            v81 = 16;
            v83 = 512;
            goto LABEL_62;
          default:
LABEL_68:
            EngSetLastError(0x57u);
            goto LABEL_69;
        }
        v81 = 1;
      }
      v83 = 1024;
LABEL_62:
      if ( ULongLongToULong(v20 * (unsigned __int64)(unsigned int)v94, (ULONG *)v73) >= 0
        && (ULongAdd(31, 0, (int *)&v89, v76, (unsigned int *)v78) & 0x80000000) == 0 )
      {
        v28 = a9;
        v85 = a9;
        if ( ULongLongToULong((unsigned int)a9 * (unsigned __int64)((v89 >> 3) & 0x1FFFFFFC), v77) >= 0 )
        {
          DCOBJ::~DCOBJ((DCOBJ *)&v86);
          goto LABEL_66;
        }
      }
      EngSetLastError(0x216u);
LABEL_69:
      DCOBJ::~DCOBJ((DCOBJ *)&v86);
      return 0;
    }
    if ( v19 != 2 )
    {
      if ( v19 != 12 )
      {
        if ( v19 != 1 )
        {
          if ( v19 != 11 )
          {
            if ( v19 == 4 )
            {
              v91.pvBits = (PVOID)9;
            }
            else
            {
              if ( v19 != 5 )
                goto LABEL_205;
              v91.pvBits = (PVOID)10;
            }
            v91.sizlBitmap.cy = 0;
            v28 = a9;
            v81 = 8;
            v83 = 512;
            goto LABEL_90;
          }
          v86 = 0;
          v87 = 0;
          v88 = 0;
          XDCOBJ::vLock((XDCOBJ *)&v86, a1);
          if ( !v86 || !DC::bIsCMYKColor(v86) )
            goto LABEL_68;
          DCOBJ::~DCOBJ((DCOBJ *)&v86);
          v17 = a11;
          cx = v91.sizlBitmap.cx;
        }
        if ( v20 != 8 )
          goto LABEL_205;
        v91.pvBits = (PVOID)8;
        v23 = 256;
        v81 = 1;
LABEL_89:
        v91.sizlBitmap.cy = 0;
        v28 = cx;
        v105 = 1;
        v83 = 1024;
LABEL_90:
        v91.iUniq = *(_DWORD *)(v17 + 20);
        v85 = v28;
        v80 = v23;
        goto LABEL_91;
      }
      v86 = 0;
      v87 = 0;
      v88 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v86, a1);
      if ( !v86 || !DC::bIsCMYKColor(v86) )
        goto LABEL_68;
      DCOBJ::~DCOBJ((DCOBJ *)&v86);
      v17 = a11;
      cx = v91.sizlBitmap.cx;
    }
    if ( v20 != 4 )
      goto LABEL_205;
    v91.pvBits = (PVOID)7;
    v23 = 16;
    v81 = 1;
    goto LABEL_89;
  }
  if ( a14 < 0x34 )
    goto LABEL_205;
  a12 &= -(a12 != 1);
  if ( v20 == 16 )
  {
    v91.pvBits = (PVOID)4;
  }
  else
  {
    if ( v20 != 32 )
      goto LABEL_205;
    v91.pvBits = (PVOID)6;
  }
  v80 = 0;
  v24 = *(_DWORD *)(a11 + 40);
  v92 = (struct tagRGBQUAD *)(a11 + 40);
  v90 = v24;
  v25 = *(_DWORD *)(a11 + 44);
  v98 = *(_DWORD *)(a11 + 48);
  v99 = v25;
  v81 = 2;
  v83 = 512;
  if ( ULongLongToULong(v20 * (unsigned __int64)(unsigned int)v94, (ULONG *)v73) < 0
    || (ULongAdd(31, 0, (int *)&v89, v74, (unsigned int *)v78) & 0x80000000) != 0 )
  {
    goto LABEL_29;
  }
  v26 = v89;
LABEL_28:
  v85 = a9;
  if ( ULongLongToULong((unsigned int)a9 * (unsigned __int64)((v26 >> 3) & 0x1FFFFFFC), v75) >= 0 )
  {
    v28 = a9;
LABEL_66:
    v23 = v80;
    v91.sizlBitmap.cy = a8;
LABEL_91:
    v128 = a14 - v95;
    if ( !v91.hdev || v91.hdev > (HDEV)v23 )
      v91.hdev = (HDEV)v23;
    if ( a13 >= v91.iUniq )
    {
      v91.pvScan0 = v94;
      if ( v19 == 4 || v19 == 5 )
        v91.lDelta = v91.sizlBitmap.cx;
      else
        v91.lDelta = v28;
      memset(&v91, 0, 12);
      XDCOBJ::vLock((XDCOBJ *)&v91, a1);
      dhsurf = v91.dhsurf;
      if ( !v91.dhsurf || ((_DWORD)v91.dhsurf[6] & 0x10000) != 0 )
      {
        EngSetLastError(0x57u);
        v85 = 0;
LABEL_204:
        DCOBJ::~DCOBJ((DCOBJ *)&v91);
        return v85;
      }
      v110 = *((_DWORD *)v91.dhsurf + 9);
      v109.x = v91.cjBits;
      v109.y = a3;
      v30 = *(_DWORD *)(a11 + 16);
      if ( (v30 == 4 || v30 == 5)
        && (!XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v91, *(_DWORD *)(a11 + 16)) || a12 || v93) )
      {
        v28 = 0;
        v85 = 0;
      }
      if ( a15 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v86, (struct XDCOBJ *)&v91, 0x204u);
        EXFORMOBJ::bXform((EXFORMOBJ *)&v86, &v109, 1u);
        if ( v28 )
        {
          v31 = *(_DWORD *)(a11 + 16);
          if ( v31 == 4 || v31 == 5 )
          {
            v28 = (*((_BYTE *)v86 + 56) & 1) != 0 ? v28 : 0;
            v85 = v28;
          }
        }
        dhsurf = v91.dhsurf;
      }
      v107 = v106;
      v108 = a5;
      if ( DC::bDpiScaleTransform((DC *)dhsurf) )
      {
        v33 = (ULONG *)(dhsurf + 131);
        v118 = *v33++;
        v119 = *v33++;
        v120 = (char *)*v33;
        v121 = v33[1];
        EPOINTL::vScale((EPOINTL *)&v107, (const struct POINTFL *)&v118);
        dhsurf = v91.dhsurf;
        v32 = v107;
        v19 = v104;
      }
      *(struct _POINTL *)&v115.rclBounds.bottom = v109;
      v116 = v32 + v109.x;
      v117 = v109.y + v108;
      ERECTL::vOrder((ERECTL *)&v115.rclBounds.bottom);
      if ( ERECTL::bEmpty(v34) || !v28 )
        goto LABEL_204;
      if ( ((_BYTE)dhsurf[6] & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v91, v35);
      LOWORD(v114) = 256;
      memset(v113, 0, sizeof(v113));
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v111, (struct XDCOBJ *)&v91, 0);
      v36 = (_DWORD *)*((_DWORD *)v91.dhsurf + 126);
      v91.cjBits = (ULONG)v36;
      if ( !v36 )
      {
LABEL_201:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v111);
        if ( v113[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v113);
        goto LABEL_204;
      }
      v37 = v93;
      if ( !v93 )
      {
        v37 = *(_DWORD *)(*((_DWORD *)v91.dhsurf + 255) + 264);
        v93 = v37;
      }
      v38 = *((_DWORD *)v91.dhsurf + 20);
      v95 = v38;
      if ( (v38 & 0x10000000) != 0 && (!v37 || v19 != 10 && v19 != 12 && v19 != 11) )
        v95 = v38 & 0xFFFFFFF | 0x20000000;
      v39 = v36[22];
      v97[1] = 0;
      v97[0] = 0;
      v40 = (struct PALETTE *)*((_DWORD *)v91.dhsurf + 15);
      if ( v40 != ppalDefault )
        v36[29] = *(_DWORD *)v40;
      v84 = 1;
      v82 = 0;
      v89 = 0;
      if ( a12 )
      {
        if ( a12 == 1 )
        {
          if ( v128 >= 2 * (int)v91.hdev )
          {
            if ( EXLATEOBJ::bMakeXlate(&v89, v92, v40, v36, v91.hdev, v80) )
            {
              v82 = (XLATEOBJ *)v89;
              if ( gbMultiMonMismatchColor
                && (v43 = v110, (*(_BYTE *)(v110 + 24) & 1) != 0)
                && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v97, v81, v80, 0, v90, v99, v98, v83, 1) )
              {
                v44 = v36[22];
                if ( !v44 )
                  v44 = *(_DWORD *)(v43 + 1112);
                XEPALOBJ::vGetEntriesFrom(v97, v40, v44, v92, v91.hdev);
                v42 = 1;
              }
              else
              {
                v42 = 0;
              }
              goto LABEL_162;
            }
            goto LABEL_139;
          }
          goto LABEL_138;
        }
        if ( a12 == 2 )
        {
          v41 = (PVOID)v36[15];
          if ( v41 != v91.pvBits
            && (v41 != (PVOID)2 || v91.pvBits != (PVOID)7)
            && (v41 != (PVOID)3 || v91.pvBits != (PVOID)8) )
          {
            goto LABEL_138;
          }
          v82 = xloIdent;
        }
        v42 = 0;
LABEL_162:
        v86 = 0;
        LOBYTE(v87) = 0;
        v88 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v86, (struct _DEVBITMAPINFO *)&v91.pvBits, iUniq, 0, 0, 0, 0, 0, 1, 0, 0);
        if ( v84 && v86 )
        {
          *((_DWORD *)v86 + 14) = 0;
          if ( (v112 & 1) != 0 )
          {
            v46 = v91.dhsurf;
            if ( ERECTL::bOffsetAdd(
                   (ERECTL *)&v115.rclBounds.bottom,
                   (const struct _POINTL *)v91.dhsurf + ((_DWORD)v91.dhsurf[7] & 1) + 131,
                   1) )
            {
              if ( v42 )
              {
                XEPALOBJ::vRefPalette((XEPALOBJ *)v97);
                *((_DWORD *)v86 + 22) = v97[0];
                v46 = v91.dhsurf;
              }
              v115.iUniq = v96;
              v47 = *(_DWORD *)(v91.cjBits + 28);
              v115.rclBounds.top = v96 + v106;
              v90 = v47;
              v115.rclBounds.left = v91.sizlBitmap.cx - a5 - a7;
              v115.rclBounds.right = v91.sizlBitmap.cx - a7;
              if ( v105 )
              {
                if ( DC::prgnRao((DC *)v46) )
                  v49 = DC::prgnRao(v48);
                else
                  v49 = DC::prgnVisSnap(v48);
                v126 = 1;
                v124 = 0;
                v125 = 0;
                v127 = 0;
                XCLIPOBJ::vSetup((XCLIPOBJ *)v122, v49, (struct ERECTL *)&v115.rclBounds.bottom, 0);
                if ( !ERECTL::bEmpty((ERECTL *)v123) )
                {
                  if ( ((_BYTE)v91.dhsurf[6] & 0xE0) != 0 )
                  {
                    v118 = *v50;
                    v119 = v50[1];
                    v120 = (char *)v50[2];
                    v121 = v50[3];
                    XDCOBJ::vAccumulateTight((XDCOBJ *)&v91, (struct ECLIPOBJ *)v50, (struct ERECTL *)&v118);
                  }
                  cjBits = v91.cjBits;
                  v52 = v86;
                  ++*(_DWORD *)(v91.cjBits + 56);
                  SURFACE::pSurfobj(v52);
                  if ( bClipSrcDstRectsAndValidate(
                         &v91,
                         0,
                         (struct DCOBJ *)&v115.rclBounds.bottom,
                         &v115.rclBounds.bottom,
                         &v115,
                         v73,
                         v78) )
                  {
                    if ( DC::bDpiScaleTransform((DC *)v91.dhsurf) )
                    {
                      v53 = SURFACE::pSurfobj(v86);
                      v54(cjBits + 16, v53, 0, v122, v82, 0, 0, &v115.rclBounds.bottom, &v115, 0, 3);
                    }
                    else
                    {
                      iUniq = (void *)v115.iUniq;
                      left = v115.rclBounds.left;
                      v55 = SURFACE::pSurfobj(v86);
                      v56(cjBits + 16, v55, v122, v82, &v115.rclBounds.bottom, &iUniq);
                    }
                  }
                }
              }
              else
              {
                v118 = 0;
                v121 = v91.sizlBitmap.cx - v91.sizlBitmap.cy;
                iUniq = (void *)v115.iUniq;
                v96 = v91.sizlBitmap.cx - v91.sizlBitmap.cy - v85;
                v119 = v96;
                v120 = v94;
                left = v115.rclBounds.left;
                top = v115.rclBounds.top;
                right = v115.rclBounds.right;
                ERECTL::operator*=(&v118);
                if ( !ERECTL::bEmpty(v57) )
                {
                  v118 = *v58;
                  v119 = v58[1];
                  v120 = (char *)v58[2];
                  v121 = v58[3];
                  v59 = &v120[-top];
                  v60 = v119 - left;
                  v118 = v115.iUniq - (_DWORD)iUniq;
                  v120 -= top;
                  v119 -= left;
                  v121 -= right;
                  if ( DC::bDpiScaleTransform((DC *)v46) )
                  {
                    iUniq = (void *)*((_DWORD *)v46 + 131);
                    left = *((_DWORD *)v46 + 132);
                    top = *((_DWORD *)v46 + 133);
                    right = *((_DWORD *)v46 + 134);
                    ERECTL::vScale((ERECTL *)&v118, (const struct POINTFL *)&iUniq);
                    v46 = v91.dhsurf;
                    v59 = v120;
                    v60 = v119;
                    v61 = v118;
                  }
                  v115.rclBounds.bottom += v61;
                  v116 += (int)v59;
                  *(_DWORD *)&v115.iDComplexity += v60;
                  v117 += v121;
                  if ( !ERECTL::bEmpty((ERECTL *)&v115.rclBounds.bottom) )
                  {
                    v63 = DC::prgnRao((DC *)v46) ? DC::prgnRao(v62) : DC::prgnVisSnap(v62);
                    v126 = 1;
                    v124 = 0;
                    v125 = 0;
                    v127 = 0;
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v122, v63, (struct ERECTL *)&v115.rclBounds.bottom, 0);
                    if ( !ERECTL::bEmpty((ERECTL *)v123) )
                    {
                      if ( ((_BYTE)v91.dhsurf[6] & 0xE0) != 0 )
                      {
                        iUniq = *(void **)v64;
                        left = *((_DWORD *)v64 + 1);
                        top = *((_DWORD *)v64 + 2);
                        right = *((_DWORD *)v64 + 3);
                        XDCOBJ::vAccumulateTight((XDCOBJ *)&v91, v64, (struct ERECTL *)&iUniq);
                      }
                      if ( v104 == 4 || v104 == 5 )
                      {
                        v115.rclBounds.right += v96 - v115.rclBounds.left;
                        v115.rclBounds.left = v96;
                      }
                      else
                      {
                        v115.rclBounds.right -= v96;
                        v115.rclBounds.left -= v96;
                      }
                      v65 = v91.cjBits;
                      v66 = v86;
                      ++*(_DWORD *)(v91.cjBits + 56);
                      SURFACE::pSurfobj(v66);
                      if ( bClipSrcDstRectsAndValidate(
                             &v91,
                             0,
                             (struct DCOBJ *)&v115.rclBounds.bottom,
                             &v115.rclBounds.bottom,
                             &v115,
                             v73,
                             v78) )
                      {
                        if ( DC::bDpiScaleTransform((DC *)v91.dhsurf) )
                        {
                          v67 = SURFACE::pSurfobj(v86);
                          v69 = v68(v65 + 16, v67, 0, v122, v82, 0, 0, &v115.rclBounds.bottom, &v115, 0, 3);
                        }
                        else
                        {
                          iUniq = (void *)v115.iUniq;
                          left = v115.rclBounds.left;
                          v70 = SURFACE::pSurfobj(v86);
                          v69 = v71(v65 + 16, v70, v122, v82, &v115.rclBounds.bottom, &iUniq);
                        }
                        if ( !v69 )
                          v85 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v85 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v86);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v89);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v97);
        goto LABEL_201;
      }
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v97, v81, v80, 0, v90, v99, v98, v83, 1) )
        goto LABEL_139;
      if ( v91.hdev )
      {
        if ( v128 < 4 * (int)v91.hdev )
        {
LABEL_138:
          EngSetLastError(0x57u);
LABEL_139:
          v84 = 0;
          v42 = 0;
          goto LABEL_162;
        }
        if ( v104 == 10 || v104 == 12 || v104 == 11 )
          XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)v97, v92, (unsigned int)v91.hdev, (unsigned int)v91.hdev);
        else
          XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)v97, v92, 0, (unsigned int)v91.hdev);
      }
      XlateObject = CreateXlateObject(v93, v95, v97[0], v39, v40, v40, 0, 0, 0xFFFFFF, 0);
      v89 = XlateObject;
      v42 = 0;
      if ( XlateObject )
        v82 = (XLATEOBJ *)XlateObject;
      else
        v84 = 0;
      goto LABEL_162;
    }
LABEL_205:
    EngSetLastError(0x57u);
    return 0;
  }
LABEL_29:
  EngSetLastError(0x216u);
  return 0;
}
