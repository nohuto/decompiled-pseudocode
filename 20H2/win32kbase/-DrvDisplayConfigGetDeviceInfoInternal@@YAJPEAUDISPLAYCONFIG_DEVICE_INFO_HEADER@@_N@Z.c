/*
 * XREFs of ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00D0244
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D570 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000DD30 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C000DF58 (DrvIsWddmDriverPresent.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C004B650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C004E230 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00B0CF0 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0147FA0 (DrvDisplayConfigGetScaleFactorOverrides.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(
        struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // esi
  unsigned int v9; // eax
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rdx
  wchar_t *v20; // rcx
  __int64 v21; // rax
  int DisplayDeviceInfo; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-68h]
  int v43; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v44[32]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a2;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = *(int *)a1;
  WdLogEvent5_WdEvent(v5);
  v8 = 0;
  if ( !(unsigned int)DrvIsWddmDriverPresent() )
  {
    v9 = *(_DWORD *)a1 + 22;
    if ( v9 > 0x1C )
      return 3221225659LL;
    v6 = 386976263LL;
    if ( !_bittest((const int *)&v6, v9) )
      return 3221225659LL;
  }
  v11 = (_DWORD *)((char *)a1 + 16);
  v12 = *((unsigned int *)a1 + 4);
  if ( (_DWORD)v12 == -1
    || (v13 = ((__int64 (__fastcall *)(char *, __int64, char *, char *))qword_1C024AA50)(
                (char *)a1 + 8,
                v12,
                (char *)a1 + 8,
                (char *)a1 + 16),
        v15 = v13,
        v13 >= 0) )
  {
    v18 = *(_DWORD *)a1;
    if ( *(int *)a1 > 100 )
    {
LABEL_44:
      LODWORD(v11) = -1073741811;
    }
    else if ( v18 == 100 )
    {
LABEL_42:
      LOBYTE(v6) = 1;
      v37 = ((__int64 (__fastcall *)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))qword_1C024A918)(v6, a1);
      v11 = (_DWORD *)v37;
      if ( v37 < 0 )
      {
        v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
        *(_QWORD *)(v41 + 24) = a1;
        *(_QWORD *)(v41 + 32) = v11;
        WdLogEvent5_WdWarning(v41);
      }
    }
    else
    {
      v19 = 0x1C0000000uLL;
      switch ( v18 )
      {
        case -24:
        case -22:
        case -14:
        case -13:
        case -12:
        case -10:
        case -5:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11:
          goto LABEL_42;
        case -21:
        case -11:
        case -2:
          DisplayDeviceInfo = DrvpDisplayConfigGetDisplayDeviceInfo((int *)a1, 0x1C0000000LL, v7);
          goto LABEL_24;
        case -20:
          *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
          *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
          *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
          *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
          *((_DWORD *)a1 + 9) = gProtocolType == 0;
          *((_DWORD *)a1 + 10) = gProtocolType == -1;
          *((_WORD *)a1 + 22) = gProtocolType;
          *((_QWORD *)a1 + 6) = gRemoteTerminalLuid;
          goto LABEL_21;
        case -15:
          if ( *((_DWORD *)a1 + 1) < 0x20u )
            return 3221225507LL;
          v34 = *((unsigned int *)a1 + 5);
          v35 = (unsigned int)*v11;
          v42 = *((_QWORD *)a1 + 3);
          v36 = *((_QWORD *)a1 + 1);
          v43 = 0;
          LODWORD(v11) = ((__int64 (__fastcall *)(__int64, __int64, __int64, int *, __int64))qword_1C024AB00)(
                           v36,
                           v35,
                           v34,
                           &v43,
                           v42);
          *((_DWORD *)a1 + 5) = v43;
          return (unsigned int)v11;
        case -9:
          if ( *((_DWORD *)a1 + 1) < 0x18u )
            return 3221225507LL;
          v32 = (unsigned int)*v11;
          v33 = *((_QWORD *)a1 + 1);
          v43 = 0;
          LODWORD(v11) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *, _QWORD))qword_1C024A928)(
                           v33,
                           v32,
                           0LL,
                           &v43,
                           0LL);
          if ( (int)v11 >= 0 )
          {
            LOBYTE(v8) = v43 == 2;
            *((_DWORD *)a1 + 5) = v8;
          }
          return (unsigned int)v11;
        case -8:
          if ( *((_DWORD *)a1 + 1) < 0x218u )
            return 3221225507LL;
          DisplayDeviceInfo = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *, char *))qword_1C024AAE0)(
                                *((_QWORD *)a1 + 1),
                                (unsigned int)*v11,
                                512LL,
                                (char *)a1 + 20,
                                (char *)a1 + 24);
          goto LABEL_24;
        case -7:
          if ( *((_DWORD *)a1 + 1) < 0x3ACu )
            return 3221225507LL;
          LODWORD(v11) = ((__int64 (__fastcall *)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))qword_1C024A928)(
                           *((_QWORD *)a1 + 1),
                           (unsigned int)*v11,
                           a1,
                           0LL,
                           0LL);
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_OemPanelDriverSupport__private_reporting,
            0x801B31u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
            1,
            3);
          if ( v3 )
          {
            UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
            GetMonitorBrightnessCaps(a1);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v44, 0);
            EnterSharedCritAvoidingDitHitTestHazard(0, 1);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire(
              (InputTraceLogging::Perf::CritAcquire *)v44,
              v29,
              v30,
              v31);
            EtwTraceAcquiredSharedUserCrit();
          }
          return (unsigned int)v11;
        case -3:
          if ( *((_DWORD *)a1 + 1) != 32 )
            return 3221225485LL;
          DisplayDeviceInfo = DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
LABEL_24:
          LODWORD(v11) = DisplayDeviceInfo;
          return (unsigned int)v11;
        case 1:
          v20 = gpGraphicsDeviceList;
          if ( *((_DWORD *)a1 + 1) < 0x54u )
            return 3221225507LL;
          if ( !gpGraphicsDeviceList )
            goto LABEL_22;
          v19 = *((unsigned int *)a1 + 2);
          do
          {
            if ( *((_QWORD *)a1 + 1) == *((_QWORD *)v20 + 31) && *((_DWORD *)v20 + 64) == *v11 )
              break;
            v20 = (wchar_t *)*((_QWORD *)v20 + 16);
          }
          while ( v20 );
          if ( !v20 )
          {
LABEL_22:
            v21 = WdLogNewEntry5_WdWarning(v20, v19, v7);
            WdLogEvent5_WdWarning(v21);
            return 3221226021LL;
          }
          *(_OWORD *)((char *)a1 + 20) = *((_OWORD *)v20 + 4);
          *(_OWORD *)((char *)a1 + 36) = *((_OWORD *)v20 + 5);
          *(_OWORD *)((char *)a1 + 52) = *((_OWORD *)v20 + 6);
          *(_OWORD *)((char *)a1 + 68) = *((_OWORD *)v20 + 7);
LABEL_21:
          LODWORD(v11) = 0;
          break;
        default:
          goto LABEL_44;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    if ( *(_DWORD *)a1 == -21 )
    {
      *((_DWORD *)a1 + 506) = 1144084231;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v6, v14, v7);
      v16[3] = *((int *)a1 + 3);
      v16[4] = *((unsigned int *)a1 + 2);
      v16[5] = (unsigned int)*v11;
      v16[6] = v15;
      v16[7] = 1144084231LL;
      WdLogEvent5_WdError(v16, v17);
    }
    return (unsigned int)v15;
  }
}
