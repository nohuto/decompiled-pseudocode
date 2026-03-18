/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C000E720 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C004444C (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x1C0045170 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     GreSetPaletteOwner @ 0x1C0045950 (GreSetPaletteOwner.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0046920 (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     hfontCreate @ 0x1C0046D7C (hfontCreate.c)
 *     vConvertLogFontW @ 0x1C004818C (vConvertLogFontW.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00487D8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     IsvConvertLogFontWSupported @ 0x1C0048908 (IsvConvertLogFontWSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C004A6D0 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C004E7DC (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSemaphore @ 0x1C00735F0 (GreDeleteSemaphore.c)
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C007B8F0 (GreReleaseSemaphoreInternal.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008B0D8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0099480 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009B114 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009B144 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C009B198 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C009B1C4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00A84F0 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0156D6C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C01FD2D8 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct tagREMOTETYPEONENODE *a8,
        struct _GDIINFO *a9,
        struct tagDEVINFO *a10,
        int a11,
        unsigned int a12,
        unsigned int a13)
{
  struct PDEV *v17; // rax
  __int64 v18; // rdi
  __int64 SemaphoreInternal; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  struct _DRVFN *v23; // rcx
  unsigned int v24; // edx
  struct _GDIINFO *v25; // rcx
  _OWORD *v26; // rax
  __int64 v27; // rdx
  __int128 v28; // xmm1
  __int64 v29; // rdx
  _OWORD *v31; // rcx
  __int128 v32; // xmm1
  int v33; // ecx
  int v34; // r8d
  void *v35; // r14
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // rdx
  int *v39; // r8
  int v40; // eax
  unsigned __int64 v41; // rdx
  int v42; // r15d
  __int64 v43; // rcx
  int v44; // edx
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  unsigned int *v53; // rcx
  unsigned int v54; // eax
  bool v55; // cc
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  __int64 v58; // rax
  __int64 v59; // rcx
  int v60; // edx
  int v61; // eax
  __int64 (__fastcall *v62)(PDEVOBJ *); // rax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  int v66; // edx
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // eax
  int v70; // r14d
  int *v71; // rax
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  signed __int32 v75; // ett
  _DWORD *v76; // rbx
  unsigned int v77; // edi
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v80)(_QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v81)(_QWORD, _QWORD, _QWORD); // rax
  _QWORD *v82; // rax
  int v83; // r8d
  _QWORD *v84; // rax
  int v85; // r8d
  __int64 v86; // rax
  struct _ERESOURCE *v87; // rcx
  struct _ERESOURCE *v88; // rcx
  struct PDEV *v89; // rcx
  unsigned int v91; // [rsp+28h] [rbp-D8h]
  unsigned int v92; // [rsp+38h] [rbp-C8h]
  unsigned int v93; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  void *v95; // [rsp+70h] [rbp-90h] BYREF
  __int64 v96; // [rsp+78h] [rbp-88h] BYREF
  struct _DRVFN *v97; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v98; // [rsp+88h] [rbp-78h]
  _BYTE v99[432]; // [rsp+90h] [rbp-70h] BYREF

  v95 = a7;
  v17 = PDEV::Allocate(a11);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 3) = v17;
  *(_QWORD *)(*(_QWORD *)this + 1792LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1784LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2608LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 2612LL) = a13;
  *(_DWORD *)(*(_QWORD *)this + 3552LL) = 0;
  v18 = *(_QWORD *)this;
  v96 = v18;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1792) + 24LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal(0);
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_143;
    SemaphoreInternal = GreCreateSemaphoreInternal(0);
    *(_QWORD *)(*(_QWORD *)this + 56LL) = SemaphoreInternal;
    if ( !SemaphoreInternal )
      goto LABEL_143;
  }
  if ( (a12 & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)this + 2612LL) = 5;
  v20 = *(_QWORD *)this;
  v21 = *(_QWORD *)(*(_QWORD *)this + 1792LL);
  if ( *(_DWORD *)(v21 + 24) == 1 && *(_DWORD *)(v20 + 2612) == 5 )
  {
    if ( qword_1C0257600 )
      v22 = qword_1C0257600();
    else
      v22 = -1073741637;
    if ( v22 >= 0 )
    {
      v23 = 0LL;
      v24 = 0;
      v97 = 0LL;
      v93 = 0;
      if ( qword_1C0257608 )
      {
        qword_1C0257608(&v97, &v93);
        v23 = v97;
        v24 = v93;
      }
      bFillFunctionTable(v23, v24, (__int64 (**)(void))(*(_QWORD *)this + 2688LL));
    }
  }
  else
  {
    memmove((void *)(v20 + 2688), (const void *)(v21 + 64), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1712LL) = a8;
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  v25 = a9;
  if ( a9 )
  {
    v26 = (_OWORD *)(*(_QWORD *)this + 2136LL);
    v27 = 2LL;
    do
    {
      *v26 = *(_OWORD *)&v25->ulVersion;
      v26[1] = *(_OWORD *)&v25->ulHorzRes;
      v26[2] = *(_OWORD *)&v25->ulNumColors;
      v26[3] = *(_OWORD *)&v25->flTextCaps;
      v26[4] = *(_OWORD *)&v25->ulAspectX;
      v26[5] = *(_OWORD *)&v25->yStyleStep;
      v26[6] = *(_OWORD *)&v25->szlPhysSize.cx;
      v26 += 8;
      v28 = *(_OWORD *)&v25->ciDevice.Red.y;
      v25 = (struct _GDIINFO *)((char *)v25 + 128);
      *(v26 - 1) = v28;
      --v27;
    }
    while ( v27 );
    v29 = 2LL;
    *v26 = *(_OWORD *)&v25->ulVersion;
    v26[1] = *(_OWORD *)&v25->ulHorzRes;
    v26[2] = *(_OWORD *)&v25->ulNumColors;
    v26[3] = *(_OWORD *)&v25->flTextCaps;
    v31 = (_OWORD *)(*(_QWORD *)this + 1824LL);
    do
    {
      *v31 = *(_OWORD *)a10;
      v31[1] = *((_OWORD *)a10 + 1);
      v31[2] = *((_OWORD *)a10 + 2);
      v31[3] = *((_OWORD *)a10 + 3);
      v31[4] = *((_OWORD *)a10 + 4);
      v31[5] = *((_OWORD *)a10 + 5);
      v31[6] = *((_OWORD *)a10 + 6);
      v31 += 8;
      v32 = *((_OWORD *)a10 + 7);
      a10 = (struct tagDEVINFO *)((char *)a10 + 128);
      *(v31 - 1) = v32;
      --v29;
    }
    while ( v29 );
    *v31 = *(_OWORD *)a10;
    v31[1] = *((_OWORD *)a10 + 1);
    v31[2] = *((_OWORD *)a10 + 2);
    *((_QWORD *)v31 + 6) = *((_QWORD *)a10 + 6);
  }
  v98 = (_DWORD *)(v18 + 40);
  SETFLAG(a11, (volatile unsigned int *)(v18 + 40), 0x8000);
  if ( v33 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 5);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = gppdevListUMPDInCreate;
    gppdevListUMPDInCreate = *(struct PDEV **)this;
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v34);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  v35 = v95;
  *(_QWORD *)(*(_QWORD *)this + 1800LL) = PDEVOBJ::EnablePDEV(
                                            (PDEVOBJ *)&v96,
                                            a3,
                                            a4,
                                            *(_QWORD *)this + 2136LL,
                                            (HSURF *)(*(_QWORD *)this + 1456LL),
                                            v91,
                                            (struct _GDIINFO *)(*(_QWORD *)this + 2136LL),
                                            v92,
                                            (struct tagDEVINFO *)(*(_QWORD *)this + 1824LL),
                                            *(HDEV *)this,
                                            a6,
                                            v95);
  v36 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1800LL) )
  {
LABEL_143:
    v42 = a11;
    goto LABEL_144;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v36 + 1792) + 24LL) != 6 )
  {
    v37 = *(_DWORD *)(v36 + 2144);
    if ( v37 > 0 )
    {
      LODWORD(v38) = 1000 * v37;
    }
    else if ( v37 )
    {
      LODWORD(v38) = -v37;
    }
    else
    {
      v38 = 25400 * (unsigned __int64)*(unsigned int *)(v36 + 2152) / 0x60;
    }
    *(_DWORD *)(v36 + 2144) = v38;
    v39 = (int *)(*(_QWORD *)this + 2148LL);
    v40 = *v39;
    if ( *v39 > 0 )
    {
      LODWORD(v41) = 1000 * v40;
    }
    else if ( v40 )
    {
      LODWORD(v41) = -v40;
    }
    else
    {
      v41 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2156LL) / 0x60;
    }
    v42 = a11;
    *v39 = v41;
    if ( !a11 )
    {
      v43 = *(_QWORD *)this;
      v44 = *(_DWORD *)(*(_QWORD *)this + 2180LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2176LL) != v44 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v43 + 2182) - 100) <= 0x190u )
        {
          *(_DWORD *)(v43 + 3552) = v44;
          *(_DWORD *)(*(_QWORD *)this + 2180LL) = *(_DWORD *)(*(_QWORD *)this + 2176LL);
        }
        else
        {
          *(_DWORD *)(v43 + 2180) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0;
        }
      }
    }
    v45 = *(_DWORD **)this;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2176LL) )
    {
      v45[544] = 96;
      v45 = *(_DWORD **)this;
    }
    if ( !v45[545] )
    {
      v45[545] = 96;
      v45 = *(_DWORD **)this;
    }
    if ( v45[535] == 1 )
    {
      v45[553] = 1;
      *(_DWORD *)(*(_QWORD *)this + 2216LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2220LL) = 3;
      v45 = *(_DWORD **)this;
    }
    v46 = v45[535];
    v47 = 17424;
    if ( (v46 & 0xFFFFFFFB) != 0 )
      v47 = 28313;
    v48 = v47 | 0x1000;
    if ( v46 != 1 )
      v48 = v47;
    v49 = v48 | 0x100;
    if ( (v45[456] & 0x80000) == 0 )
      v49 = v48;
    v45[543] = v49;
    EPALOBJ::EPALOBJ((EPALOBJ *)&v94, *(HPALETTE *)(*(_QWORD *)this + 2120LL));
    v52 = v94;
    if ( !v94 )
      goto LABEL_136;
    if ( (*(_DWORD *)(v94 + 24) & 0x1000000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v51);
      if ( (*(_DWORD *)(v52 + 24) & 0x1000000) == 0 )
        goto LABEL_136;
    }
    if ( !*(_DWORD *)(v52 + 28) )
    {
      v53 = *(unsigned int **)(v52 + 112);
      v50 = *v53;
      v54 = v53[1];
      v55 = v54 <= (unsigned int)v50;
      if ( v54 < (unsigned int)v50 )
      {
        v56 = v53[2];
        if ( (unsigned int)v50 > v56 )
        {
          v51 = v54 <= v56;
LABEL_65:
          *(_DWORD *)(*(_QWORD *)this + 2368LL) = v51;
          goto LABEL_67;
        }
        v55 = v54 <= (unsigned int)v50;
      }
      if ( !v55 )
      {
        v57 = v53[2];
        if ( v54 > v57 )
        {
          v51 = 3 - (unsigned int)(v57 < (unsigned int)v50);
          goto LABEL_65;
        }
      }
      v51 = *(_QWORD *)this;
      *(_DWORD *)(*(_QWORD *)this + 2368LL) = (v54 < (unsigned int)v50) + 4;
    }
