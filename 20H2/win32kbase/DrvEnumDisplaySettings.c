/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C000C480
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C000C3B0 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C000A958 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C000C9F0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C000CAE4 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DrvBuildDevmodeList @ 0x1C000F520 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C000F8C0 (DrvGetDisplayDriverParameters.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
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
  __int64 v12; // rax
  struct PDEV *i; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  int DevModeForLddmPath; // eax
  unsigned __int16 v23; // ax
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // r11d
  struct PDEV *j; // rcx
  __int64 v29; // rdx
  int v30; // ebx
  _WORD *v31; // rax
  _WORD *v32; // rbx
  __int64 v33; // r15
  unsigned int v34; // r10d
  unsigned int v35; // r8d
  int v36; // r9d
  unsigned __int16 v37; // ax
  unsigned int v38; // ebx
  size_t v39; // r13
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned __int16 v43; // [rsp+40h] [rbp-58h]
  int PreferredMode; // [rsp+44h] [rbp-54h]
  PCUNICODE_STRING String1; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+10h]
  int v47; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+20h]

  v48 = a4;
  PreferredMode = -1073741585;
  DeviceFromName = 0LL;
  v46 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent();
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v43 = *(_WORD *)(a4 + 70);
  v11 = v43;
  ProbeForWrite((volatile void *)a4, v43 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    if ( a1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      {
        DeviceFromName = DrvGetDeviceFromName(String1);
        v46 = DeviceFromName;
      }
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
      {
        DeviceFromName &= -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
        v46 = DeviceFromName;
      }
      if ( String1 )
        Win32FreePool(String1);
    }
    else if ( a2 )
    {
      DeviceFromName = *(_QWORD *)(a2 + 2576);
      v46 = DeviceFromName;
    }
    if ( DeviceFromName )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
          break;
        case 0xFFFFFFFE:
          v20 = PALLOCMEM2(0x100DBuLL);
          v21 = v20;
          String1 = (PCUNICODE_STRING)v20;
          if ( v20 )
          {
            if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
            {
              DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                     (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                     0xFFFFFFFE,
                                     (struct _devicemodeW *)v20,
                                     0LL);
            }
            else
            {
              *(_DWORD *)(v20 + 68) = -8739;
              DevModeForLddmPath = DrvGetDisplayDriverParameters(DeviceFromName, v20, 0LL, 0LL);
            }
            PreferredMode = DevModeForLddmPath;
            if ( DevModeForLddmPath >= 0 )
            {
              v23 = *(_WORD *)(v21 + 70);
              if ( v43 < v23 )
                v23 = v43;
              v11 = v23;
              memmove((void *)(a4 + 220), (const void *)(v21 + 220), v23);
              *(_OWORD *)a4 = *(_OWORD *)v21;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v21 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v21 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v21 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v21 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v21 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v21 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v21 + 112);
              *(_OWORD *)(a4 + 128) = *(_OWORD *)(v21 + 128);
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v21 + 144);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v21 + 160);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v21 + 176);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v21 + 192);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v21 + 208);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v21 + 216);
            }
            Win32FreePool(v21);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared();
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            v15 = *((_QWORD *)i + 322);
            if ( v15 == DeviceFromName && *((_DWORD *)i + 3) )
            {
              LOBYTE(v47) = 0;
              if ( *(_DWORD *)(*((_QWORD *)i + 324) + 184LL) == 1 && (*(_DWORD *)(v15 + 160) & 0x800000) != 0 )
              {
                v24 = DrvGetDevModeForLddmPath(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        0xFFFFFFFF,
                        0LL,
                        (bool *)&v47);
                v25 = v24;
                if ( v24 < 0 )
                {
                  v26 = WdLogNewEntry5_WdTrace();
                  *(_QWORD *)(v26 + 24) = v25;
                  WdLogEvent5_WdTrace(v26);
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
                  1,
                  3);
                LOBYTE(v47) = 1;
              }
              v16 = *((_QWORD *)i + 324);
              v17 = *(_WORD *)(v16 + 70);
              if ( v43 < v17 )
                v17 = v43;
              v11 = v17;
              memmove((void *)(a4 + 220), (const void *)(v16 + 220), v17);
              v18 = *((_QWORD *)i + 324);
              *(_OWORD *)a4 = *(_OWORD *)v18;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v18 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v18 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v18 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v18 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v18 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v18 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v18 + 112);
              v18 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v18;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v18 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v18 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v18 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v18 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v18 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v18 + 88);
              if ( (_BYTE)v47 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v47 = 0;
          v27 = a5 & 4;
          LODWORD(String1) = v27;
          if ( (a5 & 4) != 0 )
          {
            v30 = v47;
          }
          else
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared();
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              for ( j = gppdevList; j; j = *(struct PDEV **)j )
              {
                if ( *((_QWORD *)j + 322) == DeviceFromName && *((_DWORD *)j + 3) )
                {
                  v29 = *((_QWORD *)j + 324);
                  if ( (*(_DWORD *)(v29 + 72) & 0x80u) != 0 )
                  {
                    v30 = *(_DWORD *)(v29 + 84);
                    goto LABEL_69;
                  }
                  break;
                }
              }
              v30 = v47;
LABEL_69:
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              if ( ghsemDynamicModeChange )
              {
                ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
                PsLeavePriorityRegion();
              }
            }
            else
            {
              v31 = (_WORD *)PALLOCMEM2(0x100DBuLL);
              v32 = v31;
              if ( v31 )
              {
                memset(v31, 0, 0xDCuLL);
                v32[34] = -8739;
                if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v32, 0LL, 0LL) >= 0
                  && (*((_DWORD *)v32 + 18) & 0x80u) != 0 )
                {
                  v47 = *((_DWORD *)v32 + 21);
                }
                Win32FreePool(v32);
              }
              v30 = v47;
            }
            v27 = (int)String1;
          }
          if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
          {
            v33 = 0LL;
            PreferredMode = -1073741584;
            v34 = *(_DWORD *)(DeviceFromName + 188);
            if ( a3 < v34 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v33 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * a3 + 8);
LABEL_94:
                v11 = v43;
              }
              else
              {
                v35 = 0;
                v36 = 0;
                while ( v35 < v34 )
                {
                  if ( ((a5 & 2) != 0 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v35))
                    && (v27 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v35 + 8) + 84LL) == v30) )
                  {
                    if ( v36 == a3 )
                    {
                      _mm_lfence();
                      v33 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v35 + 8);
                      goto LABEL_94;
                    }
                    ++v36;
                  }
                  ++v35;
                }
              }
            }
            if ( v33 )
            {
              v37 = *(_WORD *)(v33 + 70);
              if ( v11 < v37 )
                v37 = v11;
              v38 = v37;
              v11 = v37;
              v39 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v33 + *(unsigned __int16 *)(v33 + 68)), v38);
              if ( *(_WORD *)(v33 + 68) <= 0xDCu )
                v39 = *(unsigned __int16 *)(v33 + 68);
              memmove((void *)a4, (const void *)v33, v39);
              if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v33 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v40 = WdLogNewEntry5_WdTrace();
            WdLogEvent5_WdTrace(v40);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(DeviceFromName + 184) = 0;
            v41 = *(_QWORD *)(DeviceFromName + 176);
            if ( v41 )
            {
              Win32FreePool(v41);
              *(_QWORD *)(DeviceFromName + 176) = 0LL;
            }
            v42 = *(_QWORD *)(DeviceFromName + 192);
            if ( v42 )
            {
              Win32FreePool(v42);
              *(_QWORD *)(DeviceFromName + 192) = 0LL;
            }
            *(_DWORD *)(DeviceFromName + 188) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v11;
    v19 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v19 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v19);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v12 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v12);
    return 3221225507LL;
  }
}
