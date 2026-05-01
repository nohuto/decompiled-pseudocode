/*
 * XREFs of ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180139944
 * Callers:
 *     ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x180138DB0 (-CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellH.c)
 *     ?DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180138EB0 (-DisplaySettingsChange@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_.c)
 *     ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180139390 (-MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFallbackWindow::_SizeWindow(HWND *this, struct IImmersiveMonitor *a2)
{
  int X[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 72LL))(a2, X) >= 0 )
    SetWindowPos(this[5], 0LL, X[0], X[1], 0, 0, 0x414u);
}
