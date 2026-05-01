/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x180086CF4
 * Callers:
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18000B3AC (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18000E550 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ??1?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEAA@XZ @ 0x1801363DC (--1-$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@.c)
 *     ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x1801363E8 (--1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x18013E9A0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 *     wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___ @ 0x18016EAD8 (wil--details--ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___--_ScopeExitFn__lambda_66de.c)
 *     ??_GCWin32ApplicationView@@UEAAPEAXI@Z @ 0x18016ED70 (--_GCWin32ApplicationView@@UEAAPEAXI@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18016F280 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18016F9DC (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18016FD30 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x18041FAF0 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
