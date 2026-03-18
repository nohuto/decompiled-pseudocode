/*
 * XREFs of GreStretchBltInternal @ 0x1C0019A20
 * Callers:
 *     BltIcon @ 0x1C0063C80 (BltIcon.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C0102B30 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023ED30 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00193E8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001A4EC (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C001A598 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001A61C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001AC80 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C001AD0C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BD00 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001C2F4 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C011EC74 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0121494 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278E94 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C02905D0 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // r12
  int v20; // r12d
  DC *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  int valid; // eax
  DC *v25; // r8
  DC *v26; // rbx
  struct SURFACE *v27; // rbx
  struct SURFACE *v28; // rcx
  DC *v29; // r9
  __int64 v30; // rbx
  int v31; // r13d
  struct _POINTL v32; // r15
  SURFACE *v33; // r10
  struct SURFACE *v34; // rax
  __int64 v35; // rbx
  struct SURFACE *v36; // rax
  struct SURFACE *v37; // rax
  int v38; // edx
  __int64 v39; // r9
  SURFACE *v40; // r11
  unsigned int v41; // r14d
  unsigned __int8 v42; // r9
  unsigned int v43; // eax
  int v44; // r15d
  DC *v45; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v47; // rbx
  DC *v48; // rcx
  struct _DC_ATTR *v49; // rax
  __int64 v50; // rbx
  int v52; // r11d
  SURFACE *v53; // rdx
  DC *v54; // r8
  SURFACE *v55; // rcx
  SURFACE *v56; // rax
  DC *v57; // rcx
  DC *v58; // r8
  SURFACE *v59; // rcx
  ULONG v60; // ecx
  __int64 v61; // r13
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r8
  int v66; // edx
  DC *v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+70h] [rbp-90h]
  unsigned int v70; // [rsp+74h] [rbp-8Ch] BYREF
  SURFACE **v71; // [rsp+78h] [rbp-88h] BYREF
  int v72; // [rsp+80h] [rbp-80h]
  unsigned int v73; // [rsp+84h] [rbp-7Ch]
  int v74; // [rsp+88h] [rbp-78h]
  int v75; // [rsp+8Ch] [rbp-74h]
  int v76; // [rsp+90h] [rbp-70h]
  int v77[2]; // [rsp+98h] [rbp-68h]
  unsigned int v78; // [rsp+A0h] [rbp-60h]
  int v79; // [rsp+A4h] [rbp-5Ch]
  unsigned int v80; // [rsp+A8h] [rbp-58h]
  _BYTE v81[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h]
  _BYTE v83[192]; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v84; // [rsp+190h] [rbp+90h] BYREF
  int v85; // [rsp+198h] [rbp+98h]
  int v86; // [rsp+19Ch] [rbp+9Ch]
  _QWORD v87[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v88; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  __int64 v91; // [rsp+1D0h] [rbp+D0h]
  SURFACE *v92; // [rsp+1D8h] [rbp+D8h]
  struct SURFACE *v93; // [rsp+1E0h] [rbp+E0h]
  struct SURFACE *v94; // [rsp+1E8h] [rbp+E8h]
  __int64 v95; // [rsp+1F0h] [rbp+F0h]
  char v96[8]; // [rsp+1F8h] [rbp+F8h] BYREF
  char *v97; // [rsp+200h] [rbp+100h]
  _DWORD v98[6]; // [rsp+238h] [rbp+138h] BYREF
  _DWORD v99[8]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v100; // [rsp+270h] [rbp+170h]
  unsigned int v101; // [rsp+278h] [rbp+178h]
  int v102; // [rsp+27Ch] [rbp+17Ch]

  v77[0] = a2;
  v74 = a4;
  v75 = a3;
  v79 = a11 & 0x40000000;
  v95 = 0LL;
  v102 = 0;
  v70 = 0;
  v15 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v76 = a5;
  v16 = 0;
  v69 = (a11 & 0x40000000) != 0;
  v101 = ((v15 >> 8) | v15 & 0xFF0000) >> 8;
  v18 = gajRop3[(unsigned __int16)(v15 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v101 >> 8];
  v80 = v18 | gajRop3[(unsigned __int64)v101 >> 8];
  v20 = v19 & 0xD4;
  if ( !v20 )
  {
    v17 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8;
    if ( (unsigned __int8)v17 == v17 >> 8 )
    {
      v16 = NtGdiPatBlt(a1, a2, a3, a4, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
      goto LABEL_75;
    }
  }
  v67 = 0LL;
  v68 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v67, a1);
  if ( ((gajRop3[(unsigned __int8)v15] | gajRop3[BYTE1(v15)]) & 2) != 0 && v15 != 16711778 && v15 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)&v67, a2, v75, v74, v76);
  v71 = 0LL;
  v72 = 0;
  v73 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v71, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)&v71, a7, a8, a9, a10);
  v21 = v67;
  if ( !v67 )
    goto LABEL_134;
  if ( (*((_DWORD *)v67 + 9) & 0x10000) == 0 )
  {
    v22 = *((_QWORD *)v67 + 122);
    if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v67, *(_QWORD *)(v22 + 160));
      v21 = v67;
    }
  }
  if ( !v21 || (*((_DWORD *)v21 + 9) & 0x10000) != 0 || !v71 && v20 )
  {
LABEL_134:
    EngSetLastError(6u);
    v45 = (DC *)v71;
    if ( !v20 || v71 )
      v16 = 1;
    goto LABEL_57;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v83);
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v83, (struct XDCOBJ *)&v67, (struct XDCOBJ *)&v71, v69);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v83, (struct XDCOBJ *)&v67, v23);
  if ( (v83[72] & 1) == 0 )
  {
    v60 = 8;
    goto LABEL_142;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)&v67);
  v25 = v67;
  v26 = (DC *)v71;
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v71)
    && (*(_DWORD *)(*((_QWORD *)v26 + 62) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_16;
  }
  if ( !*((_QWORD *)v25 + 62) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v71) )
  {
    if ( (*((_DWORD *)v25 + 9) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v81, (struct XDCOBJ *)&v67, 0x204u);
      v84.x = v77[0];
      v85 = v77[0] + v74;
      v84.y = v75;
      v86 = v75 + v76;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v81, &v84) )
      {
        ERECTL::vOrder((ERECTL *)&v84);
        XDCOBJ::vAccumulate((XDCOBJ *)&v67, (struct ERECTL *)&v84);
      }
    }
    v16 = 1;
    goto LABEL_56;
  }
  if ( (*((_DWORD *)v26 + 9) & 1) != 0 )
  {
LABEL_16:
    if ( v20 )
    {
      v27 = (struct SURFACE *)*((_QWORD *)v26 + 62);
      if ( !v27 )
        v27 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v27 + 164) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v27 + 164)
        || !(unsigned int)_SurfaceAccessCheck(v27) )
      {
        goto LABEL_140;
      }
      v25 = v67;
    }
    v28 = (struct SURFACE *)*((_QWORD *)v25 + 62);
    if ( !v28 )
      v28 = SURFACE::pdibDefault;
    if ( (unsigned int)DestSurfaceAccessCheck(v28) )
    {
      if ( (unsigned __int8)v101 == BYTE1(v101) )
      {
        v29 = v67;
        if ( (a11 < 0 && (v30 = *((_QWORD *)v67 + 122), (*(_DWORD *)(v30 + 108) & 1) != 0)
           || (v30 = *((_QWORD *)v67 + 122), (*(_BYTE *)(v30 + 108) & 9) == 9))
          && a6 != a1 )
        {
          v61 = *(_QWORD *)(v30 + 308);
          v62 = DC::dwSetLayout(v67, -1, 0);
          v31 = v61 - v74 - v77[0];
          v29 = v67;
          v70 = v62;
          v78 = 0x80000000;
        }
        else
        {
          v78 = 0;
          v31 = v77[0];
        }
        v32 = 0LL;
        v84 = 0LL;
        v33 = v71[62];
        if ( v33 )
          v34 = v71[62];
        else
          v34 = SURFACE::pdibDefault;
        v35 = *((_QWORD *)v34 + 6);
        *(_QWORD *)v77 = v34;
        v82 = 0LL;
        if ( !v79 )
          goto LABEL_32;
        v52 = *((_DWORD *)v71 + 9);
        if ( (v52 & 1) == 0
          || (v53 = v71[6], (*((_DWORD *)v53 + 10) & 0x80u) != 0)
          || v53 != *((SURFACE **)v29 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v67) || v63 != *(_QWORD *)(v64 + 3520))
          || !v35 )
        {
          v69 = 0;
          goto LABEL_32;
        }
        if ( v20 && (v52 & 0x4000) != 0 && v33 != *((SURFACE **)v29 + 62) )
        {
          SURFACE::bUnMap(v33, 0LL, 0LL);
          v29 = v67;
        }
        if ( (*((_DWORD *)v29 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v29 + 62), 0LL, v29);
        GreAcquireSemaphore(*(_QWORD *)(v35 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 64), 4LL);
        v82 = *(_QWORD *)(v35 + 72);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v81);
        if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
          GreMovePointer(*(HDEV *)(*(_QWORD *)v77 + 48LL));
        SURFACE::vSetIncludeSprites();
        if ( v20 && (*((_DWORD *)v71 + 9) & 0x4000) != 0 )
        {
          v54 = v67;
          v55 = v71[62];
          if ( v55 == *((SURFACE **)v67 + 62) )
            goto LABEL_107;
          if ( (unsigned int)SURFACE::Map(v55, 0LL, 0LL) == 2 )
          {
            v32.x = 1;
            *((_DWORD *)v71 + 11) |= 1u;
          }
        }
        v54 = v67;
LABEL_107:
        if ( (*((_DWORD *)v54 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v54 + 62), 0LL, v54) == 2 )
        {
          v32.x = 1;
          *((_DWORD *)v67 + 11) |= 1u;
        }
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v81);
        if ( v32.x )
        {
LABEL_53:
          v44 = v69;
          if ( v78 )
            DC::dwSetLayout(v67, -1, v70);
          if ( !v44 )
            goto LABEL_56;
          SURFACE::vClearIncludeSprites();
          if ( v20 && (*((_DWORD *)v71 + 9) & 0x4000) != 0 )
          {
            v56 = v71[62];
            v57 = v67;
            if ( v56 == *((SURFACE **)v67 + 62) )
              goto LABEL_115;
            SURFACE::bUnMap(v56, 0LL, 0LL);
          }
          v57 = v67;
LABEL_115:
          if ( (*((_DWORD *)v57 + 9) & 0x4000) != 0 )
            SURFACE::bUnMap(*((SURFACE **)v57 + 62), 0LL, v57);
          UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v81);
          if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) )
            GreMovePointer(*(HDEV *)(*(_QWORD *)v77 + 48LL));
          EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 64));
          GreReleaseSemaphoreInternal(*(_QWORD *)(v35 + 64));
          if ( v20 && (*((_DWORD *)v71 + 9) & 0x4000) != 0 )
          {
            v58 = v67;
            v59 = v71[62];
            if ( v59 == *((SURFACE **)v67 + 62) )
              goto LABEL_125;
            if ( (unsigned int)SURFACE::Map(v59, 0LL, 0LL) == 2 )
              *((_DWORD *)v71 + 11) |= 1u;
          }
          v58 = v67;
LABEL_125:
          if ( (*((_DWORD *)v58 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v58 + 62), 0LL, v58) == 2 )
            *((_DWORD *)v67 + 11) |= 1u;
          UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v81);
          goto LABEL_56;
        }
        v32 = v84;
LABEL_32:
        EXFORMOBJ::vInit((EXFORMOBJ *)v87, (struct XDCOBJ *)&v67, 0x204u, 0);
        v36 = (struct SURFACE *)*((_QWORD *)v67 + 62);
        if ( !v36 )
          v36 = SURFACE::pdibDefault;
        v93 = v36;
        v89 = *((_QWORD *)v36 + 16);
        v90 = *((_QWORD *)v67 + 11);
        EXFORMOBJ::vInit((EXFORMOBJ *)&v88, (struct XDCOBJ *)&v71, 0x204u, 0);
        v37 = v71[62];
        if ( !v37 )
          v37 = SURFACE::pdibDefault;
        v38 = a12;
        v94 = v37;
        v39 = *((_QWORD *)v37 + 16);
        v91 = v39;
        v40 = v71[11];
        v92 = v40;
        if ( a12 == -1 )
          v38 = *((_DWORD *)v71[122] + 45);
        if ( (a13 & 1) != 0 )
          v32 = *(struct _POINTL *)(*((_QWORD *)v67 + 122) + 248LL);
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD))EXLATEOBJ::bInitXlateObj)(
                              v96,
                              v32,
                              *((unsigned int *)v67 + 30),
                              v39,
                              v89,
                              v40,
                              v90,
                              *(_DWORD *)(*((_QWORD *)v67 + 122) + 184LL),
                              *(_DWORD *)(*((_QWORD *)v67 + 122) + 176LL),
                              v38,
                              0) )
          goto LABEL_160;
        v41 = v80;
        v102 |= 2u;
        if ( (v80 & 0xE8) != 0 )
        {
          v97 = (char *)v67 + 1184;
          v65 = *((_QWORD *)v67 + 122);
          v66 = *(_DWORD *)(v65 + 152);
          if ( (v66 & 1) != 0 || (*((_DWORD *)v67 + 79) & 1) != 0 )
          {
            *(_DWORD *)(v65 + 152) = v66 & 0xFFFFFFFE;
            *((_DWORD *)v67 + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v97, v67, *((_QWORD *)v67 + 17), v90, v89, v93, 1);
          }
          v100 = *((_QWORD *)v67 + 147);
        }
        else
        {
          v97 = 0LL;
        }
        v95 = 0LL;
        if ( (*(_DWORD *)(v88 + 32) & 1) == 0
          || (v99[0] = a7, v99[2] = a9 + a7, v99[1] = a8, v99[3] = a8 + a10, (*(_BYTE *)(v88 + 32) & 0x43) != 0x43)
          && !(unsigned int)bCvtPts1(v88, v99, 2LL) )
        {
LABEL_159:
          EngSetLastError(0x57u);
LABEL_160:
          v16 = 0;
          goto LABEL_53;
        }
        if ( v20 && (unsigned int)ERECTL::bEmpty((ERECTL *)v99) )
        {
          v16 = 1;
          goto LABEL_53;
        }
        if ( (*(_DWORD *)(v87[0] + 32LL) & 1) != 0 )
        {
          v98[0] = v31;
          v98[2] = v31 + v74;
          v98[1] = v75;
          v98[3] = v75 + v76;
          if ( (*(_BYTE *)(v87[0] + 32LL) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v87[0], v98, 2LL) )
            goto LABEL_159;
          v42 = *(_BYTE *)(*((_QWORD *)v67 + 122) + 215LL);
          if ( v42 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v87) )
            v43 = BLTRECORD::bStretch((BLTRECORD *)v87, (struct DCOBJ *)&v67, (struct DCOBJ *)&v71, v41, v42);
          else
            v43 = BLTRECORD::bBitBlt((BLTRECORD *)v87, (struct DCOBJ *)&v67, (struct DCOBJ *)&v71, v41);
        }
        else
        {
          BLTRECORD::TrgPlg((BLTRECORD *)v87, v31, v75, v74, v76);
          v43 = BLTRECORD::bRotate(
                  (BLTRECORD *)v87,
                  (struct DCOBJ *)&v67,
                  (struct DCOBJ *)&v71,
                  v41,
                  *(_BYTE *)(*((_QWORD *)v67 + 122) + 215LL));
        }
        v16 = v43;
        goto LABEL_53;
      }
      v60 = 87;
LABEL_142:
      EngSetLastError(v60);
      goto LABEL_56;
    }
LABEL_140:
    v60 = 5;
    goto LABEL_142;
  }
LABEL_56:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v83);
  v45 = (DC *)v71;
LABEL_57:
  if ( v45 )
  {
    if ( v72 && (*((_DWORD *)v45 + 11) & 2) != 0 )
    {
      if ( !v73 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v71);
        v45 = (DC *)v71;
        if ( UserAttr )
        {
          DC::RestoreAttributes((DC *)v71, UserAttr);
          v45 = (DC *)v71;
        }
      }
      *((_DWORD *)v45 + 11) &= ~2u;
      v72 = 0;
      v45 = (DC *)v71;
    }
    v70 = 0;
    v47 = *(_QWORD *)v45;
    HmgDecrementExclusiveReferenceCountEx(v45, v73, &v70);
    if ( v70 )
      bDeleteDCInternalEx(v47, 0LL);
  }
  v48 = v67;
  if ( v67 )
  {
    if ( (_DWORD)v68 && (*((_DWORD *)v67 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v68) )
      {
        v49 = XDCOBJ::GetUserAttr((XDCOBJ *)&v67);
        v48 = v67;
        if ( v49 )
        {
          DC::RestoreAttributes(v67, v49);
          v48 = v67;
        }
      }
      *((_DWORD *)v48 + 11) &= ~2u;
      LODWORD(v68) = 0;
      v48 = v67;
    }
    v70 = 0;
    v50 = *(_QWORD *)v48;
    HmgDecrementExclusiveReferenceCountEx(v48, HIDWORD(v68), &v70);
    if ( v70 )
      bDeleteDCInternalEx(v50, 0LL);
  }
LABEL_75:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v87);
  return v16;
}
