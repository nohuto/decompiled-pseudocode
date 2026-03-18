/*
 * XREFs of xxxCreateWindowEx @ 0x1C00A8C10
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateWindowEx @ 0x1C00A6060 (NtUserCreateWindowEx.c)
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C52A4 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C011DD40 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0134A18 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00078DC (TraceChildWindowDpiTelemetry.c)
 *     DwmAsyncChildCreate @ 0x1C000EB74 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C000ECB8 (DwmGetClassStyle.c)
 *     MapClientNeuterToClientPfn @ 0x1C001D7C4 (MapClientNeuterToClientPfn.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0021424 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C0022C54 (PWInsertAfter.c)
 *     ValidateNewParent @ 0x1C0022CCC (ValidateNewParent.c)
 *     ValidateParentDepth @ 0x1C0022E40 (ValidateParentDepth.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00232D0 (UpdateTopLevelWindowDPITransform.c)
 *     CalcWindowFullScreen @ 0x1C00239C8 (CalcWindowFullScreen.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     xxxSendSizeMessage @ 0x1C00251C0 (xxxSendSizeMessage.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     GetMonitorRect @ 0x1C002A734 (GetMonitorRect.c)
 *     xxxCreateClassSmIcon @ 0x1C0030AF4 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     RtlInitLargeAnsiString @ 0x1C0031D08 (RtlInitLargeAnsiString.c)
 *     DwmAsyncOwnerChange @ 0x1C0033524 (DwmAsyncOwnerChange.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C00335D0 (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0033644 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     zzzAttachThreadInput @ 0x1C00381C0 (zzzAttachThreadInput.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C003BF28 (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x1C003C014 (IsImmersiveAppIORestricted.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C003C8CC (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00456D0 (xxxLoadUserApiHook.c)
 *     UserGetLastError @ 0x1C00488A4 (UserGetLastError.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C005B3C8 (SetMinimize.c)
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C005CE2C (RtlInitUnicodeStringOrId.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FA54 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006AB48 (GetInheritedMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006E9F0 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2B0 (IsDpiBoundaryBetweenWindows.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     _InnerGetClassPtr @ 0x1C008D8DC (_InnerGetClassPtr.c)
 *     DereferenceClass @ 0x1C008D950 (DereferenceClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxUpdateInputHangInfo @ 0x1C0095D70 (xxxUpdateInputHangInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     NeedsWindowEdge @ 0x1C00A2B48 (NeedsWindowEdge.c)
 *     RegisterDefaultClass @ 0x1C00A2B84 (RegisterDefaultClass.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxAdjustSize @ 0x1C00ADCE8 (xxxAdjustSize.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F6BD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00FB5C0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ClassLock @ 0x1C00FC6D0 (ClassLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C00FD29C (W32GetCurrentThreadDpiHostingBehavior.c)
 *     RECTFromSIZERECT @ 0x1C00FEA14 (RECTFromSIZERECT.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     IsValidBandForProcess @ 0x1C00FFDDC (IsValidBandForProcess.c)
 *     SetTiledRect @ 0x1C0102C40 (SetTiledRect.c)
 *     ReferenceClass @ 0x1C0103CE0 (ReferenceClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     IsTopLevelParent @ 0x1C0106B78 (IsTopLevelParent.c)
 *     GetAppCompatFlags @ 0x1C0108250 (GetAppCompatFlags.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0108A50 (IsChildWindowDpiIsolationEnabled.c)
 *     RegisterIconTitleClass @ 0x1C010F4AC (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C01100AC (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C01127A8 (ValidateOwnerDepth.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0114140 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119404 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0158E58 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_::operator() @ 0x1C01592A4 (_lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_--operator().c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0159410 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     Feature_Servicing_2109c_34956946__private_IsEnabled @ 0x1C0159424 (Feature_Servicing_2109c_34956946__private_IsEnabled.c)
 *     GetTopMostInsertAfter @ 0x1C01D147C (GetTopMostInsertAfter.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C01D3328 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E69BC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C0209B60 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C02256A4 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     _W32ExceptionHandler @ 0x1C025E554 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        __int32 a6,
        LONG a7,
        unsigned int a8,
        unsigned int a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 *v19; // r12
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  int v24; // edi
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // r15d
  int v28; // ecx
  int v29; // r13d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // rdi
  __int16 Atom; // bx
  __int64 v39; // rdi
  _QWORD *v40; // r15
  __int64 *ClassPtr; // rax
  _QWORD *v42; // r14
  __int64 v43; // rdi
  __int64 v44; // rbx
  unsigned __int16 v45; // r15
  int v46; // eax
  __int64 v47; // r8
  int v48; // r10d
  unsigned int v49; // ecx
  int v50; // r10d
  __int64 v51; // rax
  NotifyShell *v52; // rdi
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v54; // rcx
  __int64 *v55; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // ebx
  __int64 v60; // r8
  int v61; // ecx
  int v62; // ecx
  int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // ebx
  wchar_t *v67; // rcx
  __int64 v68; // rbx
  __int64 *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rdx
  LONG v74; // ebx
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  LONG v77; // eax
  LONG v78; // edx
  unsigned int v79; // ecx
  unsigned int v80; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v82; // rcx
  _DWORD *v83; // rax
  _DWORD *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 *ThreadDesktopWindow; // rbx
  struct _KPROCESS *v90; // rcx
  unsigned int ProcessId; // r14d
  __int64 v92; // rsi
  _DWORD *v93; // rax
  unsigned int v94; // r15d
  int v95; // r12d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v98; // rcx
  void *v99; // rax
  char v100; // r14
  __int64 v101; // rax
  SIZE_T v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  volatile void *v105; // rbx
  __int64 v106; // r8
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // r8
  int v111; // ebx
  __int64 v112; // rdx
  __int64 v113; // rdx
  int AppCompatFlags; // eax
  __int64 v115; // rcx
  char v116; // bl
  unsigned __int16 v117; // r8
  int v118; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v120; // r14
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v126; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v128; // rax
  int v129; // eax
  unsigned int v130; // esi
  __int32 v131; // r14d
  unsigned int v132; // r15d
  int v133; // r13d
  int v134; // r15d
  LONG v135; // ebx
  LONG v136; // r14d
  __int64 v137; // rdx
  int v138; // r13d
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rcx
  _DWORD *v143; // rax
  _DWORD *v144; // rcx
  _DWORD *v145; // rax
  __int16 v146; // ax
  int v147; // eax
  _DWORD *v148; // rcx
  int v149; // eax
  unsigned __int64 v150; // xmm0_8
  int v151; // r15d
  int v152; // r14d
  _DWORD *v153; // rcx
  int v154; // eax
  __int64 v155; // rcx
  char v156; // al
  _QWORD *v157; // r13
  __int64 v158; // rcx
  _QWORD *v159; // rcx
  bool v160; // al
  __int64 v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // rdx
  char v164; // bl
  __int64 v165; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v167; // r14
  __int64 v168; // rcx
  unsigned int v169; // eax
  __int64 v170; // rax
  __int64 KernelEvent; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  unsigned int v174; // edx
  __int64 v175; // rbx
  __int64 v176; // rcx
  NTSTATUS v177; // eax
  ULONG v178; // eax
  __int64 v179; // rdx
  __int64 v180; // r8
  int v181; // r13d
  unsigned __int64 v182; // rbx
  unsigned int v183; // edx
  __int64 v184; // rcx
  __int64 *v185; // r13
  __int64 *v186; // rdx
  __int64 v187; // rdx
  __int64 v188; // rax
  __int64 v189; // rcx
  int v190; // ecx
  int v191; // eax
  int v192; // edx
  int v193; // ecx
  __int64 v194; // r8
  __int64 v195; // rax
  __int64 *v196; // rbx
  __int64 v197; // rcx
  __int64 v198; // rdx
  _DWORD *v199; // rax
  _DWORD *v200; // rcx
  _DWORD *v201; // rax
  int v202; // eax
  __int64 v203; // rcx
  __int64 StyleWindow; // rbx
  __int64 v205; // rdx
  __int64 CacheDC; // rax
  __int64 v207; // rcx
  int v208; // ebx
  int v209; // ebx
  __int64 *v210; // r9
  __int64 *v211; // r10
  __int64 v212; // r9
  __int64 v213; // rdx
  struct tagCLS *v214; // rbx
  __int64 v215; // rax
  _QWORD *v216; // rbx
  __int64 v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  _QWORD *v221; // rcx
  __int64 DefaultImeWindow; // rax
  __int64 v223; // rdx
  __int64 v224; // rbx
  __int64 v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  int v229; // ecx
  __int64 v230; // rbx
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // r8
  _QWORD *v234; // rcx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rbx
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  int v242; // ecx
  __int64 v243; // rbx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rax
  unsigned __int64 v247; // rbx
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 TopMostInsertAfter; // rax
  __int64 v253; // r9
  __int64 v254; // rdx
  int v255; // edx
  int v256; // r8d
  struct tagCLS *v257; // rbx
  __int64 v258; // rax
  __int64 v259; // rcx
  int v260; // ebx
  void *v261; // rax
  __int64 v262; // rdx
  __int64 v263; // r8
  __int64 v264; // rcx
  __int64 *v265; // rbx
  __int64 v266; // rbx
  void *v267; // rax
  __int64 v268; // rcx
  __int64 *v269; // rax
  __int64 v270; // rcx
  __int64 v271; // rcx
  char v272; // al
  unsigned int v273; // edx
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rax
  unsigned __int64 v277; // rcx
  struct _LARGE_STRING *v278; // r9
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // rdx
  __int64 v283; // r8
  __int64 v284; // rcx
  unsigned int v285; // eax
  struct tagCLS *v286; // r15
  struct _KTHREAD *v287; // r14
  __int64 v288; // rdi
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // rax
  int v293; // ebx
  __int64 v294; // rcx
  __int64 v295; // rax
  __int64 *v296; // rax
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // rax
  __int64 v301; // rbx
  int LowLimit; // [rsp+30h] [rbp-4B8h]
  __int64 v303; // [rsp+60h] [rbp-488h] BYREF
  int v304; // [rsp+68h] [rbp-480h]
  int v305; // [rsp+70h] [rbp-478h]
  __int16 v306; // [rsp+78h] [rbp-470h]
  LONG v307; // [rsp+7Ch] [rbp-46Ch]
  int v308; // [rsp+80h] [rbp-468h]
  __int32 v309; // [rsp+84h] [rbp-464h]
  int v310; // [rsp+88h] [rbp-460h]
  unsigned int v311; // [rsp+8Ch] [rbp-45Ch]
  __int64 *v312[2]; // [rsp+90h] [rbp-458h] BYREF
  unsigned int v313; // [rsp+A0h] [rbp-448h]
  __int128 v314; // [rsp+A8h] [rbp-440h] BYREF
  _QWORD *v315; // [rsp+B8h] [rbp-430h]
  int v316; // [rsp+C0h] [rbp-428h]
  _QWORD v317[2]; // [rsp+C8h] [rbp-420h] BYREF
  _QWORD *v318; // [rsp+D8h] [rbp-410h]
  int v319; // [rsp+E0h] [rbp-408h]
  int v320; // [rsp+E4h] [rbp-404h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+E8h] [rbp-400h]
  int v322; // [rsp+ECh] [rbp-3FCh]
  int v323; // [rsp+F0h] [rbp-3F8h]
  int v324; // [rsp+F4h] [rbp-3F4h]
  int v325; // [rsp+F8h] [rbp-3F0h]
  int v326; // [rsp+FCh] [rbp-3ECh]
  int v327; // [rsp+100h] [rbp-3E8h]
  int v328; // [rsp+104h] [rbp-3E4h]
  __int16 v329; // [rsp+108h] [rbp-3E0h]
  __int16 v330; // [rsp+10Ah] [rbp-3DEh]
  __int64 v331; // [rsp+110h] [rbp-3D8h]
  NotifyShell *v332; // [rsp+118h] [rbp-3D0h]
  __int64 v333; // [rsp+120h] [rbp-3C8h]
  int v334; // [rsp+128h] [rbp-3C0h]
  int v335; // [rsp+12Ch] [rbp-3BCh]
  __int128 v336; // [rsp+130h] [rbp-3B8h] BYREF
  int v337; // [rsp+140h] [rbp-3A8h]
  int v338; // [rsp+148h] [rbp-3A0h]
  int v339; // [rsp+14Ch] [rbp-39Ch]
  int v340; // [rsp+154h] [rbp-394h]
  __int64 *v341; // [rsp+158h] [rbp-390h]
  __int64 v342; // [rsp+160h] [rbp-388h]
  wchar_t *Str1; // [rsp+168h] [rbp-380h]
  __int128 v344; // [rsp+170h] [rbp-378h] BYREF
  __int128 v345; // [rsp+180h] [rbp-368h]
  __int128 v346; // [rsp+190h] [rbp-358h]
  __int128 v347; // [rsp+1A0h] [rbp-348h]
  __int128 v348; // [rsp+1B0h] [rbp-338h]
  __int128 v349; // [rsp+1C0h] [rbp-328h]
  __int128 v350; // [rsp+1D0h] [rbp-318h] BYREF
  __int128 *v351; // [rsp+1E0h] [rbp-308h]
  __int64 v352; // [rsp+1E8h] [rbp-300h]
  __int64 v353; // [rsp+1F0h] [rbp-2F8h]
  __int64 v354; // [rsp+1F8h] [rbp-2F0h]
  __m128i v355; // [rsp+200h] [rbp-2E8h]
  __int128 v356; // [rsp+210h] [rbp-2D8h] BYREF
  __int64 v357; // [rsp+220h] [rbp-2C8h]
  __int128 v358; // [rsp+228h] [rbp-2C0h] BYREF
  __int64 v359; // [rsp+238h] [rbp-2B0h]
  struct _KPROCESS *v360; // [rsp+240h] [rbp-2A8h]
  __int64 v361; // [rsp+248h] [rbp-2A0h] BYREF
  int v362; // [rsp+250h] [rbp-298h]
  __int64 v363; // [rsp+258h] [rbp-290h]
  char v364[8]; // [rsp+260h] [rbp-288h] BYREF
  int v365; // [rsp+268h] [rbp-280h]
  __int64 v366; // [rsp+278h] [rbp-270h]
  __int128 *v367; // [rsp+280h] [rbp-268h]
  __int64 v368; // [rsp+288h] [rbp-260h] BYREF
  unsigned __int64 v369; // [rsp+290h] [rbp-258h]
  wchar_t *v370; // [rsp+298h] [rbp-250h]
  __int128 v371; // [rsp+2A0h] [rbp-248h] BYREF
  __int64 v372; // [rsp+2B0h] [rbp-238h]
  __int128 v373; // [rsp+2B8h] [rbp-230h] BYREF
  __int64 v374; // [rsp+2C8h] [rbp-220h]
  _QWORD v375[2]; // [rsp+2D0h] [rbp-218h] BYREF
  struct _UNICODE_STRING v376; // [rsp+2E0h] [rbp-208h] BYREF
  _QWORD v377[2]; // [rsp+2F0h] [rbp-1F8h] BYREF
  _QWORD v378[2]; // [rsp+300h] [rbp-1E8h] BYREF
  _QWORD v379[2]; // [rsp+310h] [rbp-1D8h] BYREF
  _QWORD v380[2]; // [rsp+320h] [rbp-1C8h] BYREF
  _QWORD v381[2]; // [rsp+330h] [rbp-1B8h] BYREF
  _QWORD v382[2]; // [rsp+340h] [rbp-1A8h] BYREF
  _QWORD v383[2]; // [rsp+350h] [rbp-198h] BYREF
  _QWORD v384[4]; // [rsp+360h] [rbp-188h] BYREF
  _QWORD v385[2]; // [rsp+380h] [rbp-168h] BYREF
  _QWORD v386[3]; // [rsp+390h] [rbp-158h] BYREF
  _QWORD v387[3]; // [rsp+3A8h] [rbp-140h] BYREF
  _QWORD v388[3]; // [rsp+3C0h] [rbp-128h] BYREF
  _QWORD v389[3]; // [rsp+3D8h] [rbp-110h] BYREF
  _QWORD v390[3]; // [rsp+3F0h] [rbp-F8h] BYREF
  __int64 v391; // [rsp+408h] [rbp-E0h]
  volatile void *v392; // [rsp+410h] [rbp-D8h]
  __int128 v393; // [rsp+420h] [rbp-C8h] BYREF
  __int64 v394[2]; // [rsp+430h] [rbp-B8h] BYREF
  __int128 v395; // [rsp+440h] [rbp-A8h]
  __int64 v396; // [rsp+450h] [rbp-98h]
  __int128 v397; // [rsp+458h] [rbp-90h] BYREF
  __int128 v398; // [rsp+468h] [rbp-80h] BYREF
  __int64 v399; // [rsp+478h] [rbp-70h] BYREF
  int v400[4]; // [rsp+488h] [rbp-60h] BYREF
  struct tagRECT v401; // [rsp+498h] [rbp-50h] BYREF

  v351 = a4;
  v342 = a3;
  Str1 = a2;
  v319 = a1;
  v337 = a1;
  v370 = a2;
  v367 = a4;
  v19 = a10;
  v331 = (__int64)a10;
  v333 = a12;
  v352 = a13;
  v327 = 0;
  v338 = 0;
  v326 = 0;
  v320 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v312);
  *(_OWORD *)v400 = 0LL;
  v314 = 0LL;
  v322 = 5;
  v339 = 5;
  v341 = 0LL;
  v344 = 0LL;
  v345 = 0LL;
  v346 = 0LL;
  v347 = 0LL;
  v348 = 0LL;
  v349 = 0LL;
  v350 = 0LL;
  v303 = gptiCurrent;
  v356 = 0LL;
  v357 = 0LL;
  v373 = 0LL;
  v374 = 0LL;
  v371 = 0LL;
  v372 = 0LL;
  v358 = 0LL;
  v359 = 0LL;
  v323 = 0;
  v324 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v308 = 0;
  v336 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v317, a11);
  v310 = 0;
  v23 = gptiCurrent;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_35;
    v23 = v303;
  }
  v24 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v24 = a1;
  v25 = 800;
  if ( a1 >= 0 )
    LOWORD(v25) = 0;
  v325 = v25;
  v329 = v25;
  v26 = *(_QWORD *)(v23 + 448);
  v354 = v26;
  v366 = v26;
  if ( a10 && a10[3] != v26 )
    goto LABEL_35;
  v316 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v23 + 416)) )
      goto LABEL_43;
    v20 = 1;
    v308 = 1;
    v23 = v303;
  }
  if ( (a16 & 2) != 0 )
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v23 + 416)) )
    {
      v23 = v303;
      goto LABEL_16;
    }
LABEL_43:
    v33 = 5LL;
    goto LABEL_36;
  }
LABEL_16:
  v27 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_35;
    if ( a14 == 15 )
      goto LABEL_35;
    v28 = *(_DWORD *)(*(_QWORD *)(v23 + 416) + 820LL);
    if ( (v28 & 0x30) == 0x10 && (v28 & 0x200) == 0 && a14 == 1 && !v20 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_35;
  }
  v29 = HIWORD(a5) & 0xC000;
  v335 = v29;
  v330 = HIWORD(a5) & 0xC000;
  v334 = (_WORD)v29 == 0x4000;
  if ( (_WORD)v29 == 0x4000 || (v30 = ShouldSetNoOwner(*(_QWORD *)(v23 + 416), a10), v23 = v303, !v30) )
  {
    if ( a10 && a10 != (__int64 *)GetDesktopWindow((__int64)a10) )
    {
      v32 = a10[5];
      v308 = *(_BYTE *)(v32 + 234) & 0x20;
      if ( a14 )
      {
        if ( a14 != *(_DWORD *)(v32 + 236) )
          goto LABEL_35;
      }
      else
      {
        v27 = *(_DWORD *)(v32 + 236);
        a14 = v27;
      }
      goto LABEL_42;
    }
  }
  else
  {
    v19 = 0LL;
    v331 = 0LL;
  }
  if ( !a14 )
  {
    if ( IsImmersiveAppIORestricted(*(_QWORD *)(v23 + 416)) )
    {
      v308 = 1;
      v27 = 15;
    }
    else if ( (*(_DWORD *)(v31 + 820) & 2) == 0 || (v27 = 2, (v24 & 8) == 0) )
    {
      v27 = 1;
    }
    a14 = v27;
  }
LABEL_42:
  v340 = v308;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v23 + 416), v27, v19) )
    goto LABEL_43;
  v304 = v24;
  v305 = v24;
  if ( (v24 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v36 = v24, v304 = v24, v305 = v24, (_WORD)a2 != 0x8002) )
    {
      v36 = v24;
      v304 = v24;
      v305 = v24;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 824) & 1) != 0 )
      {
        v36 = v24 | 0x400000;
        v304 = v24 | 0x400000;
        v305 = v24 | 0x400000;
      }
    }
    goto LABEL_54;
  }
  v304 = v24;
  v305 = v24;
  if ( (_WORD)v29 == 0x4000 && (v304 = v24, v305 = v24, (*(_BYTE *)(v19[5] + 26) & 0x50) == 0x40) )
  {
    v36 = v24 | 0x400000;
    v304 = v24 | 0x400000;
    v305 = v24 | 0x400000;
  }
  else
  {
LABEL_53:
    v36 = v304;
  }
LABEL_54:
  if ( (v36 & 0x2200000) == 0x2200000 )
    goto LABEL_35;
  if ( *(_QWORD *)(v303 + 584) && !RtlAreAllAccessesGranted(*(_DWORD *)(v303 + 880), 2u) )
    goto LABEL_43;
  if ( (_WORD)v29 == 0x4000 )
  {
    if ( !v19 )
    {
      v33 = 1406LL;
      goto LABEL_36;
    }
    if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    {
LABEL_35:
      v33 = 87LL;
LABEL_36:
      UserSetLastError(v33, v21, v22);
      goto LABEL_37;
    }
  }
  v328 = a15;
  v313 = a9;
  v311 = a8;
  v307 = a7;
  v309 = a6;
  while ( 1 )
  {
    v37 = v342;
    if ( (v342 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v364);
      if ( (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(const unsigned __int16 **)(v37 + 8)) < 0 )
      {
        Atom = 0;
        v306 = 0;
        v324 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
        v306 = Atom;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v364);
    }
    else
    {
      Atom = v342;
      v306 = v342;
    }
    if ( Atom )
    {
      v39 = *(_QWORD *)(v303 + 416);
      v40 = (_QWORD *)(v39 + 344);
      ClassPtr = InnerGetClassPtr(Atom, (_QWORD *)(v39 + 344), v333);
      if ( ClassPtr )
        break;
      v42 = (_QWORD *)(v39 + 352);
      ClassPtr = InnerGetClassPtr(Atom, (_QWORD *)(v39 + 352), 0LL);
      if ( ClassPtr )
        break;
      v43 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
      ClassPtr = InnerGetClassPtr(Atom, v40, *(__int64 *)&WPP_MAIN_CB.DeviceLock.Header.Lock);
      if ( ClassPtr )
        break;
      ClassPtr = InnerGetClassPtr(Atom, v42, v43);
      if ( ClassPtr )
        break;
    }
LABEL_109:
    if ( v324
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v67 = Str1)
        : (v67 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v67)) )
    {
      v33 = 1407LL;
      goto LABEL_36;
    }
    v324 = 1;
  }
  v44 = *ClassPtr;
  if ( *ClassPtr != *v312[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v312);
    if ( v44 )
    {
      v312[0] = *(__int64 **)(v44 + 128);
      ++*((_DWORD *)v312[0] + 2);
    }
    else
    {
      v312[0] = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*v312[0] + 8) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_37;
  v45 = v328;
  v46 = NeedsWindowEdge(a5, v304, (unsigned __int16)v328 >= 0x400u);
  v49 = v48 & 0xFFFFFEFF;
  v50 = v48 | 0x100;
  if ( !v46 )
    v50 = v49;
  v304 = v50;
  LOBYTE(v47) = 1;
  v51 = HMAllocObject(v303, v354, v47);
  v315 = (_QWORD *)v51;
  v52 = (NotifyShell *)v51;
  v332 = (NotifyShell *)v51;
  if ( !v51 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_37;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v51 + 56));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v52 + 2) + 416LL) + 820LL) & 0x1000000) != 0 )
    *((_DWORD *)v52 + 82) |= 0x40u;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 296LL) = 0LL;
  *((_QWORD *)v52 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v54 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v29 != 0x4000 || !v19 || v19 == (__int64 *)GetThreadDesktopWindow(0LL) )
    goto LABEL_97;
  v55 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v57 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( v57 )
      v55 = *(__int64 **)(v57 + 104);
  }
  if ( v19 == v55
    || (v54 = *(_QWORD *)(v19[2] + 416), *(_QWORD *)(v303 + 416) != v54)
    || (unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_97:
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v54);
    if ( (*(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v58 = *(unsigned int *)(v19[5] + 288);
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 288LL) = v58;
    v59 = *(_DWORD *)(v19[5] + 288);
    if ( (((unsigned __int8)v59 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v58)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry((__int64)v52, (__int64)v19, 0);
  }
  v60 = *((_QWORD *)v52 + 5);
  v61 = *(_DWORD *)(v60 + 288);
  if ( (v61 & 0xF) == 2 && (v61 & 0xF0) == 0x20 )
  {
    v62 = 0x10000000;
    v63 = 0x20000000;
  }
  else
  {
    v62 = 0;
    v63 = 0;
  }
  *(_DWORD *)(v60 + 232) = v62 | *(_DWORD *)(v60 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) = v63 | *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) & 0xDFFFFFFF;
  v64 = *v312[0];
  if ( *v312[0] )
    v65 = *(_QWORD *)(v64 + 16);
  else
    v65 = 0LL;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 128LL) = v65;
  *((_QWORD *)v52 + 17) = v64;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  v66 = v304;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 24LL) = v304 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*v312[0] + 8) + 80LL);
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*v312[0] + 8) + 84LL);
  if ( !(unsigned int)ReferenceClass(*v312[0], v52) )
  {
    HMFreeObject(v52);
    v305 = v66;
    goto LABEL_109;
  }
  v68 = *((_QWORD *)v52 + 17);
  if ( v68 != *v312[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)v312);
    if ( v68 )
    {
      v312[0] = *(__int64 **)(v68 + 128);
      ++*((_DWORD *)v312[0] + 2);
    }
    else
    {
      v312[0] = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*v312[0], &v358) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v303 + 416), (__int64)v52);
    HMFreeObject(v52);
    v305 = v304;
    goto LABEL_109;
  }
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*v312[0] + 8) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 208LL) = 0LL;
  }
  else
  {
    v69 = *(__int64 **)(v303 + 784);
    if ( v69 )
      v70 = *v69;
    else
      v70 = 0LL;
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 208LL) = v70;
  }
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = a14;
  v71 = *((_QWORD *)v52 + 5);
  if ( *(_DWORD *)(v71 + 236) == 1 )
    v72 = 0;
  else
    v72 = IsTopLevelParent(v19);
  if ( v72 )
  {
    *(_DWORD *)(v71 + 24) |= 8u;
    v71 = *((_QWORD *)v52 + 5);
  }
  if ( v308 )
    *(_BYTE *)(v71 + 234) |= 0x20u;
  ++*(_DWORD *)(v303 + 888);
  *(_QWORD *)&v344 = 0LL;
  v345 = 0LL;
  v346 = 0LL;
  v347 = 0LL;
  v348 = 0LL;
  v349 = 0LL;
  v350 = 0LL;
  DWORD2(v348) = v304;
  *((_QWORD *)&v344 + 1) = v333;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v319 >= 0 )
    {
      *(_QWORD *)&v348 = *((_QWORD *)Str1 + 1);
      v350 = *(_OWORD *)Str1;
    }
    else
    {
      v73 = *(_QWORD *)(*v312[0] + 104);
      *(_QWORD *)&v348 = v73;
      if ( (v73 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString((__int64)&v350, v73);
    }
  }
  else
  {
    *(_QWORD *)&v348 = Str1;
  }
  if ( v351 )
  {
    *((_QWORD *)&v347 + 1) = *((_QWORD *)v351 + 1);
    v349 = *v351;
  }
  LODWORD(v347) = a5;
  v74 = v309;
  *((_QWORD *)&v346 + 1) = __PAIR64__(v309, v307);
  *(_QWORD *)&v346 = __PAIR64__(v311, v313);
  if ( v19 )
    *((_QWORD *)&v345 + 1) = *v19;
  else
    *((_QWORD *)&v345 + 1) = 0LL;
  if ( (_WORD)v29 == 0x4000 )
  {
    v75 = v318;
    if ( !v318 )
      v75 = *(_QWORD **)v317[0];
    *(_QWORD *)&v345 = v75;
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 24LL) |= *(_DWORD *)(v19[5] + 24) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==((__int64)v317) )
  {
    *(_QWORD *)&v345 = 0LL;
  }
  else
  {
    v76 = v318;
    if ( !v318 )
      v76 = *(_QWORD **)v317[0];
    *(_QWORD *)&v345 = *v76;
  }
  *(_QWORD *)&v344 = v352;
  *(_QWORD *)&v356 = *(_QWORD *)(v303 + 408);
  *(_QWORD *)(v303 + 408) = &v356;
  *((_QWORD *)&v356 + 1) = v52;
  HMLockObject(v52);
  *(_QWORD *)&v401.left = 0LL;
  if ( v74 == 0x80000000 || v74 == 0x8000 )
  {
    v77 = 0;
    v401.left = 0;
  }
  else
  {
    v77 = v74;
    v401.left = v74;
  }
  if ( v307 == 0x80000000 || v307 == 0x8000 )
  {
    v78 = 0;
    v401.top = 0;
  }
  else
  {
    v78 = v307;
    v401.top = v307;
  }
  v79 = v311;
  if ( v311 == 0x80000000 || v311 == 0x8000 )
    v79 = 0;
  v401.right = v79 + v77;
  v80 = v313;
  if ( v313 == 0x80000000 || v313 == 0x8000 )
    v80 = 0;
  v401.bottom = v78 + v80;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v52);
  if ( InheritedMonitor )
  {
    v305 = 1;
  }
  else
  {
    v305 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(v19[5] + 256));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v401, 2LL, 0), v82 = 0LL, InheritedMonitor) )
    v82 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL) = v82;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v83 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v52 + 36) = v83;
  ++*v83;
  *((_QWORD *)v52 + 37) = 0LL;
  *(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) &= ~0x4000000u;
  if ( (_WORD)v29 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v52, (__int64)v19) )
    UpdateTopLevelWindowDPITransform((__int64)v52, (__int64)InheritedMonitor);
  if ( (_WORD)v29 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v52 + 5) + 286LL) = *(_WORD *)(v19[5] + 286);
      v84 = (_DWORD *)v19[37];
      if ( v84 )
      {
        *((_QWORD *)v52 + 37) = v84;
        ++*v84;
      }
    }
  }
  v85 = *((_QWORD *)v52 + 3);
  if ( v85 )
  {
    v86 = *(_QWORD *)(v85 + 104);
    if ( v86 )
      v87 = *(_QWORD *)(v86 + 48);
    else
      v87 = 0LL;
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 48LL) = v87;
    v375[0] = (char *)v52 + 104;
    v375[1] = v86;
    HMAssignmentLock(v375);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v52) )
  {
    ThreadDesktopWindow = v19;
    if ( (_WORD)v29 != 0x4000 && (!v19 || v19 != *(__int64 **)(v19[3] + 104)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    *(_OWORD *)v394 = 0LL;
    v395 = 0LL;
    v396 = 0LL;
    GetWindowCompositionInfo((__int64)v52, (__int64)v394, v88);
    v90 = *(struct _KPROCESS **)(**((_QWORD **)v52 + 2) + 544LL);
    v360 = v90;
    if ( ThreadDesktopWindow )
      v353 = *ThreadDesktopWindow;
    else
      v353 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v90);
    v92 = ***(_QWORD ***)(*((_QWORD *)v52 + 3) + 8LL);
    v93 = (_DWORD *)*((_QWORD *)v52 + 5);
    v94 = v93[58];
    v95 = v93[6];
    v29 = v93[7];
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v360);
    ClassStyle = DwmGetClassStyle((__int64)v52);
    v99 = (void *)ReferenceDwmApiPort(v98);
    LowLimit = ClassStyle;
    v52 = v332;
    DwmAsyncChildCreate(
      v99,
      *(_QWORD *)v332,
      v353,
      v29,
      v95,
      v94,
      LowLimit,
      (__int128 *)v394,
      v92,
      (__int128 *)&v401.left,
      ProcessId,
      ProcessSequenceNumber);
    v19 = (__int64 *)v331;
    LOWORD(v29) = v335;
    v45 = v328;
  }
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 32LL) = v333;
  *(_QWORD *)(*((_QWORD *)v52 + 5) + 120LL) = MapClientNeuterToClientPfn(*v312[0], 0LL, (unsigned __int16)v325);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*v312[0] + 8) + 6LL) & 1, (__int64)v52, 0x204u, 1);
  v100 = *(_BYTE *)(*((_QWORD *)v52 + 5) + 18LL) & 4;
  v384[0] = &v356;
  v384[1] = v312;
  v384[2] = &v358;
  v384[3] = &v303;
  if ( *(_DWORD *)(*(_QWORD *)(*v312[0] + 8) + 84LL) )
  {
    v101 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*v312[0] + 8) + 84LL), 1937208149LL);
    *((_QWORD *)v52 + 35) = v101;
    if ( !v101 )
    {
      v310 = 5;
LABEL_197:
      lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_::operator()(v384);
      v305 = v304;
      goto LABEL_109;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v100 )
  {
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v52 + 5) + 200LL) += 32;
  }
  v102 = *(unsigned int *)(*((_QWORD *)v52 + 5) + 200LL);
  if ( !(_DWORD)v102 )
    goto LABEL_211;
  v105 = xxxClientAllocWindowClassExtraBytes(v102);
  v392 = v105;
  if ( !v105 )
  {
    v310 = 2;
    if ( *((_DWORD *)v52 + 2) != 1 )
      goto LABEL_540;
    goto LABEL_197;
  }
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)v52)
    || (*(_BYTE *)(_HMPheFromObject(v104) + 25) & 1) != 0
    || (v361 = 0LL,
        (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)v52 + 320, &v361)) )
  {
LABEL_540:
    v130 = v310;
    goto LABEL_541;
  }
  v107 = *((_QWORD *)v52 + 5);
  if ( (*(_DWORD *)(v107 + 232) & 0x800) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v107, v103);
    v107 = v315[5];
  }
  *(_QWORD *)(v107 + 296) = v105;
LABEL_211:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v100 )
  {
    v111 = v319;
  }
  else
  {
    v108 = *((_QWORD *)v52 + 5);
    v109 = *(_QWORD *)(v108 + 296);
    v110 = *(int *)(v108 + 200);
    v391 = *(_QWORD *)(v108 + 120);
    *(_QWORD *)(v110 + v109 - 32) = v391;
    v111 = v319;
    if ( v319 >= 0 )
      v112 = *(_QWORD *)(gpsi + 768LL);
    else
      v112 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 120LL) = v112;
  }
  if ( *(_QWORD *)(*v312[0] + 80) && !*(_QWORD *)(*v312[0] + 112) && (unsigned int)PsGetWin32KFilterSet() != 5 )
    xxxCreateClassSmIcon(v312);
  SetOrClrWF(1, (__int64)v52, v325, 1);
  if ( (*(_WORD *)(*(_QWORD *)(*v312[0] + 8) + 6LL) & 2) != 0
    || v111 < 0
    && (v306 == *(_WORD *)(gpsi + 868LL)
     || v306 == *(_WORD *)(gpsi + 878LL)
     || v306 == *(_WORD *)(gpsi + 882LL)
     || v306 == *(_WORD *)(gpsi + 904LL)
     || v306 == *(_WORD *)(gpsi + 870LL)
     || v306 == *(_WORD *)(gpsi + 874LL)
     || v306 == *(_WORD *)(gpsi + 880LL)
     || v306 == *(_WORD *)(gpsi + 898LL)
     || v306 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1, (__int64)v52, 0x208u, 1);
  }
  AppCompatFlags = GetAppCompatFlags(v303, v113);
  v116 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (__int64)v52, 0x408u, 1);
    v304 &= 0x3Fu;
    DWORD2(v348) = BYTE8(v348) & 0x3F;
  }
  *(_WORD *)(*((_QWORD *)v52 + 5) + 40LL) = 0;
  if ( v45 < 0x30Au )
  {
    if ( (v116 & 0x40) != 0 )
    {
      v117 = 1600;
LABEL_242:
      SetOrClrWF(1, (__int64)v52, v117, 1);
    }
  }
  else
  {
    SetOrClrWF(1, (__int64)v52, 0x501u, 1);
    if ( v45 >= 0x400u )
    {
      SetOrClrWF(1, (__int64)v52, 0x502u, 1);
      if ( v45 >= 0x500u )
      {
        v117 = 1284;
        goto LABEL_242;
      }
    }
  }
  if ( v45 <= *(_WORD *)(v303 + 628) )
    v118 = *(_DWORD *)(v303 + 628);
  else
    v118 = v45;
  *((_DWORD *)v52 + 64) = v118;
  CurrentThread = KeGetCurrentThread();
  v120 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v115)
    || (CurrentProcess = PsGetCurrentProcess(v122, v121, v123),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v126),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v128 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v128 )
      v120 = *v128;
  }
  v129 = 0;
  if ( *(_DWORD *)(v120 + 624) <= 0x9900u )
    v129 = *(_DWORD *)(v120 + 640);
  if ( (v129 & 0x10000000) != 0 )
    SetOrClrWF(1, (__int64)v52, 0xA80u, 1);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
  {
    if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v52) )
    {
      *((_DWORD *)v52 + 81) |= 0x20000000u;
      ++*(_DWORD *)(v303 + 896);
    }
  }
  else if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v52) )
  {
    xxxCallCtfHook(5, 3, *(_QWORD *)v52, 0LL);
  }
  if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v303 + 456) + 16LL) | *(_BYTE *)(v303 + 672)) & 0x40) != 0 )
  {
    v368 = (__int64)&v344;
    v369 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v52, (__int64)&v368, 5) )
    {
      v130 = 6;
      goto LABEL_541;
    }
    v131 = HIDWORD(v346);
    v309 = HIDWORD(v346);
    v307 = DWORD2(v346);
    v132 = DWORD1(v346);
    v311 = DWORD1(v346);
    v313 = v346;
    v331 = v369;
  }
  else
  {
    v331 = 0LL;
    v131 = v309;
    v132 = v311;
  }
  v104 = *((_QWORD *)v52 + 5);
  if ( (*(_BYTE *)(v104 + 31) & 0xC0) == 0x40 )
  {
    v103 = 1LL;
    v308 = 1;
    if ( !v19 )
      goto LABEL_540;
  }
  else
  {
    LODWORD(v103) = 0;
    v308 = 0;
  }
  if ( (_DWORD)v103 != v334 )
  {
    v318 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v317);
    v104 = v315[5];
    LODWORD(v103) = v308;
  }
  if ( (*(_BYTE *)(v104 + 31) & 0xC0) != 0 )
  {
    v133 = 0;
    if ( v131 == 0x80000000 || v131 == 0x8000 )
    {
      v131 = 0;
      v309 = 0;
      v307 = 0;
    }
    if ( v132 == 0x80000000 || v132 == 0x8000 )
    {
      v311 = 0;
      v313 = 0;
    }
  }
  else
  {
    v133 = 1;
  }
  v134 = v131;
  *(_QWORD *)&v314 = __PAIR64__(v307, v131);
  v135 = v307;
  v136 = v307;
  *((_QWORD *)&v314 + 1) = __PAIR64__(v313, v311);
  if ( (_DWORD)v103 )
  {
    v336 = *(_OWORD *)(v19[5] + 104);
    if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v52, (__int64)v19) )
    {
      *((_QWORD *)v52 + 28) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel((struct tagWND *)v19, (int *)&v336, (float *)v52 + 56);
      PhysicalToLogicalInPlaceRectWithSubpixel(v52, (int *)&v336, (float *)v52 + 56);
    }
    if ( v19 != (__int64 *)GetDesktopWindow((__int64)v52) )
    {
      v134 = v309 + v336;
      LODWORD(v314) = v309 + v336;
      v136 = v135 + DWORD1(v336);
      DWORD1(v314) = v135 + DWORD1(v336);
    }
    v331 = 1LL;
  }
  if ( v133 )
  {
    SetOrClrWF(1, (__int64)v52, 0xF04u, 1);
    v327 = 192;
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 21LL) & 2) != 0 )
      SetOrClrWF(1, (__int64)v52, 0x901u, 1);
    SetOrClrWF(1, (__int64)v52, 0x10u, 1);
    v138 = v309;
    if ( (v309 == 0x80000000 || v309 == 0x8000) && v136 != 0x80000000 )
    {
      v139 = v322;
      if ( v136 != 0x8000 )
        v139 = v136;
      v322 = v139;
    }
    if ( !v305 && (v309 == 0x80000000 || v309 == 0x8000 || v311 == 0x80000000 || v311 == 0x8000) )
    {
      v140 = *(_QWORD *)(*(_QWORD *)(v303 + 416) + 696LL);
      if ( v140 )
      {
        v141 = ValidateHmonitor(v140);
      }
      else if ( v19 )
      {
        v141 = (__int64)_MonitorFromWindowInternal((struct tagWND *)v19, 2LL, 0);
      }
      else
      {
        v141 = 0LL;
      }
      if ( !v141 )
      {
        v141 = *(_QWORD *)(GetDispInfo(v140, v137) + 96);
        goto LABEL_308;
      }
    }
    else
    {
      v141 = 0LL;
LABEL_308:
      if ( !v141 )
      {
        v141 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL));
        if ( !v141 )
        {
          if ( !v305 || (v141 = GetInheritedMonitor(v52)) == 0 )
            v141 = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v52 + 5) + 88LL), 2LL, 0);
          v142 = 0LL;
          if ( v141 )
            v142 = *(_QWORD *)v141;
          *(_QWORD *)(*((_QWORD *)v52 + 5) + 256LL) = v142;
          *(_WORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(v141 + 40) + 64LL);
          v143 = (_DWORD *)*((_QWORD *)v52 + 36);
          if ( v143 )
          {
            --*v143;
            v144 = (_DWORD *)*((_QWORD *)v52 + 36);
            if ( !*v144 )
              Win32FreePool(v144);
            *((_QWORD *)v52 + 36) = 0LL;
          }
          v145 = *(_DWORD **)(v141 + 312);
          *((_QWORD *)v52 + 36) = v145;
          ++*v145;
          UpdateTopLevelWindowDPITransform((__int64)v52, v141);
        }
      }
    }
    SetTiledRect(v52, v400, v141);
    if ( v138 == 0x80000000 || v138 == 0x8000 )
    {
      v148 = *(_DWORD **)(v303 + 416);
      if ( (v148[202] & 4) != 0 )
      {
        v320 = 1;
        v138 = v148[198];
        v149 = v148[199];
      }
      else
      {
        v138 = v400[0];
        v149 = v400[1];
      }
      v136 = v149;
      v307 = v149;
      *(_QWORD *)&v314 = __PAIR64__(v149, v138);
      v134 = v138;
      v309 = v138;
      v147 = 1;
    }
    else
    {
      v146 = *(_WORD *)(v141 + 226);
      if ( v146 )
        *(_WORD *)(v141 + 226) = v146 - 1;
      v147 = v326;
    }
    if ( v311 == 0x80000000 || v311 == 0x8000 )
    {
      v153 = *(_DWORD **)(v303 + 416);
      if ( (v153[202] & 2) != 0 )
      {
        v320 = 1;
        DWORD2(v314) = v153[200];
        v154 = v153[201];
      }
      else
      {
        DWORD2(v314) = v400[2] - v138;
        v154 = v400[3] - v307;
      }
      HIDWORD(v314) = v154;
    }
    else if ( v147 )
    {
      v355 = *(__m128i *)GetMonitorRect(&v398, v141);
      v150 = _mm_srli_si128(v355, 8).m128i_u64[0];
      v151 = v311 + v134 - v150;
      v152 = v313 + v136 - HIDWORD(v150);
      if ( v151 > 0 )
      {
        v309 = v138 - v151;
        LODWORD(v314) = v138 - v151;
        if ( v138 - v151 < v355.m128i_i32[0] )
        {
          v309 = v355.m128i_i32[0];
          LODWORD(v314) = v355.m128i_i32[0];
        }
      }
      if ( v152 > 0 )
      {
        v307 -= v152;
        DWORD1(v314) = v307;
        if ( v307 < v355.m128i_i32[1] )
        {
          v307 = v355.m128i_i32[1];
          DWORD1(v314) = v355.m128i_i32[1];
        }
      }
    }
  }
  if ( v320 )
    *(_DWORD *)(*(_QWORD *)(v303 + 416) + 808LL) &= 0xFFFFFFF9;
  v155 = *((_QWORD *)v52 + 5);
  v156 = *(_BYTE *)(v155 + 31) & 0xC0;
  if ( v156 == (char)0x80 || v156 == -64 )
  {
    SetOrClrWF(1, (__int64)v52, 0xF04u, 1);
    v157 = v315;
    v155 = v315[5];
  }
  else
  {
    v157 = v315;
  }
  *(_WORD *)(v155 + 30) |= v327;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v317) || v308 || !*(_QWORD *)(*v312[0] + 96) )
  {
    v103 = (__int64)v318;
    goto LABEL_364;
  }
  v376 = 0LL;
  v158 = (__int64)v52;
  if ( *((_QWORD *)v52 + 13) )
    v158 = *((_QWORD *)v52 + 13);
  zzzLockDisplayAreaAndInvalidateDCCache(v158, 16, 0LL);
  RtlInitUnicodeStringOrId(&v376, *(WCHAR **)(*v312[0] + 96));
  xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*v312[0] + 8) + 64LL), (void **)&v376);
  v318 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v317);
  if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v160 = SmartObjStackRef<tagMENU>::operator==((__int64)v317);
    v103 = (__int64)v318;
    if ( v160 )
    {
      *(_QWORD *)&v345 = 0LL;
    }
    else if ( v318 )
    {
      *(_QWORD *)&v345 = *v318;
    }
    else
    {
      v103 = 0LL;
      *(_QWORD *)&v345 = **(_QWORD **)v317[0];
    }
LABEL_364:
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      if ( !v103 )
        v103 = *(_QWORD *)v317[0];
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 152LL) = v103;
      *((_QWORD *)v52 + 21) = v103;
    }
    else
    {
      v161 = *((_QWORD *)v52 + 21);
      if ( v161 && *(NotifyShell **)(v161 + 80) == v52 )
        HMAssignmentUnlock(v161 + 80);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v317) && !*(_QWORD *)(*(_QWORD *)v317[0] + 80LL) )
      {
        v377[0] = *(_QWORD *)v317[0] + 80LL;
        v377[1] = v52;
        HMAssignmentLock(v377);
      }
      v162 = v318;
      if ( !v318 )
        v162 = *(_QWORD **)v317[0];
      if ( v162 )
        v163 = v162[6];
      else
        v163 = 0LL;
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 152LL) = v163;
      v378[0] = (char *)v52 + 168;
      v378[1] = v162;
      HMAssignmentLock(v378);
    }
    v104 = *(unsigned __int8 *)(*((_QWORD *)v52 + 5) + 31LL);
    LOBYTE(v104) = v104 & 0xC0;
    if ( (_BYTE)v104 == 64 )
    {
      if ( !v19 )
        goto LABEL_357;
      if ( (v316 & 2) != 0 )
        goto LABEL_412;
LABEL_418:
      if ( (*(_DWORD *)(*((_QWORD *)v52 + 5) + 232LL) & 8) != 0 )
      {
        v341 = (__int64 *)*((_QWORD *)v52 + 13);
        UnlinkWindow((__int64 *)v52, v341);
      }
      if ( v19 )
      {
        v172 = v19[3];
        if ( v19 != *(__int64 **)(v172 + 104) && v19 != *(__int64 **)(*(_QWORD *)(v172 + 8) + 24LL) )
        {
          *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(v19[5] + 236);
          SetOrClrWF(*(_BYTE *)(v19[5] + 234) & 0x20, (__int64)v52, 0xDA20u, 1);
        }
        if ( !(unsigned int)ValidateNewParent(v52, v19) )
        {
          v130 = 9;
          goto LABEL_542;
        }
      }
      if ( v19 )
        v173 = v19[6];
      else
        v173 = 0LL;
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 48LL) = v173;
      v381[0] = (char *)v52 + 104;
      v381[1] = v19;
      HMAssignmentLock(v381);
      if ( v19 )
        v174 = (int)(*(_DWORD *)(v19[5] + 232) << 6) >> 31;
      else
        v174 = 0;
      SetWindowSubtreeCoreWindowStatus(v52, v174);
      v175 = *((_QWORD *)v52 + 5);
      if ( (*(_DWORD *)(v175 + 288) & 0xF) == 2 )
      {
        *(_DWORD *)(v175 + 232) ^= (*(_DWORD *)(v175 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v52) << 27)) & 0x8000000;
        v175 = v157[5];
      }
      if ( (*(_BYTE *)(v175 + 21) & 1) == 0
        && (*(_DWORD *)(*(_QWORD *)(*v312[0] + 8) + 8LL) & 0x80u) != 0
        && (*(_BYTE *)(v19[5] + 31) & 2) == 0 )
      {
        SetOrClrWF(0, (__int64)v52, 0xF06u, 1);
      }
      v176 = WindowCloakStateComponentUIAware;
      if ( (WindowCloakStateComponentUIAware & 2) == 0 )
        *(_BYTE *)(v157[5] + 234LL) |= 0x10u;
      if ( (_DWORD)v176 )
      {
        v177 = zzzSetWindowCompositionCloak((__int64)v52, 0LL, v176);
        if ( v177 < 0 )
        {
          v178 = RtlNtStatusToDosError(v177);
          UserSetLastError(v178, v179, v180);
          v130 = 8;
          goto LABEL_542;
        }
      }
      if ( gpresUser
        && (unsigned int)UserIsUserCritSecInExclusive(v176)
        && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
      {
        v181 = ++gdwAtomicCheckSerial;
        v176 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v176 << 6) + gpAtomickCheckStacks) )
          {
            v176 = (unsigned int)(v176 + 1);
            if ( (unsigned int)v176 >= gdwAtomicCheckLogSize )
              goto LABEL_452;
          }
          v182 = (unsigned __int64)(unsigned int)v176 << 6;
          *(_DWORD *)(gpAtomickCheckStacks + v182) = gdwAtomicCheckSerial;
          *(_DWORD *)(gpAtomickCheckStacks + v182 + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(gpAtomickCheckStacks + v182 + 8) = (MEMORY[0xFFFFF78000000320]
                                                        * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v182 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
      else
      {
        v181 = v334;
      }
LABEL_452:
      if ( v341 )
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)v341, 16, 0LL);
      if ( v19 )
        zzzLockDisplayAreaAndInvalidateDCCache((__int64)v19, 16, 0LL);
      if ( gpresUser )
      {
        if ( (unsigned int)UserIsUserCritSecInExclusive(v176) )
        {
          --gdwInAtomicOperation;
          if ( gpAtomickCheckStacks )
          {
            v183 = 0;
            if ( gdwAtomicCheckLogSize )
            {
              while ( *(_DWORD *)(((unsigned __int64)v183 << 6) + gpAtomickCheckStacks) != v181 )
              {
                if ( ++v183 >= gdwAtomicCheckLogSize )
                  goto LABEL_464;
              }
              *(_DWORD *)(((unsigned __int64)v183 << 6) + gpAtomickCheckStacks) = 0;
            }
          }
        }
      }
LABEL_464:
      if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v185 = (__int64 *)((char *)v52 + 104);
        if ( !(unsigned int)IsTopLevelWindow((__int64)v52) )
        {
          v186 = (__int64 *)*v185;
          if ( *v185 )
          {
            if ( v303 != v186[2] )
            {
              if ( v19 != v186 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v184, v186);
                v186 = (__int64 *)v315[13];
              }
              zzzAttachThreadInput(v303, v186[2], 1);
              v187 = *v185;
              v188 = 0LL;
              v189 = *((_QWORD *)v52 + 3);
              if ( v189 )
                v188 = *(_QWORD *)(v189 + 104);
              if ( v187 != v188
                && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v187 + 40) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v52 + 5)
                                                                                             + 288LL)) & 0xF) != 0
                && !(unsigned int)IsChildWindowDpiIsolationEnabled(v52, v187) )
              {
                xxxForceUpdateProcessDpiAwarenessContext(v52, *(_DWORD *)(*(_QWORD *)(*v185 + 40) + 288LL));
              }
            }
          }
        }
      }
      else
      {
        v185 = (__int64 *)((char *)v52 + 104);
      }
      if ( v342 != (unsigned __int16)gatomMessage && v342 != 32769 && v342 != 32774 && !*(_DWORD *)(v303 + 888) )
      {
        _InterlockedExchange(
          (volatile __int32 *)(*(_QWORD *)(v303 + 440) + 12LL),
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        xxxUpdateInputHangInfo(0LL, 1);
      }
      xxxAdjustSize(v52);
      v190 = v314;
      v191 = 0x7FFF;
      if ( (int)v314 <= 0x7FFF )
      {
        if ( (int)v314 < -32768 )
          v190 = -32768;
      }
      else
      {
        v190 = 0x7FFF;
      }
      LODWORD(v314) = v190;
      if ( SDWORD1(v314) <= 0x7FFF )
      {
        v191 = DWORD1(v314);
        if ( SDWORD1(v314) < -32768 )
          v191 = -32768;
      }
      DWORD1(v314) = v191;
      v192 = DWORD2(v314);
      v193 = 0xFFFF;
      if ( SDWORD2(v314) <= 0xFFFF )
      {
        if ( SDWORD2(v314) < 0 )
          v192 = 0;
      }
      else
      {
        v192 = 0xFFFF;
      }
      DWORD2(v314) = v192;
      if ( SHIDWORD(v314) <= 0xFFFF )
      {
        v193 = HIDWORD(v314);
        if ( v314 < 0 )
          v193 = 0;
      }
      HIDWORD(v314) = v193;
      if ( *((_QWORD *)v52 + 3) )
      {
        v194 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v194 + 31) & 0x40) == 0 && *(char *)(v194 + 24) >= 0 )
        {
          xxxCheckFullScreen(v52, (struct tagSIZERECT *)&v314);
          v193 = HIDWORD(v314);
          v192 = DWORD2(v314);
        }
      }
      if ( v192 < 0 )
        v192 = 0;
      DWORD2(v314) = v192;
      if ( v193 < 0 )
        v193 = 0;
      HIDWORD(v314) = v193;
      RECTFromSIZERECT(*((_QWORD *)v52 + 5) + 88LL);
      if ( v308 )
      {
        v195 = ValidateHmonitorNoRip(*(_QWORD *)(v19[5] + 256));
      }
      else
      {
        if ( !v305 )
          goto LABEL_509;
        v195 = GetInheritedMonitor(v52);
      }
      v196 = (__int64 *)v195;
      if ( v195 )
      {
LABEL_510:
        v197 = *v196;
LABEL_511:
        v363 = v197;
        v198 = *((_QWORD *)v52 + 5);
        if ( v197 != *(_QWORD *)(v198 + 256) )
        {
          *(_QWORD *)(v198 + 256) = v197;
          *(_WORD *)(*((_QWORD *)v52 + 5) + 284LL) = *(_WORD *)(v196[5] + 64);
          v199 = (_DWORD *)*((_QWORD *)v52 + 36);
          if ( v199 )
          {
            --*v199;
            v200 = (_DWORD *)*((_QWORD *)v52 + 36);
            if ( !*v200 )
              Win32FreePool(v200);
            *((_QWORD *)v52 + 36) = 0LL;
          }
          v201 = (_DWORD *)v196[39];
          *((_QWORD *)v52 + 36) = v201;
          ++*v201;
          if ( !v308 )
            UpdateTopLevelWindowDPITransform((__int64)v52, (__int64)v196);
        }
        if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap((__int64)v52) )
        {
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v202 = RecreateRedirectionBitmap(v52, 0, 0, 0, 0, 0LL);
          v203 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( v202 < 0 )
          {
            GreUnlockVisRgn(v203);
            v130 = 3;
LABEL_541:
            v157 = v315;
            goto LABEL_542;
          }
          GreUnlockVisRgn(v203);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*v312[0] + 8) + 8LL) & 0x20) != 0
          || (*(_BYTE *)(*(_QWORD *)(*v312[0] + 8) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*v312[0] + 40) )
        {
          StyleWindow = GetStyleWindow((__int64)v52, 2848);
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v205 = 49152LL;
          if ( !StyleWindow )
            v205 = 0x8000LL;
          CacheDC = CreateCacheDC(v52, v205, 0LL);
          v207 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( !CacheDC )
          {
            GreUnlockVisRgn(v207);
            v130 = 10;
            goto LABEL_541;
          }
          GreUnlockVisRgn(v207);
        }
        v208 = v304;
        if ( (v304 & 0x80000) != 0
          && (*(_BYTE *)(*((_QWORD *)v52 + 5) + 26LL) & 8) == 0
          && (int)xxxSetLayeredWindow(v52, 0, 0LL) < 0 )
        {
          v130 = 11;
          goto LABEL_541;
        }
        if ( (v208 & 0x2000000) != 0 && !GetStyleWindow(*v185, 2818) )
        {
          SetOrClrWF(1, (__int64)v52, 0xB02u, 1);
          if ( (int)SetRedirectedWindow(v52, 2) < 0 )
          {
            SetOrClrWF(0, (__int64)v52, 0xB02u, 1);
            v130 = 12;
            goto LABEL_541;
          }
        }
        *((_QWORD *)&v346 + 1) = __PAIR64__(v309, v307);
        *(_QWORD *)&v346 = __PAIR64__(v311, v313);
        if ( !xxxSendMessage((unsigned __int64)v52, 0x81u, 0LL, (struct _LARGE_STRING *)&v344) )
          goto LABEL_540;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v52 + 17) + 8LL) + 9LL) & 2) != 0 )
        {
          xxxGetSystemMenu(v52, 0);
          v318 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v317);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v317) )
          {
            v386[2] = 0LL;
            v216 = v318;
            if ( !v318 )
              v216 = *(_QWORD **)v317[0];
            v217 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v386[0] = *(_QWORD *)(v217 + 408);
            *(_QWORD *)(v217 + 408) = v386;
            v386[1] = v216;
            if ( v216 )
              HMLockObject(v216);
            xxxRemoveDeleteMenuHelper((__int64)v317, 5u, 1024, 1u);
            xxxRemoveDeleteMenuHelper((__int64)v317, 5u, 1024, 1u);
            ThreadUnlock1(v219, v218, v220);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 18LL) & 2) != 0
          && (!*((_QWORD *)&v349 + 1) || (_DWORD)v349 || *((_QWORD *)v52 + 23)) )
        {
          v397 = 0LL;
          *((_QWORD *)&v347 + 1) = *((_QWORD *)v52 + 23);
          v349 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (NotifyShell *)((char *)v52 + 184),
                              (struct _LARGE_UNICODE_STRING *)&v397);
        }
        if ( (*gpsi & 4) != 0 && !*(_QWORD *)(v303 + 776) )
        {
          if ( (unsigned int)Feature_Servicing_2109c_34956946__private_IsEnabled() )
          {
            if ( (unsigned __int8)tagWND::HasState(v52) )
            {
              DefaultImeWindow = xxxCreateDefaultImeWindow(v221, v306, v333);
              v382[0] = v303 + 776;
              v382[1] = DefaultImeWindow;
              HMAssignmentLock(v382);
              v223 = v303;
              v224 = *(_QWORD *)(v303 + 776);
              if ( v224 )
              {
                v387[2] = 0LL;
                v225 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v387[0] = *(_QWORD *)(v225 + 408);
                *(_QWORD *)(v225 + 408) = v387;
                v387[1] = v224;
                HMLockObject(v224);
                xxxSendMessage(*(_QWORD *)(v303 + 776), 0x287u, 0x21uLL, 0LL);
                ThreadUnlock1(v227, v226, v228);
                v223 = v303;
              }
              v229 = (**(_DWORD **)(v223 + 472) >> 6) & 1;
              v365 = v229;
              v230 = *(_QWORD *)(v223 + 776);
              if ( v230 )
              {
                if ( v229 )
                {
                  v388[2] = 0LL;
                  v231 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v388[0] = *(_QWORD *)(v231 + 408);
                  *(_QWORD *)(v231 + 408) = v388;
                  v388[1] = v230;
                  HMLockObject(v230);
                  xxxSendMessage(
                    *(_QWORD *)(v303 + 776),
                    0x287u,
                    0x19uLL,
                    *(struct _LARGE_STRING **)(*(_QWORD *)(v303 + 432) + 40LL));
                  v234 = *(_QWORD **)(v303 + 472);
                  *v234 &= ~0x40uLL;
LABEL_577:
                  ThreadUnlock1(v234, v232, v233);
                }
              }
            }
          }
          else if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v52) )
          {
            v235 = xxxCreateDefaultImeWindow(v52, v306, v333);
            v383[0] = v303 + 776;
            v383[1] = v235;
            HMAssignmentLock(v383);
            v236 = v303;
            v237 = *(_QWORD *)(v303 + 776);
            if ( v237 )
            {
              v389[2] = 0LL;
              v238 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v389[0] = *(_QWORD *)(v238 + 408);
              *(_QWORD *)(v238 + 408) = v389;
              v389[1] = v237;
              HMLockObject(v237);
              xxxSendMessage(*(_QWORD *)(v303 + 776), 0x287u, 0x21uLL, 0LL);
              ThreadUnlock1(v240, v239, v241);
              v236 = v303;
            }
            v242 = (**(_DWORD **)(v236 + 472) >> 6) & 1;
            v362 = v242;
            v243 = *(_QWORD *)(v236 + 776);
            if ( v243 )
            {
              if ( v242 )
              {
                v390[2] = 0LL;
                v244 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                v390[0] = *(_QWORD *)(v244 + 408);
                *(_QWORD *)(v244 + 408) = v390;
                v390[1] = v243;
                HMLockObject(v243);
                xxxSendMessage(
                  *(_QWORD *)(v303 + 776),
                  0x287u,
                  0x19uLL,
                  *(struct _LARGE_STRING **)(*(_QWORD *)(v303 + 432) + 40LL));
                v234 = *(_QWORD **)(v303 + 472);
                *v234 &= ~0x40uLL;
                goto LABEL_577;
              }
            }
          }
        }
        if ( v19 )
        {
          v245 = *(unsigned int *)(*((_QWORD *)v52 + 5) + 232LL);
          if ( (v245 & 8) == 0 || (__int64 *)*v185 == v19 )
          {
            v246 = PWInsertAfter(v331, v245);
            v247 = v246;
            if ( (unsigned __int64)(v246 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v246 + 104) != *v185 )
              v247 = v308 != 0;
            v248 = *((_QWORD *)v52 + 15);
            if ( v248 )
            {
              *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v248 + 40) + 236LL);
              SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v52 + 15) + 40LL) + 234LL) & 0x20, (__int64)v52, 0xDA20u, 1);
            }
            if ( !(unsigned int)ValidateNewParent(v52, v19) )
            {
              v130 = 9;
              goto LABEL_613;
            }
            UnlinkWindow((__int64 *)v52, (__int64 *)*v185);
            v250 = *((_QWORD *)v52 + 5);
            if ( (*(_BYTE *)(v250 + 31) & 0xC0) != 0x40 && v19 != *(__int64 **)(v19[3] + 104) )
            {
              if ( (*(_BYTE *)(v250 + 24) & 8) != 0 )
              {
                if ( gHardErrorHandler )
                {
                  TopMostInsertAfter = GetTopMostInsertAfter(v52);
                  if ( TopMostInsertAfter )
                    v247 = TopMostInsertAfter;
                }
              }
              else
              {
                if ( !v247 )
                  goto LABEL_601;
                if ( v247 >= 0xFFFFFFFFFFFFFFFEuLL )
                {
LABEL_606:
                  v130 = 13;
                  goto LABEL_613;
                }
                if ( v247 != 1 && (*(_BYTE *)(*(_QWORD *)(v247 + 40) + 24LL) & 8) != 0 )
LABEL_601:
                  v247 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v52);
              }
            }
            if ( v247 >= 0xFFFFFFFFFFFFFFFEuLL )
              goto LABEL_606;
            LinkWindow(v52, (struct tagWND *)v247, v19);
            zzzLockDisplayAreaAndInvalidateDCCache((__int64)v19, 16, 0LL);
          }
        }
        v253 = *((_QWORD *)v52 + 5);
        v254 = v253;
        if ( (*(_BYTE *)(v253 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v19[5] + 26) & 0x40) != 0 )
        {
          v255 = *(_DWORD *)(v253 + 96);
          v256 = *(_DWORD *)(v253 + 88);
          *(_DWORD *)(v253 + 96) = v336 + DWORD2(v336) - v256;
          *(_DWORD *)(*((_QWORD *)v52 + 5) + 88LL) = v256 + *(_DWORD *)(*((_QWORD *)v52 + 5) + 96LL) - v255;
          v254 = v315[5];
        }
        *(_OWORD *)v400 = *(_OWORD *)(v254 + 88);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (unsigned __int64)v52,
          0x83u,
          0LL,
          (struct _LARGE_STRING *)v400,
          0,
          0,
          0LL,
          1,
          0);
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 104LL) = v400[0];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 108LL) = v400[1];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 112LL) = v400[2];
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 116LL) = v400[3];
        if ( xxxSendMessage((unsigned __int64)v52, 1u, 0LL, (struct _LARGE_STRING *)&v344) == -1 )
        {
          v130 = v310;
LABEL_613:
          if ( v323 )
            ThreadUnlock1(v250, v249, v251);
          if ( ThreadUnlock1(v250, v249, v251) )
            xxxDestroyWindow((__int64 *)v52);
          v257 = (struct tagCLS *)*v312[0];
          v258 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)(v258 + 16) = v358;
          ClassUnlockWorker(v257);
          if ( v130 )
            goto LABEL_555;
          goto LABEL_37;
        }
        SetOrClrWF(1, (__int64)v52, 0x780u, 1);
        if ( (unsigned int)IsWindowDesktopComposed(v52) )
        {
          v260 = *(_DWORD *)(*((_QWORD *)v52 + 5) + 28LL);
          v261 = (void *)ReferenceDwmApiPort(v259);
          DwmAsyncChildStyleChange(v261, *(_QWORD *)v52, -16, v260);
          DwmChildRectChange((unsigned __int64)v52, v262, v263);
          v265 = (__int64 *)*((_QWORD *)v52 + 15);
          if ( v265 )
            v266 = *v265;
          else
            v266 = 0LL;
          v267 = (void *)ReferenceDwmApiPort(v264);
          DwmAsyncOwnerChange(v267, *(_QWORD *)v52, v266);
        }
        xxxWindowEvent(0x8000u, v52, 0, 0, 0);
        v268 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v268 + 16) & 0x10) == 0 )
        {
          xxxSendSizeMessage((__int64)v52, 0);
          if ( v19 )
          {
            v269 = 0LL;
            v270 = *((_QWORD *)v52 + 3);
            if ( v270 )
            {
              v271 = *(_QWORD *)(v270 + 8);
              if ( v271 )
                v269 = *(__int64 **)(v271 + 24);
            }
            if ( v269 != v19 )
            {
              v400[0] -= v336;
              v400[1] -= DWORD1(v336);
            }
          }
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)v52,
            3u,
            0LL,
            (struct _LARGE_STRING *)(LOWORD(v400[0]) | (LOWORD(v400[1]) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v268 = v315[5];
        }
        v272 = *(_BYTE *)(v268 + 31);
        if ( (v272 & 0x20) != 0 )
        {
          SetMinimize((__int64)v52, 0);
          v273 = 7;
        }
        else
        {
          if ( (v272 & 1) == 0 )
            goto LABEL_637;
          SetOrClrWF(0, (__int64)v52, 0xF01u, 1);
          v273 = 3;
        }
        xxxMinMaximizeEx(v52, v273, gdwPUDFlags & 0x10000 | 1, 0LL, 0LL, 0LL);
LABEL_637:
        CalcWindowFullScreen(v52);
        v274 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v274 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v274 + 24) & 4) == 0 )
        {
          v275 = *v185;
          if ( *v185 )
          {
            *(_QWORD *)&v371 = *(_QWORD *)(v303 + 408);
            *(_QWORD *)(v303 + 408) = &v371;
            *((_QWORD *)&v371 + 1) = v275;
            HMLockObject(v275);
            v276 = *((_QWORD *)v52 + 21);
            v277 = *v185;
            v278 = *(struct _LARGE_STRING **)v52;
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v277, 0x210u, ((unsigned __int16)v276 << 16) | 1, v278, 0, 0, 0LL, 1, 0);
            ThreadUnlock1(v280, v279, v281);
          }
        }
        xxxInheritWindowMonitor(v52, 0LL, 0);
        if ( (a5 & 0x10000000) != 0 )
          xxxShowWindow(v52, v322 | gdwPUDFlags & 0x10000);
        v284 = *((_QWORD *)v52 + 5);
        if ( (*(_BYTE *)(v284 + 31) & 0xC0) == 0 || (*(_BYTE *)(v284 + 26) & 4) != 0 )
        {
          v284 = *(_QWORD *)(v303 + 416);
          v285 = *(_DWORD *)(v284 + 692);
          if ( v285 )
          {
            xxxSendMessage((unsigned __int64)v52, 0x32u, v285, 0LL);
            v284 = *(_QWORD *)(v303 + 416);
            *(_DWORD *)(v284 + 692) = 0;
          }
        }
        if ( v323 )
          ThreadUnlock1(v284, v282, v283);
        v286 = (struct tagCLS *)*v312[0];
        v287 = KeGetCurrentThread();
        v288 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v284)
          || (v292 = PsGetCurrentProcess(v290, v289, v291),
              v293 = PsGetProcessSessionIdEx(v292),
              v295 = PsGetCurrentThreadProcess(v294),
              v293 == (unsigned int)PsGetProcessSessionIdEx(v295)) )
        {
          v296 = (__int64 *)PsGetThreadWin32Thread(v287);
          if ( v296 )
            v288 = *v296;
        }
        *(_QWORD *)(v288 + 16) = v358;
        ClassUnlockWorker(v286);
        v300 = ThreadUnlock1(v298, v297, v299);
        v301 = v300;
        if ( !v300 || (*(_BYTE *)(_HMPheFromObject(v300) + 25) & 1) != 0 )
          v301 = 0LL;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v317);
        SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v312);
        return v301;
      }
LABEL_509:
      v196 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v52 + 5) + 88LL), 2LL, 0);
      v197 = 0LL;
      if ( !v196 )
        goto LABEL_511;
      goto LABEL_510;
    }
    v164 = v316;
    if ( (v316 & 4) != 0 )
    {
      LOBYTE(v106) = 1;
      CoreWindowProp::ChangeRole(v52, 1LL, v106);
    }
    *(_QWORD *)(*((_QWORD *)v52 + 5) + 176LL) = *((_QWORD *)v52 + 6);
    v385[0] = (char *)v52 + 200;
    v385[1] = v52;
    HMAssignmentLock(v385);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      v167 = (_QWORD *)((char *)v52 + 120);
      *(_QWORD *)(*((_QWORD *)v52 + 5) + 64LL) = 0LL;
      v379[0] = (char *)v52 + 120;
      v379[1] = 0LL;
      HMAssignmentLock(v379);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v165);
      if ( !(unsigned int)ValidateOwnerDepth(v52, NonChildAncestor) )
        goto LABEL_412;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, (__int64)v52, 0xDA20u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v167 = (_QWORD *)((char *)v52 + 120);
      v393 = *(_OWORD *)LockPointer(&v399, (__int64)v52 + 120, NonChildAncestor);
      HMAssignmentLock(&v393);
      v103 = *((_QWORD *)v52 + 15);
      if ( v103
        && ((*(_BYTE *)(*(_QWORD *)(v103 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)v52 + 5) + 236LL) != 1) )
      {
        SetOrClrWF(1, (__int64)v52, 0x808u, 1);
        v103 = v157[15];
      }
      if ( v306 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v103 )
        {
          v103 = *(_QWORD *)(v103 + 16);
          if ( v103 != v303 )
            zzzAttachThreadInput(v303, v103, 1);
        }
      }
      v164 = v316;
    }
    if ( !*v167 && !(unsigned int)CoreWindowProp::IsComponent(v52) )
    {
      if ( (v168 = *((_QWORD *)v52 + 5), v169 = *(_DWORD *)(v168 + 236), v169 <= 0xF)
        && (v103 = 44800LL, _bittest((const int *)&v103, v169))
        || (*(_BYTE *)(v168 + 234) & 0x20) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v19 || v19 != *(__int64 **)(v19[3] + 104) )
    {
      v19 = (__int64 *)GetThreadDesktopWindow(0LL);
      v103 = v303;
      *(_QWORD *)&v373 = *(_QWORD *)(v303 + 408);
      *(_QWORD *)(v303 + 408) = &v373;
      *((_QWORD *)&v373 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      v323 = 1;
    }
    if ( (v164 & 2) == 0 )
      goto LABEL_418;
    if ( !*(_QWORD *)(v303 + 1384) )
    {
      SetOrClrWF(1, (__int64)v52, 0xDA40u, 1);
      *(_DWORD *)(v303 + 1224) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v303 + 424) + 388LL) |= 0x2000000u;
      v170 = v303;
      if ( !*(_QWORD *)(v303 + 1376) )
      {
        KernelEvent = CreateKernelEvent(1LL);
        v104 = v303;
        *(_QWORD *)(v303 + 1376) = KernelEvent;
        v170 = v303;
        if ( !*(_QWORD *)(v303 + 1376) )
        {
          v130 = 7;
          goto LABEL_542;
        }
      }
      v380[0] = v170 + 1384;
      v380[1] = v52;
      HMAssignmentLock(v380);
      goto LABEL_418;
    }
LABEL_412:
    UserSetLastError(87LL, v103, v106);
    v130 = v310;
    goto LABEL_542;
  }
  v159 = v318;
  if ( !v318 )
    v159 = *(_QWORD **)v317[0];
  DestroyMenu(v159);
  v318 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v317);
LABEL_357:
  v130 = v310;
LABEL_542:
  v209 = *(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0x10;
  if ( v323 )
    ThreadUnlock1(v104, v103, v106);
  SetOrClrWF(1, (__int64)v52, 0x480u, 1);
  SetOrClrWF(1, (__int64)v52, 0x380u, 1);
  if ( v209 )
    SetVisible(v52, 0);
  v210 = (__int64 *)*((_QWORD *)v52 + 13);
  if ( v210 )
  {
    if ( v209 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache(*((_QWORD *)v52 + 13), 16, 0LL);
      v210 = (__int64 *)v157[13];
    }
    v211 = v210;
    if ( (*(_BYTE *)(*((_QWORD *)v52 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v52) )
    {
      v213 = *(_QWORD *)(v212 + 16);
      if ( v303 != v213 )
      {
        zzzAttachThreadInput(*((_QWORD *)v52 + 2), v213, 0);
        v211 = (__int64 *)v157[13];
      }
    }
    UnlinkWindow((__int64 *)v52, v211);
  }
  v214 = (struct tagCLS *)*v312[0];
  v215 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v215 + 16) = v358;
  ClassUnlockWorker(v214);
  xxxFreeWindow(v52, (struct tagSwitchWndInfo *)&v356);
  if ( v130 )
LABEL_555:
    TraceLoggingCreateWindowFailed(
      v130,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_37:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v317);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v312);
  return 0LL;
}
