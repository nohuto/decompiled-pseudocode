/*
 * XREFs of xxxCreateWindowEx @ 0x1C00B5990
 * Callers:
 *     xxxCreateWindowStation @ 0x1C000CF8C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00110D4 (xxxCreateDesktopEx.c)
 *     NtUserCreateWindowEx @ 0x1C00B92A0 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     xxxCsDdeInitialize @ 0x1C011F460 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0136968 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00010A4 (TraceChildWindowDpiTelemetry.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C001355C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x1C0013648 (IsImmersiveAppIORestricted.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001402C (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C001878C (SetMinimize.c)
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0036C9C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     xxxSendSizeMessage @ 0x1C003C4E4 (xxxSendSizeMessage.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003CBF8 (GetWindowCloakStateComponentUIAware.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0041A54 (UpdateTopLevelWindowDPITransform.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00466CC (IsDpiBoundaryBetweenWindows.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0046F40 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     GetInheritedMonitor @ 0x1C004A7D8 (GetInheritedMonitor.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxUpdateInputHangInfo @ 0x1C0051A40 (xxxUpdateInputHangInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     SetTiledRect @ 0x1C006143C (SetTiledRect.c)
 *     xxxLoadUserApiHook @ 0x1C0074590 (xxxLoadUserApiHook.c)
 *     xxxClientLoadMenu @ 0x1C0077E08 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0078EEC (RtlInitUnicodeStringOrId.c)
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 *     DwmAsyncChildCreate @ 0x1C008198C (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0081AD0 (DwmGetClassStyle.c)
 *     CalcWindowFullScreen @ 0x1C00906E4 (CalcWindowFullScreen.c)
 *     xxxAdjustSize @ 0x1C009086C (xxxAdjustSize.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0091398 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BA2F0 (MapClientNeuterToClientPfn.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     RtlInitLargeAnsiString @ 0x1C00BCA18 (RtlInitLargeAnsiString.c)
 *     zzzAttachThreadInput @ 0x1C00BF544 (zzzAttachThreadInput.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00C55BC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     DwmAsyncOwnerChange @ 0x1C00C5734 (DwmAsyncOwnerChange.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     PWInsertAfter @ 0x1C00C9DA4 (PWInsertAfter.c)
 *     ValidateNewParent @ 0x1C00C9DE4 (ValidateNewParent.c)
 *     ValidateParentDepth @ 0x1C00C9F58 (ValidateParentDepth.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C00CBFD4 (NeedsWindowEdge.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00CC108 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     RegisterDefaultClass @ 0x1C00CFCF0 (RegisterDefaultClass.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     _InnerGetClassPtr @ 0x1C00D2BFC (_InnerGetClassPtr.c)
 *     DereferenceClass @ 0x1C00D2C70 (DereferenceClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00D482C (xxxClientAllocWindowClassExtraBytes.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F1438 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     ClassLock @ 0x1C00F7870 (ClassLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C00F835C (W32GetCurrentThreadDpiHostingBehavior.c)
 *     RECTFromSIZERECT @ 0x1C00F8D5C (RECTFromSIZERECT.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 *     IsValidBandForProcess @ 0x1C00FC564 (IsValidBandForProcess.c)
 *     ReferenceClass @ 0x1C0104220 (ReferenceClass.c)
 *     xxxCreateClassSmIcon @ 0x1C010449C (xxxCreateClassSmIcon.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     IsTopLevelParent @ 0x1C0106E08 (IsTopLevelParent.c)
 *     GetAppCompatFlags @ 0x1C01090E0 (GetAppCompatFlags.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0109A78 (IsChildWindowDpiIsolationEnabled.c)
 *     RegisterIconTitleClass @ 0x1C011018C (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C011122C (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C01139D4 (ValidateOwnerDepth.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119ED4 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     UserGetLastError @ 0x1C012378C (UserGetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015BAE8 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C015CC14 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C015CD78 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01D066C (GetTopMostInsertAfter.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C01D2518 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5CFC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C0208CD8 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C0224814 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     _W32ExceptionHandler @ 0x1C025CF44 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        unsigned int a5,
        __int32 a6,
        LONG a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rbx
  int v22; // edi
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r15d
  int v26; // ecx
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r15d
  __int64 v37; // rdi
  unsigned __int16 Atom; // bx
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 *ClassPtr; // rax
  __int64 v42; // r14
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v44; // rbx
  unsigned __int16 v45; // r15
  int v46; // eax
  __int64 v47; // r8
  int v48; // r10d
  unsigned int v49; // ecx
  int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  struct tagWND *v55; // rdi
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // ebx
  __int64 v63; // r8
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // ebx
  wchar_t *v70; // rcx
  __int64 v71; // rbx
  __int64 *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // rdx
  LONG v77; // ebx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  LONG v80; // eax
  LONG v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v85; // rcx
  _DWORD *v86; // rax
  _DWORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 *ThreadDesktopWindow; // rbx
  struct _KPROCESS *v92; // rcx
  unsigned int ProcessId; // r14d
  __int64 v94; // rsi
  _DWORD *v95; // rax
  unsigned int v96; // r15d
  int v97; // r12d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v100; // rcx
  void *v101; // rax
  char v102; // r14
  __int64 v103; // rax
  SIZE_T v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rbx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // r8
  int v114; // ebx
  __int64 v115; // rdx
  int AppCompatFlags; // eax
  __int64 v117; // rcx
  char v118; // bl
  __int64 v119; // r8
  int v120; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v122; // r14
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v128; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 *v133; // rax
  int v134; // eax
  unsigned int v135; // esi
  __int32 v136; // r14d
  unsigned int v137; // r15d
  int v138; // r13d
  int v139; // r15d
  LONG v140; // ebx
  LONG v141; // r14d
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  int v145; // r13d
  int v146; // eax
  __int64 v147; // rcx
  struct tagMONITOR *v148; // rbx
  __int64 v149; // rcx
  _DWORD *v150; // rax
  _DWORD *v151; // rcx
  _DWORD *v152; // rax
  __int64 v153; // r8
  __int64 v154; // r9
  __int16 v155; // ax
  int v156; // eax
  _DWORD *v157; // rcx
  int v158; // eax
  unsigned __int64 v159; // xmm0_8
  int v160; // r15d
  int v161; // r14d
  _DWORD *v162; // rcx
  int v163; // eax
  __int64 v164; // rcx
  char v165; // al
  _QWORD *v166; // r13
  __int64 v167; // rcx
  __int64 v168; // rcx
  bool v169; // al
  __int64 v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rdx
  char v173; // bl
  __int64 v174; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v176; // r14
  __int64 v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rcx
  unsigned int v180; // eax
  int v181; // edx
  __int64 v182; // rax
  __int64 KernelEvent; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  unsigned int v186; // edx
  __int64 v187; // rbx
  unsigned int v188; // ecx
  NTSTATUS v189; // eax
  ULONG v190; // eax
  int v191; // r13d
  unsigned int v192; // ecx
  unsigned __int64 v193; // rbx
  unsigned int v194; // edx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 *v198; // r13
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 v202; // rcx
  int v203; // ecx
  int v204; // eax
  int v205; // edx
  int v206; // ecx
  __int64 v207; // r8
  __int64 v208; // rax
  __int64 *v209; // rbx
  __int64 v210; // rcx
  __int64 v211; // rdx
  _DWORD *v212; // rax
  _DWORD *v213; // rcx
  _DWORD *v214; // rax
  int v215; // eax
  __int64 v216; // rcx
  __int64 StyleWindow; // rbx
  __int64 v218; // rdx
  __int64 CacheDC; // rax
  __int64 v220; // rcx
  unsigned int v221; // ebx
  int v222; // ebx
  __int64 v223; // r9
  __int64 v224; // r10
  __int64 v225; // r9
  __int64 v226; // rdx
  struct tagCLS *v227; // rbx
  __int64 v228; // rax
  _QWORD *v229; // rbx
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // rcx
  __int64 DefaultImeWindow; // rax
  __int64 v236; // rdx
  __int64 v237; // rbx
  __int64 v238; // rax
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  int v242; // ecx
  __int64 v243; // rbx
  __int64 v244; // rax
  _QWORD *v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // r8
  __int64 v248; // rax
  unsigned __int64 v249; // rbx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 TopMostInsertAfter; // rax
  __int64 v255; // r9
  __int64 v256; // rdx
  int v257; // edx
  int v258; // r8d
  struct tagCLS *v259; // rbx
  __int64 v260; // rax
  __int64 v261; // rcx
  void *v262; // rax
  __int64 v263; // rcx
  void *v264; // rax
  __int64 v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rcx
  __int64 v268; // rcx
  char v269; // al
  unsigned int v270; // edx
  __int64 v271; // rcx
  __int64 v272; // rcx
  __int64 v273; // rax
  unsigned __int64 v274; // rcx
  struct _LARGE_STRING *v275; // r9
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // rdx
  __int64 v280; // r8
  __int64 v281; // rcx
  unsigned int v282; // eax
  struct tagCLS *v283; // r15
  struct _KTHREAD *v284; // r14
  __int64 v285; // rdi
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // rax
  int v290; // ebx
  __int64 v291; // rcx
  __int64 v292; // rax
  __int64 *v293; // rax
  __int64 v294; // rdx
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // rax
  __int64 v298; // rbx
  int LowLimit; // [rsp+30h] [rbp-478h]
  __int64 v300; // [rsp+60h] [rbp-448h] BYREF
  unsigned int v301; // [rsp+68h] [rbp-440h]
  int v302; // [rsp+70h] [rbp-438h]
  LONG v303; // [rsp+78h] [rbp-430h]
  unsigned __int16 v304; // [rsp+7Ch] [rbp-42Ch]
  int v305; // [rsp+80h] [rbp-428h]
  int v306; // [rsp+84h] [rbp-424h]
  __int32 v307; // [rsp+88h] [rbp-420h]
  unsigned int v308; // [rsp+8Ch] [rbp-41Ch]
  _QWORD v309[2]; // [rsp+90h] [rbp-418h] BYREF
  unsigned int v310; // [rsp+A0h] [rbp-408h]
  __int128 v311; // [rsp+A8h] [rbp-400h] BYREF
  _QWORD *v312; // [rsp+B8h] [rbp-3F0h]
  int v313; // [rsp+C0h] [rbp-3E8h]
  _QWORD v314[2]; // [rsp+C8h] [rbp-3E0h] BYREF
  _QWORD *v315; // [rsp+D8h] [rbp-3D0h]
  int v316; // [rsp+E0h] [rbp-3C8h]
  int v317; // [rsp+E4h] [rbp-3C4h]
  int WindowCloakStateComponentUIAware; // [rsp+E8h] [rbp-3C0h]
  int v319; // [rsp+ECh] [rbp-3BCh]
  int v320; // [rsp+F0h] [rbp-3B8h]
  int v321; // [rsp+F4h] [rbp-3B4h]
  __int16 v322; // [rsp+F8h] [rbp-3B0h]
  __int16 v323; // [rsp+FAh] [rbp-3AEh]
  int v324; // [rsp+FCh] [rbp-3ACh]
  int v325; // [rsp+100h] [rbp-3A8h]
  int v326; // [rsp+104h] [rbp-3A4h]
  int v327; // [rsp+108h] [rbp-3A0h]
  __int64 v328; // [rsp+110h] [rbp-398h]
  int v329; // [rsp+118h] [rbp-390h]
  int v330; // [rsp+11Ch] [rbp-38Ch]
  __int64 v331; // [rsp+120h] [rbp-388h]
  struct tagWND *v332; // [rsp+128h] [rbp-380h]
  __int128 v333; // [rsp+130h] [rbp-378h] BYREF
  int v334; // [rsp+140h] [rbp-368h]
  int v335; // [rsp+148h] [rbp-360h]
  int v336; // [rsp+150h] [rbp-358h]
  int v337; // [rsp+154h] [rbp-354h]
  __int64 v338; // [rsp+158h] [rbp-350h]
  __int64 v339; // [rsp+160h] [rbp-348h]
  wchar_t *Str1; // [rsp+168h] [rbp-340h]
  __int128 v341; // [rsp+170h] [rbp-338h] BYREF
  __int128 v342; // [rsp+180h] [rbp-328h]
  __int128 v343; // [rsp+190h] [rbp-318h]
  __int128 v344; // [rsp+1A0h] [rbp-308h]
  __int128 v345; // [rsp+1B0h] [rbp-2F8h]
  __int128 v346; // [rsp+1C0h] [rbp-2E8h]
  __int128 v347; // [rsp+1D0h] [rbp-2D8h] BYREF
  __int64 v348; // [rsp+1E0h] [rbp-2C8h]
  __int128 *v349; // [rsp+1E8h] [rbp-2C0h]
  __int64 v350; // [rsp+1F0h] [rbp-2B8h]
  __int64 v351; // [rsp+1F8h] [rbp-2B0h]
  __m128i v352; // [rsp+200h] [rbp-2A8h]
  __int128 v353; // [rsp+210h] [rbp-298h] BYREF
  __int64 v354; // [rsp+220h] [rbp-288h]
  __int128 v355; // [rsp+228h] [rbp-280h] BYREF
  __int64 v356; // [rsp+238h] [rbp-270h]
  __int64 v357; // [rsp+250h] [rbp-258h]
  wchar_t *v358; // [rsp+258h] [rbp-250h]
  __int128 *v359; // [rsp+260h] [rbp-248h]
  char v360[8]; // [rsp+268h] [rbp-240h] BYREF
  struct _KPROCESS *v361; // [rsp+270h] [rbp-238h]
  _QWORD v362[2]; // [rsp+278h] [rbp-230h] BYREF
  int v363; // [rsp+288h] [rbp-220h]
  __int64 v364; // [rsp+290h] [rbp-218h] BYREF
  __int64 v365; // [rsp+298h] [rbp-210h]
  __int128 v366; // [rsp+2A0h] [rbp-208h] BYREF
  __int64 v367; // [rsp+2B0h] [rbp-1F8h]
  __int128 v368; // [rsp+2B8h] [rbp-1F0h] BYREF
  __int64 v369; // [rsp+2C8h] [rbp-1E0h]
  struct _UNICODE_STRING v370; // [rsp+2D0h] [rbp-1D8h] BYREF
  _QWORD v371[2]; // [rsp+2E0h] [rbp-1C8h] BYREF
  _QWORD v372[2]; // [rsp+2F0h] [rbp-1B8h] BYREF
  _QWORD v373[2]; // [rsp+300h] [rbp-1A8h] BYREF
  _QWORD v374[2]; // [rsp+310h] [rbp-198h] BYREF
  _QWORD v375[2]; // [rsp+320h] [rbp-188h] BYREF
  _QWORD v376[2]; // [rsp+330h] [rbp-178h] BYREF
  _QWORD v377[2]; // [rsp+340h] [rbp-168h] BYREF
  _QWORD v378[2]; // [rsp+350h] [rbp-158h] BYREF
  _QWORD v379[4]; // [rsp+360h] [rbp-148h] BYREF
  _QWORD v380[3]; // [rsp+380h] [rbp-128h] BYREF
  _QWORD v381[3]; // [rsp+398h] [rbp-110h] BYREF
  _QWORD v382[3]; // [rsp+3B0h] [rbp-F8h] BYREF
  __int64 v383; // [rsp+3C8h] [rbp-E0h]
  __int64 v384; // [rsp+3D0h] [rbp-D8h]
  __int128 v385; // [rsp+3E0h] [rbp-C8h] BYREF
  __int128 v386; // [rsp+3F0h] [rbp-B8h] BYREF
  __int64 v387[2]; // [rsp+400h] [rbp-A8h] BYREF
  __int128 v388; // [rsp+410h] [rbp-98h]
  __int64 v389; // [rsp+420h] [rbp-88h]
  __int128 v390; // [rsp+428h] [rbp-80h] BYREF
  char v391[16]; // [rsp+438h] [rbp-70h] BYREF
  int v392[4]; // [rsp+448h] [rbp-60h] BYREF
  struct tagRECT v393; // [rsp+458h] [rbp-50h] BYREF

  v349 = a4;
  v339 = a3;
  Str1 = a2;
  v316 = a1;
  v337 = a1;
  v358 = a2;
  v359 = a4;
  v19 = a10;
  v328 = a10;
  v331 = a12;
  v348 = a13;
  v327 = 0;
  v334 = 0;
  v324 = 0;
  v317 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v309);
  *(_OWORD *)v392 = 0LL;
  v311 = 0LL;
  v319 = 5;
  v335 = 5;
  v338 = 0LL;
  v341 = 0LL;
  v342 = 0LL;
  v343 = 0LL;
  v344 = 0LL;
  v345 = 0LL;
  v346 = 0LL;
  v347 = 0LL;
  v300 = gptiCurrent;
  v355 = 0LL;
  v356 = 0LL;
  v366 = 0LL;
  v367 = 0LL;
  v368 = 0LL;
  v369 = 0LL;
  v353 = 0LL;
  v354 = 0LL;
  v320 = 0;
  v321 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v305 = 0;
  v333 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v314, a11);
  v306 = 0;
  v21 = gptiCurrent;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
      goto LABEL_35;
    v21 = v300;
  }
  v22 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v22 = a1;
  v23 = 800;
  if ( a1 >= 0 )
    LOWORD(v23) = 0;
  v325 = v23;
  v322 = v23;
  v24 = *(_QWORD *)(v21 + 456);
  v351 = v24;
  v357 = v24;
  if ( a10 && *(_QWORD *)(a10 + 24) != v24 )
    goto LABEL_35;
  v313 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v21 + 424)) )
      goto LABEL_43;
    v20 = 1;
    v305 = 1;
    v21 = v300;
  }
  if ( (a16 & 2) != 0 )
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v21 + 424)) )
    {
      v21 = v300;
      goto LABEL_16;
    }
LABEL_43:
    v31 = 5LL;
    goto LABEL_36;
  }
LABEL_16:
  v25 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_35;
    if ( a14 == 15 )
      goto LABEL_35;
    v26 = *(_DWORD *)(*(_QWORD *)(v21 + 424) + 820LL);
    if ( (v26 & 0x30) == 0x10 && (v26 & 0x200) == 0 && a14 == 1 && !v20 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_35;
  }
  v27 = HIWORD(a5) & 0xC000;
  v329 = v27;
  v323 = HIWORD(a5) & 0xC000;
  v330 = (_WORD)v27 == 0x4000;
  if ( (_WORD)v27 == 0x4000 || (v28 = ShouldSetNoOwner(*(_QWORD *)(v21 + 424), a10), v21 = v300, !v28) )
  {
    if ( a10 && a10 != GetDesktopWindow(a10) )
    {
      v30 = *(_QWORD *)(a10 + 40);
      v305 = *(_BYTE *)(v30 + 234) & 0x20;
      if ( a14 )
      {
        if ( a14 != *(_DWORD *)(v30 + 236) )
          goto LABEL_35;
      }
      else
      {
        v25 = *(_DWORD *)(v30 + 236);
        a14 = v25;
      }
      goto LABEL_42;
    }
  }
  else
  {
    v19 = 0LL;
    v328 = 0LL;
  }
  if ( !a14 )
  {
    if ( IsImmersiveAppIORestricted(*(_QWORD *)(v21 + 424)) )
    {
      v305 = 1;
      v25 = 15;
    }
    else if ( (*(_DWORD *)(v29 + 820) & 2) == 0 || (v25 = 2, (v22 & 8) == 0) )
    {
      v25 = 1;
    }
    a14 = v25;
  }
LABEL_42:
  v336 = v305;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v21 + 424), v25, v19) )
    goto LABEL_43;
  v301 = v22;
  v302 = v22;
  if ( (v22 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (v36 = v22, v301 = v22, v302 = v22, (_WORD)a2 != 0x8002) )
    {
      v36 = v22;
      v301 = v22;
      v302 = v22;
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34, v33, v35) + 824) & 1) != 0 )
      {
        v36 = v22 | 0x400000;
        v301 = v22 | 0x400000;
        v302 = v22 | 0x400000;
      }
    }
    goto LABEL_54;
  }
  v301 = v22;
  v302 = v22;
  if ( (_WORD)v27 == 0x4000 && (v301 = v22, v302 = v22, (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x50) == 0x40) )
  {
    v36 = v22 | 0x400000;
    v301 = v22 | 0x400000;
    v302 = v22 | 0x400000;
  }
  else
  {
LABEL_53:
    v36 = v301;
  }
LABEL_54:
  if ( (v36 & 0x2200000) == 0x2200000 )
    goto LABEL_35;
  if ( *(_QWORD *)(v300 + 592) && !RtlAreAllAccessesGranted(*(_DWORD *)(v300 + 888), 2u) )
    goto LABEL_43;
  if ( (_WORD)v27 == 0x4000 )
  {
    if ( !v19 )
    {
      v31 = 1406LL;
      goto LABEL_36;
    }
    if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    {
LABEL_35:
      v31 = 87LL;
LABEL_36:
      UserSetLastError(v31);
      goto LABEL_37;
    }
  }
  v326 = a15;
  v310 = a9;
  v308 = a8;
  v303 = a7;
  v307 = a6;
  while ( 1 )
  {
    v37 = v339;
    if ( (v339 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v360);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v37 + 8)) < 0 )
      {
        Atom = 0;
        v304 = 0;
        v321 = 1;
      }
      else
      {
        Atom = UserFindAtom(gawchAtomScratch);
        v304 = Atom;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v360);
    }
    else
    {
      Atom = v339;
      v304 = v339;
    }
    if ( Atom )
    {
      v39 = *(_QWORD *)(v300 + 424);
      v40 = v39 + 344;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v39 + 344, v331);
      if ( ClassPtr )
        break;
      v42 = v39 + 352;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v39 + 352, 0LL);
      if ( ClassPtr )
        break;
      Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v40, WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
      if ( ClassPtr )
        break;
      ClassPtr = (__int64 *)InnerGetClassPtr(Atom, v42, Flink);
      if ( ClassPtr )
        break;
    }
LABEL_109:
    if ( v321
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v70 = Str1)
        : (v70 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v70)) )
    {
      v31 = 1407LL;
      goto LABEL_36;
    }
    v321 = 1;
  }
  v44 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v309[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v309);
    if ( v44 )
    {
      v309[0] = *(_QWORD *)(v44 + 128);
      ++*(_DWORD *)(v309[0] + 8LL);
    }
    else
    {
      v309[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_37;
  v45 = v326;
  v46 = NeedsWindowEdge(a5, v301, (unsigned __int16)v326 >= 0x400u);
  v49 = v48 & 0xFFFFFEFF;
  v50 = v48 | 0x100;
  if ( !v46 )
    v50 = v49;
  v301 = v50;
  LOBYTE(v47) = 1;
  v51 = HMAllocObject(v300, v351, v47);
  v312 = (_QWORD *)v51;
  v55 = (struct tagWND *)v51;
  v332 = (struct tagWND *)v51;
  if ( !v51 )
  {
    if ( (unsigned int)UserGetLastError(v53, v52, v54) == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_37;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v51 + 56));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 424LL) + 820LL) & 0x1000000) != 0 )
    *((_DWORD *)v55 + 82) |= 0x40u;
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 296LL) = 0LL;
  *((_QWORD *)v55 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v57 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v27 != 0x4000 || !v19 || v19 == GetThreadDesktopWindow(0LL) )
    goto LABEL_97;
  v58 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v60 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v60 )
      v58 = *(_QWORD *)(v60 + 104);
  }
  if ( v19 == v58
    || (v57 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 424LL), *(_QWORD *)(v300 + 424) != v57)
    || (unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_97:
    *(_DWORD *)(*((_QWORD *)v55 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v57);
    if ( (*(_DWORD *)(*((_QWORD *)v55 + 5) + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)v55 + 5) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v61 = *(unsigned int *)(*(_QWORD *)(v19 + 40) + 288LL);
    *(_DWORD *)(*((_QWORD *)v55 + 5) + 288LL) = v61;
    v62 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
    if ( (((unsigned __int8)v62 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v61)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry((__int64)v55, v19, 0);
  }
  v63 = *((_QWORD *)v55 + 5);
  v64 = *(_DWORD *)(v63 + 288);
  if ( (v64 & 0xF) == 2 && (v64 & 0xF0) == 0x20 )
  {
    v65 = 0x10000000;
    v66 = 0x20000000;
  }
  else
  {
    v65 = 0;
    v66 = 0;
  }
  *(_DWORD *)(v63 + 232) = v65 | *(_DWORD *)(v63 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) = v66 | *(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) & 0xDFFFFFFF;
  v67 = *(_QWORD *)v309[0];
  if ( *(_QWORD *)v309[0] )
    v68 = *(_QWORD *)(v67 + 16);
  else
    v68 = 0LL;
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 128LL) = v68;
  *((_QWORD *)v55 + 17) = v67;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  v69 = v301;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 24LL) = v301 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 80LL);
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v309[0], v55) )
  {
    HMFreeObject(v55);
    v302 = v69;
    goto LABEL_109;
  }
  v71 = *((_QWORD *)v55 + 17);
  if ( v71 != *(_QWORD *)v309[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v309);
    if ( v71 )
    {
      v309[0] = *(_QWORD *)(v71 + 128);
      ++*(_DWORD *)(v309[0] + 8LL);
    }
    else
    {
      v309[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v309[0], &v353) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v300 + 424));
    HMFreeObject(v55);
    v302 = v301;
    goto LABEL_109;
  }
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v55 + 5) + 208LL) = 0LL;
  }
  else
  {
    v72 = *(__int64 **)(v300 + 792);
    if ( v72 )
      v73 = *v72;
    else
      v73 = 0LL;
    *(_QWORD *)(*((_QWORD *)v55 + 5) + 208LL) = v73;
  }
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 236LL) = a14;
  v74 = *((_QWORD *)v55 + 5);
  if ( *(_DWORD *)(v74 + 236) == 1 )
    v75 = 0;
  else
    v75 = IsTopLevelParent(v19);
  if ( v75 )
  {
    *(_DWORD *)(v74 + 24) |= 8u;
    v74 = *((_QWORD *)v55 + 5);
  }
  if ( v305 )
    *(_BYTE *)(v74 + 234) |= 0x20u;
  ++*(_DWORD *)(v300 + 896);
  *(_QWORD *)&v341 = 0LL;
  v342 = 0LL;
  v343 = 0LL;
  v344 = 0LL;
  v345 = 0LL;
  v346 = 0LL;
  v347 = 0LL;
  DWORD2(v345) = v301;
  *((_QWORD *)&v341 + 1) = v331;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v316 >= 0 )
    {
      *(_QWORD *)&v345 = *((_QWORD *)Str1 + 1);
      v347 = *(_OWORD *)Str1;
    }
    else
    {
      v76 = *(_QWORD *)(*(_QWORD *)v309[0] + 104LL);
      *(_QWORD *)&v345 = v76;
      if ( (v76 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v347, v76);
    }
  }
  else
  {
    *(_QWORD *)&v345 = Str1;
  }
  if ( v349 )
  {
    *((_QWORD *)&v344 + 1) = *((_QWORD *)v349 + 1);
    v346 = *v349;
  }
  LODWORD(v344) = a5;
  v77 = v307;
  *((_QWORD *)&v343 + 1) = __PAIR64__(v307, v303);
  *(_QWORD *)&v343 = __PAIR64__(v308, v310);
  if ( v19 )
    *((_QWORD *)&v342 + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v342 + 1) = 0LL;
  if ( (_WORD)v27 == 0x4000 )
  {
    v78 = v315;
    if ( !v315 )
      v78 = *(_QWORD **)v314[0];
    *(_QWORD *)&v342 = v78;
    *(_DWORD *)(*((_QWORD *)v55 + 5) + 24LL) |= *(_DWORD *)(*(_QWORD *)(v19 + 40) + 24LL) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==((__int64)v314) )
  {
    *(_QWORD *)&v342 = 0LL;
  }
  else
  {
    v79 = v315;
    if ( !v315 )
      v79 = *(_QWORD **)v314[0];
    *(_QWORD *)&v342 = *v79;
  }
  *(_QWORD *)&v341 = v348;
  *(_QWORD *)&v355 = *(_QWORD *)(v300 + 416);
  *(_QWORD *)(v300 + 416) = &v355;
  *((_QWORD *)&v355 + 1) = v55;
  HMLockObject(v55);
  *(_QWORD *)&v393.left = 0LL;
  if ( v77 == 0x80000000 || v77 == 0x8000 )
  {
    v80 = 0;
    v393.left = 0;
  }
  else
  {
    v80 = v77;
    v393.left = v77;
  }
  if ( v303 == 0x80000000 || v303 == 0x8000 )
  {
    v81 = 0;
    v393.top = 0;
  }
  else
  {
    v81 = v303;
    v393.top = v303;
  }
  v82 = v308;
  if ( v308 == 0x80000000 || v308 == 0x8000 )
    v82 = 0;
  v393.right = v82 + v80;
  v83 = v310;
  if ( v310 == 0x80000000 || v310 == 0x8000 )
    v83 = 0;
  v393.bottom = v81 + v83;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v55);
  if ( InheritedMonitor )
  {
    v302 = 1;
  }
  else
  {
    v302 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v393), v85 = 0LL, InheritedMonitor) )
    v85 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 256LL) = v85;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v86 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v55 + 36) = v86;
  ++*v86;
  *((_QWORD *)v55 + 37) = 0LL;
  *(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) &= ~0x4000000u;
  if ( (_WORD)v27 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v55, v19) )
    UpdateTopLevelWindowDPITransform((__int64)v55, (__int64)InheritedMonitor);
  if ( (_WORD)v27 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v55 + 5) + 286LL) = *(_WORD *)(*(_QWORD *)(v19 + 40) + 286LL);
      v87 = *(_DWORD **)(v19 + 296);
      if ( v87 )
      {
        *((_QWORD *)v55 + 37) = v87;
        ++*v87;
      }
    }
  }
  v88 = *((_QWORD *)v55 + 3);
  if ( v88 )
  {
    v89 = *(_QWORD *)(v88 + 104);
    if ( v89 )
      v90 = *(_QWORD *)(v89 + 48);
    else
      v90 = 0LL;
    *(_QWORD *)(*((_QWORD *)v55 + 5) + 48LL) = v90;
    v377[0] = (char *)v55 + 104;
    v377[1] = v89;
    HMAssignmentLock(v377);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v55) )
  {
    ThreadDesktopWindow = (__int64 *)v19;
    if ( (_WORD)v27 != 0x4000 && (!v19 || v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    *(_OWORD *)v387 = 0LL;
    v388 = 0LL;
    v389 = 0LL;
    GetWindowCompositionInfo((__int64)v55, (__int64)v387);
    v92 = *(struct _KPROCESS **)(**((_QWORD **)v55 + 2) + 544LL);
    v361 = v92;
    if ( ThreadDesktopWindow )
      v350 = *ThreadDesktopWindow;
    else
      v350 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v92);
    v94 = ***(_QWORD ***)(*((_QWORD *)v55 + 3) + 8LL);
    v95 = (_DWORD *)*((_QWORD *)v55 + 5);
    v96 = v95[58];
    v97 = v95[6];
    v27 = v95[7];
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v361);
    ClassStyle = DwmGetClassStyle((__int64)v55);
    v101 = (void *)ReferenceDwmApiPort(v100);
    LowLimit = ClassStyle;
    v55 = v332;
    DwmAsyncChildCreate(
      v101,
      *(_QWORD *)v332,
      v350,
      v27,
      v97,
      v96,
      LowLimit,
      (__int128 *)v387,
      v94,
      (__int128 *)&v393.left,
      ProcessId,
      ProcessSequenceNumber);
    v19 = v328;
    LOWORD(v27) = v329;
    v45 = v326;
  }
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 32LL) = v331;
  *(_QWORD *)(*((_QWORD *)v55 + 5) + 120LL) = MapClientNeuterToClientPfn(
                                                *(_QWORD *)v309[0],
                                                0LL,
                                                (unsigned __int16)v325);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 6LL) & 1, v55, 516LL, 1LL);
  v102 = *(_BYTE *)(*((_QWORD *)v55 + 5) + 18LL) & 4;
  v379[0] = &v355;
  v379[1] = v309;
  v379[2] = &v353;
  v379[3] = &v300;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 84LL) )
  {
    v103 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 84LL), 1937208149LL);
    *((_QWORD *)v55 + 35) = v103;
    if ( !v103 )
    {
      v306 = 5;
LABEL_197:
      lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator()(v379);
      v302 = v301;
      goto LABEL_109;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v102 )
  {
    *(_DWORD *)(*((_QWORD *)v55 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v55 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v55 + 5) + 200LL) += 32;
  }
  v104 = *(unsigned int *)(*((_QWORD *)v55 + 5) + 200LL);
  if ( !(_DWORD)v104 )
    goto LABEL_211;
  v107 = xxxClientAllocWindowClassExtraBytes(v104);
  v384 = v107;
  if ( !v107 )
  {
    v306 = 2;
    if ( *((_DWORD *)v55 + 2) != 1 )
      goto LABEL_537;
    goto LABEL_197;
  }
  if ( (unsigned int)IsWindowBeingDestroyed(v55)
    || (*(_BYTE *)(_HMPheFromObject(v106) + 25) & 1) != 0
    || (v362[0] = 0LL,
        (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)v55 + 320, v362)) )
  {
LABEL_537:
    v135 = v306;
    goto LABEL_538;
  }
  v110 = *((_QWORD *)v55 + 5);
  if ( (*(_DWORD *)(v110 + 232) & 0x800) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v110, v105, v108, v109);
    v110 = v312[5];
  }
  *(_QWORD *)(v110 + 296) = v107;
LABEL_211:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v102 )
  {
    v114 = v316;
  }
  else
  {
    v111 = *((_QWORD *)v55 + 5);
    v112 = *(_QWORD *)(v111 + 296);
    v113 = *(int *)(v111 + 200);
    v383 = *(_QWORD *)(v111 + 120);
    *(_QWORD *)(v113 + v112 - 32) = v383;
    v114 = v316;
    if ( v316 >= 0 )
      v115 = *(_QWORD *)(gpsi + 768LL);
    else
      v115 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*((_QWORD *)v55 + 5) + 120LL) = v115;
  }
  if ( *(_QWORD *)(*(_QWORD *)v309[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v309[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v309);
  }
  SetOrClrWF(1LL, v55, (unsigned __int16)v325, 1LL);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 6LL) & 2) != 0
    || v114 < 0
    && (v304 == *(_WORD *)(gpsi + 868LL)
     || v304 == *(_WORD *)(gpsi + 878LL)
     || v304 == *(_WORD *)(gpsi + 882LL)
     || v304 == *(_WORD *)(gpsi + 904LL)
     || v304 == *(_WORD *)(gpsi + 870LL)
     || v304 == *(_WORD *)(gpsi + 874LL)
     || v304 == *(_WORD *)(gpsi + 880LL)
     || v304 == *(_WORD *)(gpsi + 898LL)
     || v304 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1LL, v55, 520LL, 1LL);
  }
  AppCompatFlags = GetAppCompatFlags(v300);
  v118 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v55, 1032LL, 1LL);
    v301 &= 0x3Fu;
    DWORD2(v345) = BYTE8(v345) & 0x3F;
  }
  *(_WORD *)(*((_QWORD *)v55 + 5) + 40LL) = 0;
  if ( v45 < 0x30Au )
  {
    if ( (v118 & 0x40) != 0 )
    {
      v119 = 1600LL;
LABEL_242:
      SetOrClrWF(1LL, v55, v119, 1LL);
    }
  }
  else
  {
    SetOrClrWF(1LL, v55, 1281LL, 1LL);
    if ( v45 >= 0x400u )
    {
      SetOrClrWF(1LL, v55, 1282LL, 1LL);
      if ( v45 >= 0x500u )
      {
        v119 = 1284LL;
        goto LABEL_242;
      }
    }
  }
  if ( v45 <= *(_WORD *)(v300 + 636) )
    v120 = *(_DWORD *)(v300 + 636);
  else
    v120 = v45;
  *((_DWORD *)v55 + 64) = v120;
  CurrentThread = KeGetCurrentThread();
  v122 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v117)
    || (CurrentProcess = PsGetCurrentProcess(v124, v123, v125),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v128),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v133 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v133 )
      v122 = *v133;
  }
  v134 = 0;
  if ( *(_DWORD *)(v122 + 632) <= 0x9900u )
    v134 = *(_DWORD *)(v122 + 648);
  if ( (v134 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v55, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook(v131, v130, v132);
  if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v55) )
  {
    *((_DWORD *)v55 + 81) |= 0x20000000u;
    ++*(_DWORD *)(v300 + 904);
  }
  if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v300 + 464) + 16LL) | *(_BYTE *)(v300 + 680)) & 0x40) != 0 )
  {
    v364 = (__int64)&v341;
    v365 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v55, (__int64)&v364, 5) )
    {
      v135 = 6;
      goto LABEL_538;
    }
    v136 = HIDWORD(v343);
    v307 = HIDWORD(v343);
    v303 = DWORD2(v343);
    v137 = DWORD1(v343);
    v308 = DWORD1(v343);
    v310 = v343;
    v328 = v365;
  }
  else
  {
    v328 = 0LL;
    v136 = v307;
    v137 = v308;
  }
  v106 = *((_QWORD *)v55 + 5);
  if ( (*(_BYTE *)(v106 + 31) & 0xC0) == 0x40 )
  {
    v105 = 1LL;
    v305 = 1;
    if ( !v19 )
      goto LABEL_537;
  }
  else
  {
    LODWORD(v105) = 0;
    v305 = 0;
  }
  if ( (_DWORD)v105 != v330 )
  {
    v315 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v314);
    v106 = v312[5];
    LODWORD(v105) = v305;
  }
  if ( (*(_BYTE *)(v106 + 31) & 0xC0) != 0 )
  {
    v138 = 0;
    if ( v136 == 0x80000000 || v136 == 0x8000 )
    {
      v136 = 0;
      v307 = 0;
      v303 = 0;
    }
    if ( v137 == 0x80000000 || v137 == 0x8000 )
    {
      v308 = 0;
      v310 = 0;
    }
  }
  else
  {
    v138 = 1;
  }
  v139 = v136;
  *(_QWORD *)&v311 = __PAIR64__(v303, v136);
  v140 = v303;
  v141 = v303;
  *((_QWORD *)&v311 + 1) = __PAIR64__(v310, v308);
  if ( (_DWORD)v105 )
  {
    v333 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
    if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v55, v19) )
    {
      *((_QWORD *)v55 + 28) = 0LL;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v333, (char *)v55 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v55, &v333, (char *)v55 + 224);
    }
    if ( v19 != GetDesktopWindow((__int64)v55) )
    {
      v139 = v307 + v333;
      LODWORD(v311) = v307 + v333;
      v141 = v140 + DWORD1(v333);
      DWORD1(v311) = v140 + DWORD1(v333);
    }
    v328 = 1LL;
  }
  if ( v138 )
  {
    SetOrClrWF(1LL, v55, 3844LL, 1LL);
    v327 = 192;
    if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 21LL) & 2) != 0 )
      SetOrClrWF(1LL, v55, 2305LL, 1LL);
    SetOrClrWF(1LL, v55, 16LL, 1LL);
    v145 = v307;
    if ( (v307 == 0x80000000 || v307 == 0x8000) && v141 != 0x80000000 )
    {
      v146 = v319;
      if ( v141 != 0x8000 )
        v146 = v141;
      v319 = v146;
    }
    if ( !v302 && (v307 == 0x80000000 || v307 == 0x8000 || v308 == 0x80000000 || v308 == 0x8000) )
    {
      v147 = *(_QWORD *)(*(_QWORD *)(v300 + 424) + 696LL);
      if ( v147 )
      {
        v148 = (struct tagMONITOR *)ValidateHmonitor(v147);
      }
      else if ( v19 )
      {
        v148 = _MonitorFromWindowInternal((struct tagWND *)v19, 2u, 0);
      }
      else
      {
        v148 = 0LL;
      }
      if ( !v148 )
      {
        v148 = *(struct tagMONITOR **)(GetDispInfo(v147, v142, v143, v144) + 96);
        goto LABEL_305;
      }
    }
    else
    {
      v148 = 0LL;
LABEL_305:
      if ( !v148 )
      {
        v148 = (struct tagMONITOR *)ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v55 + 5) + 256LL));
        if ( !v148 )
        {
          if ( !v302 || (v148 = (struct tagMONITOR *)GetInheritedMonitor(v55)) == 0LL )
            v148 = (struct tagMONITOR *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v55 + 5) + 88LL));
          v149 = 0LL;
          if ( v148 )
            v149 = *(_QWORD *)v148;
          *(_QWORD *)(*((_QWORD *)v55 + 5) + 256LL) = v149;
          *(_WORD *)(*((_QWORD *)v55 + 5) + 284LL) = *(_WORD *)(*((_QWORD *)v148 + 5) + 64LL);
          v150 = (_DWORD *)*((_QWORD *)v55 + 36);
          if ( v150 )
          {
            --*v150;
            v151 = (_DWORD *)*((_QWORD *)v55 + 36);
            if ( !*v151 )
              Win32FreePool(v151);
            *((_QWORD *)v55 + 36) = 0LL;
          }
          v152 = (_DWORD *)*((_QWORD *)v148 + 39);
          *((_QWORD *)v55 + 36) = v152;
          ++*v152;
          UpdateTopLevelWindowDPITransform((__int64)v55, (__int64)v148);
        }
      }
    }
    SetTiledRect((__int64)v55, v392, (__int64)v148);
    if ( v145 == 0x80000000 || v145 == 0x8000 )
    {
      v157 = *(_DWORD **)(v300 + 424);
      if ( (v157[202] & 4) != 0 )
      {
        v317 = 1;
        v145 = v157[198];
        v158 = v157[199];
      }
      else
      {
        v145 = v392[0];
        v158 = v392[1];
      }
      v141 = v158;
      v303 = v158;
      *(_QWORD *)&v311 = __PAIR64__(v158, v145);
      v139 = v145;
      v307 = v145;
      v156 = 1;
    }
    else
    {
      v155 = *((_WORD *)v148 + 113);
      if ( v155 )
        *((_WORD *)v148 + 113) = v155 - 1;
      v156 = v324;
    }
    if ( v308 == 0x80000000 || v308 == 0x8000 )
    {
      v162 = *(_DWORD **)(v300 + 424);
      if ( (v162[202] & 2) != 0 )
      {
        v317 = 1;
        DWORD2(v311) = v162[200];
        v163 = v162[201];
      }
      else
      {
        DWORD2(v311) = v392[2] - v145;
        v163 = v392[3] - v303;
      }
      HIDWORD(v311) = v163;
    }
    else if ( v156 )
    {
      v352 = *(__m128i *)GetMonitorRect(&v390, (__int64)v148, v153, v154);
      v159 = _mm_srli_si128(v352, 8).m128i_u64[0];
      v160 = v308 + v139 - v159;
      v161 = v310 + v141 - HIDWORD(v159);
      if ( v160 > 0 )
      {
        v307 = v145 - v160;
        LODWORD(v311) = v145 - v160;
        if ( v145 - v160 < v352.m128i_i32[0] )
        {
          v307 = v352.m128i_i32[0];
          LODWORD(v311) = v352.m128i_i32[0];
        }
      }
      if ( v161 > 0 )
      {
        v303 -= v161;
        DWORD1(v311) = v303;
        if ( v303 < v352.m128i_i32[1] )
        {
          v303 = v352.m128i_i32[1];
          DWORD1(v311) = v352.m128i_i32[1];
        }
      }
    }
  }
  if ( v317 )
    *(_DWORD *)(*(_QWORD *)(v300 + 424) + 808LL) &= 0xFFFFFFF9;
  v164 = *((_QWORD *)v55 + 5);
  v165 = *(_BYTE *)(v164 + 31) & 0xC0;
  if ( v165 == (char)0x80 || v165 == -64 )
  {
    SetOrClrWF(1LL, v55, 3844LL, 1LL);
    v166 = v312;
    v164 = v312[5];
  }
  else
  {
    v166 = v312;
  }
  *(_WORD *)(v164 + 30) |= v327;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v314) || v305 || !*(_QWORD *)(*(_QWORD *)v309[0] + 96LL) )
  {
    v105 = (__int64)v315;
    goto LABEL_361;
  }
  v370 = 0LL;
  v167 = (__int64)v55;
  if ( *((_QWORD *)v55 + 13) )
    v167 = *((_QWORD *)v55 + 13);
  zzzLockDisplayAreaAndInvalidateDCCache(v167, 16, 0LL);
  RtlInitUnicodeStringOrId(&v370, *(WCHAR **)(*(_QWORD *)v309[0] + 96LL));
  xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 64LL), &v370.Length);
  v315 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v314);
  if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v169 = SmartObjStackRef<tagMENU>::operator==((__int64)v314);
    v105 = (__int64)v315;
    if ( v169 )
    {
      *(_QWORD *)&v342 = 0LL;
    }
    else if ( v315 )
    {
      *(_QWORD *)&v342 = *v315;
    }
    else
    {
      v105 = 0LL;
      *(_QWORD *)&v342 = **(_QWORD **)v314[0];
    }
LABEL_361:
    if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      if ( !v105 )
        v105 = *(_QWORD *)v314[0];
      *(_QWORD *)(*((_QWORD *)v55 + 5) + 152LL) = v105;
      *((_QWORD *)v55 + 21) = v105;
    }
    else
    {
      v170 = *((_QWORD *)v55 + 21);
      if ( v170 && *(struct tagWND **)(v170 + 80) == v55 )
        HMAssignmentUnlock(v170 + 80);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v314) && !*(_QWORD *)(*(_QWORD *)v314[0] + 80LL) )
      {
        v371[0] = *(_QWORD *)v314[0] + 80LL;
        v371[1] = v55;
        HMAssignmentLock(v371);
      }
      v171 = v315;
      if ( !v315 )
        v171 = *(_QWORD **)v314[0];
      if ( v171 )
        v172 = v171[6];
      else
        v172 = 0LL;
      *(_QWORD *)(*((_QWORD *)v55 + 5) + 152LL) = v172;
      v378[0] = (char *)v55 + 168;
      v378[1] = v171;
      HMAssignmentLock(v378);
    }
    v106 = *(unsigned __int8 *)(*((_QWORD *)v55 + 5) + 31LL);
    LOBYTE(v106) = v106 & 0xC0;
    if ( (_BYTE)v106 == 64 )
    {
      if ( !v19 )
        goto LABEL_354;
      if ( (v313 & 2) != 0 )
        goto LABEL_409;
LABEL_415:
      if ( (*(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) & 8) != 0 )
      {
        v338 = *((_QWORD *)v55 + 13);
        UnlinkWindow(v55, v338);
      }
      if ( v19 )
      {
        v184 = *(_QWORD *)(v19 + 24);
        if ( v19 != *(_QWORD *)(v184 + 104) && v19 != *(_QWORD *)(*(_QWORD *)(v184 + 8) + 24LL) )
        {
          *(_DWORD *)(*((_QWORD *)v55 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 236LL);
          SetOrClrWF(*(_BYTE *)(*(_QWORD *)(v19 + 40) + 234LL) & 0x20, v55, 55840LL, 1LL);
        }
        if ( !(unsigned int)ValidateNewParent(v55, v19) )
        {
          v135 = 9;
          goto LABEL_539;
        }
      }
      if ( v19 )
        v185 = *(_QWORD *)(v19 + 48);
      else
        v185 = 0LL;
      *(_QWORD *)(*((_QWORD *)v55 + 5) + 48LL) = v185;
      v375[0] = (char *)v55 + 104;
      v375[1] = v19;
      HMAssignmentLock(v375);
      if ( v19 )
        v186 = (int)(*(_DWORD *)(*(_QWORD *)(v19 + 40) + 232LL) << 6) >> 31;
      else
        v186 = 0;
      SetWindowSubtreeCoreWindowStatus(v55, v186);
      v187 = *((_QWORD *)v55 + 5);
      if ( (*(_DWORD *)(v187 + 288) & 0xF) == 2 )
      {
        *(_DWORD *)(v187 + 232) ^= (*(_DWORD *)(v187 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v55) << 27)) & 0x8000000;
        v187 = v166[5];
      }
      if ( (*(_BYTE *)(v187 + 21) & 1) == 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 8LL) & 0x80u) != 0
        && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 2) == 0 )
      {
        SetOrClrWF(0LL, v55, 3846LL, 1LL);
      }
      v188 = WindowCloakStateComponentUIAware;
      if ( (WindowCloakStateComponentUIAware & 2) == 0 )
        *(_BYTE *)(v166[5] + 234LL) |= 0x10u;
      if ( v188 )
      {
        v189 = zzzSetWindowCompositionCloak(v55, 0LL, v188);
        if ( v189 < 0 )
        {
          v190 = RtlNtStatusToDosError(v189);
          UserSetLastError(v190);
          v135 = 8;
          goto LABEL_539;
        }
      }
      if ( gpresUser && (unsigned int)UserIsUserCritSecInExclusive() && (++gdwInAtomicOperation, gpAtomickCheckStacks) )
      {
        v191 = ++gdwAtomicCheckSerial;
        v192 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v192 << 6) + gpAtomickCheckStacks) )
          {
            if ( ++v192 >= gdwAtomicCheckLogSize )
              goto LABEL_449;
          }
          v193 = (unsigned __int64)v192 << 6;
          *(_DWORD *)(v193 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(v193 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(v193 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                        * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v193 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
      else
      {
        v191 = v330;
      }
LABEL_449:
      if ( v338 )
        zzzLockDisplayAreaAndInvalidateDCCache(v338, 16, 0LL);
      if ( v19 )
        zzzLockDisplayAreaAndInvalidateDCCache(v19, 16, 0LL);
      if ( gpresUser )
      {
        if ( (unsigned int)UserIsUserCritSecInExclusive() )
        {
          --gdwInAtomicOperation;
          if ( gpAtomickCheckStacks )
          {
            v194 = 0;
            if ( gdwAtomicCheckLogSize )
            {
              while ( *(_DWORD *)(((unsigned __int64)v194 << 6) + gpAtomickCheckStacks) != v191 )
              {
                if ( ++v194 >= gdwAtomicCheckLogSize )
                  goto LABEL_461;
              }
              *(_DWORD *)(((unsigned __int64)v194 << 6) + gpAtomickCheckStacks) = 0;
            }
          }
        }
      }
LABEL_461:
      if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 31LL) & 0xC0) == 0x40 )
      {
        v198 = (__int64 *)((char *)v55 + 104);
        if ( !(unsigned int)IsTopLevelWindow((__int64)v55) )
        {
          v199 = *v198;
          if ( *v198 )
          {
            if ( v300 != *(_QWORD *)(v199 + 16) )
            {
              if ( v19 != v199 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v195, v199, v196, v197);
                v199 = v312[13];
              }
              zzzAttachThreadInput(v300, *(_QWORD *)(v199 + 16), 1LL);
              v200 = *v198;
              v201 = 0LL;
              v202 = *((_QWORD *)v55 + 3);
              if ( v202 )
                v201 = *(_QWORD *)(v202 + 104);
              if ( v200 != v201
                && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v200 + 40) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v55 + 5)
                                                                                             + 288LL)) & 0xF) != 0
                && !(unsigned int)IsChildWindowDpiIsolationEnabled(v55, v200) )
              {
                xxxForceUpdateProcessDpiAwarenessContext(v55, *(_DWORD *)(*(_QWORD *)(*v198 + 40) + 288LL));
              }
            }
          }
        }
      }
      else
      {
        v198 = (__int64 *)((char *)v55 + 104);
      }
      if ( v339 != (unsigned __int16)gatomMessage && v339 != 32769 && v339 != 32774 && !*(_DWORD *)(v300 + 896) )
      {
        _InterlockedExchange(
          (volatile __int32 *)(*(_QWORD *)(v300 + 448) + 12LL),
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        xxxUpdateInputHangInfo(0LL, 1);
      }
      xxxAdjustSize(v55, (int *)&v311 + 2, (int *)&v311 + 3);
      v203 = v311;
      v204 = 0x7FFF;
      if ( (int)v311 <= 0x7FFF )
      {
        if ( (int)v311 < -32768 )
          v203 = -32768;
      }
      else
      {
        v203 = 0x7FFF;
      }
      LODWORD(v311) = v203;
      if ( SDWORD1(v311) <= 0x7FFF )
      {
        v204 = DWORD1(v311);
        if ( SDWORD1(v311) < -32768 )
          v204 = -32768;
      }
      DWORD1(v311) = v204;
      v205 = DWORD2(v311);
      v206 = 0xFFFF;
      if ( SDWORD2(v311) <= 0xFFFF )
      {
        if ( SDWORD2(v311) < 0 )
          v205 = 0;
      }
      else
      {
        v205 = 0xFFFF;
      }
      DWORD2(v311) = v205;
      if ( SHIDWORD(v311) <= 0xFFFF )
      {
        v206 = HIDWORD(v311);
        if ( v311 < 0 )
          v206 = 0;
      }
      HIDWORD(v311) = v206;
      if ( *((_QWORD *)v55 + 3) )
      {
        v207 = *((_QWORD *)v55 + 5);
        if ( (*(_BYTE *)(v207 + 31) & 0x40) == 0 && *(char *)(v207 + 24) >= 0 )
        {
          xxxCheckFullScreen(v55, (struct tagSIZERECT *)&v311);
          v206 = HIDWORD(v311);
          v205 = DWORD2(v311);
        }
      }
      if ( v205 < 0 )
        v205 = 0;
      DWORD2(v311) = v205;
      if ( v206 < 0 )
        v206 = 0;
      HIDWORD(v311) = v206;
      RECTFromSIZERECT(*((_QWORD *)v55 + 5) + 88LL, &v311);
      if ( v305 )
      {
        v208 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
      }
      else
      {
        if ( !v302 )
          goto LABEL_506;
        v208 = GetInheritedMonitor(v55);
      }
      v209 = (__int64 *)v208;
      if ( v208 )
      {
LABEL_507:
        v210 = *v209;
LABEL_508:
        v362[1] = v210;
        v211 = *((_QWORD *)v55 + 5);
        if ( v210 != *(_QWORD *)(v211 + 256) )
        {
          *(_QWORD *)(v211 + 256) = v210;
          *(_WORD *)(*((_QWORD *)v55 + 5) + 284LL) = *(_WORD *)(v209[5] + 64);
          v212 = (_DWORD *)*((_QWORD *)v55 + 36);
          if ( v212 )
          {
            --*v212;
            v213 = (_DWORD *)*((_QWORD *)v55 + 36);
            if ( !*v213 )
              Win32FreePool(v213);
            *((_QWORD *)v55 + 36) = 0LL;
          }
          v214 = (_DWORD *)v209[39];
          *((_QWORD *)v55 + 36) = v214;
          ++*v214;
          if ( !v305 )
            UpdateTopLevelWindowDPITransform((__int64)v55, (__int64)v209);
        }
        if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap((__int64)v55) )
        {
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v215 = RecreateRedirectionBitmap(v55, 0, 0LL);
          v216 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( v215 < 0 )
          {
            GreUnlockVisRgn(v216);
            v135 = 3;
LABEL_538:
            v166 = v312;
            goto LABEL_539;
          }
          GreUnlockVisRgn(v216);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 8LL) & 0x20) != 0
          || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v309[0] + 8LL) + 8LL) & 0x40) != 0
          && !*(_QWORD *)(*(_QWORD *)v309[0] + 40LL) )
        {
          StyleWindow = GetStyleWindow((__int64)v55, 2848);
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
          v218 = 49152LL;
          if ( !StyleWindow )
            v218 = 0x8000LL;
          CacheDC = CreateCacheDC(v55, v218, 0LL);
          v220 = *(_QWORD *)(gpDispInfo + 40LL);
          if ( !CacheDC )
          {
            GreUnlockVisRgn(v220);
            v135 = 10;
            goto LABEL_538;
          }
          GreUnlockVisRgn(v220);
        }
        v221 = v301;
        if ( (v301 & 0x80000) != 0
          && (*(_BYTE *)(*((_QWORD *)v55 + 5) + 26LL) & 8) == 0
          && (int)xxxSetLayeredWindow((int)v55) < 0 )
        {
          v135 = 11;
          goto LABEL_538;
        }
        if ( (v221 & 0x2000000) != 0 && !GetStyleWindow(*v198, 2818) )
        {
          SetOrClrWF(1LL, v55, 2818LL, 1LL);
          if ( (int)SetRedirectedWindow(v55, 2) < 0 )
          {
            SetOrClrWF(0LL, v55, 2818LL, 1LL);
            v135 = 12;
            goto LABEL_538;
          }
        }
        *((_QWORD *)&v343 + 1) = __PAIR64__(v307, v303);
        *(_QWORD *)&v343 = __PAIR64__(v308, v310);
        if ( !xxxSendMessage((unsigned __int64)v55, 0x81u, 0LL, (struct _LARGE_STRING *)&v341) )
          goto LABEL_537;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v55 + 17) + 8LL) + 9LL) & 2) != 0 )
        {
          xxxGetSystemMenu(v55, 0);
          v315 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v314);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v314) )
          {
            v382[2] = 0LL;
            v229 = v315;
            if ( !v315 )
              v229 = *(_QWORD **)v314[0];
            v230 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v382[0] = *(_QWORD *)(v230 + 416);
            *(_QWORD *)(v230 + 416) = v382;
            v382[1] = v229;
            if ( v229 )
              HMLockObject(v229);
            xxxRemoveDeleteMenuHelper((__int64)v314, 5u, 1024, 1u);
            xxxRemoveDeleteMenuHelper((__int64)v314, 5u, 1024, 1u);
            ThreadUnlock1(v232, v231, v233);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 18LL) & 2) != 0
          && (!*((_QWORD *)&v346 + 1) || (_DWORD)v346 || *((_QWORD *)v55 + 23)) )
        {
          v386 = 0LL;
          *((_QWORD *)&v344 + 1) = *((_QWORD *)v55 + 23);
          v346 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (struct tagWND *)((char *)v55 + 184),
                              (struct _LARGE_UNICODE_STRING *)&v386);
        }
        if ( (*gpsi & 4) != 0 && !*(_QWORD *)(v300 + 784) && (unsigned __int8)tagWND::HasState(v55) )
        {
          DefaultImeWindow = xxxCreateDefaultImeWindow(v234, v304, v331);
          v376[0] = v300 + 784;
          v376[1] = DefaultImeWindow;
          HMAssignmentLock(v376);
          v236 = v300;
          v237 = *(_QWORD *)(v300 + 784);
          if ( v237 )
          {
            v380[2] = 0LL;
            v238 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v380[0] = *(_QWORD *)(v238 + 416);
            *(_QWORD *)(v238 + 416) = v380;
            v380[1] = v237;
            HMLockObject(v237);
            xxxSendMessage(*(_QWORD *)(v300 + 784), 0x287u, 0x21uLL, 0LL);
            ThreadUnlock1(v240, v239, v241);
            v236 = v300;
          }
          v242 = (**(_DWORD **)(v236 + 480) >> 6) & 1;
          v363 = v242;
          v243 = *(_QWORD *)(v236 + 784);
          if ( v243 && v242 )
          {
            v381[2] = 0LL;
            v244 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v381[0] = *(_QWORD *)(v244 + 416);
            *(_QWORD *)(v244 + 416) = v381;
            v381[1] = v243;
            HMLockObject(v243);
            xxxSendMessage(
              *(_QWORD *)(v300 + 784),
              0x287u,
              0x19uLL,
              *(struct _LARGE_STRING **)(*(_QWORD *)(v300 + 440) + 40LL));
            v245 = *(_QWORD **)(v300 + 480);
            *v245 &= ~0x40uLL;
            ThreadUnlock1(v245, v246, v247);
          }
        }
        if ( v19 && ((*(_DWORD *)(*((_QWORD *)v55 + 5) + 232LL) & 8) == 0 || *v198 == v19) )
        {
          v248 = PWInsertAfter(v328);
          v249 = v248;
          if ( (unsigned __int64)(v248 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v248 + 104) != *v198 )
            v249 = v305 != 0;
          v250 = *((_QWORD *)v55 + 15);
          if ( v250 )
          {
            *(_DWORD *)(*((_QWORD *)v55 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v250 + 40) + 236LL);
            SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v55 + 15) + 40LL) + 234LL) & 0x20, v55, 55840LL, 1LL);
          }
          if ( !(unsigned int)ValidateNewParent(v55, v19) )
          {
            v135 = 9;
            goto LABEL_602;
          }
          UnlinkWindow(v55, *v198);
          v252 = *((_QWORD *)v55 + 5);
          if ( (*(_BYTE *)(v252 + 31) & 0xC0) != 0x40 && v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
          {
            if ( (*(_BYTE *)(v252 + 24) & 8) != 0 )
            {
              if ( gHardErrorHandler )
              {
                TopMostInsertAfter = GetTopMostInsertAfter(v55);
                if ( TopMostInsertAfter )
                  v249 = TopMostInsertAfter;
              }
            }
            else
            {
              if ( !v249 )
                goto LABEL_590;
              if ( v249 >= 0xFFFFFFFFFFFFFFFEuLL )
              {
LABEL_595:
                v135 = 13;
                goto LABEL_602;
              }
              if ( v249 != 1 && (*(_BYTE *)(*(_QWORD *)(v249 + 40) + 24LL) & 8) != 0 )
LABEL_590:
                v249 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v55);
            }
          }
          if ( v249 >= 0xFFFFFFFFFFFFFFFEuLL )
            goto LABEL_595;
          LinkWindow(v55, (struct tagWND *)v249, (_QWORD *)v19);
          zzzLockDisplayAreaAndInvalidateDCCache(v19, 16, 0LL);
        }
        v255 = *((_QWORD *)v55 + 5);
        v256 = v255;
        if ( (*(_BYTE *)(v255 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x40) != 0 )
        {
          v257 = *(_DWORD *)(v255 + 96);
          v258 = *(_DWORD *)(v255 + 88);
          *(_DWORD *)(v255 + 96) = v333 + DWORD2(v333) - v258;
          *(_DWORD *)(*((_QWORD *)v55 + 5) + 88LL) = v258 + *(_DWORD *)(*((_QWORD *)v55 + 5) + 96LL) - v257;
          v256 = v312[5];
        }
        *(_OWORD *)v392 = *(_OWORD *)(v256 + 88);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(
          (unsigned __int64)v55,
          0x83u,
          0LL,
          (struct _LARGE_STRING *)v392,
          0,
          0,
          0LL,
          1,
          0);
        *(_DWORD *)(*((_QWORD *)v55 + 5) + 104LL) = v392[0];
        *(_DWORD *)(*((_QWORD *)v55 + 5) + 108LL) = v392[1];
        *(_DWORD *)(*((_QWORD *)v55 + 5) + 112LL) = v392[2];
        *(_DWORD *)(*((_QWORD *)v55 + 5) + 116LL) = v392[3];
        if ( xxxSendMessage((unsigned __int64)v55, 1u, 0LL, (struct _LARGE_STRING *)&v341) == -1 )
        {
          v135 = v306;
LABEL_602:
          if ( v320 )
            ThreadUnlock1(v252, v251, v253);
          if ( ThreadUnlock1(v252, v251, v253) )
            xxxDestroyWindow(v55);
          v259 = *(struct tagCLS **)v309[0];
          v260 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)(v260 + 16) = v353;
          ClassUnlockWorker(v259);
          if ( v135 )
            goto LABEL_552;
          goto LABEL_37;
        }
        SetOrClrWF(1LL, v55, 1920LL, 1LL);
        if ( (unsigned int)IsWindowDesktopComposed(v55) )
        {
          v262 = (void *)ReferenceDwmApiPort(v261);
          DwmAsyncChildStyleChange(v262);
          DwmChildRectChange(v55);
          v264 = (void *)ReferenceDwmApiPort(v263);
          DwmAsyncOwnerChange(v264);
        }
        xxxWindowEvent(0x8000u, 0);
        v265 = *((_QWORD *)v55 + 5);
        if ( (*(_BYTE *)(v265 + 16) & 0x10) == 0 )
        {
          xxxSendSizeMessage((__int64)v55, 0);
          if ( v19 )
          {
            v266 = 0LL;
            v267 = *((_QWORD *)v55 + 3);
            if ( v267 )
            {
              v268 = *(_QWORD *)(v267 + 8);
              if ( v268 )
                v266 = *(_QWORD *)(v268 + 24);
            }
            if ( v266 != v19 )
            {
              v392[0] -= v333;
              v392[1] -= DWORD1(v333);
            }
          }
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)v55,
            3u,
            0LL,
            (struct _LARGE_STRING *)(LOWORD(v392[0]) | (LOWORD(v392[1]) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v265 = v312[5];
        }
        v269 = *(_BYTE *)(v265 + 31);
        if ( (v269 & 0x20) != 0 )
        {
          SetMinimize((__int64)v55, 0);
          v270 = 7;
        }
        else
        {
          if ( (v269 & 1) == 0 )
            goto LABEL_623;
          SetOrClrWF(0LL, v55, 3841LL, 1LL);
          v270 = 3;
        }
        xxxMinMaximizeEx(v55, v270, gdwPUDFlags & 0x10000 | 1, 0LL, 0LL, 0LL);
LABEL_623:
        CalcWindowFullScreen(v55);
        v271 = *((_QWORD *)v55 + 5);
        if ( (*(_BYTE *)(v271 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v271 + 24) & 4) == 0 )
        {
          v272 = *v198;
          if ( *v198 )
          {
            *(_QWORD *)&v368 = *(_QWORD *)(v300 + 416);
            *(_QWORD *)(v300 + 416) = &v368;
            *((_QWORD *)&v368 + 1) = v272;
            HMLockObject(v272);
            v273 = *((_QWORD *)v55 + 21);
            v274 = *v198;
            v275 = *(struct _LARGE_STRING **)v55;
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(v274, 0x210u, ((unsigned __int16)v273 << 16) | 1, v275, 0, 0, 0LL, 1, 0);
            ThreadUnlock1(v277, v276, v278);
          }
        }
        xxxInheritWindowMonitor(v55, 0LL, 0);
        if ( (a5 & 0x10000000) != 0 )
          xxxShowWindow(v55, v319 | gdwPUDFlags & 0x10000);
        v281 = *((_QWORD *)v55 + 5);
        if ( (*(_BYTE *)(v281 + 31) & 0xC0) == 0 || (*(_BYTE *)(v281 + 26) & 4) != 0 )
        {
          v281 = *(_QWORD *)(v300 + 424);
          v282 = *(_DWORD *)(v281 + 692);
          if ( v282 )
          {
            xxxSendMessage((unsigned __int64)v55, 0x32u, v282, 0LL);
            v281 = *(_QWORD *)(v300 + 424);
            *(_DWORD *)(v281 + 692) = 0;
          }
        }
        if ( v320 )
          ThreadUnlock1(v281, v279, v280);
        v283 = *(struct tagCLS **)v309[0];
        v284 = KeGetCurrentThread();
        v285 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v281)
          || (v289 = PsGetCurrentProcess(v287, v286, v288),
              v290 = PsGetProcessSessionIdEx(v289),
              v292 = PsGetCurrentThreadProcess(v291),
              v290 == (unsigned int)PsGetProcessSessionIdEx(v292)) )
        {
          v293 = (__int64 *)PsGetThreadWin32Thread(v284);
          if ( v293 )
            v285 = *v293;
        }
        *(_QWORD *)(v285 + 16) = v353;
        ClassUnlockWorker(v283);
        v297 = ThreadUnlock1(v295, v294, v296);
        v298 = v297;
        if ( !v297 || (*(_BYTE *)(_HMPheFromObject(v297) + 25) & 1) != 0 )
          v298 = 0LL;
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v314);
        SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v309);
        return v298;
      }
LABEL_506:
      v209 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v55 + 5) + 88LL));
      v210 = 0LL;
      if ( !v209 )
        goto LABEL_508;
      goto LABEL_507;
    }
    v173 = v313;
    if ( (v313 & 4) != 0 )
    {
      LOBYTE(v108) = 1;
      CoreWindowProp::ChangeRole(v55, 1LL, v108);
    }
    *(_QWORD *)(*((_QWORD *)v55 + 5) + 176LL) = *((_QWORD *)v55 + 6);
    v372[0] = (char *)v55 + 200;
    v372[1] = v55;
    HMAssignmentLock(v372);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      v176 = (_QWORD *)((char *)v55 + 120);
      *(_QWORD *)(*((_QWORD *)v55 + 5) + 64LL) = 0LL;
      v373[0] = (char *)v55 + 120;
      v373[1] = 0LL;
      HMAssignmentLock(v373);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v174);
      if ( !(unsigned int)ValidateOwnerDepth(v55, NonChildAncestor) )
        goto LABEL_409;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*((_QWORD *)v55 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, v55, 55840LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v176 = (_QWORD *)((char *)v55 + 120);
      v385 = *(_OWORD *)LockPointer(v391, (char *)v55 + 120, NonChildAncestor);
      HMAssignmentLock(&v385);
      v177 = *((_QWORD *)v55 + 15);
      if ( v177
        && ((*(_BYTE *)(*(_QWORD *)(v177 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)v55 + 5) + 236LL) != 1) )
      {
        SetOrClrWF(1LL, v55, 2056LL, 1LL);
        v177 = v166[15];
      }
      if ( v304 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v177 )
        {
          v178 = *(_QWORD *)(v177 + 16);
          if ( v178 != v300 )
            zzzAttachThreadInput(v300, v178, 1LL);
        }
      }
      v173 = v313;
    }
    if ( !*v176 && !(unsigned int)CoreWindowProp::IsComponent(v55) )
    {
      if ( (v179 = *((_QWORD *)v55 + 5), v180 = *(_DWORD *)(v179 + 236), v180 <= 0xF)
        && (v181 = 44800, _bittest(&v181, v180))
        || (*(_BYTE *)(v179 + 234) & 0x20) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v19 || v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
    {
      v19 = GetThreadDesktopWindow(0LL);
      *(_QWORD *)&v366 = *(_QWORD *)(v300 + 416);
      *(_QWORD *)(v300 + 416) = &v366;
      *((_QWORD *)&v366 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      v320 = 1;
    }
    if ( (v173 & 2) == 0 )
      goto LABEL_415;
    if ( !*(_QWORD *)(v300 + 1392) )
    {
      SetOrClrWF(1LL, v55, 55872LL, 1LL);
      *(_DWORD *)(v300 + 1232) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v300 + 432) + 388LL) |= 0x2000000u;
      v182 = v300;
      if ( !*(_QWORD *)(v300 + 1384) )
      {
        KernelEvent = CreateKernelEvent(1LL);
        v106 = v300;
        *(_QWORD *)(v300 + 1384) = KernelEvent;
        v182 = v300;
        if ( !*(_QWORD *)(v300 + 1384) )
        {
          v135 = 7;
          goto LABEL_539;
        }
      }
      v374[0] = v182 + 1392;
      v374[1] = v55;
      HMAssignmentLock(v374);
      goto LABEL_415;
    }
LABEL_409:
    UserSetLastError(87LL);
    v135 = v306;
    goto LABEL_539;
  }
  v168 = (__int64)v315;
  if ( !v315 )
    v168 = *(_QWORD *)v314[0];
  DestroyMenu(v168);
  v315 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v314);
LABEL_354:
  v135 = v306;
LABEL_539:
  v222 = *(_BYTE *)(*((_QWORD *)v55 + 5) + 31LL) & 0x10;
  if ( v320 )
    ThreadUnlock1(v106, v105, v108);
  SetOrClrWF(1LL, v55, 1152LL, 1LL);
  SetOrClrWF(1LL, v55, 896LL, 1LL);
  if ( v222 )
    SetVisible(v55, 0);
  v223 = *((_QWORD *)v55 + 13);
  if ( v223 )
  {
    if ( v222 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache(*((_QWORD *)v55 + 13), 16, 0LL);
      v223 = v166[13];
    }
    v224 = v223;
    if ( (*(_BYTE *)(*((_QWORD *)v55 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v55) )
    {
      v226 = *(_QWORD *)(v225 + 16);
      if ( v300 != v226 )
      {
        zzzAttachThreadInput(*((_QWORD *)v55 + 2), v226, 0LL);
        v224 = v166[13];
      }
    }
    UnlinkWindow(v55, v224);
  }
  v227 = *(struct tagCLS **)v309[0];
  v228 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v228 + 16) = v353;
  ClassUnlockWorker(v227);
  xxxFreeWindow(v55);
  if ( v135 )
LABEL_552:
    TraceLoggingCreateWindowFailed(
      v135,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_37:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v314);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v309);
  return 0LL;
}
