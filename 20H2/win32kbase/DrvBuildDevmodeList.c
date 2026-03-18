/*
 * XREFs of DrvBuildDevmodeList @ 0x1C000F520
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DrvGetDisplayDriverNames @ 0x1C00156E0 (DrvGetDisplayDriverNames.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0016F28 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C009A418 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BEEF4 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // esi
  unsigned int DriverModes; // eax
  void *v12; // r14
  size_t v13; // r15
  char *v14; // rax
  char *v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edi
  unsigned int i; // r9d
  __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // esi
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r11
  int v29; // ebp
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // r10d
  __int64 v34; // r9
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  v4 = *((_DWORD *)a1 + 40);
  if ( (v4 & 0x4000000) != 0 && !gRemoteSessionUseWddm )
    goto LABEL_9;
  if ( (v4 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
  {
    if ( a3 && !a2 )
      goto LABEL_14;
    v5 = *((unsigned int *)a1 + 64);
    v35 = 0LL;
    if ( (int)((__int64 (__fastcall *)(char *, __int64, __int64 *))qword_1C024A978)((char *)a1 + 248, v5, &v35) >= 0 )
    {
      if ( *((_QWORD *)a1 + 21) == v35 )
        goto LABEL_14;
      *((_QWORD *)a1 + 21) = v35;
      goto LABEL_9;
    }
    a2 = 1;
  }
  if ( !a2 )
    goto LABEL_14;
LABEL_9:
  if ( *((_DWORD *)a1 + 46) )
  {
    v6 = *((_QWORD *)a1 + 22);
    if ( v6 )
    {
      Win32FreePool(v6);
      v7 = *((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v7 )
      {
        Win32FreePool(v7);
        *((_QWORD *)a1 + 24) = 0LL;
      }
    }
LABEL_14:
    if ( *((_DWORD *)a1 + 46) )
      return;
  }
  if ( *((_QWORD *)a1 + 22) )
    return;
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = (unsigned int *)DrvGetDisplayDriverNames(a1);
  v9 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v10 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v9[4 * v10 + 4],
                        *(void **)&v9[4 * v10 + 2],
                        (struct _devicemodeW **)&Src);
        v12 = Src;
        v13 = DriverModes;
        if ( DriverModes )
        {
          v14 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 46));
          v15 = v14;
          if ( v14 )
          {
            v16 = *((unsigned int *)a1 + 46);
            if ( (_DWORD)v16 )
            {
              memmove(v14, *((const void **)a1 + 22), *((unsigned int *)a1 + 46));
              Win32FreePool(*((_QWORD *)a1 + 22));
              v16 = *((unsigned int *)a1 + 46);
            }
            memmove(&v15[v16], v12, v13);
            *((_DWORD *)a1 + 46) += v13;
            *((_QWORD *)a1 + 22) = v15;
          }
        }
        if ( v12 )
          Win32FreePool(v12);
        ++v10;
      }
      while ( v10 < *v9 );
    }
    Win32FreePool(v9);
  }
  v17 = *((_DWORD *)a1 + 46);
  if ( !v17 && !*((_QWORD *)a1 + 22) )
  {
LABEL_55:
    DrvLogDisplayDriverEvent(2LL);
    return;
  }
  v18 = 0;
  for ( i = 0;
        i < v17;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v18;
  }
  v20 = PALLOCMEM2(16 * v18);
  *((_QWORD *)a1 + 24) = v20;
  if ( !v20 )
  {
    v32 = *((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    Win32FreePool(v32);
    *((_QWORD *)a1 + 22) = 0LL;
    goto LABEL_55;
  }
  v21 = 0;
  *((_DWORD *)a1 + 47) = v18;
  v22 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_38;
  do
  {
    v23 = *((_QWORD *)a1 + 22) + v22;
    v24 = *(_DWORD *)(v23 + 72);
    if ( (v24 & 0x80u) == 0 )
    {
      v24 |= 0x80u;
      *(_DWORD *)(v23 + 72) = v24;
      v25 = v24;
    }
    else
    {
      v25 = *(_DWORD *)(v23 + 72);
      if ( *(_DWORD *)(v23 + 84) <= 3u )
        goto LABEL_34;
    }
    *(_DWORD *)(v23 + 84) = 0;
LABEL_34:
    if ( (v25 & 0x20000000) == 0 )
      goto LABEL_35;
    if ( (unsigned int)(*(_DWORD *)(v23 + 88) - 1) > 1 )
    {
      *(_DWORD *)(v23 + 72) = v24 & 0xDFFFFFFF;
LABEL_35:
      *(_DWORD *)(v23 + 88) = 0;
    }
    v26 = v21++;
    v26 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v26) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v26 + 8) = v23;
    v22 += *(unsigned __int16 *)(v23 + 70) + *(unsigned __int16 *)(v23 + 68);
  }
  while ( v22 < *((_DWORD *)a1 + 46) );
  v18 = *((_DWORD *)a1 + 47);
LABEL_38:
  v27 = 1LL;
  if ( v18 )
  {
    do
    {
      v28 = *((_QWORD *)a1 + 24);
      v29 = v27 - 1;
      v30 = v18;
      v31 = *(_QWORD *)(v28 + 16LL * (unsigned int)(v27 - 1) + 8);
      if ( *(_DWORD *)(v31 + 184) == 1 )
      {
        v33 = 1;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( v33 != (_DWORD)v27 )
            {
              v34 = *(_QWORD *)(v28 + 16LL * (v33 - 1) + 8);
              if ( *(_DWORD *)(v31 + 168) == *(_DWORD *)(v34 + 168)
                && *(_DWORD *)(v31 + 172) == *(_DWORD *)(v34 + 172)
                && *(_DWORD *)(v31 + 176) == *(_DWORD *)(v34 + 176)
                && ((*(_BYTE *)(v31 + 180) ^ *(_BYTE *)(v34 + 180)) & 4) == 0
                && *(_DWORD *)(v31 + 84) == *(_DWORD *)(v34 + 84)
                && *(_DWORD *)(v31 + 88) == *(_DWORD *)(v34 + 88) )
              {
                break;
              }
            }
            v30 = *((_DWORD *)a1 + 47);
            ++v33;
            v18 = v30;
            if ( v33 > v30 )
              goto LABEL_40;
          }
          if ( v18 > (unsigned int)v27 )
          {
            memmove(
              (void *)(v28 + 16LL * (unsigned int)(v27 - 1)),
              (const void *)(v28 + 16 * v27),
              16LL * (v18 - (unsigned int)v27));
            v18 = *((_DWORD *)a1 + 47);
          }
          v30 = v18 - 1;
          LODWORD(v27) = v29;
          *((_DWORD *)a1 + 47) = v18 - 1;
        }
      }
LABEL_40:
      v27 = (unsigned int)(v27 + 1);
      v18 = v30;
    }
    while ( (unsigned int)v27 <= v30 );
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RemoveGdiModePruning__private_reporting,
    0x103A297u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
    1,
    3);
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v22 = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 47), *((struct tagDEVMODEMARK **)a1 + 24));
  if ( !v22 )
    goto LABEL_55;
}
