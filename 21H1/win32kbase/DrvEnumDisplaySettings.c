/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C002B060
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C002AF90 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C002B5D0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C002B6C4 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002B960 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C006A270 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     DrvBuildDevmodeList @ 0x1C00AC550 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00AC8E8 (DrvGetDisplayDriverParameters.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00ACE78 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 DeviceFromName; // rsi
  _QWORD *v10; // rax
  unsigned __int16 v11; // r12
  int v12; // r8d
  __int64 v13; // rax
  int v15; // r8d
  struct PDEV *i; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int DevModeForLddmPath; // eax
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // r8d
  int v33; // r11d
  int v34; // r8d
  struct PDEV *j; // rcx
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rcx
  _WORD *v39; // rax
  _WORD *v40; // rbx
  __int64 v41; // r15
  unsigned int v42; // r10d
  unsigned int v43; // r8d
  int v44; // r9d
  unsigned __int16 v45; // ax
  unsigned int v46; // ebx
  size_t v47; // r13
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 v51; // [rsp+40h] [rbp-58h]
  int PreferredMode; // [rsp+44h] [rbp-54h]
  PCUNICODE_STRING String1; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+10h]
  int v55; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v56; // [rsp+B8h] [rbp+20h]

  v56 = a4;
  PreferredMode = -1073741585;
  DeviceFromName = 0LL;
  v54 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v51 = *(_WORD *)(a4 + 70);
  v11 = v51;
  ProbeForWrite((volatile void *)a4, v51 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      {
        DeviceFromName = DrvGetDeviceFromName(String1);
        v54 = DeviceFromName;
      }
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
      {
        DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
        v54 = DeviceFromName;
      }
      if ( String1 )
        Win32FreePool(String1);
    }
    else if ( a2 )
    {
      DeviceFromName = *(_QWORD *)(a2 + 2576);
      v54 = DeviceFromName;
    }
    if ( DeviceFromName )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
          break;
        case 0xFFFFFFFE:
          v25 = PALLOCMEM2(0x100DBuLL);
          v26 = v25;
          String1 = (PCUNICODE_STRING)v25;
          if ( v25 )
          {
            if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                     0xFFFFFFFE,
                                     (struct _devicemodeW *)v25,
                                     0LL);
            }
            else
            {
              *(_DWORD *)(v25 + 68) = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, v25, 0LL, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v28 = *(_WORD *)(v26 + 70);
              if ( v51 < v28 )
                v28 = v51;
              v11 = v28;
              memmove((void *)(a4 + 220), (const void *)(v26 + 220), v28);
              *(_OWORD *)a4 = *(_OWORD *)v26;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v26 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v26 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v26 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v26 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v26 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v26 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v26 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v26 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v26 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v26 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v26 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v26 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v26 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v26 + 216);
            }
            Win32FreePool(v26);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared();
          EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v12);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            v17 = *((_QWORD *)i + 322);
            if ( v17 == DeviceFromName && *((_DWORD *)i + 3) )
            {
              LOBYTE(v55) = 0;
              if ( *(_DWORD *)(*((_QWORD *)i + 324) + 184LL) == 1 && (*(_DWORD *)(v17 + 160) & 0x800000) != 0 )
              {
                v29 = DrvGetDevModeForLddmPath(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        0xFFFFFFFF,
                        0LL,
                        (bool *)&v55);
                v30 = v29;
                if ( v29 < 0 )
                {
                  v31 = WdLogNewEntry5_WdTrace();
                  *(_QWORD *)(v31 + 24) = v30;
                  WdLogEvent5_WdTrace(v31);
                }
              }
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
              {
                wil_details_FeatureReporting_ReportUsageToService(
                  &Feature_Vail__private_reporting,
                  8554091LL,
                  0LL,
                  0LL,
                  &Feature_KeyboardInputVirtualization_logged_traits,
                  1);
                LOBYTE(v55) = 1;
              }
              v18 = *((_QWORD *)i + 324);
              v19 = *(_WORD *)(v18 + 70);
              if ( v51 < v19 )
                v19 = v51;
              v11 = v19;
              memmove((void *)(a4 + 220), (const void *)(v18 + 220), v19);
              v20 = *((_QWORD *)i + 324);
              *(_OWORD *)a4 = *(_OWORD *)v20;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v20 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v20 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v20 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v20 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v20 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v20 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v20 + 112);
              v20 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v20;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v20 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v20 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v20 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v20 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v20 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v20 + 88);
              if ( (_BYTE)v55 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v22);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v21);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v23);
          }
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v55 = 0;
          v33 = a5 & 4;
          LODWORD(String1) = v33;
          if ( (a5 & 4) != 0 )
          {
            v37 = v55;
          }
          else
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared();
              EtwTraceGreLockAcquireSemaphoreShared(
                (__int64)L"ghsemDynamicModeChange",
                (int)ghsemDynamicModeChange,
                v32);
              for ( j = gppdevList; j; j = *(struct PDEV **)j )
              {
                if ( *((_QWORD *)j + 322) == DeviceFromName && *((_DWORD *)j + 3) )
                {
                  v36 = *((_QWORD *)j + 324);
                  if ( (*(_DWORD *)(v36 + 72) & 0x80u) != 0 )
                  {
                    v37 = *(_DWORD *)(v36 + 84);
                    goto LABEL_69;
                  }
                  break;
                }
              }
              v37 = v55;
