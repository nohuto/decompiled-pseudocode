/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177DE8
 * Callers:
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800A74DC (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800BD85C (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801779BC (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 *     ?HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z @ 0x1801F3B50 (-HangAsync@ImmersiveShellStressTool@@UEAAJKKPEAX@Z.c)
 *     _lambda_ad1c2e3ff12b6fb3c427626c13364f68_::operator() @ 0x18024985C (_lambda_ad1c2e3ff12b6fb3c427626c13364f68_--operator().c)
 *     ?SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025A230 (-SubscribeToServices@TabViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ??0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z @ 0x180272750 (--0WindowGroupManager@@QEAA@PEAUIPrivilegedWindowGroupingOperations@@@Z.c)
 *     ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x1802734D0 (-RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802CEFEC (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x1802E5104 (-SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z.c)
 *     _anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases @ 0x18035B14C (_anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases.c)
 *     ?GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z @ 0x180430FC0 (-GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18043C7B4 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 *     ?GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@UtagRECT@@PEAUHWND__@@@std@@XZ @ 0x18043F978 (-GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18043FAF0 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x1801169BC (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(this, a2, a3, a4, v4, retaddr, 0);
}
