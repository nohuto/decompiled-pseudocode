/*
 * XREFs of IsxxxSetCsrssThreadDesktopSupported @ 0x1C01F6854
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D000 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E460 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxSetCsrssThreadDesktopSupported()
{
  if ( qword_1C0250510 )
    return qword_1C0250510();
  else
    return 3221225659LL;
}
