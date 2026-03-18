/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C000DF90 (UserRemoteConnectedSessionUsingWddm.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     DrvLogDiagDisplayChange @ 0x1C00B3730 (DrvLogDiagDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C00BE030 (DrvIsNotUsingGraphicsDevice.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C9210 (DrvSetWddmDeviceMonitorPowerState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C011A100 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C0147CF4 (DrvCleanupGraphicsDevices.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014BD80 (DxgkEngNotifyDisplayChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01F6828 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F6854 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  __int64 v6; // r14
  PVOID PhysDisp; // rsi
  wchar_t *i; // rax
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h]
  char v13; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    v6 = *(_QWORD *)(gpDispInfo + 16);
    if ( a1->Param )
    {
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        v12 = 0LL;
        v11 = 0LL;
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1);
        v9 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v9 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v9 )
        {
          if ( gbGDIOn && !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) )
            v4 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___();
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
               || (!qword_1C0250518 ? (v4 = -1073741637) : (v4 = qword_1C0250518(grpdeskRitInput, &v11)), v4 >= 0) )
        {
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
          {
            if ( qword_1C0250528 )
              qword_1C0250528(&v11, 0LL);
          }
        }
      }
      v10 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v10;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) && (unsigned int)UserIsWddmConnectedSession() )
      {
        v12 = 0LL;
        v11 = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (!qword_1C0250518 ? (v4 = -1073741637) : (v4 = qword_1C0250518(grpdeskRitInput, &v11)), v4 >= 0) )
        {
          v13 = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0x88Fu, 0x406u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, &v13, (__int64)a2);
          if ( v4 < 0 )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0x80u, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v13 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C0250528 )
            qword_1C0250528(&v11, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gProtocolType && !gPowerTransitionsState
      || (unsigned int)UserRemoteConnectedSessionUsingWddm() && gbFreezeScreenUpdates )
    {
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    }
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
