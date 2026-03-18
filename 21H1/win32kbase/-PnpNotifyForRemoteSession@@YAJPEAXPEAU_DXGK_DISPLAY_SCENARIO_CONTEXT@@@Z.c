/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01252E0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0096410 (UserRemoteConnectedSessionUsingXddm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C0150728 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C0151718 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0151FC8 (DrvUpdateRemoteGraphicsDeviceList.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported @ 0x1C01FDB88 (IsxxxRestoreCsrssThreadDesktopSupported.c)
 *     IsxxxSetCsrssThreadDesktopSupported @ 0x1C01FDBB4 (IsxxxSetCsrssThreadDesktopSupported.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 result; // rax
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( !(unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
LABEL_9:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      xxxUserSetDisplayConfig(0, 0LL, 2191, 2u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 )
      {
        if ( qword_1C02584E8 )
          qword_1C02584E8(&v6, 0LL);
      }
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
    || (!qword_1C02584D8 ? (result = 3221225659LL) : (result = qword_1C02584D8(grpdeskRitInput, &v6)), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1LL, v3, v4);
    xxxUserSetDisplayConfig(0, 0LL, 128, 1u, (__int64)grpdeskRitInput, 0, 0LL, 0LL, 0LL, (__int64)a2);
    goto LABEL_9;
  }
  return result;
}
