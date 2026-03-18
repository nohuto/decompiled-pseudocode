/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0
 * Callers:
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AB8A4 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C004A410 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     DrvBuildDevmodeList @ 0x1C00AC550 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00AC8E8 (DrvGetDisplayDriverParameters.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00ACE14 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        struct _devicemodeW *a10)
{
  unsigned int v12; // r14d
  const struct _devicemodeW *v13; // rsi
  struct _devicemodeW *v14; // r13
  __int64 v16; // rdx
  struct _devicemodeW *v17; // rbx
  __int64 v18; // r8
  int v19; // eax
  struct _devicemodeW *v20; // rdi
  unsigned int dmSize; // eax
  unsigned int dmDriverExtra; // r13d
  unsigned int v23; // r12d
  struct _devicemodeW *v24; // rax
  DWORD dmFields; // ecx
  int v26; // eax
  struct tagGRAPHICS_DEVICE *v27; // r15
  const struct _devicemodeW *v28; // r10
  WCHAR *dmBitsPerPel; // rcx
  DWORD v30; // eax
  DWORD v31; // eax
  __int64 v32; // rdx
  DWORD dmDisplayFlags; // eax
  DWORD v34; // ecx
  char v35; // r8
  unsigned int dmDisplayOrientation; // eax
  __int64 v37; // r8
  DWORD v38; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  unsigned int v41; // r12d
  struct _devicemodeW *v42; // rdi
  char *v43; // rdx
  struct _devicemodeW *v44; // r12
  __int64 v45; // rdx
  struct _devicemodeW *v46; // r13
  int v47; // eax
  int v48; // r11d
  int v49; // eax
  int v50; // r10d
  int v51; // ebp
  unsigned int v52; // eax
  __int64 v53; // rcx
  DWORD v54; // eax
  DWORD v55; // ecx
  struct _devicemodeW *v56; // rax
  DWORD v57; // r8d
  unsigned int v58; // r14d
  WORD dmLogPixels; // ax
  int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // r8
  struct _devicemodeW *ClosestMode; // rcx
  int v65; // eax
  unsigned __int16 v66; // cx
  DWORD dmDisplayFrequency; // eax
  __int64 v68; // rax
  bool v69; // zf
  unsigned int v70; // ebp
  __int64 v71; // rax
  DWORD *v72; // r15
  struct _devicemodeW *v73; // rcx
  DWORD v74; // eax
  _OWORD *v75; // rcx
  int v76; // ecx
  int v77; // [rsp+20h] [rbp-98h]
  int v78; // [rsp+24h] [rbp-94h]
  DWORD dmPanningHeight; // [rsp+28h] [rbp-90h]
  DWORD v80; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v81; // [rsp+30h] [rbp-88h]
  LONG x; // [rsp+34h] [rbp-84h]
  LONG v83; // [rsp+38h] [rbp-80h]
  DWORD dmPanningWidth; // [rsp+3Ch] [rbp-7Ch]
  BOOL v85; // [rsp+40h] [rbp-78h]
  int v86; // [rsp+44h] [rbp-74h]
  int v87; // [rsp+48h] [rbp-70h]
  struct _devicemodeW *v88; // [rsp+50h] [rbp-68h]
  __int64 v89; // [rsp+58h] [rbp-60h]
  struct _devicemodeW *v90; // [rsp+60h] [rbp-58h]
  unsigned int v93; // [rsp+D0h] [rbp+18h]
  unsigned int Srca; // [rsp+E0h] [rbp+28h]
  unsigned int Srcb; // [rsp+E0h] [rbp+28h]

  v80 = 0;
  dmPanningWidth = 0;
  dmPanningHeight = 0;
  v12 = -1073741823;
  v85 = 0;
  v13 = 0LL;
  v90 = 0LL;
  v14 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 0x76656447u, 0);
  if ( v17 )
  {
    v19 = *((_DWORD *)a1 + 40);
    v20 = a10;
    if ( (v19 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v90 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    Srca = dmSize;
    if ( dmSize < 0xBC )
      goto LABEL_128;
    v23 = dmSize + dmDriverExtra;
    v24 = (struct _devicemodeW *)PALLOCMEM2(dmSize + dmDriverExtra, 0x76656447u, 0);
    v13 = v24;
    if ( !v24 )
      goto LABEL_128;
    memmove(v24, Src, v23);
    dmFields = v13->dmFields;
    v18 = 0LL;
    v16 = 524320LL;
    v13->dmSize = Srca;
    v13->dmDriverExtra = dmDriverExtra;
    v26 = 1;
    if ( dmFields )
      v26 = a8;
    v87 = v26;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_128:
      Win32FreePool((__int64)v17, v16, v18);
      if ( v13 )
        Win32FreePool((__int64)v13, v61, v62);
      return v12;
    }
    v88 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x76656447u, 0);
    if ( !v88 )
      goto LABEL_128;
    memset(v17, 0, sizeof(struct _devicemodeW));
    v27 = a1;
    *(_DWORD *)&v17->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v17, 1LL, v20);
      v28 = v88;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v17, 0LL, v20) < 0 )
        *(_DWORD *)&v17->dmSize = 220;
      v28 = v88;
      dmBitsPerPel = &v17->dmFormName[13];
      *(_OWORD *)v88->dmDeviceName = *(_OWORD *)v17->dmDeviceName;
      *(_OWORD *)&v88->dmDeviceName[8] = *(_OWORD *)&v17->dmDeviceName[8];
      *(_OWORD *)&v88->dmDeviceName[16] = *(_OWORD *)&v17->dmDeviceName[16];
      *(_OWORD *)&v88->dmDeviceName[24] = *(_OWORD *)&v17->dmDeviceName[24];
      *(_OWORD *)&v88->dmSpecVersion = *(_OWORD *)&v17->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v88->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v17->76 + 4);
      *(_OWORD *)&v88->dmYResolution = *(_OWORD *)&v17->dmYResolution;
      *(_OWORD *)&v88->dmFormName[5] = *(_OWORD *)&v17->dmFormName[5];
      *(_OWORD *)&v88->dmFormName[13] = *(_OWORD *)&v17->dmFormName[13];
      *(_OWORD *)&v88->dmFormName[21] = *(_OWORD *)&v17->dmFormName[21];
      *(_OWORD *)&v88->dmFormName[29] = *(_OWORD *)&v17->dmFormName[29];
      *(_OWORD *)&v88->dmPelsHeight = *(_OWORD *)&v17->dmPelsHeight;
      *(_OWORD *)&v88->dmICMIntent = *(_OWORD *)&v17->dmICMIntent;
      *(_QWORD *)&v88->dmReserved2 = *(_QWORD *)&v17->dmReserved2;
      v88->dmPanningHeight = v17->dmPanningHeight;
      v30 = v13->dmFields;
      if ( (v30 & 0x40000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmBitsPerPel;
        if ( (_DWORD)dmBitsPerPel )
        {
          v17->dmBitsPerPel = (unsigned int)dmBitsPerPel;
          v30 = v13->dmFields;
        }
      }
      if ( (v30 & 0x80000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsWidth;
        if ( (_DWORD)dmBitsPerPel )
        {
          v17->dmPelsWidth = (unsigned int)dmBitsPerPel;
          v30 = v13->dmFields;
        }
      }
      if ( (v30 & 0x100000) != 0 )
      {
        dmBitsPerPel = (WCHAR *)v13->dmPelsHeight;
        if ( (_DWORD)dmBitsPerPel )
        {
          v17->dmPelsHeight = (unsigned int)dmBitsPerPel;
          v30 = v13->dmFields;
        }
      }
      if ( (v30 & 0x400000) != 0 && (v31 = v13->dmDisplayFrequency) != 0 )
      {
        v17->dmDisplayFrequency = v31;
      }
      else if ( v13->dmPelsWidth || v13->dmPelsHeight )
      {
        dmDisplayFrequency = v17->dmDisplayFrequency;
        v17->dmDisplayFrequency = 0;
        v80 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v23 == 244 )
        {
          v68 = WdLogNewEntry5_WdWarning(dmBitsPerPel, &v88->dmFormName[13], 0LL);
          WdLogEvent5_WdWarning(v68);
          v28 = v88;
        }
      }
    }
    v32 = 0LL;
    if ( (v13->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v13->dmDisplayFlags;
      v17->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v32) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v17->dmFields & 0x200000) != 0 )
    {
      v17->dmDisplayFlags &= 6u;
    }
    v34 = v13->dmFields;
    if ( (v34 & 0x18000000) == 0x18000000 )
    {
      if ( Srca < 0xDC )
      {
        v34 &= 0xE7FFFFFF;
        v13->dmFields = v34;
      }
      else
      {
        dmPanningWidth = v13->dmPanningWidth;
        dmPanningHeight = v13->dmPanningHeight;
        if ( dmPanningWidth > v17->dmPelsWidth || v13->dmPanningHeight > v17->dmPelsHeight )
        {
          v32 = 1LL;
          dmPanningHeight = v13->dmPanningHeight;
        }
      }
      v35 = v34;
    }
    else
    {
      v35 = v34;
      if ( (v17->dmFields & 0x18000000) == 0x18000000
        && v17->dmPanningHeight < v17->dmPelsHeight
        && v17->dmPanningWidth < v17->dmPelsWidth )
      {
        dmPanningWidth = v17->dmPanningWidth;
        dmPanningHeight = v17->dmPanningHeight;
      }
    }
    if ( v35 < 0 )
    {
      dmDisplayOrientation = v13->dmDisplayOrientation;
      v17->dmDisplayOrientation = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v32 = 1LL;
    }
    v37 = 0x20000000LL;
    v89 = 1LL;
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    {
      v38 = v13->dmFields;
      v89 = 1LL;
      if ( (v38 & 0x20400000) == 0x400000 )
      {
        v13->dmDisplayFixedOutput = 0;
        v13->dmFields = v38 | 0x20000000;
        v89 = 0LL;
      }
    }
    if ( (v13->dmFields & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
      v17->dmDisplayFixedOutput = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        v77 = 1;
        if ( dmDisplayFixedOutput > 2 )
          v32 = 1LL;
      }
      else
      {
        v77 = 3;
      }
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        v17->dmFields |= 0x20000000u;
    }
    else
    {
      v37 = 0LL;
      if ( (v17->dmFields & 0x20000000) != 0 )
        v37 = 2LL;
      v77 = v37;
    }
    if ( v90 )
      v85 = v17->dmDisplayFixedOutput == 0;
    if ( (v13->dmFields & 0x20) != 0 )
    {
      x = v13->dmPosition.x;
      y = v13->dmPosition.y;
      v78 = 1;
    }
    else
    {
      v78 = v17->dmFields & 0x20;
      x = v17->dmPosition.x;
      y = v17->dmPosition.y;
    }
    v83 = y;
    if ( (_DWORD)v32 == 1 )
      goto LABEL_127;
    v81 = dmDriverExtra;
    v41 = dmDriverExtra;
    if ( !dmDriverExtra
      && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
       || !v13->dmPelsWidth && !v13->dmPelsHeight
       || AreEquivalentDevModes(v13, v28)) )
    {
      v41 = v17->dmDriverExtra;
      v81 = v41;
    }
    v42 = (struct _devicemodeW *)PALLOCMEM2(v41 + 220, 0x76656447u, 1);
    if ( !v42 )
      goto LABEL_127;
    if ( v41 )
    {
      if ( dmDriverExtra )
      {
        v43 = (char *)v13 + Srca;
        goto LABEL_62;
      }
      if ( v17->dmDriverExtra )
      {
        v43 = (char *)v17 + v17->dmSize;
LABEL_62:
        memmove(&v42[1], v43, v41);
      }
    }
    v86 = 0;
    v44 = 0LL;
    DrvBuildDevmodeList(a1);
    v46 = (struct _devicemodeW *)*((_QWORD *)a1 + 22);
    if ( v17->dmBitsPerPel || v17->dmPelsWidth || v17->dmPelsHeight || v17->dmDisplayOrientation )
    {
      v47 = *((_DWORD *)a1 + 40);
      if ( (v47 & 8) != 0 && !*((_DWORD *)a1 + 46) )
      {
        v48 = 0;
        v44 = v17;
        goto LABEL_68;
      }
      if ( a9
        && (v47 & 0x800000) != 0
        && v17->dmDriverExtra + v17->dmSize == 244
        && v13->dmBitsPerPel != 4
        && v17->dmDisplayFrequency )
      {
        v44 = v17;
        if ( *((_DWORD *)a1 + 47) )
        {
          v75 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
          if ( v75 )
          {
            *(_OWORD *)v17->dmDeviceName = *v75;
            *(_OWORD *)&v17->dmDeviceName[8] = v75[1];
            *(_OWORD *)&v17->dmDeviceName[16] = v75[2];
            *(_OWORD *)&v17->dmDeviceName[24] = v75[3];
          }
        }
        v86 = 1;
        v48 = 2;
        v49 = 0;
        goto LABEL_69;
      }
      if ( v87 )
      {
        ClosestMode = GetClosestMode(a1, v17, a7, 1);
        if ( ClosestMode || (ClosestMode = GetClosestMode(a1, v17, a7, 0)) != 0LL )
        {
          v17->dmBitsPerPel = ClosestMode->dmBitsPerPel;
          v17->dmPelsWidth = ClosestMode->dmPelsWidth;
          v17->dmPelsHeight = ClosestMode->dmPelsHeight;
          v17->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
          v17->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
          v17->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
          v17->dmDisplayFlags = ClosestMode->dmDisplayFlags;
        }
      }
    }
    else
    {
      v65 = *((_DWORD *)a1 + 40);
      if ( (v65 & 0x6000000) != 0 )
      {
        v48 = 0;
        if ( v46 )
        {
          v17->dmBitsPerPel = v46->dmBitsPerPel;
          v17->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
          v17->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
          v17->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
          v17->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
          v17->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
          v17->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
        }
        goto LABEL_68;
      }
      if ( (v65 & 8) != 0 )
      {
        v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
      }
      else
      {
        v69 = gbBaseVideo == 0;
        v17->dmBitsPerPel = 0;
        v70 = !v69;
        v71 = 8LL * !v69;
        v72 = (DWORD *)((char *)&unk_1C0226488 + v71 + 4);
        if ( v87 )
        {
          do
          {
            v17->dmPelsWidth = *(v72 - 1);
            v17->dmPelsHeight = *v72;
            v73 = GetClosestMode(a1, v17, a7, 1);
            if ( (v73 || (v73 = GetClosestMode(a1, v17, a7, 0)) != 0LL) && v73->dmBitsPerPel > 0x10 )
              break;
            ++v70;
            v72 += 2;
          }
          while ( v70 < 3 );
          v12 = -1073741823;
          v27 = a1;
          v48 = 0;
          if ( v73 )
          {
            v17->dmBitsPerPel = v73->dmBitsPerPel;
            v17->dmPelsWidth = v73->dmPelsWidth;
            v17->dmPelsHeight = v73->dmPelsHeight;
            v17->dmDisplayFrequency = v73->dmDisplayFrequency;
            v17->dmDisplayOrientation = v73->dmDisplayOrientation;
            v17->dmDisplayFixedOutput = v73->dmDisplayFixedOutput;
            v17->dmDisplayFlags = v73->dmDisplayFlags;
          }
          goto LABEL_68;
        }
        v17->dmPelsWidth = *(_DWORD *)((char *)&unk_1C0226488 + v71);
        v74 = *v72;
        v27 = a1;
        v17->dmPelsHeight = v74;
      }
    }
    v48 = 0;
