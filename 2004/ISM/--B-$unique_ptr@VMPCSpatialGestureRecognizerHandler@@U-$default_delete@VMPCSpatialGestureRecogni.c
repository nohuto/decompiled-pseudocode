/*
 * XREFs of ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x180018610
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AE34 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088BB0 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCB38 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BCE70 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801352E0 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x180180F2C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187C00 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