LABEL_69:
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v34);
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion(v38);
              }
            }
            else
            {
              v39 = (_WORD *)PALLOCMEM2(0x100DBuLL);
              v40 = v39;
              if ( v39 )
              {
                memset(v39, 0, 0xDCuLL);
                v40[34] = -8739;
                if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v40, 0LL, 0LL) >= 0
                  && (*((_DWORD *)v40 + 18) & 0x80u) != 0 )
                {
                  v55 = *((_DWORD *)v40 + 21);
                }
                Win32FreePool(v40);
              }
              v37 = v55;
            }
            v33 = (int)String1;
          }
          if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
          {
            v41 = 0LL;
            PreferredMode = -1073741584;
            v42 = *(_DWORD *)(DeviceFromName + 188);
            if ( a3 < v42 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v41 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * a3 + 8);
LABEL_94:
                v11 = v51;
              }
              else
              {
                v43 = 0;
                v44 = 0;
                while ( v43 < v42 )
                {
                  if ( ((a5 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v43))
                    && (v33 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v43 + 8) + 84LL) == v37) )
                  {
                    if ( v44 == a3 )
                    {
                      _mm_lfence();
                      v41 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v43 + 8);
                      goto LABEL_94;
                    }
                    ++v44;
                  }
                  ++v43;
                }
              }
            }
            if ( v41 )
            {
              v45 = *(_WORD *)(v41 + 70);
              if ( v11 < v45 )
                v45 = v11;
              v46 = v45;
              v11 = v45;
              v47 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v41 + *(unsigned __int16 *)(v41 + 68)), v46);
              if ( *(_WORD *)(v41 + 68) <= 0xDCu )
                v47 = *(unsigned __int16 *)(v41 + 68);
              memmove((void *)a4, (const void *)v41, v47);
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v41 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v48 = WdLogNewEntry5_WdTrace();
            WdLogEvent5_WdTrace(v48);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(DeviceFromName + 184) = 0;
            v49 = *(_QWORD *)(DeviceFromName + 176);
            if ( v49 )
            {
              Win32FreePool(v49);
              *(_QWORD *)(DeviceFromName + 176) = 0LL;
            }
            v50 = *(_QWORD *)(DeviceFromName + 192);
            if ( v50 )
            {
              Win32FreePool(v50);
              *(_QWORD *)(DeviceFromName + 192) = 0LL;
            }
            *(_DWORD *)(DeviceFromName + 188) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v11;
    v24 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v24 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v24);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v13 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v13);
    return 3221225507LL;
  }
}
