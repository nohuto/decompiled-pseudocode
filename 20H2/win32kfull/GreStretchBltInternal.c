/*
 * XREFs of GreStretchBltInternal @ 0x1C009E23C
 * Callers:
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00FE520 (NtUserBitBltSysBmp.c)
 *     NtGdiStretchBlt @ 0x1C01034D0 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023DA90 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00984B8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009CC5C (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009CCAC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D310 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C009D39C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009D430 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreMovePointer @ 0x1C00C4410 (GreMovePointer.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01204F4 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01222F4 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277924 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028F180 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
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
  int valid; // eax
  DC *v24; // r8
  DC *v25; // rbx
  struct SURFACE *v26; // rbx
  struct SURFACE *v27; // rcx
  DC *v28; // r9
  __int64 v29; // rbx
  int v30; // r13d
  struct _POINTL v31; // r15
  SURFACE *v32; // r10
  struct SURFACE *v33; // rax
  __int64 v34; // rbx
  struct SURFACE *v35; // rax
  struct SURFACE *v36; // rax
  int v37; // edx
  __int64 v38; // r9
  SURFACE *v39; // r11
  unsigned int v40; // r14d
  int v41; // r9d
  int v42; // r10d
  int v43; // edx
  int v44; // r8d
  unsigned __int8 v45; // r9
  unsigned int v46; // eax
  int v47; // r15d
  DC *v48; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v50; // rbx
  DC *v51; // rcx
  struct _DC_ATTR *v52; // rax
  __int64 v53; // rbx
  int v55; // r11d
  SURFACE *v56; // rdx
  DC *v57; // r8
  SURFACE *v58; // rcx
  SURFACE *v59; // rax
  DC *v60; // rcx
  DC *v61; // r8
  SURFACE *v62; // rcx
  ULONG v63; // ecx
  __int64 v64; // r13
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r8
  int v69; // edx
  DC *v70; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+70h] [rbp-90h]
  unsigned int v73; // [rsp+74h] [rbp-8Ch] BYREF
  SURFACE **v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+80h] [rbp-80h]
  unsigned int v76; // [rsp+84h] [rbp-7Ch]
  int v77; // [rsp+88h] [rbp-78h]
  int v78; // [rsp+8Ch] [rbp-74h]
  int v79; // [rsp+90h] [rbp-70h]
  int v80[2]; // [rsp+98h] [rbp-68h]
  unsigned int v81; // [rsp+A0h] [rbp-60h]
  int v82; // [rsp+A4h] [rbp-5Ch]
  unsigned int v83; // [rsp+A8h] [rbp-58h]
  _BYTE v84[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h]
  _BYTE v86[224]; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL v87; // [rsp+1B0h] [rbp+B0h] BYREF
  int v88; // [rsp+1B8h] [rbp+B8h]
  int v89; // [rsp+1BCh] [rbp+BCh]
  _QWORD v90[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v91; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v92; // [rsp+1E0h] [rbp+E0h]
  __int64 v93; // [rsp+1E8h] [rbp+E8h]
  __int64 v94; // [rsp+1F0h] [rbp+F0h]
  SURFACE *v95; // [rsp+1F8h] [rbp+F8h]
  struct SURFACE *v96; // [rsp+200h] [rbp+100h]
  struct SURFACE *v97; // [rsp+208h] [rbp+108h]
  __int64 v98; // [rsp+210h] [rbp+110h]
  char v99[8]; // [rsp+218h] [rbp+118h] BYREF
  char *v100; // [rsp+220h] [rbp+120h]
  _DWORD v101[6]; // [rsp+258h] [rbp+158h] BYREF
  int v102; // [rsp+270h] [rbp+170h] BYREF
  int v103; // [rsp+274h] [rbp+174h]
  int v104; // [rsp+278h] [rbp+178h]
  int v105; // [rsp+27Ch] [rbp+17Ch]
  __int64 v106; // [rsp+290h] [rbp+190h]
  unsigned int v107; // [rsp+298h] [rbp+198h]
  int v108; // [rsp+29Ch] [rbp+19Ch]

  v80[0] = a2;
  v77 = a4;
  v78 = a3;
  v82 = a11 & 0x40000000;
  v98 = 0LL;
  v108 = 0;
  v73 = 0;
  v15 = a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF);
  v79 = a5;
  v16 = 0;
  v72 = (a11 & 0x40000000) != 0;
  v107 = ((v15 >> 8) | v15 & 0xFF0000) >> 8;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v15 >> 8) >> 8];
  v19 = v18 | gajRop3[(unsigned __int64)v107 >> 8];
  v83 = v18 | (unsigned __int8)gajRop3[(unsigned __int64)v107 >> 8];
  v20 = v19 & 0xD4;
  if ( !v20 )
  {
    v17 = (((unsigned int)(a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF)) >> 8) | a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF) & 0xFF0000) >> 8;
    if ( (unsigned __int8)v17 == v17 >> 8 )
    {
      v16 = NtGdiPatBlt(a1, a2, a3, a4, a5, a11 & ((a11 & 0x40000000) != 0 ? 0x3FFFFFFF : 0x7FFFFFFF));
      goto LABEL_76;
    }
  }
  v70 = 0LL;
  v71 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v70, a1);
  if ( ((gajRop3[(unsigned __int8)v15] | gajRop3[BYTE1(v15)]) & 2) != 0 && v15 != 16711778 && v15 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)&v70, a2, v78, v77, v79);
  v74 = 0LL;
  v75 = 0;
  v76 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v74, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)&v74, a7, a8, a9, a10);
  v21 = v70;
  if ( !v70 )
    goto LABEL_135;
  if ( (*((_DWORD *)v70 + 9) & 0x10000) == 0 )
  {
    v22 = *((_QWORD *)v70 + 122);
    if ( (*(_DWORD *)(v22 + 152) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v70, *(_QWORD *)(v22 + 160));
      v21 = v70;
    }
  }
  if ( !v21 || (*((_DWORD *)v21 + 9) & 0x10000) != 0 || !v74 && v20 )
  {
LABEL_135:
    EngSetLastError(6u);
    v48 = (DC *)v74;
    if ( !v20 || v74 )
      v16 = 1;
    goto LABEL_58;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v86);
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v86, (struct XDCOBJ *)&v70, (struct XDCOBJ *)&v74, v72);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v86, (struct XDCOBJ *)&v70);
  if ( (v86[112] & 1) == 0 )
  {
    v63 = 8;
    goto LABEL_143;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)&v70);
  v24 = v70;
  v25 = (DC *)v74;
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v74)
    && (*(_DWORD *)(*((_QWORD *)v25 + 62) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_16;
  }
  if ( !*((_QWORD *)v24 + 62) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v74) )
  {
    if ( (*((_DWORD *)v24 + 9) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v84, (struct XDCOBJ *)&v70, 0x204u);
      v87.x = v80[0];
      v88 = v80[0] + v77;
      v87.y = v78;
      v89 = v78 + v79;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v84, &v87) )
      {
        ERECTL::vOrder((ERECTL *)&v87);
        XDCOBJ::vAccumulate((XDCOBJ *)&v70, (struct ERECTL *)&v87);
      }
    }
    v16 = 1;
    goto LABEL_57;
  }
  if ( (*((_DWORD *)v25 + 9) & 1) != 0 )
  {
LABEL_16:
    if ( v20 )
    {
      v26 = (struct SURFACE *)*((_QWORD *)v25 + 62);
      if ( !v26 )
        v26 = SURFACE::pdibDefault;
      if ( *((_DWORD *)v26 + 164) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v26 + 164)
        || !(unsigned int)_SurfaceAccessCheck(v26) )
      {
        goto LABEL_141;
      }
      v24 = v70;
    }
    v27 = (struct SURFACE *)*((_QWORD *)v24 + 62);
    if ( !v27 )
      v27 = SURFACE::pdibDefault;
    if ( (unsigned int)DestSurfaceAccessCheck(v27) )
    {
      if ( (unsigned __int8)v107 == BYTE1(v107) )
      {
        v28 = v70;
        if ( (a11 < 0 && (v29 = *((_QWORD *)v70 + 122), (*(_DWORD *)(v29 + 108) & 1) != 0)
           || (v29 = *((_QWORD *)v70 + 122), (*(_BYTE *)(v29 + 108) & 9) == 9))
          && a6 != a1 )
        {
          v64 = *(_QWORD *)(v29 + 308);
          v65 = DC::dwSetLayout(v70, -1, 0);
          v30 = v64 - v77 - v80[0];
          v28 = v70;
          v73 = v65;
          v81 = 0x80000000;
        }
        else
        {
          v81 = 0;
          v30 = v80[0];
        }
        v31 = 0LL;
        v87 = 0LL;
        v32 = v74[62];
        if ( v32 )
          v33 = v74[62];
        else
          v33 = SURFACE::pdibDefault;
        v34 = *((_QWORD *)v33 + 6);
        *(_QWORD *)v80 = v33;
        v85 = 0LL;
        if ( !v82 )
          goto LABEL_32;
        v55 = *((_DWORD *)v74 + 9);
        if ( (v55 & 1) == 0
          || (v56 = v74[6], (*((_DWORD *)v56 + 10) & 0x80u) != 0)
          || v56 != *((SURFACE **)v28 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v70) || v66 != *(_QWORD *)(v67 + 3520))
          || !v34 )
        {
          v72 = 0;
          goto LABEL_32;
        }
        if ( v20 && (v55 & 0x4000) != 0 && v32 != *((SURFACE **)v28 + 62) )
        {
          SURFACE::bUnMap(v32, 0LL, 0LL);
          v28 = v70;
        }
        if ( (*((_DWORD *)v28 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v28 + 62), 0LL, v28);
        GreAcquireSemaphore(*(_QWORD *)(v34 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v34 + 64), 4LL);
        v85 = *(_QWORD *)(v34 + 72);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
        if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
          GreMovePointer(*(HDEV *)(*(_QWORD *)v80 + 48LL));
        SURFACE::vSetIncludeSprites();
        if ( v20 && (*((_DWORD *)v74 + 9) & 0x4000) != 0 )
        {
          v57 = v70;
          v58 = v74[62];
          if ( v58 == *((SURFACE **)v70 + 62) )
            goto LABEL_108;
          if ( (unsigned int)SURFACE::Map(v58) == 2 )
          {
            v31.x = 1;
            *((_DWORD *)v74 + 11) |= 1u;
          }
        }
        v57 = v70;
LABEL_108:
        if ( (*((_DWORD *)v57 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v57 + 62)) == 2 )
        {
          v31.x = 1;
          *((_DWORD *)v70 + 11) |= 1u;
        }
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
        if ( v31.x )
        {
LABEL_54:
          v47 = v72;
          if ( v81 )
            DC::dwSetLayout(v70, -1, v73);
          if ( !v47 )
            goto LABEL_57;
          SURFACE::vClearIncludeSprites();
          if ( v20 && (*((_DWORD *)v74 + 9) & 0x4000) != 0 )
          {
            v59 = v74[62];
            v60 = v70;
            if ( v59 == *((SURFACE **)v70 + 62) )
              goto LABEL_116;
            SURFACE::bUnMap(v59, 0LL, 0LL);
          }
          v60 = v70;
LABEL_116:
          if ( (*((_DWORD *)v60 + 9) & 0x4000) != 0 )
            SURFACE::bUnMap(*((SURFACE **)v60 + 62), 0LL, v60);
          UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
          if ( (a13 & 2) == 0 || !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
            GreMovePointer(*(HDEV *)(*(_QWORD *)v80 + 48LL));
          EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v34 + 64));
          GreReleaseSemaphoreInternal(*(_QWORD *)(v34 + 64));
          if ( v20 && (*((_DWORD *)v74 + 9) & 0x4000) != 0 )
          {
            v61 = v70;
            v62 = v74[62];
            if ( v62 == *((SURFACE **)v70 + 62) )
              goto LABEL_126;
            if ( (unsigned int)SURFACE::Map(v62) == 2 )
              *((_DWORD *)v74 + 11) |= 1u;
          }
          v61 = v70;
LABEL_126:
          if ( (*((_DWORD *)v61 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v61 + 62)) == 2 )
            *((_DWORD *)v70 + 11) |= 1u;
          UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v84);
          goto LABEL_57;
        }
        v31 = v87;
LABEL_32:
        EXFORMOBJ::vInit((EXFORMOBJ *)v90, (struct XDCOBJ *)&v70, 0x204u, 0);
        v35 = (struct SURFACE *)*((_QWORD *)v70 + 62);
        if ( !v35 )
          v35 = SURFACE::pdibDefault;
        v96 = v35;
        v92 = *((_QWORD *)v35 + 16);
        v93 = *((_QWORD *)v70 + 11);
        EXFORMOBJ::vInit((EXFORMOBJ *)&v91, (struct XDCOBJ *)&v74, 0x204u, 0);
        v36 = v74[62];
        if ( !v36 )
          v36 = SURFACE::pdibDefault;
        v37 = a12;
        v97 = v36;
        v38 = *((_QWORD *)v36 + 16);
        v94 = v38;
        v39 = v74[11];
        v95 = v39;
        if ( a12 == -1 )
          v37 = *((_DWORD *)v74[122] + 45);
        if ( (a13 & 1) != 0 )
          v31 = *(struct _POINTL *)(*((_QWORD *)v70 + 122) + 248LL);
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD))EXLATEOBJ::bInitXlateObj)(
                              v99,
                              v31,
                              *((unsigned int *)v70 + 30),
                              v38,
                              v92,
                              v39,
                              v93,
                              *(_DWORD *)(*((_QWORD *)v70 + 122) + 184LL),
                              *(_DWORD *)(*((_QWORD *)v70 + 122) + 176LL),
                              v37,
                              0) )
          goto LABEL_161;
        v40 = v83;
        v108 |= 2u;
        if ( (v83 & 0xE8) != 0 )
        {
          v100 = (char *)v70 + 1184;
          v68 = *((_QWORD *)v70 + 122);
          v69 = *(_DWORD *)(v68 + 152);
          if ( (v69 & 1) != 0 || (*((_DWORD *)v70 + 79) & 1) != 0 )
          {
            *(_DWORD *)(v68 + 152) = v69 & 0xFFFFFFFE;
            *((_DWORD *)v70 + 79) &= ~1u;
            EBRUSHOBJ::vInitBrush(v100, v70, *((_QWORD *)v70 + 17), v93, v92, v96, 1);
          }
          v106 = *((_QWORD *)v70 + 147);
        }
        else
        {
          v100 = 0LL;
        }
        v98 = 0LL;
        if ( (*(_DWORD *)(v91 + 32) & 1) != 0 )
        {
          v41 = a7;
          v42 = a8;
          v43 = a7 + a9;
          v44 = a8 + a10;
          v104 = a7 + a9;
          v105 = a8 + a10;
          v102 = a7;
          v103 = a8;
          if ( (*(_BYTE *)(v91 + 32) & 0x43) == 0x43 )
          {
LABEL_45:
            if ( v20 && (v41 == v43 || v42 == v44) )
            {
              v16 = 1;
              goto LABEL_54;
            }
            if ( (*(_DWORD *)(v90[0] + 32LL) & 1) != 0 )
            {
              v101[0] = v30;
              v101[2] = v30 + v77;
              v101[1] = v78;
              v101[3] = v78 + v79;
              if ( (*(_BYTE *)(v90[0] + 32LL) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v90[0], v101) )
                goto LABEL_160;
              v45 = *(_BYTE *)(*((_QWORD *)v70 + 122) + 215LL);
              if ( v45 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v90) )
                v46 = BLTRECORD::bStretch((BLTRECORD *)v90, (struct DCOBJ *)&v70, (struct DCOBJ *)&v74, v40, v45);
              else
                v46 = BLTRECORD::bBitBlt((BLTRECORD *)v90, &v70, (struct DCOBJ *)&v74, v40);
            }
            else
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v90, v30, v78, v77, v79);
              v46 = BLTRECORD::bRotate(
                      (BLTRECORD *)v90,
                      (struct DCOBJ *)&v70,
                      (struct DCOBJ *)&v74,
                      v40,
                      *(_BYTE *)(*((_QWORD *)v70 + 122) + 215LL));
            }
            v16 = v46;
            goto LABEL_54;
          }
          if ( (unsigned int)bCvtPts1(v91, &v102) )
          {
            v44 = v105;
            v43 = v104;
            v42 = v103;
            v41 = v102;
            goto LABEL_45;
          }
        }
LABEL_160:
        EngSetLastError(0x57u);
LABEL_161:
        v16 = 0;
        goto LABEL_54;
      }
      v63 = 87;
LABEL_143:
      EngSetLastError(v63);
      goto LABEL_57;
    }
LABEL_141:
    v63 = 5;
    goto LABEL_143;
  }
LABEL_57:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v86);
  v48 = (DC *)v74;
LABEL_58:
  if ( v48 )
  {
    if ( v75 && (*((_DWORD *)v48 + 11) & 2) != 0 )
    {
      if ( !v76 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v74);
        v48 = (DC *)v74;
        if ( UserAttr )
        {
          DC::RestoreAttributes((DC *)v74, UserAttr);
          v48 = (DC *)v74;
        }
      }
      *((_DWORD *)v48 + 11) &= ~2u;
      v75 = 0;
      v48 = (DC *)v74;
    }
    v73 = 0;
    v50 = *(_QWORD *)v48;
    HmgDecrementExclusiveReferenceCountEx(v48, v76, &v73);
    if ( v73 )
      bDeleteDCInternalEx(v50, 0LL);
  }
  v51 = v70;
  if ( v70 )
  {
    if ( (_DWORD)v71 && (*((_DWORD *)v70 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v71) )
      {
        v52 = XDCOBJ::GetUserAttr((XDCOBJ *)&v70);
        v51 = v70;
        if ( v52 )
        {
          DC::RestoreAttributes(v70, v52);
          v51 = v70;
        }
      }
      *((_DWORD *)v51 + 11) &= ~2u;
      LODWORD(v71) = 0;
      v51 = v70;
    }
    v73 = 0;
    v53 = *(_QWORD *)v51;
    HmgDecrementExclusiveReferenceCountEx(v51, HIDWORD(v71), &v73);
    if ( v73 )
      bDeleteDCInternalEx(v53, 0LL);
  }
LABEL_76:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v90);
  return v16;
}
