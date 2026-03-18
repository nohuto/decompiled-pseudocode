/*
 * XREFs of DrvBuildDevmodeList @ 0x1C00AC550
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C002C468 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0051124 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00ACE78 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00AD02C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00ADF70 (DrvGetDisplayDriverNames.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int *DisplayDriverNames; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int *v13; // rdi
  unsigned int v14; // esi
  unsigned int DriverModes; // eax
  void *v16; // r14
  size_t v17; // r15
  char *v18; // rax
  char *v19; // rbp
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // edi
  unsigned int i; // r9d
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // r8d
  unsigned int v28; // esi
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r11
  int v35; // ebp
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // r10d
  __int64 v42; // r9
  __int64 v43; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  v4 = *((_DWORD *)a1 + 40);
  if ( (v4 & 0x4000000) != 0 && !gRemoteSessionUseWddm )
    goto LABEL_9;
  if ( (v4 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
  {
    if ( (_DWORD)a3 && !(_DWORD)a2 )
      goto LABEL_14;
    v5 = *((unsigned int *)a1 + 64);
    v43 = 0LL;
    if ( (int)((__int64 (__fastcall *)(char *, __int64, __int64 *))qword_1C0252998)((char *)a1 + 248, v5, &v43) >= 0 )
    {
      if ( *((_QWORD *)a1 + 21) == v43 )
        goto LABEL_14;
      *((_QWORD *)a1 + 21) = v43;
      goto LABEL_9;
    }
    a2 = 1LL;
  }
  if ( !(_DWORD)a2 )
    goto LABEL_14;
LABEL_9:
  if ( *((_DWORD *)a1 + 46) )
  {
    v6 = *((_QWORD *)a1 + 22);
    if ( v6 )
    {
      Win32FreePool(v6, a2, a3);
      v9 = *((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v9 )
      {
        Win32FreePool(v9, v7, v8);
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
  v13 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v14 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v13[4 * v14 + 4],
                        *(void **)&v13[4 * v14 + 2],
                        (struct _devicemodeW **)&Src);
        v16 = Src;
        v17 = DriverModes;
        if ( DriverModes )
        {
          v18 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 46), 0x73726447u, 0);
          v19 = v18;
          if ( v18 )
          {
            v20 = *((unsigned int *)a1 + 46);
            if ( (_DWORD)v20 )
            {
              memmove(v18, *((const void **)a1 + 22), *((unsigned int *)a1 + 46));
              Win32FreePool(*((_QWORD *)a1 + 22), v38, v39);
              v20 = *((unsigned int *)a1 + 46);
            }
            memmove(&v19[v20], v16, v17);
            *((_DWORD *)a1 + 46) += v17;
            *((_QWORD *)a1 + 22) = v19;
          }
        }
        if ( v16 )
          Win32FreePool((__int64)v16, v11, v12);
        ++v14;
      }
      while ( v14 < *v13 );
    }
    Win32FreePool((__int64)v13, v11, v12);
  }
  v21 = *((_DWORD *)a1 + 46);
  if ( !v21 && !*((_QWORD *)a1 + 22) )
  {
LABEL_55:
    DrvLogDisplayDriverEvent(2);
    return;
  }
  v22 = 0;
  for ( i = 0;
        i < v21;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v22;
  }
  v24 = PALLOCMEM2(16 * v22, 0x73726447u, 1);
  *((_QWORD *)a1 + 24) = v24;
  if ( !v24 )
  {
    v40 = *((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    Win32FreePool(v40, v25, v26);
    *((_QWORD *)a1 + 22) = 0LL;
    goto LABEL_55;
  }
  v27 = 0;
  *((_DWORD *)a1 + 47) = v22;
  v28 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_38;
  do
  {
    v29 = *((_QWORD *)a1 + 22) + v28;
    v30 = *(_DWORD *)(v29 + 72);
    if ( (v30 & 0x80u) == 0 )
    {
      v30 |= 0x80u;
      *(_DWORD *)(v29 + 72) = v30;
      v31 = v30;
    }
    else
    {
      v31 = *(_DWORD *)(v29 + 72);
      if ( *(_DWORD *)(v29 + 84) <= 3u )
        goto LABEL_34;
    }
    *(_DWORD *)(v29 + 84) = 0;
LABEL_34:
    if ( (v31 & 0x20000000) == 0 )
      goto LABEL_35;
    if ( (unsigned int)(*(_DWORD *)(v29 + 88) - 1) > 1 )
    {
      *(_DWORD *)(v29 + 72) = v30 & 0xDFFFFFFF;
LABEL_35:
      *(_DWORD *)(v29 + 88) = 0;
    }
    v32 = v27++;
    v32 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v32) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v32 + 8) = v29;
    v28 += *(unsigned __int16 *)(v29 + 70) + *(unsigned __int16 *)(v29 + 68);
  }
  while ( v28 < *((_DWORD *)a1 + 46) );
  v22 = *((_DWORD *)a1 + 47);
LABEL_38:
  v33 = 1LL;
  if ( v22 )
  {
    do
    {
      v34 = *((_QWORD *)a1 + 24);
      v35 = v33 - 1;
      v36 = v22;
      v37 = *(_QWORD *)(v34 + 16LL * (unsigned int)(v33 - 1) + 8);
      if ( *(_DWORD *)(v37 + 184) == 1 )
      {
        v41 = 1;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( v41 != (_DWORD)v33 )
            {
              v42 = *(_QWORD *)(v34 + 16LL * (v41 - 1) + 8);
              if ( *(_DWORD *)(v37 + 168) == *(_DWORD *)(v42 + 168)
                && *(_DWORD *)(v37 + 172) == *(_DWORD *)(v42 + 172)
                && *(_DWORD *)(v37 + 176) == *(_DWORD *)(v42 + 176)
                && ((*(_BYTE *)(v37 + 180) ^ *(_BYTE *)(v42 + 180)) & 4) == 0
                && *(_DWORD *)(v37 + 84) == *(_DWORD *)(v42 + 84)
                && *(_DWORD *)(v37 + 88) == *(_DWORD *)(v42 + 88) )
              {
                break;
              }
            }
            v36 = *((_DWORD *)a1 + 47);
            ++v41;
            v22 = v36;
            if ( v41 > v36 )
              goto LABEL_40;
          }
          if ( v22 > (unsigned int)v33 )
          {
            memmove(
              (void *)(v34 + 16LL * (unsigned int)(v33 - 1)),
              (const void *)(v34 + 16 * v33),
              16LL * (v22 - (unsigned int)v33));
            v22 = *((_DWORD *)a1 + 47);
          }
          v36 = v22 - 1;
          LODWORD(v33) = v35;
          *((_DWORD *)a1 + 47) = v22 - 1;
        }
      }
LABEL_40:
      v33 = (unsigned int)(v33 + 1);
      v22 = v36;
    }
    while ( (unsigned int)v33 <= v36 );
  }
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_RemoveGdiModePruning__private_reporting,
    17015447LL,
    0LL,
    0LL,
    &Feature_InputVirtualization_logged_traits,
    1);
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    v28 = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 47), *((struct tagDEVMODEMARK **)a1 + 24));
  if ( !v28 )
    goto LABEL_55;
}