LABEL_68:
    v49 = 1;
LABEL_69:
    v50 = v48;
    v51 = v48;
    if ( v49 )
    {
      v52 = 0;
      Srcb = 0;
      v93 = *((_DWORD *)v27 + 47);
      if ( v93 )
      {
        do
        {
          v53 = *((_QWORD *)v27 + 24);
          v45 = v52;
          if ( a7 && *(_DWORD *)(v53 + 16LL * v52) )
            goto LABEL_76;
          v54 = v17->dmBitsPerPel;
          v45 *= 2LL;
          v46 = *(struct _devicemodeW **)(v53 + 8 * v45 + 8);
          if ( v54 )
          {
            if ( v54 != v46->dmBitsPerPel )
              goto LABEL_76;
          }
          if ( v17->dmPelsWidth != v46->dmPelsWidth )
            goto LABEL_76;
          if ( v17->dmPelsHeight != v46->dmPelsHeight )
            goto LABEL_76;
          v55 = v46->dmDisplayOrientation;
          if ( v17->dmDisplayOrientation != v55 )
            goto LABEL_76;
          v45 = v89;
          if ( v89 )
          {
            if ( v17->dmDisplayFixedOutput != v46->dmDisplayFixedOutput && (v77 == 1 || v50 == 2 && v48 == 2) )
              goto LABEL_76;
          }
          v56 = v46;
          if ( v44 )
            v56 = v44;
          v44 = v56;
          if ( !v48 )
          {
            if ( v55 )
              goto LABEL_88;
            v44 = v46;
            v48 = 1;
            v50 = 0;
            v51 = 0;
          }
          if ( v48 != 2 )
          {
LABEL_88:
            v44 = v46;
            v48 = 2;
            v50 = 0;
            v51 = 0;
          }
          if ( v50 != 2 && (v17->dmDisplayFixedOutput == v46->dmDisplayFixedOutput || !v89) )
          {
            v44 = v46;
            v50 = 2;
            v51 = 0;
          }
          if ( v51 )
            goto LABEL_96;
          if ( v46->dmDisplayFrequency == 60 && v46->dmDisplayFlags == v17->dmDisplayFlags )
          {
            v44 = v46;
            v51 = 1;
LABEL_96:
            if ( v51 == 2 )
              goto LABEL_76;
          }
          v57 = v46->dmDisplayFrequency;
          if ( v57 == 1 && v17->dmDisplayFrequency == 64 && v46->dmDisplayFlags == v17->dmDisplayFlags )
          {
            v44 = v46;
            v51 = 2;
          }
          if ( v51 != 2 )
          {
            v45 = v17->dmDisplayFrequency;
            if ( (v57 == (_DWORD)v45
               || (*((_DWORD *)v27 + 40) & 0x800000) != 0
               && v17->dmDriverExtra + v17->dmSize == 244
               && !(_DWORD)v45
               && v80 == v57)
              && v46->dmDisplayFlags == v17->dmDisplayFlags )
            {
              v51 = 2;
              v44 = v46;
              if ( v50 == 2 || !v17->dmDisplayFixedOutput && (*((_DWORD *)v27 + 40) & 0x800000) == 0 )
              {
                v86 = 1;
                break;
              }
            }
          }
LABEL_76:
          v52 = Srcb + 1;
          Srcb = v52;
        }
        while ( v52 < v93 );
      }
    }
    if ( v44 )
    {
      v58 = v81;
      if ( (*((_DWORD *)v27 + 40) & 0x800000) != 0
        && v81 + v44->dmSize == 244
        && !v17->dmDisplayFrequency
        && v80 != v46->dmDisplayFrequency )
      {
        v58 = 0;
      }
      if ( a8 && v51 != 2 && v44->dmDisplayFrequency == v17->dmDisplayFrequency )
        v51 = 2;
      if ( (*((_DWORD *)v27 + 40) & 0x800000) != 0 && v48 == 2 && v50 == 2 && (v77 & 0xFFFFFFFD) == 0 )
        v51 = 2;
      memmove(v42, v44, v44->dmSize);
      v42->dmDriverExtra = v58;
      if ( !gdmLogPixels )
      {
        v66 = 0;
        a8 = 0;
        if ( qword_1C0258760 )
        {
          qword_1C0258760(1LL, &a8);
          v66 = a8;
        }
        v17->dmLogPixels = v66;
        gdmLogPixels = v66;
      }
      dmLogPixels = v17->dmLogPixels;
      v60 = v42->dmFields | 0x18220000;
      v42->dmFields = v60;
      v42->dmLogPixels = dmLogPixels;
      if ( (*((_DWORD *)v27 + 40) & 0x4000000) != 0 )
      {
        if ( !v78 )
        {
LABEL_117:
          v42->dmPanningWidth = dmPanningWidth;
          v42->dmPanningHeight = dmPanningHeight;
          if ( (*((_DWORD *)v27 + 40) & 0x800000) != 0 && v58 + v42->dmSize == 244 )
            ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C0252928)(v42, v42);
          if ( v90 )
          {
            if ( *(_DWORD *)&v90[1].dmDeviceName[6] )
            {
              v76 = v42->dmFields | 0x2000000;
              v42->dmFields = v76;
              v42->dmMediaType = *(_DWORD *)&v90[1].dmDeviceName[6];
              if ( v85 )
              {
                v42->dmFields = v76 | 0x4000000;
                v42->dmDisplayFixedOutput = *(_DWORD *)&v90[1].dmDeviceName[8];
              }
            }
          }
          v32 = (__int64)a4;
          if ( a4 && v44->dmSize + v44->dmDriverExtra == 244 && (*(_DWORD *)&v44[1].dmDeviceName[10] & 0x20) != 0 )
            *a4 = 1;
          *a2 = v42;
          if ( v86 || v51 == 2 )
          {
            v12 = 0;
          }
          else if ( v17->dmDisplayFrequency )
          {
            v12 = -1073741811;
          }
          else
          {
            v12 = 1073741839;
          }
          goto LABEL_127;
        }
        v42->dmFields = v60 | 0x20;
      }
      else
      {
        v42->dmFields = v60 | (v78 != 0 ? 0x20 : 0);
      }
      v42->dmPosition.x = x;
      v42->dmPosition.y = v83;
      goto LABEL_117;
    }
    Win32FreePool((__int64)v42, v45, 0LL);
LABEL_127:
    Win32FreePool((__int64)v88, v32, v37);
    goto LABEL_128;
  }
  return v12;
}
