/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvLogDiagDisplayChange @ 0x1C000F540 (DrvLogDiagDisplayChange.c)
 *     DrvIsNotUsingGraphicsDevice @ 0x1C005D9D0 (DrvIsNotUsingGraphicsDevice.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C00B39E0 (UserRemoteConnectedSessionUsingWddm.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8950 (DrvSetWddmDeviceMonitorPowerState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C011C440 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F350 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C014A1C4 (DrvCleanupGraphicsDevices.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014E1D0 (DxgkEngNotifyDisplayChange.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01F8158 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F8184 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  __int64 v6; // r14
  PVOID PhysDisp; // rsi
  wchar_t *i; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  char v16; // [rsp+A0h] [rbp+18h] BYREF

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
        v15 = 0LL;
        v14 = 0LL;
        gcLocalNextGlobalDeviceNumber = 0;
        DrvUpdateGraphicsDeviceList(1LL, v10, v11);
        v12 = DispBroker::DispBrokerClient::s_pSessionBroker;
        if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
          v12 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
        if ( *v12 )
        {
          if ( gbGDIOn && !(unsigned int)DrvIsNotUsingGraphicsDevice(v6) )
            v4 = DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___();
        }
        else if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
               || (!qword_1C0252518 ? (v4 = -1073741637) : (v4 = qword_1C0252518(grpdeskRitInput, &v14)), v4 >= 0) )
        {
          v4 = xxxUserSetDisplayConfig(0, 0LL, 2191, 6u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
          {
            if ( qword_1C0252528 )
              qword_1C0252528(&v14, 0LL);
          }
        }
      }
      v13 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v13;
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
        v15 = 0LL;
        v14 = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (!qword_1C0252518 ? (v4 = -1073741637) : (v4 = qword_1C0252518(grpdeskRitInput, &v14)), v4 >= 0) )
        {
          v16 = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 2191, 0x406u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, &v16, (__int64)a2);
          if ( v4 < 0 )
          {
            v4 = xxxUserSetDisplayConfig(0, 0LL, 128, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && v16 )
          {
            DxgkEngNotifyDisplayChange(0LL);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && qword_1C0252528 )
            qword_1C0252528(&v14, 0LL);
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1LL, 65533LL, v9);
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