LABEL_67:
    if ( (*(_DWORD *)(*(_QWORD *)this + 2172LL) & 0x100) != 0 )
    {
      if ( !a11 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v51), *(_DWORD *)(v52 + 28) == 256) )
      {
        if ( !(unsigned int)CreateSurfacePal(
                              v52,
                              v50,
                              *(unsigned int *)(*(_QWORD *)this + 2168LL),
                              *(unsigned int *)(*(_QWORD *)this + 2240LL)) )
          goto LABEL_136;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)this + 1824LL) &= ~0x80000u;
        *(_DWORD *)(*(_QWORD *)this + 2172LL) &= ~0x100u;
      }
    }
    if ( !a11 || (unsigned int)GreSetPaletteOwner(*(void **)v52, 0LL) )
    {
      v58 = *(_QWORD *)this;
      v94 = 0LL;
      *(_QWORD *)(v58 + 1808) = v52;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v94);
      v59 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
      {
        v60 = *(_DWORD *)(*(_QWORD *)(v59 + 1792) + 24LL);
        if ( v60 != 1 && v60 != 4 )
          goto LABEL_92;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v59 + 1792) + 24LL) == 2 )
      {
        if ( qword_1C0257610 )
          v61 = qword_1C0257610();
        else
          v61 = -1073741637;
        if ( v61 < 0 )
          goto LABEL_92;
        v62 = (__int64 (__fastcall *)(PDEVOBJ *))qword_1C0257618;
      }
      else
      {
        if ( qword_1C0257620 )
          v63 = qword_1C0257620();
        else
          v63 = -1073741637;
        if ( v63 < 0 )
          goto LABEL_92;
        v62 = (__int64 (__fastcall *)(PDEVOBJ *))qword_1C0257628;
      }
      if ( v62 )
        v64 = v62(this);
      else
        v64 = 0;
      if ( !v64 )
        goto LABEL_144;
