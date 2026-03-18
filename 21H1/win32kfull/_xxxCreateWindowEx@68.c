/*
 * XREFs of _xxxCreateWindowEx@68 @ 0x2D67C
 * Callers:
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     _NtUserCreateWindowEx@68 @ 0x4221A (_NtUserCreateWindowEx@68.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxCreateWindowStation@40 @ 0x8199E (_xxxCreateWindowStation@40.c)
 *     _xxxCsDdeInitialize@20 @ 0xE3B3C (_xxxCsDdeInitialize@20.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxAddShadow@4 @ 0x19D320 (_xxxAddShadow@4.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _xxxCreateClassSmIcon@4 @ 0x137DE (_xxxCreateClassSmIcon@4.c)
 *     _xxxLoadUserApiHook@0 @ 0x16798 (_xxxLoadUserApiHook@0.c)
 *     _xxxClientLoadMenu@8 @ 0x16C34 (_xxxClientLoadMenu@8.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PAX@Z @ 0x1A038 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagW.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PAX@Z @ 0x1C990 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@P.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     __DestroyMenu@4 @ 0x1E38A (__DestroyMenu@4.c)
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _GetWindowCloakStateComponentUIAware@4 @ 0x25400 (_GetWindowCloakStateComponentUIAware@4.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x2A3EA (--0-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z @ 0x2A41E (--0-$SmartObjStackRef@UtagMENU@@@@QAE@ABV0@@Z.c)
 *     _IsValidBandForProcess@12 @ 0x2A442 (_IsValidBandForProcess@12.c)
 *     ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2 (--9-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     _ShouldUseLogPixelsForWindowMetrics@4 @ 0x2AC48 (_ShouldUseLogPixelsForWindowMetrics@4.c)
 *     _IsDpiBoundaryBetweenWindows@8 @ 0x2B03C (_IsDpiBoundaryBetweenWindows@8.c)
 *     ?WantImeWindow@@YGHPAUtagWND@@0@Z @ 0x2B47C (-WantImeWindow@@YGHPAUtagWND@@0@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??8?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2D48C (--8-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     _xxxSendTransformableMessage@20 @ 0x2D496 (_xxxSendTransformableMessage@20.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxAdjustSize@12 @ 0x2D59A (_xxxAdjustSize@12.c)
 *     ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QBEE$$QAW4ZBID@@@Z @ 0x2FE94 (--8-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QBEE$$QAW4ZBID@@@Z.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PAX@Z @ 0x2FEAE (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@.c)
 *     _ValidateNewParent@8 @ 0x2FEC8 (_ValidateNewParent@8.c)
 *     _IsTopLevelParent@4 @ 0x2FF80 (_IsTopLevelParent@4.c)
 *     _ConstrainWindowSIZERECT@4 @ 0x2FFE2 (_ConstrainWindowSIZERECT@4.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     _NeedsWindowEdge@12 @ 0x32260 (_NeedsWindowEdge@12.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _CalcWindowFullScreen@4 @ 0x34B60 (_CalcWindowFullScreen@4.c)
 *     _ValidateParentDepth@8 @ 0x34CBA (_ValidateParentDepth@8.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96 (--1-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     _GetClassPtr@12 @ 0x4741E (_GetClassPtr@12.c)
 *     _DereferenceClass@8 @ 0x48042 (_DereferenceClass@8.c)
 *     _xxxClientAllocWindowClassExtraBytes@4 @ 0x48166 (_xxxClientAllocWindowClassExtraBytes@4.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxUpdateInputHangInfo@8 @ 0x6C0FA (_xxxUpdateInputHangInfo@8.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _SetTiledRect@12 @ 0x6FF46 (_SetTiledRect@12.c)
 *     _RegisterDefaultClass@4 @ 0x70420 (_RegisterDefaultClass@4.c)
 *     _ClassLock@8 @ 0x705D6 (_ClassLock@8.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxCheckFullScreen@8 @ 0x71BE6 (_xxxCheckFullScreen@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     _IsImmersiveAppIORestricted@4 @ 0x7C2DE (_IsImmersiveAppIORestricted@4.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 *     _MapClientNeuterToClientPfn@12 @ 0x807E4 (_MapClientNeuterToClientPfn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _RegisterIconTitleClass@0 @ 0x82F88 (_RegisterIconTitleClass@0.c)
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 *     _PWInsertAfter@4 @ 0x9324A (_PWInsertAfter@4.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z @ 0x93274 (-CalcForegroundInsertAfterComponentUIAware@@YGPAUtagWND@@PAU1@@Z.c)
 *     _DwmAsyncChildCreate@52 @ 0x999CC (_DwmAsyncChildCreate@52.c)
 *     _UpdateTopLevelWindowDPITransform@8 @ 0x99C12 (_UpdateTopLevelWindowDPITransform@8.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     ??4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B904 (--4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z.c)
 *     _RECTFromSIZERECT@8 @ 0x9C8EE (_RECTFromSIZERECT@8.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z @ 0x9DB5C (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z.c)
 *     _W32GetCurrentThreadDpiHostingBehavior@0 @ 0xA141E (_W32GetCurrentThreadDpiHostingBehavior@0.c)
 *     _xxxClientWOWGetProcModule@4 @ 0xA1B00 (_xxxClientWOWGetProcModule@4.c)
 *     _ClassUnlock@8 @ 0xA1C52 (_ClassUnlock@8.c)
 *     _IsTopmostBandWindow@8 @ 0xA22E2 (_IsTopmostBandWindow@8.c)
 *     _SetWindowSubtreeCoreWindowStatus@8 @ 0xA2352 (_SetWindowSubtreeCoreWindowStatus@8.c)
 *     _GetAppCompatFlags2@4 @ 0xA3AF6 (_GetAppCompatFlags2@4.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QBEEABH@Z @ 0xA5026 (--9-$RedirectedFieldcbwndExtra@H@tagWND@@QBEEABH@Z.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QBEEABI@Z @ 0xA53F2 (--9-$RedirectedFieldcbWndServerExtra@I@tagCLS@@QBEEABI@Z.c)
 *     _GetMessageWindow@4 @ 0xA6974 (_GetMessageWindow@4.c)
 *     _IsValidBand@4 @ 0xA6CEE (_IsValidBand@4.c)
 *     _IsInsideUserApiHook@0 @ 0xA6D30 (_IsInsideUserApiHook@0.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 *     _ValidateOwnerDepth@8 @ 0xA8B06 (_ValidateOwnerDepth@8.c)
 *     _IsChildWindowDpiIsolationEnabled@8 @ 0xA8DE2 (_IsChildWindowDpiIsolationEnabled@8.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBEPAUtagMENU@@XZ @ 0xAAD18 (--B-$SmartObjStackRef@UtagMENU@@@@QBEPAUtagMENU@@XZ.c)
 *     ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QBEEABW4ZBID@@@Z @ 0xAAEFE (--9-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QBEEABW4ZBID@@@Z.c)
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     _IsInternalBand@4 @ 0xAC5EC (_IsInternalBand@4.c)
 *     _UserGetLastError@0 @ 0xAC854 (_UserGetLastError@0.c)
 *     _GetPrimaryMonitor@0 @ 0xAE588 (_GetPrimaryMonitor@0.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0xAEC26 (--9-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxSendSizeMessage@8 @ 0xB2C46 (_xxxSendSizeMessage@8.c)
 *     _xxxMinMaximize@12 @ 0xB3AB6 (_xxxMinMaximize@12.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBEKXZ @ 0xC5932 (--B-$SmartObjStackRef@UtagMENU@@@@QBEKXZ.c)
 *     _zzzAttachThreadInput@12 @ 0xC76E4 (_zzzAttachThreadInput@12.c)
 *     _lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator() @ 0xF42B8 (_lambda_b4f389971314f5ad328fcfc46dc01f2a_--operator().c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ClrWF@8 @ 0x140084 (_ClrWF@8.c)
 *     _GetTopMostInsertAfter@4 @ 0x140095 (_GetTopMostInsertAfter@4.c)
 *     _SetWF@8 @ 0x1401CD (_SetWF@8.c)
 *     ??$?9K@RedirectedFieldpExtraBytes@tagWND@@QBEEABK@Z @ 0x141AE5 (--$-9K@RedirectedFieldpExtraBytes@tagWND@@QBEEABK@Z.c)
 *     _UpdateHungThreadTime@4 @ 0x142024 (_UpdateHungThreadTime@4.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QAEAAV0@QAUtagMENU@@@Z @ 0x1433E2 (--4-$SmartObjStackRef@UtagMENU@@@@QAEAAV0@QAUtagMENU@@@Z.c)
 *     _SetWFNoDwmNotify@8 @ 0x145C6B (_SetWFNoDwmNotify@8.c)
 *     _TraceChildWindowDpiTelemetry@12 @ 0x1519C8 (_TraceChildWindowDpiTelemetry@12.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 *     ??4?$SmartObjStackRef@UtagCLS@@@@QAEAAV0@QAUtagCLS@@@Z @ 0x152DC4 (--4-$SmartObjStackRef@UtagCLS@@@@QAEAAV0@QAUtagCLS@@@Z.c)
 *     _GetCurrentThreadDesktopWindow@0 @ 0x16F3A6 (_GetCurrentThreadDesktopWindow@0.c)
 *     _GetCurrentThreadMessageWindow@0 @ 0x16F3AD (_GetCurrentThreadMessageWindow@0.c)
 *     _HasMessageRootWindow@4 @ 0x16F3D4 (_HasMessageRootWindow@4.c)
 *     ?TraceLoggingCreateWindowFailed@@YGXI_K@Z @ 0x1866D7 (-TraceLoggingCreateWindowFailed@@YGXI_K@Z.c)
 *     _LockWndMenu@8 @ 0x1975AA (_LockWndMenu@8.c)
 *     ?SetRole@CoreWindowProp@@SGJPAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x19C66E (-SetRole@CoreWindowProp@@SGJPAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 *     _xxxDeleteMenu@12 @ 0x1A729B (_xxxDeleteMenu@12.c)
 *     __W32ExceptionHandler@4 @ 0x1B6D61 (__W32ExceptionHandler@4.c)
 *     __MonitorFromWindow@8 @ 0x1B6E48 (__MonitorFromWindow@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall xxxCreateWindowEx(
        int a1,
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        unsigned int a5,
        int a6,
        int **a7,
        int a8,
        int a9,
        _DWORD *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        unsigned __int16 a15,
        char a16,
        int a17)
{
  int v17; // ebx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v26; // ecx
  __int16 v27; // bx
  int CurrentProcessWin32Process; // eax
  int v29; // ebx
  int Atom; // ebx
  _DWORD *ClassPtr; // eax
  int v32; // eax
  int v33; // ebx
  int v34; // ebx
  struct tagVWPL **v35; // eax
  struct tagVWPL **v36; // ebx
  int v37; // esi
  char v38; // al
  _DWORD *v39; // esi
  int v40; // eax
  int ThreadWin32Thread; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // ecx
  int *v46; // ecx
  int v47; // ecx
  const char *v48; // edx
  _DWORD *v49; // esi
  int v50; // eax
  int **v51; // ecx
  int v52; // edx
  int v53; // eax
  int *InheritedMonitor; // edx
  int v55; // ecx
  struct tagVWPL *v56; // eax
  struct tagVWPL *v57; // ecx
  int MessageWindow; // eax
  struct _KPROCESS *v59; // ecx
  int v60; // esi
  struct tagVWPL *v61; // eax
  int v62; // edi
  int v63; // ebx
  struct tagVWPL *v64; // eax
  struct tagVWPL *v65; // eax
  struct tagVWPL *v66; // eax
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  struct tagVWPL *v70; // ecx
  __int16 v71; // cx
  struct tagVWPL *v72; // eax
  int v73; // edx
  struct tagVWPL *v74; // ecx
  int v75; // edx
  int *v76; // esi
  int v77; // eax
  int v78; // eax
  int PrimaryMonitor; // esi
  int v80; // ecx
  struct tagVWPL *v81; // eax
  struct tagVWPL *v82; // eax
  int v83; // edx
  __int16 v84; // ax
  int v85; // eax
  int **v86; // eax
  int **MonitorRect; // eax
  int v88; // ecx
  int v89; // eax
  int v90; // ecx
  int v91; // eax
  int v92; // ecx
  char v93; // al
  _DWORD *Menu; // eax
  int v95; // ecx
  int v96; // eax
  int v97; // ecx
  _DWORD *v98; // esi
  int v99; // eax
  int v100; // edx
  int v101; // ecx
  _DWORD *v102; // edx
  int v103; // eax
  int v104; // edx
  _DWORD *v105; // edx
  struct tagVWPL *v106; // eax
  int v107; // ecx
  int v108; // edx
  int v109; // eax
  int v110; // edx
  int v111; // eax
  __int64 v112; // rax
  int v113; // edx
  struct tagVWPL *v114; // ecx
  int v115; // eax
  int v116; // eax
  NTSTATUS v117; // eax
  ULONG v118; // eax
  int v119; // ecx
  int v120; // ecx
  __int64 v121; // rax
  struct tagVWPL *v122; // eax
  int v123; // eax
  int *v124; // esi
  int v125; // ecx
  struct tagVWPL *v126; // edx
  struct tagVWPL *v127; // eax
  struct tagVWPL *v128; // eax
  int v129; // eax
  int StyleWindow; // esi
  int CacheDC; // eax
  int v132; // esi
  int v133; // ecx
  struct tagWND *v134; // esi
  struct tagVWPL *v135; // esi
  struct tagWND *v136; // edx
  int SystemMenu; // eax
  int v138; // ecx
  int v139; // esi
  int v140; // eax
  int v141; // eax
  struct _LARGE_UNICODE_STRING *StrName; // eax
  struct tagVWPL *v143; // esi
  struct tagVWPL **DefaultImeWindow; // eax
  int v145; // ecx
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // edx
  int v152; // ecx
  int v153; // edx
  int v154; // edi
  struct tagVWPL *v155; // ecx
  struct tagWND *TopMostInsertAfter; // edx
  struct tagVWPL *v157; // ecx
  struct tagVWPL *v158; // edx
  int v159; // edx
  int v160; // esi
  void *v161; // eax
  int **v162; // ecx
  int v163; // eax
  struct tagVWPL *v164; // ecx
  _DWORD *v165; // edi
  char v166; // al
  struct tagVWPL *v167; // ecx
  void **v168; // edi
  struct tagWND *v169; // edx
  void (*v170)(void); // edi
  struct tagVWPL *v171; // eax
  int v172; // eax
  unsigned int v173; // edx
  int v174; // eax
  int v175; // edi
  int v176; // [esp-38h] [ebp-2A0h]
  int v177; // [esp-34h] [ebp-29Ch]
  int v178; // [esp-30h] [ebp-298h]
  int v179; // [esp-2Ch] [ebp-294h]
  int v180; // [esp-2Ch] [ebp-294h]
  int v181; // [esp-2Ch] [ebp-294h]
  struct tagWND *v182; // [esp-2Ch] [ebp-294h]
  struct tagWND *v183; // [esp-28h] [ebp-290h]
  int ClassStyle; // [esp-28h] [ebp-290h]
  int v185; // [esp-1Ch] [ebp-284h]
  HANDLE ProcessId; // [esp-18h] [ebp-280h]
  int v187; // [esp-18h] [ebp-280h]
  int v188; // [esp-18h] [ebp-280h]
  int v189; // [esp-18h] [ebp-280h]
  __int64 ProcessSequenceNumber; // [esp-14h] [ebp-27Ch]
  int v191; // [esp-14h] [ebp-27Ch]
  int v192; // [esp-10h] [ebp-278h]
  __int128 v193; // [esp-Ch] [ebp-274h]
  int v194; // [esp-4h] [ebp-26Ch]
  int v195; // [esp-4h] [ebp-26Ch]
  const unsigned __int16 *v196; // [esp+4h] [ebp-264h]
  char v197[16]; // [esp+10h] [ebp-258h] BYREF
  _BYTE v198[36]; // [esp+20h] [ebp-248h] BYREF
  _BYTE v199[12]; // [esp+44h] [ebp-224h] BYREF
  _BYTE v200[8]; // [esp+50h] [ebp-218h] BYREF
  _BYTE v201[8]; // [esp+58h] [ebp-210h] BYREF
  int v202; // [esp+60h] [ebp-208h]
  _DWORD v203[3]; // [esp+68h] [ebp-200h] BYREF
  int v204; // [esp+74h] [ebp-1F4h] BYREF
  _DWORD *v205; // [esp+78h] [ebp-1F0h]
  int v206; // [esp+7Ch] [ebp-1ECh]
  int v207; // [esp+80h] [ebp-1E8h] BYREF
  struct tagWND *v208; // [esp+84h] [ebp-1E4h]
  int v209; // [esp+88h] [ebp-1E0h]
  _DWORD v210[3]; // [esp+8Ch] [ebp-1DCh] BYREF
  _DWORD v211[3]; // [esp+98h] [ebp-1D0h] BYREF
  int v212; // [esp+A4h] [ebp-1C4h] BYREF
  int v213; // [esp+A8h] [ebp-1C0h] BYREF
  int v214; // [esp+ACh] [ebp-1BCh]
  _DWORD *v215; // [esp+B0h] [ebp-1B8h]
  int v216; // [esp+B4h] [ebp-1B4h] BYREF
  _BYTE v217[12]; // [esp+B8h] [ebp-1B0h] BYREF
  int v218; // [esp+C4h] [ebp-1A4h] BYREF
  struct tagVWPL **v219; // [esp+C8h] [ebp-1A0h]
  int v220; // [esp+CCh] [ebp-19Ch]
  int v221; // [esp+D0h] [ebp-198h]
  int v222; // [esp+D4h] [ebp-194h]
  struct _UNICODE_STRING DestinationString; // [esp+D8h] [ebp-190h] BYREF
  int v224; // [esp+E0h] [ebp-188h] BYREF
  int v225; // [esp+E4h] [ebp-184h]
  int v226; // [esp+E8h] [ebp-180h]
  _DWORD *v227; // [esp+ECh] [ebp-17Ch]
  int v228; // [esp+F0h] [ebp-178h] BYREF
  int v229; // [esp+F4h] [ebp-174h] BYREF
  int v230; // [esp+F8h] [ebp-170h] BYREF
  int v231; // [esp+FCh] [ebp-16Ch] BYREF
  _DWORD v232[18]; // [esp+100h] [ebp-168h] BYREF
  int v233; // [esp+148h] [ebp-120h] BYREF
  int v234; // [esp+14Ch] [ebp-11Ch]
  int v235; // [esp+150h] [ebp-118h]
  int v236; // [esp+154h] [ebp-114h]
  int *v237; // [esp+158h] [ebp-110h] BYREF
  int **v238; // [esp+15Ch] [ebp-10Ch]
  int *v239; // [esp+160h] [ebp-108h]
  int *v240; // [esp+164h] [ebp-104h]
  _DWORD *v241; // [esp+168h] [ebp-100h]
  int v242; // [esp+16Ch] [ebp-FCh]
  struct tagVWPL *v243; // [esp+170h] [ebp-F8h]
  int v244; // [esp+174h] [ebp-F4h]
  int v245; // [esp+178h] [ebp-F0h]
  int v246; // [esp+17Ch] [ebp-ECh]
  struct tagVWPL **v247; // [esp+180h] [ebp-E8h]
  PEPROCESS Process; // [esp+184h] [ebp-E4h] BYREF
  int v249; // [esp+188h] [ebp-E0h]
  int v250; // [esp+18Ch] [ebp-DCh]
  int v251; // [esp+190h] [ebp-D8h]
  int v252; // [esp+194h] [ebp-D4h]
  unsigned int v253; // [esp+198h] [ebp-D0h]
  int v254; // [esp+19Ch] [ebp-CCh]
  int v255; // [esp+1A0h] [ebp-C8h]
  int v256; // [esp+1A4h] [ebp-C4h] BYREF
  int (*v257)(void); // [esp+1A8h] [ebp-C0h]
  int WindowCloakStateComponentUIAware; // [esp+1ACh] [ebp-BCh]
  int v259; // [esp+1B0h] [ebp-B8h] BYREF
  int **v260; // [esp+1B4h] [ebp-B4h]
  int v261; // [esp+1B8h] [ebp-B0h] BYREF
  int v262; // [esp+1BCh] [ebp-ACh] BYREF
  int v263; // [esp+1C0h] [ebp-A8h]
  int NonChildAncestor; // [esp+1C4h] [ebp-A4h]
  int v265; // [esp+1C8h] [ebp-A0h]
  _DWORD v266[3]; // [esp+1CCh] [ebp-9Ch] BYREF
  int AppCompatFlags; // [esp+1D8h] [ebp-90h]
  void (*v268)(void); // [esp+1DCh] [ebp-8Ch]
  int v269; // [esp+1E0h] [ebp-88h]
  void (*v270)(void); // [esp+1E4h] [ebp-84h]
  int v271; // [esp+1E8h] [ebp-80h]
  struct tagVWPL **v272; // [esp+1ECh] [ebp-7Ch]
  struct tagWND *v273; // [esp+1F0h] [ebp-78h] BYREF
  char v274; // [esp+1F7h] [ebp-71h]
  int v275; // [esp+1F8h] [ebp-70h]
  int v276; // [esp+1FCh] [ebp-6Ch]
  int **v277; // [esp+200h] [ebp-68h]
  int v278; // [esp+204h] [ebp-64h]
  int CurrentThreadDesktopWindow; // [esp+208h] [ebp-60h]
  int *v280[2]; // [esp+20Ch] [ebp-5Ch] BYREF
  int v281; // [esp+214h] [ebp-54h]
  int v282; // [esp+218h] [ebp-50h]
  int *v283; // [esp+21Ch] [ebp-4Ch]
  int v284; // [esp+220h] [ebp-48h]
  _DWORD *v285; // [esp+224h] [ebp-44h]
  int v286; // [esp+228h] [ebp-40h] BYREF
  int v287; // [esp+22Ch] [ebp-3Ch] BYREF
  int **v288; // [esp+230h] [ebp-38h]
  int v289; // [esp+234h] [ebp-34h]
  char *v290; // [esp+238h] [ebp-30h]
  int v291; // [esp+23Ch] [ebp-2Ch] BYREF
  int **v292; // [esp+240h] [ebp-28h]
  int v293; // [esp+244h] [ebp-24h]
  int v294; // [esp+248h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+250h] [ebp-18h]

  v253 = (unsigned int)a2;
  v281 = a1;
  v282 = a1;
  v215 = a2;
  v250 = a3;
  v221 = a3;
  v227 = a4;
  v285 = a10;
  v241 = a10;
  v251 = a12;
  v226 = a13;
  v17 = 0;
  v244 = 0;
  v245 = 0;
  NonChildAncestor = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v280);
  v291 = 0;
  v292 = 0;
  v293 = 0;
  v294 = 0;
  v259 = 0;
  v260 = 0;
  v261 = 0;
  v262 = 0;
  v242 = 5;
  v243 = 0;
  memset(v232, 0, sizeof(v232));
  v286 = _gptiCurrent;
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v204 = 0;
  v205 = 0;
  v206 = 0;
  v207 = 0;
  v208 = 0;
  v209 = 0;
  memset(v217, 0, sizeof(v217));
  v252 = 0;
  v276 = 0;
  v254 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v222 = 0;
  v233 = 0;
  v234 = 0;
  v235 = 0;
  v236 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v266, a11);
  v284 = 0;
  CurrentThreadDesktopWindow = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(v286 + 232) + 8) & 0x10000000) == 0 && !RegisterIconTitleClass() )
    goto LABEL_27;
  if ( v281 < 0 )
  {
    v276 = 800;
    v281 &= ~0x80000000;
    v282 = v281;
  }
  v18 = *(_DWORD *)(v286 + 248);
  v246 = v18;
  v19 = (int)v285;
  if ( v285 )
  {
    if ( v285[3] != v18 )
      goto LABEL_27;
  }
  if ( (a16 & 1) != 0 )
  {
    if ( IsDesktopApp(*(_DWORD *)(v286 + 232)) )
    {
LABEL_41:
      v194 = 5;
      goto LABEL_28;
    }
    v17 = 1;
  }
  if ( (a16 & 2) != 0 && !IsImmersiveBroker(*(_DWORD *)(v286 + 232)) )
    goto LABEL_41;
  if ( a14
    && (!IsValidBand()
     || IsInternalBand()
     || HasImmersiveAppRight(*(_DWORD *)(v286 + 232))
     && (*(_DWORD *)(v20 + 464) & 0x200) == 0
     && a14 == 1
     && !v17
     && !HasMessageRootWindow(v19)) )
  {
    goto LABEL_27;
  }
  v278 = HIWORD(a5) & 0xC000;
  v249 = v278;
  v255 = (_WORD)v278 == 0x4000;
  if ( (_WORD)v278 != 0x4000 )
  {
    v19 = ShouldSetNoOwner(*(_DWORD *)(v286 + 232), v19) == 0 ? v19 : 0;
    v285 = (_DWORD *)v19;
    v241 = (_DWORD *)v19;
  }
  if ( v19 && !IsDesktopWindow(v19) )
  {
    v21 = *(_DWORD *)(v19 + 20);
    v17 = *(_BYTE *)(v21 + 146) & 0x20;
    v22 = *(_DWORD *)(v21 + 148);
    v23 = a14;
    if ( !a14 )
    {
      v23 = v22;
      goto LABEL_39;
    }
    if ( a14 == v22 )
      goto LABEL_40;
LABEL_27:
    v194 = 87;
LABEL_28:
    v24 = v194;
LABEL_29:
    UserSetLastError(v24);
    goto LABEL_30;
  }
  v23 = a14;
  if ( a14 )
    goto LABEL_40;
  v263 = *(_DWORD *)(v286 + 232);
  if ( IsImmersiveAppIORestricted(v263) )
  {
    v17 = 1;
    v195 = 15;
  }
  else
  {
    if ( (*(_BYTE *)(v263 + 464) & 2) == 0 || (v281 & 8) == 0 )
    {
      v23 = 1;
      goto LABEL_39;
    }
    v195 = 2;
  }
  v23 = v195;
LABEL_39:
  a14 = v23;
LABEL_40:
  v214 = v17;
  if ( !IsValidBandForProcess(*(_DWORD *)(v286 + 232), v23, v19) )
    goto LABEL_41;
  v26 = v281;
  if ( (v281 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      v27 = v278;
      if ( (_WORD)v278 == 0x4000 && (*(_BYTE *)(*(_DWORD *)(v19 + 20) + 18) & 0x50) == 0x40 )
      {
        v26 = v281 | 0x400000;
        v281 = v26;
        v282 = v26;
      }
      goto LABEL_52;
    }
    if ( (v253 & 0xFFFF0000) != 0 || (_WORD)v253 != 0x8002 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      v26 = v281;
      if ( (*(_BYTE *)(CurrentProcessWin32Process + 468) & 1) != 0 )
      {
        v26 = v281 | 0x400000;
        v281 = v26;
        v282 = v26;
      }
    }
  }
  v27 = v278;
LABEL_52:
  if ( (v26 & 0x2200000) == 0x2200000 )
    goto LABEL_27;
  if ( *(_DWORD *)(v286 + 316) && !CheckGrantedAccess(*(_DWORD *)(v286 + 496), 2u) )
    goto LABEL_30;
  if ( v27 == 0x4000 )
  {
    if ( !v19 )
    {
      v24 = 1406;
      goto LABEL_29;
    }
    if ( !ValidateParentDepth(0, v19) )
      goto LABEL_27;
  }
  v271 = a9;
  v275 = a8;
  v277 = a7;
  v283 = (int *)a6;
  v268 = (void (*)(void))HMLockObject;
  v270 = (void (*)(void))HMAssignmentLock;
  v257 = (int (*)(void))KeGetCurrentThread;
  while ( 1 )
  {
    v29 = v250;
    if ( (v250 & 0xFFFF0000) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v200);
      ms_exc.registration.TryLevel = 0;
      if ( RtlStringCchCopyW(*(unsigned __int16 **)(v29 + 8), HIDWORD(v193), v196) < 0 )
      {
        Atom = 0;
        v269 = 0;
        v254 = 1;
      }
      else
      {
        Atom = (unsigned __int16)UserFindAtom(&gawchAtomScratch);
        v269 = Atom;
      }
      ms_exc.registration.TryLevel = -2;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v200);
    }
    else
    {
      Atom = (unsigned __int16)v250;
      v269 = (unsigned __int16)v250;
    }
    if ( (_WORD)Atom )
    {
      ClassPtr = (_DWORD *)GetClassPtr(Atom, *(_DWORD *)(v286 + 232), v251);
      if ( ClassPtr )
        break;
    }
LABEL_104:
    if ( v254
      || (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) & 0x2000) != 0
      || ((v253 & 0xFFFF0000) == 0 ? (v45 = v253) : (v45 = *(_DWORD *)(v253 + 8)), !RegisterDefaultClass(v45)) )
    {
      v24 = 1407;
      goto LABEL_29;
    }
    v254 = 1;
    v19 = (int)v285;
  }
  SmartObjStackRef<tagCLS>::operator=(*ClassPtr);
  if ( (*(_WORD *)(*(_DWORD *)(*v280[0] + 4) + 6) & 1) != 0 )
  {
    if ( PsGetWin32KFilterSet() == 5 )
      goto LABEL_30;
    if ( v246 )
    {
      v32 = *(_DWORD *)(v246 + 4);
      if ( v32 )
      {
        if ( *(_DWORD *)(v32 + 12) && (_WORD)v269 == *(_WORD *)(_gpsi + 502) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
    }
  }
  v33 = v281;
  if ( NeedsWindowEdge(a15 >= 0x400u) )
    v34 = v33 | 0x100;
  else
    v34 = v33 & 0xFFFFFEFF;
  v282 = v34;
  v281 = v34;
  v35 = (struct tagVWPL **)HMAllocObject(v286, v246, 1, 204);
  v272 = v35;
  AppCompatFlags = (int)v35;
  v36 = v35;
  v263 = (int)v35;
  v247 = v35;
  if ( !v35 )
  {
    if ( UserGetLastError() == 8 )
    {
      v249 = MEMORY[0xFFDF0004];
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        _mm_pause();
      *(_QWORD *)((char *)&v193 + 4) = (((unsigned int)v249 * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24)
                                     + (((unsigned int)v249 * (unsigned __int64)MEMORY[0xFFDF0324]) << 8);
      TraceLoggingCreateWindowFailed((unsigned int)(v249 * MEMORY[0xFFDF0320]) >> 24, *((unsigned __int64 *)&v193 + 1));
    }
    goto LABEL_30;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v35 + 7));
  if ( (*(_DWORD *)(*((_DWORD *)v36[2] + 58) + 464) & 0x1000000) != 0 )
    v36[50] = (struct tagVWPL *)((unsigned int)v36[50] | 0x40);
  *((_DWORD *)v36[5] + 48) = 0;
  v36[41] = 0;
  *((_DWORD *)v36[5] + 36) &= ~0x40000000u;
  *((_DWORD *)v36[5] + 47) = W32GetCurrentThreadDpiHostingBehavior();
  if ( (_WORD)v278 != 0x4000
    || !v19
    || v19 == GetCurrentThreadDesktopWindow()
    || v19 == GetCurrentThreadMessageWindow()
    || *(_DWORD *)(v286 + 232) != *(_DWORD *)(*(_DWORD *)(v19 + 8) + 232)
    || IsChildWindowDpiIsolationEnabled(0, v19) )
  {
    *((_DWORD *)v36[5] + 46) = W32GetCurrentThreadDpiAwarenessContext();
    if ( (*((_DWORD *)v36[5] + 46) & 0x4000000F) != 0 )
    {
      v39 = v285;
    }
    else
    {
      v40 = v257();
      ThreadWin32Thread = W32GetThreadWin32Thread(v40);
      v39 = v285;
      if ( (*(_BYTE *)(*(_DWORD *)(ThreadWin32Thread + 260) + 148) & 0x40) != 0 )
        *((_DWORD *)v36[5] + 46) |= 0x40000000u;
    }
  }
  else
  {
    *((_DWORD *)v36[5] + 46) = *(_DWORD *)(*(_DWORD *)(v19 + 20) + 184);
    v37 = *(_DWORD *)(*(_DWORD *)(v19 + 20) + 184);
    v38 = v37 ^ W32GetCurrentThreadDpiAwarenessContext();
    v39 = v285;
    if ( (v38 & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(0);
  }
  v265 = (int)v36[5];
  v42 = *(_DWORD *)(v265 + 184);
  if ( (v42 & 0xF) == 2 && (v42 & 0xF0) == 0x20 )
  {
    v43 = 0x10000000;
    v44 = 0x20000000;
  }
  else
  {
    v43 = 0;
    v44 = 0;
  }
  *(_DWORD *)(v265 + 144) = v43 | *(_DWORD *)(v265 + 144) & 0xEFFFFFFF;
  *((_DWORD *)v36[5] + 36) = v44 | *((_DWORD *)v36[5] + 36) & 0xDFFFFFFF;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(*v280[0]);
  *((_DWORD *)v36[5] + 5) = a5 & 0xEFFFFFFF;
  *((_DWORD *)v36[5] + 4) = v281 & 0xFDF7FFFF;
  *((_DWORD *)v36[5] + 32) = *(_DWORD *)(*(_DWORD *)(*v280[0] + 4) + 48);
  *((_DWORD *)v36[5] + 40) = *(_DWORD *)(*(_DWORD *)(*v280[0] + 4) + 52);
  if ( !ReferenceClass(*v280[0], v36) )
    goto LABEL_103;
  SmartObjStackRef<tagCLS>::operator=(v36[19]);
  if ( !ClassLock(*v280[0], v217) )
  {
    DereferenceClass(*(_DWORD *)(v286 + 232), v36);
LABEL_103:
    HMFreeObject(v36);
    goto LABEL_104;
  }
  *((_DWORD *)v36[5] + 35) = a17;
  if ( *(_WORD *)(*(_DWORD *)(*v280[0] + 4) + 2) == *(_WORD *)(_gpsi + 468) )
  {
    *((_DWORD *)v36[5] + 33) = 0;
  }
  else
  {
    v46 = *(int **)(v286 + 440);
    if ( v46 )
      v47 = *v46;
    else
      v47 = 0;
    *((_DWORD *)v36[5] + 33) = v47;
  }
  *((_DWORD *)v36[5] + 37) = a14;
  if ( IsTopmostBandWindow(v36, v39) )
    *((_DWORD *)v36[5] + 4) |= 8u;
  if ( v214 )
    SetWFNoDwmNotify(v36, 35360);
  ++*(_DWORD *)(v286 + 504);
  memset(v232, 0, sizeof(v232));
  v232[11] = v281;
  v232[1] = v251;
  if ( (v253 & 0xFFFF0000) != 0 )
  {
    if ( (_WORD)v276 )
    {
      v48 = *(const char **)(*v280[0] + 60);
      v232[10] = v48;
      if ( ((unsigned int)v48 & 0xFFFF0000) != 0 )
        RtlInitLargeAnsiString(&v232[15], v48);
    }
    else
    {
      v232[10] = *(_DWORD *)(v253 + 8);
      v232[15] = *(_DWORD *)v253;
      v232[16] = *(_DWORD *)(v253 + 4);
      v232[17] = *(_DWORD *)(v253 + 8);
    }
  }
  else
  {
    v232[10] = v253;
  }
  if ( v227 )
  {
    v232[9] = v227[2];
    v232[12] = *v227;
    v232[13] = v227[1];
    v232[14] = v227[2];
  }
  v232[8] = a5;
  v232[7] = v283;
  v232[6] = v277;
  v232[5] = v275;
  v232[4] = v271;
  v49 = v285;
  if ( v285 )
    v232[3] = *v285;
  else
    v232[3] = 0;
  if ( (_WORD)v278 == 0x4000 )
  {
    v232[2] = SmartObjStackRef<tagMENU>::operator tagMENU *(v266);
    *((_DWORD *)v36[5] + 4) |= *(_DWORD *)(v49[5] + 16) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==(v266, (int)v283) )
  {
    v232[2] = 0;
  }
  else
  {
    v232[2] = *(_DWORD *)SmartObjStackRef<tagMENU>::operator unsigned long(v266);
  }
  v232[0] = v226;
  v218 = *(_DWORD *)(v286 + 228);
  *(_DWORD *)(v286 + 228) = &v218;
  v219 = v36;
  DWORD2(v193) = v36;
  v268();
  v287 = 0;
  v288 = 0;
  v50 = (int)v283;
  if ( v283 == (int *)0x80000000 || v283 == (int *)0x8000 )
    v50 = 0;
  v287 = v50;
  v51 = v277;
  if ( v277 == (int **)0x80000000 || v277 == (int **)0x8000 )
    v51 = 0;
  v288 = v51;
  if ( v275 == 0x80000000 || (v52 = v275, v275 == 0x8000) )
    v52 = 0;
  v289 = v52 + v50;
  v53 = v271;
  if ( v271 == 0x80000000 || v271 == 0x8000 )
    v53 = 0;
  v290 = (char *)v51 + v53;
  InheritedMonitor = (int *)GetInheritedMonitor(v36);
  CurrentThreadDesktopWindow = (int)InheritedMonitor;
  if ( InheritedMonitor )
  {
    v265 = 1;
  }
  else
  {
    v265 = 0;
    if ( v49 )
    {
      InheritedMonitor = (int *)ValidateHmonitorNoRip(*(_DWORD *)(v49[5] + 164));
      CurrentThreadDesktopWindow = (int)InheritedMonitor;
    }
  }
  if ( InheritedMonitor
    || (InheritedMonitor = (int *)_MonitorFromRect(&v287, 2, 0),
        CurrentThreadDesktopWindow = (int)InheritedMonitor,
        v55 = 0,
        InheritedMonitor) )
  {
    v55 = *InheritedMonitor;
  }
  *((_DWORD *)v36[5] + 41) = v55;
  *((_WORD *)v36[5] + 90) = *(_WORD *)(InheritedMonitor[5] + 52);
  *((_WORD *)v36[5] + 91) = 0;
  v56 = (struct tagVWPL *)InheritedMonitor[45];
  v36[42] = v56;
  ++*(_DWORD *)v56;
  v36[43] = 0;
  *((_DWORD *)v36[5] + 36) &= ~0x4000000u;
  if ( (_WORD)v278 != 0x4000 )
    goto LABEL_158;
  if ( IsDpiBoundaryBetweenWindows((int)v36, (int)v49) )
  {
    InheritedMonitor = (int *)CurrentThreadDesktopWindow;
LABEL_158:
    UpdateTopLevelWindowDPITransform(v36, InheritedMonitor);
  }
  if ( (_WORD)v278 == 0x4000 )
  {
    if ( v49 )
    {
      *((_WORD *)v36[5] + 91) = *(_WORD *)(v49[5] + 182);
      v57 = (struct tagVWPL *)v49[43];
      if ( v57 )
      {
        v36[43] = v57;
        ++*(_DWORD *)v57;
      }
    }
  }
  if ( v36[3] )
  {
    MessageWindow = GetMessageWindow(v36);
    *(_QWORD *)&v193 = LockPointer(v36 + 14, MessageWindow);
    v270();
  }
  if ( IsWindowDesktopComposed(v36) )
  {
    CurrentThreadDesktopWindow = (int)v49;
    if ( (_WORD)v278 != 0x4000 && (!v49 || v49 != *(_DWORD **)(v49[3] + 52)) )
      CurrentThreadDesktopWindow = GetCurrentThreadDesktopWindow();
    memset(v198, 0, sizeof(v198));
    _GetWindowCompositionInfo(v36, v198);
    v59 = *(struct _KPROCESS **)(*(_DWORD *)v36[2] + 336);
    Process = v59;
    if ( CurrentThreadDesktopWindow )
      CurrentThreadDesktopWindow = *(_DWORD *)CurrentThreadDesktopWindow;
    else
      CurrentThreadDesktopWindow = 0;
    v60 = ***((_DWORD ***)v36[3] + 1);
    v61 = v36[5];
    v62 = *((_DWORD *)v61 + 36);
    v63 = *((_DWORD *)v61 + 4);
    v256 = *((_DWORD *)v61 + 5);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v59);
    ProcessId = PsGetProcessId(Process);
    ClassStyle = DwmGetClassStyle(v263);
    v178 = v63;
    v177 = v256;
    v176 = CurrentThreadDesktopWindow;
    ReferenceDwmApiPort();
    v36 = (struct tagVWPL **)v263;
    DwmAsyncChildCreate(
      v176,
      v177,
      v178,
      v62,
      ClassStyle,
      v198,
      v60,
      &v287,
      ProcessId,
      ProcessSequenceNumber,
      HIDWORD(ProcessSequenceNumber));
    v49 = v285;
  }
  *((_DWORD *)v36[5] + 6) = v251;
  *((_DWORD *)v36[5] + 21) = MapClientNeuterToClientPfn((unsigned __int16)v276);
  if ( (*(_WORD *)(*(_DWORD *)(*v280[0] + 4) + 6) & 1) != 0 )
    SetWF(v36, 516);
  else
    ClrWF(v36, 516);
  v274 = *((_BYTE *)v36[5] + 10) & 4;
  v237 = &v218;
  v238 = v280;
  v239 = (int *)v217;
  v240 = &v286;
  v256 = 0;
  if ( (unsigned __int8)tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(&v256) )
  {
    v64 = (struct tagVWPL *)Win32AllocPoolZInit(*(_DWORD *)(*(_DWORD *)(*v280[0] + 4) + 52), 1937208149);
    v36[41] = v64;
    if ( !v64 )
    {
      v284 = 5;
      CurrentThreadDesktopWindow = 5;
LABEL_180:
      lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator()(&v237);
      goto LABEL_104;
    }
  }
  if ( PsGetWin32KFilterSet() == 5 && !v274 )
  {
    *((_DWORD *)v36[5] + 32) = (*((_DWORD *)v36[5] + 32) + 3) & 0xFFFFFFFC;
    *((_DWORD *)v36[5] + 32) += 16;
  }
  Process = 0;
  if ( !(unsigned __int8)tagWND::RedirectedFieldcbwndExtra<int>::operator!=(&Process) )
    goto LABEL_193;
  v256 = xxxClientAllocWindowClassExtraBytes(*((_DWORD *)v36[5] + 32));
  if ( !v256 )
  {
    v284 = 2;
    CurrentThreadDesktopWindow = 2;
    goto LABEL_180;
  }
  if ( IsWindowBeingDestroyed(v36) )
    goto LABEL_458;
  if ( (*(_BYTE *)(_HMPheFromObject(v36) + 13) & 1) != 0 )
    goto LABEL_458;
  v216 = 0;
  if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned long>(&v216) )
    goto LABEL_458;
  v65 = v36[5];
  if ( (*((_DWORD *)v65 + 36) & 0x800) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v65 = v272[5];
  }
  *((_DWORD *)v65 + 48) = v256;
LABEL_193:
  if ( PsGetWin32KFilterSet() == 5 && !v274 )
  {
    v66 = v36[5];
    v67 = *((_DWORD *)v66 + 48);
    v68 = *((_DWORD *)v66 + 32);
    ms_exc.registration.TryLevel = 1;
    *(_DWORD *)(v67 + v68 - 16) = *((_DWORD *)v66 + 21);
    ms_exc.registration.TryLevel = -2;
    if ( (_WORD)v276 )
      v69 = *(_DWORD *)(_gpsi + 320);
    else
      v69 = *(_DWORD *)(_gpsi + 416);
    *((_DWORD *)v36[5] + 21) = v69;
  }
  if ( *(_DWORD *)(*v280[0] + 48) && !*(_DWORD *)(*v280[0] + 64) && PsGetWin32KFilterSet() != 5 )
    xxxCreateClassSmIcon(v280);
  SetWF(v36, v276);
  if ( (*(_WORD *)(*(_DWORD *)(*v280[0] + 4) + 6) & 2) != 0
    || (_WORD)v276
    && ((_WORD)v269 == *(_WORD *)(_gpsi + 468)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 478)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 482)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 504)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 470)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 474)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 480)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 498)
     || (_WORD)v269 == *(_WORD *)(_gpsi + 472)) )
  {
    SetWF(v36, 520);
  }
  AppCompatFlags = GetAppCompatFlags(v286);
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetWF(v36, 1032);
    v281 &= 0x3Fu;
    v232[11] = v232[11] & 0x3F;
  }
  if ( (*(_BYTE *)(v286 + 264) & 2) == 0 || (v70 = v36[5], (*((_BYTE *)v70 + 10) & 4) != 0) )
    v71 = 0;
  else
    v71 = xxxClientWOWGetProcModule(*((_DWORD *)v70 + 21));
  *((_WORD *)v36[5] + 14) = v71;
  LOWORD(v72) = a15;
  if ( a15 < 0x30Au )
  {
    if ( (AppCompatFlags & 0x40) != 0 )
    {
      v73 = 1600;
LABEL_227:
      SetWF(v36, v73);
      LOWORD(v72) = a15;
    }
  }
  else
  {
    SetWF(v36, 1281);
    LOWORD(v72) = a15;
    if ( a15 >= 0x400u )
    {
      SetWF(v36, 1282);
      LOWORD(v72) = a15;
      if ( a15 >= 0x500u )
      {
        v73 = 1284;
        goto LABEL_227;
      }
    }
  }
  v72 = (struct tagVWPL *)(unsigned __int16)v72;
  if ( (unsigned __int16)v72 <= *(_WORD *)(v286 + 344) )
    v72 = *(struct tagVWPL **)(v286 + 344);
  v36[37] = v72;
  if ( (GetAppCompatFlags2(39168) & 0x10000000) != 0 )
    SetWF(v36, 2688);
  if ( IsInsideUserApiHook() )
    xxxLoadUserApiHook();
  if ( WantImeWindow((int)v49, (int)v36) )
    xxxCallCtfHook(5, 3, *v36, 0);
  if ( ((*(_BYTE *)(**(_DWORD **)(v286 + 252) + 8) | *(_BYTE *)(v286 + 372)) & 0x40) != 0 )
  {
    v224 = (int)v232;
    v225 = 0;
    if ( xxxCallHook((int)&v224, 5u, v193, SDWORD1(v193)) )
    {
      v284 = 6;
      goto LABEL_458;
    }
    v283 = (int *)v232[7];
    v277 = (int **)v232[6];
    v275 = v232[5];
    v271 = v232[4];
    CurrentThreadDesktopWindow = v225;
  }
  else
  {
    CurrentThreadDesktopWindow = 0;
  }
  v74 = v36[5];
  if ( (*((_BYTE *)v74 + 23) & 0xC0) != 0x40 )
  {
    v75 = 0;
    v276 = 0;
    goto LABEL_245;
  }
  v75 = 1;
  v276 = 1;
  if ( !v49 )
    goto LABEL_458;
LABEL_245:
  if ( v75 != v255 )
  {
    SmartObjStackRef<tagMENU>::operator=(0);
    v74 = v272[5];
    v75 = v276;
  }
  if ( (*((_BYTE *)v74 + 23) & 0xC0) != 0 )
  {
    v263 = 0;
    if ( v283 == (int *)0x80000000 || v283 == (int *)0x8000 )
    {
      v283 = 0;
      v277 = 0;
    }
    if ( v275 == 0x80000000 || v275 == 0x8000 )
    {
      v275 = 0;
      v271 = 0;
    }
  }
  else
  {
    v263 = 1;
  }
  v278 = (int)v283;
  v259 = (int)v283;
  v282 = (int)v277;
  v260 = v277;
  v261 = v275;
  v262 = v271;
  if ( v75 )
  {
    v76 = (int *)(v49[5] + 68);
    v233 = *v76++;
    v234 = *v76++;
    v235 = *v76;
    v236 = v76[1];
    v49 = v285;
    if ( IsDpiBoundaryBetweenWindows((int)v36, (int)v285) )
    {
      *((float *)v36 + 31) = 0.0;
      *((float *)v36 + 32) = 0.0;
      LogicalToPhysicalInPlaceRectWithSubpixel(v285, &v233, v36 + 31);
      PhysicalToLogicalInPlaceRectWithSubpixel(v36, &v233, v36 + 31);
      v49 = v285;
    }
    if ( v49 != (_DWORD *)_GetDesktopWindow(v36) )
    {
      v278 = (int)v283 + v233;
      v259 = (int)v283 + v233;
      v282 = (int)v277 + v234;
      v260 = (int **)((char *)v277 + v234);
    }
    CurrentThreadDesktopWindow = 1;
  }
  if ( v263 )
  {
    SetWF(v36, 3844);
    v244 = 192;
    if ( (*((_BYTE *)v36[5] + 13) & 2) != 0 )
      SetWF(v36, 2305);
    SetWF(v36, 16);
    v77 = (int)v283;
    if ( v283 == (int *)0x80000000 || v283 == (int *)0x8000 )
    {
      if ( v282 != 0x80000000 && v282 != 0x8000 )
        v242 = v282;
      v77 = (int)v283;
    }
    if ( !v265 && (v77 == 0x80000000 || v77 == 0x8000 || v275 == 0x80000000 || v275 == 0x8000) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v286 + 232) + 380) )
      {
        v78 = ValidateHmonitor(*(_DWORD *)(*(_DWORD *)(v286 + 232) + 380));
        goto LABEL_277;
      }
      if ( v49 )
      {
        v78 = _MonitorFromWindow(v49, 2);
LABEL_277:
        PrimaryMonitor = v78;
      }
      else
      {
        PrimaryMonitor = 0;
      }
      if ( !PrimaryMonitor )
      {
        PrimaryMonitor = GetPrimaryMonitor();
        goto LABEL_284;
      }
    }
    else
    {
      PrimaryMonitor = 0;
LABEL_284:
      if ( !PrimaryMonitor )
      {
        PrimaryMonitor = ValidateHmonitor(*((_DWORD *)v36[5] + 41));
        if ( !PrimaryMonitor )
        {
          if ( v265 )
            PrimaryMonitor = GetInheritedMonitor(v36);
          else
            PrimaryMonitor = 0;
          if ( PrimaryMonitor || (PrimaryMonitor = _MonitorFromRect((char *)v36[5] + 52, 2, 0), v80 = 0, PrimaryMonitor) )
            v80 = *(_DWORD *)PrimaryMonitor;
          *((_DWORD *)v36[5] + 41) = v80;
          *((_WORD *)v36[5] + 90) = *(_WORD *)(*(_DWORD *)(PrimaryMonitor + 20) + 52);
          v81 = v36[42];
          if ( v81 )
          {
            --*(_DWORD *)v81;
            if ( !*(_DWORD *)v36[42] )
              Win32FreePool(v36[42]);
            v36[42] = 0;
          }
          v82 = *(struct tagVWPL **)(PrimaryMonitor + 180);
          v36[42] = v82;
          ++*(_DWORD *)v82;
          UpdateTopLevelWindowDPITransform(v36, PrimaryMonitor);
        }
      }
    }
    SetTiledRect(PrimaryMonitor);
    v83 = (int)v283;
    if ( v283 == (int *)0x80000000 || v283 == (int *)0x8000 )
    {
      v85 = *(_DWORD *)(v286 + 232);
      if ( (*(_BYTE *)(v85 + 452) & 4) != 0 )
      {
        NonChildAncestor = 1;
        v83 = *(_DWORD *)(v85 + 436);
        v278 = v83;
        v259 = v83;
        v277 = *(int ***)(v85 + 440);
        v86 = v277;
        v282 = (int)v277;
      }
      else
      {
        v83 = v291;
        v278 = v291;
        v259 = v291;
        v86 = v292;
        v277 = v292;
        v282 = (int)v292;
      }
      v260 = v86;
      v283 = (int *)v83;
      v245 = 1;
    }
    else
    {
      v84 = *(_WORD *)(PrimaryMonitor + 118);
      if ( v84 )
        *(_WORD *)(PrimaryMonitor + 118) = v84 - 1;
    }
    if ( v275 == 0x80000000 || v275 == 0x8000 )
    {
      v90 = *(_DWORD *)(v286 + 232);
      if ( (*(_BYTE *)(v90 + 452) & 2) != 0 )
      {
        NonChildAncestor = 1;
        v261 = *(_DWORD *)(v90 + 444);
        v91 = *(_DWORD *)(v90 + 448);
      }
      else
      {
        v261 = v293 - v83;
        v91 = v294 - (_DWORD)v277;
      }
      v262 = v91;
    }
    else if ( v245 )
    {
      MonitorRect = (int **)GetMonitorRect(v197);
      v237 = *MonitorRect;
      v238 = (int **)MonitorRect[1];
      v239 = MonitorRect[2];
      v240 = MonitorRect[3];
      v88 = v275 + v278 - (_DWORD)v239;
      v89 = v271 + v282 - (_DWORD)v240;
      if ( v88 > 0 )
      {
        v283 = (int *)((char *)v283 - v88);
        v259 = (int)v283;
        if ( (int)v283 < (int)v237 )
        {
          v283 = v237;
          v259 = (int)v237;
        }
      }
      if ( v89 > 0 )
      {
        v277 = (int **)((char *)v277 - v89);
        v260 = v277;
        if ( (int)v277 < (int)v238 )
        {
          v277 = v238;
          v260 = v238;
        }
      }
    }
  }
  if ( NonChildAncestor )
    *(_DWORD *)(*(_DWORD *)(v286 + 232) + 452) &= 0xFFFFFFF9;
  v92 = (int)v36[5];
  v93 = *(_BYTE *)(v92 + 23) & 0xC0;
  if ( v93 == (char)0x80 || v93 == -64 )
  {
    SetWF(v36, 3844);
    v92 = (int)v272[5];
  }
  *(_WORD *)(v92 + 22) |= v244;
  if ( SmartObjStackRef<tagMENU>::operator==(v266, v92)
    && !v276
    && SharedPointerBase<tagWND>::operator!=((_DWORD *)(*v280[0] + 56), *v280[0]) )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    zzzLockDisplayAreaAndInvalidateDCCache(0);
    RtlInitUnicodeStringOrId(&DestinationString, *(PCWSTR *)(*v280[0] + 56));
    Menu = xxxClientLoadMenu(*(_DWORD *)(*(_DWORD *)(*v280[0] + 4) + 40), (ULONG_PTR)&DestinationString);
    SmartObjStackRef<tagMENU>::operator=(Menu);
    if ( (*((_BYTE *)v36[5] + 23) & 0xC0) == 0x40 )
    {
      v96 = SmartObjStackRef<tagMENU>::operator tagMENU *(v266);
      _DestroyMenu(v96);
      SmartObjStackRef<tagMENU>::operator=(0);
      goto LABEL_458;
    }
    if ( SmartObjStackRef<tagMENU>::operator==(v266, v95) )
      v232[2] = 0;
    else
      v232[2] = *(_DWORD *)SmartObjStackRef<tagMENU>::operator unsigned long(v266);
  }
  if ( (*((_BYTE *)v36[5] + 23) & 0xC0) == 0x40 )
  {
    v97 = SmartObjStackRef<tagMENU>::operator tagMENU *(v266);
    *((_DWORD *)v36[5] + 25) = v97;
    v36[23] = (struct tagVWPL *)v97;
  }
  else
  {
    LockWndMenu(v36, v266);
  }
  if ( (*((_BYTE *)v36[5] + 23) & 0xC0) != 0x40 )
  {
    if ( (a16 & 4) != 0 )
      CoreWindowProp::SetRole(v36, 1);
    v99 = LockPointer((int)(v36 + 27), (int)v36);
    v192 = v100;
    v191 = v99;
    v270();
    v98 = v285;
    if ( IsTopLevelParent(v285) )
    {
      v109 = LockPointer((int)(v36 + 16), 0);
      v187 = v110;
      ((void (__stdcall *)(int))v270)(v109);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v101);
      if ( !ValidateOwnerDepth(v36, NonChildAncestor) )
        goto LABEL_337;
      v102 = (_DWORD *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        *((_DWORD *)v36[5] + 37) = *(_DWORD *)(*(_DWORD *)(NonChildAncestor + 20) + 148);
        SetOrClrWF(*(_BYTE *)(v102[5] + 146) & 0x20, (int)v36, 0x8A20u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((void *)NonChildAncestor, v191);
        v102 = (_DWORD *)NonChildAncestor;
      }
      v103 = LockPointer((int)(v36 + 16), (int)v102);
      ((void (__cdecl *)(int, int))v270)(v103, v104);
      v105 = v36 + 16;
      v106 = v36[16];
      if ( v106 )
      {
        if ( (*(_BYTE *)(*((_DWORD *)v106 + 5) + 16) & 8) != 0
          || (v213 = 1, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator!=(&v213)) )
        {
          SetWF(v36, 2056);
          v105 = v36 + 16;
        }
      }
      v107 = _gpsi;
      if ( (_WORD)v269 != *(_WORD *)(_gpsi + 498) && SharedPointerBase<tagWND>::operator!=(v105, _gpsi) )
      {
        v107 = v286;
        if ( *(_DWORD *)(*(_DWORD *)v108 + 8) != v286 )
          zzzAttachThreadInput(1);
      }
    }
    if ( SharedPointerBase<tagWND>::operator==(v36 + 16, v107) && !CoreWindowProp::IsComponent(v36) )
    {
      v212 = 8;
      if ( (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v212)
        || (v231 = 9, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v231))
        || (v230 = 10, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v230))
        || (v229 = 11, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v229))
        || (v228 = 13, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v228))
        || (v273 = (struct tagWND *)15, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(&v273))
        || (*((_BYTE *)v36[5] + 146) & 0x20) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v98 || v98 != *(_DWORD **)(v98[3] + 52) )
    {
      v98 = (_DWORD *)GetCurrentThreadDesktopWindow();
      v285 = v98;
      v204 = *(_DWORD *)(v286 + 228);
      *(_DWORD *)(v286 + 228) = &v204;
      v205 = v98;
      if ( v98 )
        ((void (__cdecl *)(_DWORD *))v268)(v98);
      v252 = 1;
    }
    if ( (a16 & 2) == 0 )
      goto LABEL_374;
    if ( !*(_DWORD *)(v286 + 796) )
    {
      SetWF(v36, 35392);
      *(_DWORD *)(v286 + 688) |= (unsigned int)&loc_3FFFD + 3;
      *(_DWORD *)(*(_DWORD *)(v286 + 236) + 284) |= 0x2000000u;
      v111 = v286;
      if ( *(_DWORD *)(v286 + 792)
        || (*(_DWORD *)(v286 + 792) = CreateKernelEvent(1, 0), v111 = v286, *(_DWORD *)(v286 + 792)) )
      {
        ((void (__stdcall *)(int, struct tagVWPL **, int, int, int, int))v270)(v111 + 796, v36, v185, v187, v191, v192);
        goto LABEL_374;
      }
      v284 = 7;
      goto LABEL_458;
    }
LABEL_337:
    UserSetLastError(87);
    goto LABEL_458;
  }
  v98 = v285;
  if ( !v285 )
    goto LABEL_458;
  if ( (a16 & 2) != 0 )
    goto LABEL_337;
LABEL_374:
  if ( (*((_BYTE *)v36[5] + 144) & 8) != 0 )
  {
    v243 = v36[14];
    UnlinkWindow(v36, v243);
  }
  if ( !IsTopLevelParent(v98) )
  {
    *((_DWORD *)v36[5] + 37) = *(_DWORD *)(v98[5] + 148);
    SetOrClrWF(*(_BYTE *)(v98[5] + 146) & 0x20, (int)v36, 0x8A20u, 1);
  }
  if ( v98 && !ValidateNewParent(v36, v98) )
  {
    v284 = 9;
    goto LABEL_458;
  }
  v112 = LockPointer(v36 + 14, v98);
  ((void (__cdecl *)(_DWORD, _DWORD))v270)(v112, HIDWORD(v112));
  if ( v98 )
    v113 = (int)(*(_DWORD *)(v98[5] + 144) << 6) >> 31;
  else
    v113 = 0;
  SetWindowSubtreeCoreWindowStatus(v36, v113);
  v114 = v36[5];
  v273 = v114;
  if ( (*((_DWORD *)v114 + 46) & 0xF) == 2 )
  {
    v115 = ShouldUseLogPixelsForWindowMetrics(v36);
    *((_DWORD *)v273 + 36) ^= (*((_DWORD *)v273 + 36) ^ (v115 << 27)) & 0x8000000;
    v114 = v272[5];
  }
  if ( (*((_BYTE *)v114 + 13) & 1) == 0
    && (*(_DWORD *)(*(_DWORD *)(*v280[0] + 4) + 8) & 0x80u) != 0
    && (*(_BYTE *)(v98[5] + 23) & 2) == 0 )
  {
    ClrWF(v36, 3846);
  }
  v116 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
  {
    SetWFNoDwmNotify(v36, 35344);
    v116 = WindowCloakStateComponentUIAware;
  }
  if ( v116 )
  {
    v117 = zzzSetWindowCompositionCloak(v36, 0, v116);
    if ( v117 < 0 )
    {
      v118 = RtlNtStatusToDosError(v117);
      UserSetLastError(v118);
      v284 = 8;
      goto LABEL_458;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v201);
  if ( v243 )
    zzzLockDisplayAreaAndInvalidateDCCache(0);
  if ( v98 )
    zzzLockDisplayAreaAndInvalidateDCCache(0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v201);
  if ( (*((_BYTE *)v36[5] + 23) & 0xC0) == 0x40
    && !_IsTopLevelWindow(v36)
    && SharedPointerBase<tagWND>::operator!=(v36 + 14, v119)
    && v286 != *(_DWORD *)(*(_DWORD *)v120 + 8) )
  {
    if ( v98 != *(_DWORD **)v120 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    zzzAttachThreadInput(1);
    v121 = GetMessageWindow(v36);
    if ( HIDWORD(v121) != (_DWORD)v121
      && ((*(_BYTE *)(*(_DWORD *)(HIDWORD(v121) + 20) + 184) ^ *((_BYTE *)v36[5] + 184)) & 0xF) != 0
      && !IsChildWindowDpiIsolationEnabled(v36, HIDWORD(v121)) )
    {
      xxxForceUpdateProcessDpiAwarenessContext(v36, *(_DWORD *)(*((_DWORD *)v36[14] + 5) + 184));
    }
  }
  if ( v250 != (unsigned __int16)gatomMessage && v250 != 32769 && v250 != 32774 && !*(_DWORD *)(v286 + 504) )
  {
    UpdateHungThreadTime();
    xxxUpdateInputHangInfo(0, 1);
  }
  xxxAdjustSize((int)v36, &v261, &v262);
  ConstrainWindowSIZERECT(&v259);
  if ( v36[3] )
  {
    v122 = v36[5];
    if ( (*((_BYTE *)v122 + 23) & 0x40) == 0 && *((char *)v122 + 16) >= 0 )
      xxxCheckFullScreen(v36, &v259);
  }
  if ( v261 < 0 )
    v261 = 0;
  if ( v262 < 0 )
    v262 = 0;
  RECTFromSIZERECT((char *)v36[5] + 52, &v259);
  if ( v276 )
  {
    v123 = ValidateHmonitorNoRip(*(_DWORD *)(v98[5] + 164));
LABEL_427:
    v124 = (int *)v123;
  }
  else
  {
    if ( v265 )
    {
      v123 = GetInheritedMonitor(v36);
      goto LABEL_427;
    }
    v124 = 0;
  }
  if ( v124 || (v124 = (int *)_MonitorFromRect((char *)v36[5] + 52, 2, 0), v125 = 0, v124) )
    v125 = *v124;
  v126 = v36[5];
  if ( v125 != *((_DWORD *)v126 + 41) )
  {
    *((_DWORD *)v126 + 41) = v125;
    *((_WORD *)v36[5] + 90) = *(_WORD *)(v124[5] + 52);
    v127 = v36[42];
    if ( v127 )
    {
      --*(_DWORD *)v127;
      if ( !*(_DWORD *)v36[42] )
        Win32FreePool(v36[42]);
      v36[42] = 0;
    }
    v128 = (struct tagVWPL *)v124[45];
    v36[42] = v128;
    ++*(_DWORD *)v128;
    if ( !v276 )
      UpdateTopLevelWindowDPITransform(v36, v124);
  }
  if ( (*((_BYTE *)v36[5] + 19) & 0x20) != 0 && GetRedirectionBitmap(v36) )
  {
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    v129 = RecreateRedirectionBitmap((int)v36, 0, 0, 0, 0, 0);
    v188 = *(_DWORD *)(_gpDispInfo + 20);
    if ( v129 < 0 )
    {
      GreUnlockVisRgn(v188);
      v284 = 3;
      goto LABEL_458;
    }
    GreUnlockVisRgn(v188);
  }
  if ( (*(_BYTE *)(*(_DWORD *)(*v280[0] + 4) + 8) & 0x20) != 0
    || (*(_BYTE *)(*(_DWORD *)(*v280[0] + 4) + 8) & 0x40) != 0 && !*(_DWORD *)(*v280[0] + 24) )
  {
    StyleWindow = GetStyleWindow(v36, 2848);
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    CacheDC = CreateCacheDC(v36, StyleWindow != 0 ? 49152 : 0x8000, 0);
    v189 = *(_DWORD *)(_gpDispInfo + 20);
    if ( !CacheDC )
    {
      GreUnlockVisRgn(v189);
      v284 = 10;
      goto LABEL_458;
    }
    GreUnlockVisRgn(v189);
  }
  v132 = v281;
  if ( ((unsigned int)&loc_80000 & v281) != 0
    && (*((_BYTE *)v36[5] + 18) & 8) == 0
    && xxxSetLayeredWindow((struct tagWND *)v36, 0, 0) < 0 )
  {
    v284 = 11;
    goto LABEL_458;
  }
  if ( (v132 & 0x2000000) != 0 && !GetStyleWindow(v36[14], 2818) )
  {
    SetWF(v36, 2818);
    if ( SetRedirectedWindow((int)v36, 2) < 0 )
    {
      ClrWF(v36, 2818);
      v284 = 12;
      goto LABEL_458;
    }
  }
  v232[7] = v283;
  v232[6] = v277;
  v232[5] = v275;
  v232[4] = v271;
  if ( !xxxSendMessage(0, v232) )
  {
LABEL_458:
    v134 = (struct tagWND *)(*((_BYTE *)v36[5] + 23) & 0x10);
    v273 = v134;
    if ( v252 )
      ThreadUnlock1();
    SetWF(v36, 1152);
    SetWF(v36, 896);
    if ( v134 )
      SetVisible(v36, 0);
    v135 = v36[14];
    if ( v135 )
    {
      if ( v273 )
      {
        zzzLockDisplayAreaAndInvalidateDCCache(0);
        v135 = v272[14];
      }
      v136 = v135;
      if ( (*((_BYTE *)v36[5] + 23) & 0xC0) == 0x40 )
      {
        v273 = v135;
        if ( _IsTopLevelWindow(v36) )
        {
          v136 = v273;
        }
        else
        {
          v136 = v135;
          if ( v286 != *((_DWORD *)v135 + 2) )
          {
            zzzAttachThreadInput(0);
            v136 = v272[14];
          }
        }
      }
      UnlinkWindow(v36, v136);
    }
    ClassUnlock(*(struct tagCLS **)v280[0]);
    xxxFreeWindow(v36);
    if ( v284 )
    {
      v255 = MEMORY[0xFFDF0004];
      AppCompatFlags = MEMORY[0xFFDF0320];
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        _mm_pause();
LABEL_531:
      TraceLoggingCreateWindowFailed(SBYTE4(v193), *((unsigned __int64 *)&v193 + 1));
      goto LABEL_30;
    }
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(*((_DWORD *)v36[19] + 1) + 9) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v36, 0);
    SmartObjStackRef<tagMENU>::operator=(SystemMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v138) )
    {
      v203[2] = 0;
      v139 = SmartObjStackRef<tagMENU>::operator unsigned long(v133);
      v140 = v257();
      v141 = W32GetThreadWin32Thread(v140);
      v203[0] = *(_DWORD *)(v141 + 228);
      *(_DWORD *)(v141 + 228) = v203;
      v203[1] = v139;
      if ( v139 )
        ((void (__cdecl *)(int))v268)(v139);
      xxxDeleteMenu(1024);
      xxxDeleteMenu(1024);
      ThreadUnlock1();
    }
  }
  if ( (*((_BYTE *)v36[5] + 10) & 2) != 0
    && (!v232[14] || v232[12] || !SharedPointerBase<tagWND>::operator==(v36 + 25, v133)) )
  {
    memset(v199, 0, sizeof(v199));
    v232[9] = v36[25];
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v36 + 25),
                (struct _LARGE_UNICODE_STRING *)v199);
    v232[12] = *(_DWORD *)StrName;
    v232[13] = *((_DWORD *)StrName + 1);
    v232[14] = *((_DWORD *)StrName + 2);
  }
  v143 = (struct tagVWPL *)v285;
  if ( (*_gpsi & 4) != 0 && !*(_DWORD *)(v286 + 436) && WantImeWindow((int)v285, (int)v36) )
  {
    DefaultImeWindow = xxxCreateDefaultImeWindow(v36, v269, v251);
    ((void (__cdecl *)(int, struct tagVWPL **))v270)(v286 + 436, DefaultImeWindow);
    v145 = v286;
    v273 = *(struct tagWND **)(v286 + 436);
    if ( v273 )
    {
      v211[2] = 0;
      v146 = v257();
      v147 = W32GetThreadWin32Thread(v146);
      v211[0] = *(_DWORD *)(v147 + 228);
      *(_DWORD *)(v147 + 228) = v211;
      v211[1] = v273;
      ((void (__cdecl *)(struct tagWND *))v268)(v273);
      xxxSendMessage(0x21u, 0);
      ThreadUnlock1();
      v145 = v286;
    }
    ms_exc.registration.TryLevel = 2;
    v148 = (**(_DWORD **)(v145 + 260) >> 6) & 1;
    v202 = v148;
    ms_exc.registration.TryLevel = -2;
    v273 = *(struct tagWND **)(v145 + 436);
    if ( v273 && v148 )
    {
      v210[2] = 0;
      v149 = v257();
      v150 = W32GetThreadWin32Thread(v149);
      v210[0] = *(_DWORD *)(v150 + 228);
      *(_DWORD *)(v150 + 228) = v210;
      v210[1] = v273;
      v183 = v273;
      v268();
      xxxSendMessage(0x19u, *(_DWORD *)(*(_DWORD *)(v286 + 240) + 20));
      ms_exc.registration.TryLevel = 3;
      **(_DWORD **)(v286 + 260) &= ~0x40u;
      ms_exc.registration.TryLevel = -2;
      ThreadUnlock1();
    }
  }
  if ( !v143 || (*((_BYTE *)v36[5] + 144) & 8) != 0 && v36[14] != v143 )
    goto LABEL_519;
  v282 = PWInsertAfter(CurrentThreadDesktopWindow);
  if ( !IsPseudoPwnd((void *)v282) )
  {
    v152 = *(_DWORD *)(v151 + 56);
    if ( (struct tagVWPL *)v152 != v36[14] )
      v282 = v276 != 0;
  }
  if ( SharedPointerBase<tagWND>::operator!=(v36 + 16, v152) )
  {
    *((_DWORD *)v36[5] + 37) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v153 + 20) + 148);
    SetOrClrWF(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v153 + 20) + 146) & 0x20, (int)v36, 0x8A20u, 1);
  }
  if ( !ValidateNewParent(v36, v143) )
  {
    v179 = 9;
    goto LABEL_504;
  }
  UnlinkWindow(v36, v36[14]);
  v155 = v36[5];
  if ( (*((_BYTE *)v155 + 23) & 0xC0) == 0x40 || v143 == *(struct tagVWPL **)(*((_DWORD *)v143 + 3) + 52) )
  {
LABEL_514:
    TopMostInsertAfter = (struct tagWND *)v282;
    goto LABEL_515;
  }
  if ( (*((_BYTE *)v155 + 16) & 8) != 0 )
  {
    if ( _gHardErrorHandler )
    {
      TopMostInsertAfter = (struct tagWND *)GetTopMostInsertAfter(v36);
      if ( TopMostInsertAfter )
        goto LABEL_515;
    }
    goto LABEL_514;
  }
  if ( !v282 || !IsPseudoPwnd((void *)v282) && (*(_BYTE *)(*((_DWORD *)TopMostInsertAfter + 5) + 16) & 8) != 0 )
    TopMostInsertAfter = CalcForegroundInsertAfterComponentUIAware(v183);
LABEL_515:
  if ( (unsigned int)TopMostInsertAfter >= 2 && IsPseudoPwnd(TopMostInsertAfter) )
  {
    v179 = 13;
LABEL_504:
    v154 = v179;
    v284 = v179;
LABEL_524:
    if ( v252 )
      ThreadUnlock1();
    if ( ThreadUnlock1() )
      xxxDestroyWindow(v36);
    ClassUnlock(*(struct tagCLS **)v280[0]);
    if ( v154 )
    {
      AppCompatFlags = MEMORY[0xFFDF0004];
      v255 = MEMORY[0xFFDF0320];
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        _mm_pause();
      goto LABEL_531;
    }
LABEL_30:
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v266);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v280);
    return 0;
  }
  LinkWindow(v143);
  zzzLockDisplayAreaAndInvalidateDCCache(0);
LABEL_519:
  v157 = v36[5];
  v158 = v157;
  if ( (*((_BYTE *)v157 + 23) & 0xC0) == 0x40 && (*(_BYTE *)(*((_DWORD *)v143 + 5) + 18) & 0x40) != 0 )
  {
    v159 = *((_DWORD *)v157 + 15);
    v160 = *((_DWORD *)v157 + 13);
    *((_DWORD *)v157 + 15) = v235 + v233 - v160;
    *((_DWORD *)v36[5] + 13) = v160 + *((_DWORD *)v36[5] + 15) - v159;
    v158 = v272[5];
  }
  v291 = *((_DWORD *)v158 + 13);
  v292 = (int **)*((_DWORD *)v158 + 14);
  v293 = *((_DWORD *)v158 + 15);
  v294 = *((_DWORD *)v158 + 16);
  xxxSendTransformableMessage(v36, 0, (int)&v291, 0);
  tagWND::RedirectedRecttagWNDrcClient::operator=(&v291);
  if ( xxxSendMessage(0, v232) == -1 )
  {
    v154 = v284;
    goto LABEL_524;
  }
  SetWF(v36, 1920);
  if ( IsWindowDesktopComposed(v36) )
  {
    v180 = *((_DWORD *)v36[5] + 5);
    v161 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v161, (int)*v36, -16, v180);
    DwmChildRectChange(v36);
    if ( SharedPointerBase<tagWND>::operator==(v36 + 16, (int)(v36 + 16)) )
      v163 = 0;
    else
      v163 = **v162;
    v181 = v163;
    ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v181);
  }
  xxxWindowEvent(0x8000, v36, 0, 0, 0);
  v164 = v36[5];
  if ( (*((_BYTE *)v164 + 8) & 0x10) == 0 )
  {
    xxxSendSizeMessage((ULONG_PTR)v36, 0);
    v165 = v285;
    if ( v285 && (_DWORD *)_GetDesktopWindow(v36) != v165 )
    {
      v291 -= v233;
      v292 = (int **)((char *)v292 - v234);
    }
    xxxSendTransformableMessage(v36, 0, (unsigned __int16)v291 | ((unsigned __int16)v292 << 16), 0);
    v164 = v272[5];
  }
  v166 = *((_BYTE *)v164 + 23);
  if ( (v166 & 0x20) != 0 )
  {
    SetMinimize(v36, 0);
    xxxMinMaximize(_gdwPUDFlags & 0x10000 | 1);
  }
  else if ( (v166 & 1) != 0 )
  {
    ClrWF(v36, 3841);
    xxxMinMaximize(_gdwPUDFlags & 0x10000 | 1);
  }
  CalcWindowFullScreen(v36);
  v167 = v36[5];
  if ( (*((_BYTE *)v167 + 23) & 0xC0) == 0x40
    && (*((_BYTE *)v167 + 16) & 4) == 0
    && (v168 = (void **)(v36 + 14), SharedPointerBase<tagWND>::operator!=(v36 + 14, (int)v36[5])) )
  {
    v169 = (struct tagWND *)*v168;
    v207 = *(_DWORD *)(v286 + 228);
    *(_DWORD *)(v286 + 228) = &v207;
    v208 = v169;
    v182 = v169;
    v268();
    xxxSendTransformableMessage(*v168, (*((unsigned __int16 *)v36 + 46) << 16) | 1, (int)*v36, 0);
    v170 = (void (*)(void))ThreadUnlock1;
    ThreadUnlock1();
  }
  else
  {
    v170 = (void (*)(void))ThreadUnlock1;
  }
  xxxInheritWindowMonitor(v36, 0, 0);
  if ( (a5 & 0x10000000) != 0 )
    xxxShowWindow(v182, (unsigned int)v183);
  v171 = v36[5];
  if ( (*((_BYTE *)v171 + 23) & 0xC0) == 0 || (*((_BYTE *)v171 + 18) & 4) != 0 )
  {
    v172 = *(_DWORD *)(v286 + 232);
    v173 = *(_DWORD *)(v172 + 376);
    if ( v173 )
    {
      if ( (*(_BYTE *)(v286 + 264) & 2) == 0 || *(_DWORD *)(v172 + 212) > 1u )
      {
        xxxSendMessage(v173, 0);
        *(_DWORD *)(*(_DWORD *)(v286 + 232) + 376) = 0;
      }
    }
  }
  if ( v252 )
    v170();
  ClassUnlock(*(struct tagCLS **)v280[0]);
  v174 = ((int (*)(void))v170)();
  v175 = v174;
  if ( !v174 || (*(_BYTE *)(_HMPheFromObject(v174) + 13) & 1) != 0 )
    v175 = 0;
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v266);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v280);
  return v175;
}
