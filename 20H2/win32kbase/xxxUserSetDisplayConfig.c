/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C006FA20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C01229E0 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C0135BB0 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01480D0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C006E140 (DrvQueryMDEVPowerState.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C006F2A0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006F2BC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 *     LogDiagSDC @ 0x1C006FE34 (LogDiagSDC.c)
 *     PowerDimUndimResend @ 0x1C0071310 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00CB980 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBA00 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3AF0 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C011AC3C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C0149AF8 (LogDiagSDCAccessDenied.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v11; // r13d
  int v12; // ebx
  unsigned int v13; // esi
  struct tagDESKTOP *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r15d
  unsigned int v22; // esi
  int v23; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v25; // ecx
  void *v26; // rdx
  int v27; // r12d
  int v28; // eax
  __int64 v29; // rcx
  void *v30; // rdx
  int v31; // eax
  int v32; // eax
  _QWORD *v33; // rcx
  _DWORD *v35; // rax
  char v36; // dl
  _DWORD *v37; // rcx
  struct tagDESKTOP *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int v43; // r9d
  __int64 i; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v47; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v48[3]; // [rsp+89h] [rbp-18h] BYREF
  int v49; // [rsp+8Ch] [rbp-15h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-11h] BYREF
  __int64 v51; // [rsp+98h] [rbp-9h]
  struct _MDEV *v52[7]; // [rsp+A0h] [rbp-1h] BYREF

  v52[0] = 0LL;
  v50 = 0;
  v11 = a3;
  v47 = 0;
  v12 = (int)a2;
  v48[0] = 0;
  v13 = a1;
  v49 = 0;
  v51 = MEMORY[0xFFFFF78000000320];
  v14 = (struct tagDESKTOP *)a5;
  v17 = v51 * KeQueryTimeIncrement();
  v51 = v17;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v14 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
  v19 = 0LL;
  v20 = 1LL;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v14 )
      v14 = grpdeskRitInput;
LABEL_6:
    v21 = v11 & 0x10000;
    if ( ((v11 & 0x10000) != 0) == (a7 != 0) )
    {
      v22 = a4 | 4;
      if ( !v21 )
        v22 = a4;
      v23 = DrvSetDisplayConfigValidateParams(a1, v12, v11, v22, a6);
      if ( v23 >= 0 )
      {
        if ( !v21 && (!gProtocolType || (v11 & 0x88F) != 0x88F) && (v22 & 0xC01) == 0 )
        {
          v35 = DispBroker::DispBrokerClient::s_pSessionBroker;
          v36 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
          v37 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
          if ( !v36 )
            v37 = DispBroker::DispBrokerClient::s_pSessionBroker;
          if ( *v37 == 3 )
          {
            v43 = v22;
            v27 = (int)a2;
            v13 = a1;
            v23 = xxxDispBrokerSetDisplayConfig(a1, a2, v11, v43, a6 != 0);
            goto LABEL_46;
          }
          if ( v36 )
            v35 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
          if ( *v35 == 2 )
          {
            v23 = -1073741790;
LABEL_85:
            v27 = (int)a2;
LABEL_45:
            v13 = a1;
LABEL_46:
            v17 = v51;
            goto LABEL_47;
          }
        }
        if ( (v11 & 0x80) != 0 )
        {
          if ( gbMDEVDisabled )
          {
            v49 = 27;
          }
          else
          {
            if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
            {
              CachedMonitor = CreateCachedMonitor();
              v25 = v49;
              if ( !CachedMonitor )
                v25 = 16;
              v49 = v25;
              if ( qword_1C02504D8 )
                qword_1C02504D8(0LL);
              if ( qword_1C0250AE0 )
                qword_1C0250AE0();
              if ( qword_1C024B370 && qword_1C0250AF0 )
                qword_1C0250AF0();
              if ( qword_1C024F998 )
                qword_1C024F998(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
              goto LABEL_25;
            }
            v49 = 28;
          }
          v23 = -1073741823;
          goto LABEL_85;
        }
LABEL_25:
        if ( v14 )
          v26 = (void *)***((_QWORD ***)v14 + 1);
        else
          v26 = 0LL;
        v27 = (int)a2;
        v28 = DrvSetDisplayConfig(
                a1,
                a2,
                a3,
                v22 | 0x140,
                v26,
                a6,
                a7,
                0LL,
                *(struct _MDEV **)(gpDispInfo + 16),
                v52,
                &v50,
                &v49,
                &v47,
                v48,
                a10);
        v30 = 0LL;
        v23 = v28;
        if ( (v11 & 0x80) != 0 )
        {
          if ( v28 >= 0 )
            goto LABEL_29;
          if ( v48[0] && !v21 && !a7 )
          {
            if ( v14 )
              v30 = (void *)***((_QWORD ***)v14 + 1);
            v28 = DrvSetDisplayConfig(
                    0,
                    0LL,
                    2447LL,
                    0x102u,
                    v30,
                    0,
                    0LL,
                    0LL,
                    *(struct _MDEV **)(gpDispInfo + 16),
                    v52,
                    0LL,
                    0LL,
                    &v47,
                    0LL,
                    a10);
          }
          if ( v28 >= 0 )
          {
LABEL_29:
            v23 = v28;
            if ( (v22 & 0x200) != 0 )
            {
              *((_WORD *)gpsi + 3499) = gdmLogPixels;
              ++*((_WORD *)gpsi + 3507);
              for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
                *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
            }
            TrackFullscreenMode(0);
            if ( v47 )
            {
              if ( (v22 & 4) == 0 )
              {
                if ( (unsigned int)SafeDisableMDEV(1LL) )
                  SafeEnableMDEV(1LL);
                if ( qword_1C0250538 )
                  qword_1C0250538(v46, v45);
              }
            }
            else
            {
              *(struct _MDEV **)(gpDispInfo + 16) = v52[0];
              PowerDimUndimResend();
              v23 = xxxResetDisplayDevice((__int64)v14, 0, (v22 >> 4) & 1);
              v31 = v49;
              if ( v23 < 0 )
                v31 = 36;
              v49 = v31;
            }
            if ( qword_1C024FA90 )
              v32 = qword_1C024FA90();
            else
              v32 = -1073741637;
            if ( v32 >= 0 && v21 && (unsigned int)UserRemoteConnectedSessionUsingWddm() )
            {
              if ( qword_1C024FA98 )
                qword_1C024FA98(*((_QWORD *)v14 + 5), &gRemoteWndsMonitorSnapshotHead);
              if ( qword_1C024FAA8 )
                qword_1C024FAA8(&gRemoteWndsMonitorSnapshotHead);
            }
          }
          else if ( qword_1C0250538 )
          {
            qword_1C0250538(v29, v30);
          }
          if ( v14 )
          {
            v33 = (_QWORD *)*((_QWORD *)v14 + 1);
            if ( (*(_DWORD *)(*v33 + 64LL) & 1) == 0 )
            {
              if ( qword_1C02509E0 )
                qword_1C02509E0(v33[3], 1LL, 66693LL);
            }
          }
          if ( qword_1C02504D8 )
            qword_1C02504D8(1LL);
          if ( qword_1C0250B00 )
            qword_1C0250B00();
        }
        v11 = a3;
        goto LABEL_45;
      }
      v13 = a1;
    }
    else
    {
      v23 = -1073741811;
    }
    v27 = (int)a2;
    v17 = v51;
    v49 = 1;
    goto LABEL_47;
  }
  v38 = grpdeskRitInput;
  if ( gbDesktopLocked )
    v38 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
  if ( v14 == v38 )
  {
    v12 = (int)a2;
    goto LABEL_6;
  }
  if ( v38 && ObQueryNameInfo(v38, 0LL, 1LL) )
    v39 = ObQueryNameInfo(v38, v19, v20) + 8;
  else
    v39 = 0LL;
  if ( v14 && ObQueryNameInfo(v14, v19, v20) )
    v42 = ObQueryNameInfo(v14, v40, v41) + 8;
  else
    v42 = 0LL;
  LogDiagSDCAccessDenied(v42, v39);
  v27 = (int)a2;
  v23 = -1073741790;
  v49 = 49;
LABEL_47:
  if ( a8 )
    *a8 = (unsigned int)(v49 - 27) <= 1;
  if ( a9 )
    *a9 = v47;
  if ( v23 >= 0 && v49 == 29 )
    v23 = -1073741266;
  LogDiagSDC(v13, v27, v11, v23, v50, v49, v17, v47);
  return (unsigned int)v23;
}