LABEL_92:
      *(_QWORD *)(*(_QWORD *)this + 2560LL) = v35;
      v65 = *(_QWORD *)this;
      v66 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL);
      if ( ((v66 - 1) & 0xFFFFFFFD) == 0 || v66 == 4 )
      {
        *(_QWORD *)(v65 + 1736) = *(_QWORD *)(v18 + 2928);
        *(_QWORD *)(*(_QWORD *)this + 1728LL) = *(_QWORD *)(v18 + 2920);
        v95 = ghsemDriverMgmt;
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        *(_QWORD *)(*(_QWORD *)this + 64LL) = GreCreateSemaphoreInternal(0);
        if ( !*(_QWORD *)(*(_QWORD *)this + 64LL) )
        {
          SEMOBJ::vUnlock((SEMOBJ *)&v95, v67, v68);
LABEL_144:
          if ( v42 )
          {
            EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
            RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v85);
            GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          }
          v86 = *(_QWORD *)this;
          v87 = *(struct _ERESOURCE **)(*(_QWORD *)this + 56LL);
          if ( v87 )
          {
            GreDeleteSemaphore(v87);
            v86 = *(_QWORD *)this;
          }
          v88 = *(struct _ERESOURCE **)(v86 + 48);
          if ( v88 )
          {
            GreDeleteSemaphore(v88);
            v86 = *(_QWORD *)this;
          }
          if ( *(_QWORD *)(v86 + 1512) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
            PDEVOBJ_bDisableHalftoneWrap(this);
          PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(this);
          v89 = *(struct PDEV **)this;
          if ( *(_QWORD *)(*(_QWORD *)this + 1800LL) )
          {
            (*(void (__fastcall **)(_QWORD))(v18 + 2704))(*(_QWORD *)(*(_QWORD *)this + 1800LL));
            *(_QWORD *)(*(_QWORD *)this + 1800LL) = 0LL;
            v89 = *(struct PDEV **)this;
          }
          PDEV::Free(v89);
          *(_QWORD *)this = 0LL;
          return this;
        }
        *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
        SEMOBJ::vUnlock((SEMOBJ *)&v95, v67, v68);
        v65 = *(_QWORD *)this;
      }
      *(_QWORD *)(v65 + 1768) = *(_QWORD *)(v18 + 2864);
      *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(v18 + 2992);
      *(_QWORD *)(*(_QWORD *)this + 1760LL) = *(_QWORD *)(v18 + 3392);
      *(_QWORD *)(*(_QWORD *)this + 1776LL) = *(_QWORD *)(v18 + 3384);
      if ( qword_1C0257630 )
      {
        v69 = qword_1C0257630();
        v70 = -1073741637;
      }
      else
      {
        v70 = -1073741637;
        v69 = -1073741637;
      }
      if ( v69 >= 0 )
      {
        v71 = qword_1C0257638 ? (int *)qword_1C0257638() : 0LL;
        pgbFinishDefGUIFontInit = v71;
        if ( *v71 )
        {
          v72 = *(_QWORD *)this;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1792LL) + 24LL) == 1 )
          {
            if ( qword_1C0257640 )
            {
              v73 = qword_1C0257640();
              v72 = *(_QWORD *)this;
            }
            else
            {
              v73 = -1073741637;
            }
            if ( v73 >= 0 && qword_1C0257648 )
              qword_1C0257648(*(unsigned int *)(v72 + 2180));
            *pgbFinishDefGUIFontInit = 0;
          }
        }
      }
      v74 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v75 = *(_DWORD *)(v74 + 40);
      while ( v75 != _InterlockedCompareExchange((volatile signed __int32 *)(v74 + 40), v75 & 0xFFFFFFBF, v75) );
      v76 = *(_DWORD **)this;
      v77 = 12 * *(_DWORD *)(*(_QWORD *)this + 2180LL) / 0x48u;
      memset(v99, 0, 0x1A4uLL);
      if ( !v76[457] )
      {
        v76[457] = v77;
        v76 = *(_DWORD **)this;
      }
      if ( !v76[480] )
      {
        v76[480] = v77;
        v76 = *(_DWORD **)this;
      }
      if ( !v76[503] )
        v76[503] = v77;
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v78 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 2140LL) != 1 )
      {
        if ( qword_1C0257660 )
          v70 = qword_1C0257660();
        if ( v70 < 0 )
          goto LABEL_130;
        v79 = hfontCreate((__int64)v99, 4LL);
        *(_QWORD *)(*(_QWORD *)this + 1432LL) = v79;
        if ( v79 )
          goto LABEL_130;
        v78 = *(_QWORD *)this;
      }
      *(_QWORD *)(v78 + 1432) = gahStockObjects[13];
