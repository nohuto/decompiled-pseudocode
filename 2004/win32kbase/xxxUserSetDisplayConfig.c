/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0062320
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8F0C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F350 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0124D30 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C0137F00 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147F4C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C014A5A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvQueryMDEVPowerState @ 0x1C0062200 (DrvQueryMDEVPowerState.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006225C (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0062304 (-TrackFullscreenMode@@YAXH@Z.c)
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     PowerDimUndimResend @ 0x1C0063B80 (PowerDimUndimResend.c)
 *     LogDiagSDC @ 0x1C00B1668 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C00B39E0 (UserRemoteConnectedSessionUsingWddm.c)
 *     SafeEnableMDEV @ 0x1C00CC770 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC7F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D3C30 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C011CF7C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C014BFC8 (LogDiagSDCAccessDenied.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        int a3,
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
  int v18; // r15d
  unsigned int v19; // esi
  int v20; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v22; // ecx
  __int64 v23; // rdx
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  _QWORD *v30; // rcx
  _DWORD *v32; // rax
  char v33; // dl
  _DWORD *v34; // rcx
  struct tagDESKTOP *v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 i; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _WORD v42[2]; // [rsp+88h] [rbp-19h] BYREF
  int v43; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v44; // [rsp+90h] [rbp-11h] BYREF
  __int64 v45; // [rsp+98h] [rbp-9h]
  __int64 v46[7]; // [rsp+A0h] [rbp-1h] BYREF

  v46[0] = 0LL;
  LODWORD(v44) = 0;
  v11 = a3;
  v42[0] = 0;
  v12 = (int)a2;
  v13 = a1;
  v43 = 0;
  v45 = MEMORY[0xFFFFF78000000320];
  v14 = (struct tagDESKTOP *)a5;
  v17 = v45 * KeQueryTimeIncrement();
  v45 = v17;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v14 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 56);
  if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v14 )
      v14 = grpdeskRitInput;
LABEL_6:
    v18 = v11 & 0x10000;
    if ( ((v11 & 0x10000) != 0) == (a7 != 0) )
    {
      v19 = a4 | 4;
      if ( !v18 )
        v19 = a4;
      v20 = DrvSetDisplayConfigValidateParams(a1, v12, v11, v19, a6);
      if ( v20 >= 0 )
      {
        if ( !v18 && (!gProtocolType || (v11 & 0x88F) != 0x88F) && (v19 & 0xC01) == 0 )
        {
          v32 = DispBroker::DispBrokerClient::s_pSessionBroker;
          v33 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
          v34 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
          if ( !v33 )
            v34 = DispBroker::DispBrokerClient::s_pSessionBroker;
          if ( *v34 == 3 )
          {
            v38 = v19;
            v24 = (int)a2;
            v13 = a1;
            v20 = xxxDispBrokerSetDisplayConfig(a1, a2, v11, v38, a6 != 0);
            goto LABEL_46;
          }
          if ( v33 )
            v32 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
          if ( *v32 == 2 )
          {
            v20 = -1073741790;
LABEL_85:
            v24 = (int)a2;
LABEL_45:
            v13 = a1;
LABEL_46:
            v17 = v45;
            goto LABEL_47;
          }
        }
        if ( (v11 & 0x80) != 0 )
        {
          if ( gbMDEVDisabled )
          {
            v43 = 27;
          }
          else
          {
            if ( (unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 16)) )
            {
              CachedMonitor = CreateCachedMonitor();
              v22 = v43;
              if ( !CachedMonitor )
                v22 = 16;
              v43 = v22;
              if ( qword_1C02524D8 )
                qword_1C02524D8(0LL);
              if ( qword_1C0252AE0 )
                qword_1C0252AE0();
              if ( qword_1C024D370 && qword_1C0252AF0 )
                qword_1C0252AF0();
              if ( qword_1C0251998 )
                qword_1C0251998(*(_QWORD *)(gpDispInfo + 40), 0LL, 0LL, 0LL);
              goto LABEL_25;
            }
            v43 = 28;
          }
          v20 = -1073741823;
          goto LABEL_85;
        }
LABEL_25:
        if ( v14 )
          v23 = ***((_QWORD ***)v14 + 1);
        else
          v23 = 0LL;
        v24 = (int)a2;
        v25 = DrvSetDisplayConfig(
                a1,
                (int)a2,
                a3,
                v19 | 0x140,
                v23,
                a6,
                a7,
                0LL,
                *(struct _MDEV **)(gpDispInfo + 16),
                (__int64)v46,
                (__int64)&v44,
                (__int64)&v43,
                (__int64)v42,
                (__int64)v42 + 1,
                a10);
        v27 = 0LL;
        v20 = v25;
        if ( (v11 & 0x80) != 0 )
        {
          if ( v25 >= 0 )
            goto LABEL_29;
          if ( HIBYTE(v42[0]) && !v18 && !a7 )
          {
            if ( v14 )
              v27 = ***((_QWORD ***)v14 + 1);
            v25 = DrvSetDisplayConfig(
                    0,
                    0,
                    2447,
                    258,
                    v27,
                    0,
                    0LL,
                    0LL,
                    *(struct _MDEV **)(gpDispInfo + 16),
                    (__int64)v46,
                    0LL,
                    0LL,
                    (__int64)v42,
                    0LL,
                    a10);
          }
          if ( v25 >= 0 )
          {
LABEL_29:
            v20 = v25;
            if ( (v19 & 0x200) != 0 )
            {
              *((_WORD *)gpsi + 3499) = gdmLogPixels;
              ++*((_WORD *)gpsi + 3507);
              for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
                *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
            }
            TrackFullscreenMode(0);
            if ( LOBYTE(v42[0]) )
            {
              if ( (v19 & 4) == 0 )
              {
                if ( (unsigned int)SafeDisableMDEV(1LL) )
                  SafeEnableMDEV(1LL);
                if ( qword_1C0252538 )
                  qword_1C0252538(v41, v40);
              }
            }
            else
            {
              *(_QWORD *)(gpDispInfo + 16) = v46[0];
              PowerDimUndimResend();
              v20 = xxxResetDisplayDevice(v14, 0LL, (v19 >> 4) & 1);
              v28 = v43;
              if ( v20 < 0 )
                v28 = 36;
              v43 = v28;
            }
            if ( qword_1C0251A90 )
              v29 = qword_1C0251A90();
            else
              v29 = -1073741637;
            if ( v29 >= 0 && v18 && (unsigned int)UserRemoteConnectedSessionUsingWddm() )
            {
              if ( qword_1C0251A98 )
                qword_1C0251A98(*((_QWORD *)v14 + 5), &gRemoteWndsMonitorSnapshotHead);
              if ( qword_1C0251AA8 )
                qword_1C0251AA8(&gRemoteWndsMonitorSnapshotHead);
            }
          }
          else if ( qword_1C0252538 )
          {
            qword_1C0252538(v26, v27);
          }
          if ( v14 )
          {
            v30 = (_QWORD *)*((_QWORD *)v14 + 1);
            if ( (*(_DWORD *)(*v30 + 64LL) & 1) == 0 )
            {
              if ( qword_1C02529E0 )
                qword_1C02529E0(v30[3], 1LL, 66693LL);
            }
          }
          if ( qword_1C02524D8 )
            qword_1C02524D8(1LL);
          if ( qword_1C0252B00 )
            qword_1C0252B00();
        }
        v11 = a3;
        goto LABEL_45;
      }
      v13 = a1;
    }
    else
    {
      v20 = -1073741811;
    }
    v24 = (int)a2;
    v17 = v45;
    v43 = 1;
    goto LABEL_47;
  }
  v35 = grpdeskRitInput;
  if ( gbDesktopLocked )
    v35 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
  if ( v14 == v35 )
  {
    v12 = (int)a2;
    goto LABEL_6;
  }
  if ( v35 && ObQueryNameInfo(v35) )
    v36 = ObQueryNameInfo(v35) + 8;
  else
    v36 = 0LL;
  if ( v14 && ObQueryNameInfo(v14) )
    v37 = ObQueryNameInfo(v14) + 8;
  else
    v37 = 0LL;
  LogDiagSDCAccessDenied(v37, v36);
  v24 = (int)a2;
  v20 = -1073741790;
  v43 = 49;
LABEL_47:
  if ( a8 )
    *a8 = (unsigned int)(v43 - 27) <= 1;
  if ( a9 )
    *a9 = v42[0];
  if ( v20 >= 0 && v43 == 29 )
    v20 = -1073741266;
  LogDiagSDC(v13, v24, v11, v20, v44, v43, v17, v42[0]);
  return (unsigned int)v20;
}