LABEL_130:
      if ( (int)IsvConvertLogFontWSupported() >= 0 )
        vConvertLogFontW();
      v80 = hfontCreate((__int64)v99, 5LL);
      *(_QWORD *)(*(_QWORD *)this + 1440LL) = v80;
      if ( !v80 )
        *(_QWORD *)(*(_QWORD *)this + 1440LL) = gahStockObjects[13];
      vConvertLogFontW();
      v81 = hfontCreate((__int64)v99, 6LL);
      *(_QWORD *)(*(_QWORD *)this + 1448LL) = v81;
      if ( !v81 )
        *(_QWORD *)(*(_QWORD *)this + 1448LL) = gahStockObjects[16];
      goto LABEL_138;
    }
LABEL_136:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v94);
    goto LABEL_144;
  }
  v42 = a11;
LABEL_138:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*v98 & 1) != 0 )
  {
    PDEVOBJ::bDisabled((PDEVOBJ *)&v96, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v82 = (_QWORD *)(*(_QWORD *)this + 2624LL);
  v82[1] = v82;
  *v82 = v82;
  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( v42 )
    RemovePDEVFromList(&gppdevListUMPDInCreate, *(struct PDEV **)this);
  **(_QWORD **)this = gppdevList;
  gppdevList = *(struct PDEV **)this;
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v83);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  PDEVOBJ::CompletePDEV((PDEVOBJ *)&v96, *(struct DHPDEV__ **)(*(_QWORD *)this + 1800LL), *(HDEV *)this);
  v84 = (_QWORD *)(*(_QWORD *)this + 3528LL);
  v84[1] = v84;
  *v84 = v84;
  return this;
}
