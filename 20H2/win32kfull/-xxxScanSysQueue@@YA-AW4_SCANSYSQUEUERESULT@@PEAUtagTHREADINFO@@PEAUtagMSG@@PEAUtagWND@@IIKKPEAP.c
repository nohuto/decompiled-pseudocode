/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LockExchangeW32Thread @ 0x1C0007E70 (LockExchangeW32Thread.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     xxxWindowHitTest @ 0x1C0012468 (xxxWindowHitTest.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0012B08 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetMessageWindow @ 0x1C0012C74 (GetMessageWindow.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142B0 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0017A1C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C004C7DC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C004C93C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0052550 (WPP_RECORDER_SF_qiqdd.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00C34CC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     ThreadLockExchangeAlways @ 0x1C00D71E0 (ThreadLockExchangeAlways.c)
 *     IsThreadDesktopComposed @ 0x1C00D7258 (IsThreadDesktopComposed.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00D727C (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     IsMiPActive @ 0x1C00D740C (IsMiPActive.c)
 *     IsMiPEnabledForThread @ 0x1C00D7450 (IsMiPEnabledForThread.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00D7554 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00D76A0 (TransferWakeBit.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00D7750 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     CheckPwndFilter @ 0x1C00D786C (CheckPwndFilter.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00D799C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C00F6C74 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C00F6C9C (FreeQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6CF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00F79FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C00F8C84 (xxxDCEWindowHitTest.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F94D8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 *     xxxImmProcessKey @ 0x1C00FDC24 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C00FDF04 (GetAppImeCompatFlags.c)
 *     IsInsideMenuLoop @ 0x1C01164B8 (IsInsideMenuLoop.c)
 *     xxxCallMouseHook @ 0x1C0121ECC (xxxCallMouseHook.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D768 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C015AD28 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C015B154 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     ?xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C015B52C (-xxxDCEWindowHitTestIndirect_Iterative@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW.c)
 *     strcmp_0 @ 0x1C015F562 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01DF370 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF7D4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01DFD8C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E0094 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E09F4 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E0B1C (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E0B48 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1718 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C01E1A5C (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E535C (PhysicalToLogicalInPlacePointWithParent.c)
 *     FreePointerMessageParams @ 0x1C01EF458 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0108 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F0A94 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C02318F4 (xxxClientCallLocalMouseHooks.c)
 *     MNItemHitTest @ 0x1C023676C (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C0243720 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C02439AC (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0244184 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C0251798 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0256D98 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C025CF44 (_W32ExceptionHandler.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  struct tagQMSG *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 *v40; // rax
  struct _KTHREAD *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rax
  struct _KTHREAD *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // ebx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  struct _KTHREAD *v63; // rsi
  unsigned __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rcx
  __int64 v71; // rax
  struct CMultiPerObjectLockExclusivePpiPtiQ *v72; // r9
  const struct tagWND **v73; // rax
  struct tagQMSG *v74; // rdx
  struct tagQMSG *NextSysMsg; // rax
  __int64 v76; // rdx
  PDEVICE_OBJECT v77; // rcx
  __int64 v78; // r8
  int v79; // eax
  unsigned __int64 v80; // r15
  struct _KTHREAD *v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  int v87; // ebx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rcx
  unsigned __int64 *v92; // rsi
  __int64 v93; // rcx
  bool v94; // zf
  __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rcx
  _QWORD *v102; // rdx
  __int64 v103; // rdx
  int v104; // eax
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rdi
  __int64 v108; // r8
  __int64 v109; // r10
  unsigned int v110; // r14d
  char v111; // r9
  int v112; // ebx
  bool v113; // zf
  BOOL v114; // ebx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  unsigned int v118; // ecx
  unsigned int v119; // edx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 *v122; // rbx
  __int64 v123; // rsi
  __int64 v124; // rcx
  const struct tagWND *v125; // rbx
  unsigned __int64 MouseKeyFlags; // rsi
  __int64 v127; // rax
  unsigned __int64 v128; // rbx
  __int64 *v129; // rbx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rcx
  unsigned int v134; // r13d
  __int64 v135; // rbx
  char v136; // dl
  struct tagQMSG *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // ebx
  int v141; // eax
  char v142; // bl
  __int64 v143; // rcx
  __int64 v144; // rbx
  struct tagQMSG *v145; // rbx
  int v146; // ecx
  __int64 v147; // r8
  unsigned __int64 v148; // rdx
  int v149; // ecx
  unsigned __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  int v153; // ebx
  __int64 v154; // rcx
  __int64 v155; // rcx
  int v156; // eax
  __int64 v157; // r15
  __int64 v158; // rsi
  __int64 v159; // rcx
  InteractiveControlManager *v160; // rax
  int v161; // ebx
  int v162; // ebx
  __int64 v163; // rax
  int v164; // ebx
  unsigned __int64 v165; // rbx
  struct tagWND *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rbx
  __int64 v171; // rsi
  __int64 v172; // rbx
  _DWORD *v173; // rax
  _DWORD *v174; // rax
  int v175; // ebx
  unsigned int v176; // eax
  __int64 v177; // rcx
  char *v178; // rax
  char v179; // cl
  int v180; // eax
  unsigned int v181; // edx
  unsigned int v182; // r8d
  int v183; // ecx
  int v184; // eax
  int v185; // ebx
  int v186; // r8d
  int v187; // r9d
  __int64 v188; // rax
  __int64 *v189; // rcx
  int v190; // eax
  HWND v191; // rbx
  struct tagWND *v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // rcx
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // r8
  int v200; // ebx
  unsigned int v201; // r8d
  __int64 v202; // r9
  __int64 v203; // rdx
  __int64 v204; // rax
  bool v205; // cf
  int v206; // r8d
  __int64 v207; // rax
  __int64 v208; // rax
  int v209; // eax
  __int64 v210; // rax
  const char *v211; // rcx
  int v212; // r12d
  __int64 v213; // rcx
  __int64 v214; // r13
  struct tagPOINT v215; // r8
  unsigned __int64 v216; // rbx
  int v217; // eax
  int v218; // eax
  __int64 v219; // rcx
  int v220; // ecx
  __int64 v221; // rcx
  unsigned __int16 v222; // si
  __int64 v223; // rdi
  int v224; // eax
  unsigned __int64 v225; // rdx
  unsigned __int64 v226; // rdx
  unsigned __int64 v227; // rdx
  unsigned int v228; // edi
  unsigned int v229; // esi
  __int64 v230; // rcx
  int v231; // eax
  int v232; // r13d
  __int64 v233; // rbx
  __int64 v234; // rax
  char v235; // al
  __int64 v236; // rdx
  int v237; // ecx
  __int64 v238; // rax
  __int64 v239; // r11
  int v240; // r10d
  int v241; // r9d
  int v242; // kr04_4
  int v243; // edx
  __int64 v244; // rcx
  int v245; // eax
  int v246; // ecx
  int TouchTimeFromCPLValue; // ecx
  int v248; // eax
  __int64 v249; // rcx
  unsigned int v250; // ebx
  unsigned __int64 v251; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v255; // rdx
  unsigned __int64 v256; // r8
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  struct tagQMSG *v260; // rbx
  struct tagQMSG *v261; // r8
  struct tagQMSG *v262; // r9
  __int64 v263; // rcx
  int v264; // r9d
  _DWORD *v265; // rax
  _DWORD *v266; // rax
  __int64 v267; // rax
  unsigned __int64 v268; // rbx
  __int64 v269; // rcx
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // rax
  int v276; // r13d
  const struct tagQMSG *v277; // rbx
  int v278; // ebx
  unsigned int v279; // ecx
  __int64 v280; // rbx
  int v281; // ebx
  __int64 v282; // rbx
  int v283; // ebx
  int v284; // ebx
  int v285; // ebx
  __int64 v286; // rcx
  unsigned __int64 v287; // rcx
  int v288; // ebx
  unsigned __int64 MiPWindowFlags; // rax
  int v290; // edx
  __int64 v291; // rax
  struct tagQMSG *v292; // rcx
  unsigned __int64 v293; // rax
  __int64 v294; // r8
  unsigned int v295; // edx
  __int64 v296; // r13
  unsigned int v297; // edi
  unsigned __int64 *v298; // rcx
  unsigned __int64 v299; // rax
  unsigned __int64 v300; // rax
  unsigned int v301; // r15d
  _DWORD *v302; // rax
  unsigned __int64 v303; // rax
  int v304; // eax
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int128 *v308; // r10
  __int128 *v309; // r9
  __int64 v310; // r8
  __int64 v311; // rdx
  __int64 v312; // rcx
  __int64 v313; // rbx
  struct _KTHREAD *v314; // rsi
  __int64 v315; // rdi
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // rax
  int v320; // ebx
  __int64 v321; // rcx
  __int64 v322; // rax
  __int64 *v323; // rax
  __int64 v324; // rcx
  struct _KTHREAD *v325; // rsi
  __int64 v326; // rdi
  __int64 v327; // rdx
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // rax
  int v331; // ebx
  __int64 v332; // rcx
  __int64 v333; // rax
  __int64 *v334; // rax
  __int64 v335; // rcx
  struct _KTHREAD *v336; // rsi
  __int64 v337; // rdi
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // rax
  int v342; // ebx
  __int64 v343; // rcx
  __int64 v344; // rax
  __int64 *v345; // rax
  __int64 v346; // rcx
  struct _KTHREAD *v347; // rsi
  __int64 v348; // rdi
  __int64 v349; // rdx
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // rax
  int v353; // ebx
  __int64 v354; // rcx
  __int64 v355; // rax
  __int64 *v356; // rax
  __int64 v357; // rcx
  struct _KTHREAD *v358; // rdi
  __int64 v359; // rdx
  __int64 v360; // rcx
  __int64 v361; // r8
  __int64 v362; // rax
  int v363; // ebx
  __int64 v364; // rcx
  __int64 v365; // rax
  __int64 v366; // rdx
  __int64 v367; // r8
  __int64 *v368; // rax
  __int64 v369; // rcx
  __int64 v370; // [rsp+40h] [rbp-7F8h]
  __int64 v371; // [rsp+48h] [rbp-7F0h]
  int v372; // [rsp+70h] [rbp-7C8h]
  _BYTE v373[4]; // [rsp+80h] [rbp-7B8h] BYREF
  unsigned int v374; // [rsp+84h] [rbp-7B4h]
  BOOL v375; // [rsp+88h] [rbp-7B0h]
  int v376; // [rsp+8Ch] [rbp-7ACh]
  int v377; // [rsp+90h] [rbp-7A8h] BYREF
  int v378; // [rsp+94h] [rbp-7A4h]
  bool v379; // [rsp+98h] [rbp-7A0h]
  unsigned int v380[3]; // [rsp+9Ch] [rbp-79Ch] BYREF
  int v381; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v382; // [rsp+B0h] [rbp-788h] BYREF
  __int64 v383; // [rsp+B8h] [rbp-780h]
  struct tagWND *ThreadDesktopWindow; // [rsp+C0h] [rbp-778h] BYREF
  unsigned __int64 v385; // [rsp+C8h] [rbp-770h] BYREF
  __int64 v386; // [rsp+D0h] [rbp-768h]
  int v387; // [rsp+D8h] [rbp-760h] BYREF
  bool v388; // [rsp+DCh] [rbp-75Ch]
  bool v389; // [rsp+DDh] [rbp-75Bh]
  int v390; // [rsp+E0h] [rbp-758h]
  struct tagQMSG *v391; // [rsp+E8h] [rbp-750h]
  int v392; // [rsp+F0h] [rbp-748h]
  int v393; // [rsp+F4h] [rbp-744h]
  int v394; // [rsp+F8h] [rbp-740h]
  struct tagQMSG *v395; // [rsp+100h] [rbp-738h]
  __int64 v396; // [rsp+108h] [rbp-730h]
  int v397; // [rsp+110h] [rbp-728h]
  int v398; // [rsp+114h] [rbp-724h]
  int v399; // [rsp+118h] [rbp-720h]
  _OWORD v400[10]; // [rsp+120h] [rbp-718h] BYREF
  __int64 v401; // [rsp+1C0h] [rbp-678h]
  unsigned int v402; // [rsp+1C8h] [rbp-670h]
  int v403; // [rsp+1CCh] [rbp-66Ch]
  __int64 v404; // [rsp+1D0h] [rbp-668h]
  __int64 v405; // [rsp+1D8h] [rbp-660h]
  __int64 v406; // [rsp+1E0h] [rbp-658h]
  __int64 v407; // [rsp+1E8h] [rbp-650h]
  unsigned int v408; // [rsp+1F0h] [rbp-648h]
  __int128 v409; // [rsp+1F8h] [rbp-640h]
  __int64 v410; // [rsp+208h] [rbp-630h]
  __int64 v411; // [rsp+210h] [rbp-628h]
  __int64 v412; // [rsp+218h] [rbp-620h]
  __int64 v413; // [rsp+220h] [rbp-618h] BYREF
  unsigned __int64 v414; // [rsp+228h] [rbp-610h]
  __int64 v415; // [rsp+230h] [rbp-608h]
  __int64 v416[2]; // [rsp+238h] [rbp-600h] BYREF
  __int128 v417; // [rsp+248h] [rbp-5F0h]
  __int64 v418; // [rsp+258h] [rbp-5E0h]
  __int64 v419; // [rsp+260h] [rbp-5D8h]
  int v420; // [rsp+268h] [rbp-5D0h]
  int v421; // [rsp+26Ch] [rbp-5CCh] BYREF
  __int128 v422; // [rsp+270h] [rbp-5C8h] BYREF
  __int64 v423; // [rsp+280h] [rbp-5B8h]
  __int64 v424; // [rsp+288h] [rbp-5B0h] BYREF
  __int64 v425; // [rsp+290h] [rbp-5A8h]
  void (*v426)(void); // [rsp+298h] [rbp-5A0h]
  __int64 v427; // [rsp+2A0h] [rbp-598h] BYREF
  __int64 v428; // [rsp+2A8h] [rbp-590h]
  void (*v429)(void); // [rsp+2B0h] [rbp-588h]
  __int64 v430; // [rsp+2B8h] [rbp-580h] BYREF
  __int64 v431; // [rsp+2C0h] [rbp-578h]
  void (*v432)(void); // [rsp+2C8h] [rbp-570h]
  __int64 v433; // [rsp+2D0h] [rbp-568h]
  struct tagMENUSTATE *v434; // [rsp+2E0h] [rbp-558h] BYREF
  struct InteractiveControlDevice *v435; // [rsp+2E8h] [rbp-550h] BYREF
  struct InteractiveControlInput *v436; // [rsp+2F0h] [rbp-548h] BYREF
  __int64 v437; // [rsp+2F8h] [rbp-540h] BYREF
  __int64 v438; // [rsp+300h] [rbp-538h]
  void (*v439)(void); // [rsp+308h] [rbp-530h]
  __int64 v440; // [rsp+310h] [rbp-528h] BYREF
  __int64 v441; // [rsp+318h] [rbp-520h]
  void (*v442)(void); // [rsp+320h] [rbp-518h]
  _DWORD v443[4]; // [rsp+328h] [rbp-510h] BYREF
  __int64 v444; // [rsp+338h] [rbp-500h] BYREF
  __int64 v445; // [rsp+340h] [rbp-4F8h] BYREF
  _DWORD v446[2]; // [rsp+350h] [rbp-4E8h] BYREF
  __int128 v447; // [rsp+358h] [rbp-4E0h]
  int *v448; // [rsp+368h] [rbp-4D0h]
  int v449; // [rsp+370h] [rbp-4C8h]
  int v450; // [rsp+374h] [rbp-4C4h]
  char *v451; // [rsp+378h] [rbp-4C0h]
  __int64 v452; // [rsp+380h] [rbp-4B8h]
  __int64 v453; // [rsp+388h] [rbp-4B0h]
  __int128 v454; // [rsp+390h] [rbp-4A8h]
  __int128 v455; // [rsp+3A0h] [rbp-498h]
  __int128 v456; // [rsp+3B0h] [rbp-488h]
  __int128 v457; // [rsp+3C0h] [rbp-478h]
  __int128 v458; // [rsp+3D0h] [rbp-468h]
  __int128 v459; // [rsp+3E0h] [rbp-458h]
  __int128 v460; // [rsp+3F0h] [rbp-448h]
  _QWORD v461[3]; // [rsp+400h] [rbp-438h] BYREF
  _QWORD v462[7]; // [rsp+418h] [rbp-420h] BYREF
  __int128 v463; // [rsp+450h] [rbp-3E8h]
  __int128 v464; // [rsp+460h] [rbp-3D8h]
  __int128 v465; // [rsp+470h] [rbp-3C8h]
  __int128 v466; // [rsp+480h] [rbp-3B8h]
  __int128 v467; // [rsp+490h] [rbp-3A8h]
  __int64 v468; // [rsp+4A0h] [rbp-398h] BYREF
  int v469; // [rsp+4A8h] [rbp-390h]
  __int128 v470; // [rsp+4ACh] [rbp-38Ch]
  __int128 v471; // [rsp+4BCh] [rbp-37Ch]
  int v472; // [rsp+4CCh] [rbp-36Ch]
  __int128 v473; // [rsp+4D0h] [rbp-368h]
  int v474[2]; // [rsp+4F0h] [rbp-348h]
  __int128 v475; // [rsp+4F8h] [rbp-340h]
  __int64 v476; // [rsp+508h] [rbp-330h]
  __int128 v477; // [rsp+510h] [rbp-328h]
  __int128 v478; // [rsp+520h] [rbp-318h]
  __int128 v479; // [rsp+530h] [rbp-308h]
  __int128 v480; // [rsp+540h] [rbp-2F8h]
  __int128 v481; // [rsp+550h] [rbp-2E8h]
  __int128 v482; // [rsp+560h] [rbp-2D8h]
  __int128 v483; // [rsp+570h] [rbp-2C8h] BYREF
  __int128 v484; // [rsp+580h] [rbp-2B8h]
  __int128 v485; // [rsp+590h] [rbp-2A8h]
  __int128 v486; // [rsp+5A0h] [rbp-298h]
  __int128 v487; // [rsp+5B0h] [rbp-288h]
  __int128 v488; // [rsp+5C0h] [rbp-278h]
  __int128 v489; // [rsp+5D0h] [rbp-268h]
  __int128 v490; // [rsp+5E0h] [rbp-258h]
  __int128 v491; // [rsp+5F0h] [rbp-248h]
  __int128 v492; // [rsp+600h] [rbp-238h]
  _OWORD v493[10]; // [rsp+610h] [rbp-228h] BYREF
  _OWORD v494[10]; // [rsp+6B0h] [rbp-188h] BYREF
  _DWORD v495[40]; // [rsp+750h] [rbp-E8h] BYREF

  v9 = a1;
  v411 = a1;
  v433 = a1;
  v404 = a1;
  v408 = a4;
  v402 = a5;
  v401 = a1;
  v419 = a1;
  memset(v400, 0, sizeof(v400));
  v10 = 0LL;
  v382 = 0LL;
  *(_QWORD *)&v380[1] = 0LL;
  v387 = 0;
  v381 = 0;
  *(_OWORD *)v416 = 0LL;
  v417 = 0LL;
  v418 = 0LL;
  v403 = 0;
  v415 = 0LL;
  v422 = 0LL;
  v423 = 0LL;
  v377 = a6 & 1;
  v392 = 0;
  v11 = 0;
  v376 = 0;
  LOBYTE(v8) = 0;
  v375 = (int)v8;
  v379 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)v373,
    (struct tagTHREADINFO *)v9);
  v395 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 )
  {
    v12 = *(_QWORD *)(v9 + 432);
    if ( *(_QWORD *)(v12 + 80) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
LABEL_904:
      CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
      return 0LL;
    }
  }
  v397 = 0;
  v390 = 0;
  v394 = 0;
  v13 = *(_QWORD *)(v9 + 432);
  if ( !*(_QWORD *)(v13 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(v12, 4u, 0x12u, 0x1Au, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids, v13, v9, v9);
      v13 = *(_QWORD *)(v9 + 432);
    }
    *(_QWORD *)(v13 + 64) = v9;
    **(_DWORD **)(v9 + 448) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v14 = *(_QWORD *)(v9 + 432);
    v15 = *(_DWORD *)(v14 + 388);
    if ( (a6 & 1) != 0 )
      v16 = v15 & 0xFFFFFBFF;
    else
      v16 = v15 | 0x400;
    *(_DWORD *)(v14 + 388) = v16;
  }
  v17 = *(_QWORD *)(v9 + 432);
  if ( *(_QWORD *)(v17 + 64) != v9 )
  {
    EtwTraceInputQueueLocked();
    CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
    return 2LL;
  }
  v386 = 0LL;
  v383 = 0LL;
  v405 = 0LL;
  v407 = 0LL;
  v396 = 0LL;
  v412 = 0LL;
  v406 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v17)
    || (CurrentProcess = PsGetCurrentProcess(v22, v21, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  v427 = *(_QWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 16) = &v427;
  v428 = 0LL;
  v429 = (void (*)(void))DereferenceW32Thread;
  v30 = KeGetCurrentThread();
  v31 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v28)
    || (v35 = PsGetCurrentProcess(v33, v32, v34),
        v36 = PsGetProcessSessionIdEx(v35),
        v38 = PsGetCurrentThreadProcess(v37),
        v36 == (unsigned int)PsGetProcessSessionIdEx(v38)) )
  {
    v40 = (__int64 *)PsGetThreadWin32Thread(v30);
    if ( v40 )
      v31 = *v40;
  }
  v430 = *(_QWORD *)(v31 + 16);
  *(_QWORD *)(v31 + 16) = &v430;
  v431 = 0LL;
  v432 = (void (*)(void))DereferenceW32Thread;
  v41 = KeGetCurrentThread();
  v42 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v46 = PsGetCurrentProcess(v44, v43, v45),
        v47 = PsGetProcessSessionIdEx(v46),
        v49 = PsGetCurrentThreadProcess(v48),
        v47 == (unsigned int)PsGetProcessSessionIdEx(v49)) )
  {
    v51 = (__int64 *)PsGetThreadWin32Thread(v41);
    if ( v51 )
      v42 = *v51;
  }
  v424 = *(_QWORD *)(v42 + 16);
  *(_QWORD *)(v42 + 16) = &v424;
  v425 = 0LL;
  v426 = (void (*)(void))DereferenceW32Thread;
  v52 = KeGetCurrentThread();
  v53 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v50)
    || (v57 = PsGetCurrentProcess(v55, v54, v56),
        v58 = PsGetProcessSessionIdEx(v57),
        v60 = PsGetCurrentThreadProcess(v59),
        v58 == (unsigned int)PsGetProcessSessionIdEx(v60)) )
  {
    v62 = (__int64 *)PsGetThreadWin32Thread(v52);
    if ( v62 )
      v53 = *v62;
  }
  v440 = *(_QWORD *)(v53 + 16);
  *(_QWORD *)(v53 + 16) = &v440;
  v441 = 0LL;
  v442 = (void (*)(void))DereferenceW32Thread;
  v63 = KeGetCurrentThread();
  v64 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v61)
    || (v68 = PsGetCurrentProcess(v66, v65, v67),
        v69 = PsGetProcessSessionIdEx(v68),
        v71 = PsGetCurrentThreadProcess(v70),
        v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
  {
    v73 = (const struct tagWND **)PsGetThreadWin32Thread(v63);
    if ( v73 )
      v64 = (unsigned __int64)*v73;
  }
  v437 = *(_QWORD *)(v64 + 16);
  *(_QWORD *)(v64 + 16) = &v437;
  v438 = 0LL;
  v439 = (void (*)(void))DereferenceW32Thread;
  v413 = *(_QWORD *)(v9 + 416);
  *(_QWORD *)(v9 + 416) = &v413;
  v414 = 0LL;
LABEL_36:
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v9 + 432),
        5u,
        0x12u,
        0x1Bu,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        *(_QWORD *)(v9 + 432),
        *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
    *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_43:
            v420 = (**(_DWORD **)(v9 + 480) >> 9) & 1;
            v74 = *(struct tagQMSG **)(*(_QWORD *)(v9 + 432) + 80LL);
            if ( v74 )
            {
              if ( !(_BYTE)v8 )
              {
                v375 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                v379 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              }
              LODWORD(v64) = v375;
            }
            else
            {
              v11 = 0;
              v376 = 0;
              LOBYTE(v64) = 0;
              v375 = v64;
              v379 = 0;
            }
            v378 = 0;
            v393 = 0;
            v385 = 0LL;
            v399 = 0;
            NextSysMsg = xxxGetNextSysMsg((struct tagTHREADINFO *)v9, v74, (struct tagQMSG *)v400, v72);
            v8 = NextSysMsg;
            v391 = NextSysMsg;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v77 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL),
                  5u,
                  0x12u,
                  0x1Cu,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  NextSysMsg,
                  *(_QWORD *)(v9 + 432),
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
            }
            *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = v8;
            if ( (unsigned __int64)v8 <= 1 )
              break;
            v79 = DWORD1(v400[6]);
            if ( (BYTE4(v400[6]) & 0x20) != 0 )
            {
              *a8 = v8;
              *((_DWORD *)v8 + 25) |= 0x100u;
              v377 = 0;
              v79 = DWORD1(v400[6]);
            }
            if ( (v79 & 0x10000) != 0 )
            {
              if ( *((_QWORD *)&v400[6] + 1) == v9 )
                v11 = 1;
              v376 = v11;
              LOBYTE(v8) = 1;
              v375 = (int)v8;
              v379 = 1;
            }
            else if ( (v79 & 0x80000) != 0 )
            {
              LOBYTE(v8) = v375;
              if ( *((_QWORD *)&v400[6] + 1) == v9 )
              {
                v11 = 3;
                v376 = 3;
              }
            }
            else if ( LODWORD(v400[6]) == 4 && (_BYTE)v64 )
            {
              DeferSysPeekMsg(v9, 3LL);
              LOBYTE(v8) = v375;
            }
            else if ( (v79 & 0x20000) != 0 )
            {
              LOBYTE(v8) = v375;
              if ( *((_QWORD *)&v400[6] + 1) == v9 )
              {
                v11 = 2;
                v376 = 2;
              }
            }
            else
            {
              if ( !(unsigned int)ShouldDeferMessage(v11, v400) )
                break;
              DeferSysPeekMsg(v9, 3LL);
              v11 = 3;
              v376 = 3;
              LOBYTE(v8) = v375;
            }
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) )
          {
            if ( a7 == 0x2000 )
              ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
            goto LABEL_348;
          }
          ThreadUnlock1(v77, v76, v78);
          v64 = *(_QWORD *)&v400[1];
          v80 = 0LL;
          v81 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v82)
            || (v86 = PsGetCurrentProcess(v84, v83, v85),
                v87 = PsGetProcessSessionIdEx(v86),
                v89 = PsGetCurrentThreadProcess(v88),
                v87 == (unsigned int)PsGetProcessSessionIdEx(v89)) )
          {
            PsGetThreadWin32Thread(v81);
          }
          if ( (unsigned __int64)(unsigned __int16)v64 < *(_QWORD *)(gpsi + 8LL) )
          {
            v90 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v64 * LODWORD(gSharedInfo[2]);
            v92 = (unsigned __int64 *)HMPkheFromPhe(v90);
            v64 >>= 16;
            if ( ((_WORD)v64 == *(_WORD *)(v90 + 26)
               || (_WORD)v64 == 0xFFFF
               || !(_WORD)v64 && PsGetCurrentProcessWow64Process(v91))
              && (*(_BYTE *)(v90 + 25) & 1) == 0
              && *(_BYTE *)(v90 + 24) == 1 )
            {
              v80 = *v92;
            }
          }
          ThreadDesktopWindow = (struct tagWND *)v80;
          v413 = *(_QWORD *)(v9 + 416);
          *(_QWORD *)(v9 + 416) = &v413;
          v414 = v80;
          if ( v80 )
            HMLockObject(v80);
          if ( !LODWORD(v400[6]) )
            break;
          if ( LODWORD(v400[6]) == 4 )
          {
            v11 = v376;
            LOBYTE(v8) = v375;
            if ( *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) != *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL) )
              continue;
          }
          if ( LODWORD(v400[6]) != 9 || DWORD2(v400[1]) != 96 )
            goto LABEL_99;
          v93 = *((_QWORD *)&v400[0] + 1);
          v94 = *((_QWORD *)&v400[0] + 1) == 0LL;
          if ( *((_QWORD *)&v400[0] + 1) )
          {
            do
            {
              if ( !(unsigned int)IsHiddenByInputService(v93) )
                break;
              v93 = *(_QWORD *)(v93 + 8);
            }
            while ( v93 );
            v94 = v93 == 0;
          }
          v11 = v376;
          LOBYTE(v8) = v375;
          if ( v94 )
          {
LABEL_99:
            v95 = *((_QWORD *)&v400[6] + 1);
            if ( !*((_QWORD *)&v400[6] + 1) || *((_QWORD *)&v400[6] + 1) == v9 )
            {
              EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
              v99 = *(_QWORD *)(v9 + 432);
              v100 = *(_QWORD *)(v99 + 80);
              v101 = v99 + 24;
              v102 = *(_QWORD **)(v100 + 8);
              if ( v102 )
                *v102 = *(_QWORD *)v100;
              v103 = *(_QWORD *)v100;
              if ( *(_QWORD *)v100 )
                *(_QWORD *)(v103 + 8) = *(_QWORD *)(v100 + 8);
              if ( *(_QWORD *)v101 == v100 )
                *(_QWORD *)v101 = *(_QWORD *)v100;
              if ( *(_QWORD *)(v99 + 32) == v100 )
                *(_QWORD *)(v99 + 32) = *(_QWORD *)(v100 + 8);
              v104 = *(_DWORD *)(v100 + 100);
              if ( (v104 & 0x10000) == 0 && (v104 & 0x20000) == 0 && (v104 & 0x80000) == 0 )
              {
                v105 = *(_DWORD *)(v101 + 16) - 1;
                *(_DWORD *)(v101 + 16) = v105;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v371) = v105;
                  LODWORD(v370) = *(_DWORD *)(v101 + 20);
                  WPP_RECORDER_SF_qiqdd(
                    v101,
                    v103,
                    v98,
                    0x14u,
                    (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                    v100,
                    *(_QWORD *)(v100 + 136),
                    v101,
                    v370,
                    v371);
                }
              }
              if ( (*(_DWORD *)(v100 + 100) & 8) != 0
                && !*(_DWORD *)(v100 + 96)
                && IsPointerInputMessage(*(_DWORD *)(v100 + 24)) )
              {
                FreePointerMessageParams(v100);
              }
              Win32FreeToPagedLookasideList(QEntryLookaside, v100);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_qq(
                  *(_QWORD *)(v9 + 432),
                  5u,
                  0x12u,
                  0x1Eu,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(v9 + 432),
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
              }
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              xxxProcessEventMessage(v9, (__int64)v400);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v11 = v376;
              LOBYTE(v8) = v375;
            }
            else
            {
              v96 = *(_QWORD *)(v9 + 432);
              if ( *(_QWORD *)(*((_QWORD *)&v400[6] + 1) + 432LL) == v96 )
              {
                v407 = *((_QWORD *)&v400[6] + 1);
                ObfReferenceObject(**((PVOID **)&v400[6] + 1));
                _InterlockedIncrement((volatile signed __int32 *)(v95 + 8));
                v97 = v425;
                v425 = v95;
                if ( v97 )
                  v426();
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_qq(
                    *(_QWORD *)(v9 + 432),
                    5u,
                    0x12u,
                    0x1Du,
                    (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                    *(_QWORD *)(v9 + 432),
                    *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
                }
                *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = 0LL;
                goto LABEL_348;
              }
              CleanEventMessage(*(struct tagQMSG **)(v96 + 80));
              DelQEntry(*(_QWORD *)(v9 + 432) + 24LL, *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL), 1LL);
              v11 = v376;
              LOBYTE(v8) = v375;
            }
            goto LABEL_36;
          }
        }
        if ( a7 == 0x2000 )
          goto LABEL_41;
        LODWORD(v64) = DWORD2(v400[1]);
        v374 = DWORD2(v400[1]);
        v380[0] = DWORD2(v400[1]);
        if ( DWORD2(v400[1]) <= 0x20A )
          break;
        switch ( DWORD2(v400[1]) )
        {
          case 0x20E:
            goto LABEL_372;
          case 0x238:
            goto LABEL_445;
          case 0x240:
LABEL_439:
            if ( !v80 )
              goto LABEL_381;
            v178 = *(char **)(v80 + 40);
            if ( v178[20] < 0 )
              goto LABEL_381;
            if ( v178[19] < 0 )
              goto LABEL_381;
            v179 = v178[31];
            if ( (v179 & 8) != 0 )
              goto LABEL_381;
            if ( (v179 & 0x10) == 0 )
            {
              MouseKeyFlags = v385;
              v110 = v377;
              goto LABEL_772;
            }
LABEL_445:
            v382 = *((_QWORD *)&v400[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v400[2];
            v385 = *(_QWORD *)&v400[2];
            if ( !v80 )
              goto LABEL_382;
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v80, v8, &v387, &v377, a8) )
              goto LABEL_348;
            if ( v387 )
              goto LABEL_382;
            if ( !a4 && a5 == -1 )
              goto LABEL_456;
            if ( a4 <= a5 )
            {
              LOBYTE(v8) = v375;
              if ( (unsigned int)v64 < a4 || (unsigned int)v64 > a5 )
                goto LABEL_42;
            }
            else if ( (unsigned int)v64 >= a5 && (unsigned int)v64 <= a4 )
            {
              goto LABEL_41;
            }
LABEL_456:
            v180 = CheckPwndFilter(v80, a3);
            LOBYTE(v8) = v375;
            if ( v180 )
            {
              if ( !v377 )
                goto LABEL_810;
              goto LABEL_458;
            }
            goto LABEL_42;
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x249:
          case 0x24A:
          case 0x251:
          case 0x252:
          case 0x253:
            v110 = v377;
            goto LABEL_759;
          case 0x2E8:
          case 0x2E9:
          case 0x2EA:
          case 0x2EB:
          case 0x2EC:
          case 0x2ED:
          case 0x2EE:
          case 0x2EF:
          case 0x2F0:
          case 0x2F1:
          case 0x2F2:
          case 0x2F3:
          case 0x2F4:
          case 0x2F5:
            if ( !a4 && a5 == -1 )
              goto LABEL_359;
            if ( a4 <= a5 )
            {
              if ( DWORD2(v400[1]) < v408 || DWORD2(v400[1]) > v402 )
                goto LABEL_348;
            }
            else if ( DWORD2(v400[1]) >= v402 && DWORD2(v400[1]) <= v408 )
            {
              goto LABEL_348;
            }
LABEL_359:
            if ( (unsigned int)IsInsideMenuLoop(v9) )
              goto LABEL_381;
            v110 = v377;
            if ( v377 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
            if ( !v80 )
            {
              v80 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 112LL);
              ThreadDesktopWindow = (struct tagWND *)v80;
            }
            v382 = *((_QWORD *)&v400[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v400[2];
            v385 = *(_QWORD *)&v400[2];
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            v64 = MouseKeyFlags >> 16;
            v160 = InteractiveControlManager::Instance();
            v435 = 0LL;
            v436 = 0LL;
            if ( (int)InteractiveControlManager::FindDevice(v160, (unsigned __int16)MouseKeyFlags, 0LL, &v435, 0LL) >= 0
              && v435
              && (unsigned int)InteractiveControlDevice::GetInputReport(v435, WORD1(MouseKeyFlags), &v436) )
            {
              *((_DWORD *)v436 + 6) = 1;
              v161 = 1;
            }
            else
            {
              v161 = 2;
            }
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            v162 = v161 - 1;
            if ( !v162 )
              goto LABEL_810;
            if ( v162 == 1 )
              goto LABEL_844;
            goto LABEL_772;
          default:
LABEL_460:
            v380[1] = SWORD4(v400[2]);
            v380[2] = SWORD5(v400[2]);
            v381 = 1;
            if ( (BYTE4(v400[6]) & 0x20) == 0 )
              goto LABEL_470;
            if ( !v80 )
              goto LABEL_470;
            v181 = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 288LL);
            v182 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 424LL) + 280LL);
            if ( (((unsigned __int16)(v181 >> 8) ^ (unsigned __int16)(v182 >> 8)) & 0x1FF) != 0 )
              goto LABEL_470;
            if ( (v181 & 0xF) != 2 || (v183 = 1, (v181 & 0x20000000) == 0) )
              v183 = 0;
            if ( (v182 & 0xF) != 2 || (v184 = 1, (v182 & 0x20000000) == 0) )
              v184 = 0;
            if ( v183 != v184 )
            {
LABEL_470:
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              if ( !v80 || (v185 = 1, !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v80)) )
                v185 = 0;
              v392 = v185;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v188 = *(_QWORD *)(v9 + 432);
              v189 = *(__int64 **)(v188 + 104);
              if ( v189 )
              {
                v80 = *(_QWORD *)(v188 + 104);
                ThreadDesktopWindow = (struct tagWND *)v80;
                if ( (unsigned int)dword_1C032FB30 > 4
                  && (qword_1C032FB40 & 0x40) != 0
                  && (qword_1C032FB48 & 0x40) == qword_1C032FB48 )
                {
                  v444 = *v189;
                  v421 = DWORD2(v400[1]);
                  v445 = *((_QWORD *)&v400[8] + 1);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C032FB30,
                    (unsigned int)&unk_1C02EF827,
                    v186,
                    v187,
                    (__int64)&v445,
                    (__int64)&v421,
                    (__int64)&v444);
                }
                if ( v185 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  v200 = IsCompositionInputWindowForHitTest((struct tagWND *)v80);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  if ( !v200 )
                  {
                    DWORD1(v400[6]) &= ~0x2000u;
                    if ( v8 )
                    {
                      if ( IsMiPActive(v9, (__int64)v8) )
                        *((_DWORD *)v8 + 25) &= ~0x2000u;
                    }
                  }
                }
              }
              else
              {
                if ( !v185 )
                {
                  v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                  *(_QWORD *)&v422 = *(_QWORD *)(v9 + 416);
                  *(_QWORD *)(v9 + 416) = &v422;
                  *((_QWORD *)&v422 + 1) = v80;
                  if ( v80 )
                    HMLockObject(v80);
                }
                if ( (unsigned int)IsThreadDesktopComposed(v9) )
                {
                  v446[0] = DWORD2(v400[1]);
                  v446[1] = 0;
                  v447 = v400[2];
                  v448 = &v381;
                  v190 = 1;
                  if ( v185 )
                    v190 = 9;
                  v449 = v190;
                  v450 = 0;
                  v451 = (char *)&v400[5] + 8;
                  v452 = 0LL;
                  v453 = 0LL;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  v191 = xxxDCEWindowHitTestIndirect_Iterative(
                           (struct tagWND *)v80,
                           *(struct tagPOINT *)&v400[5],
                           0,
                           (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v446);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  if ( v191 && (_DWORD)v452 )
                  {
                    *((_QWORD *)&v400[2] + 1) = *((_QWORD *)&v447 + 1);
                    DWORD1(v400[3]) = SWORD4(v447);
                    DWORD2(v400[3]) = SWORD5(v447);
                    *(_QWORD *)&v380[1] = *(_QWORD *)((char *)&v400[3] + 4);
                  }
                }
                else
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  v191 = (HWND)xxxWindowHitTest((struct tagWND *)v80, *(__int64 *)&v380[1], (__int64)&v381);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                }
                v192 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v191, 1);
                InputTraceLogging::Mouse::SecondaryHitTest(
                  (const struct tagQMSG *)v400,
                  (const struct tagPOINT *)&v380[1],
                  v192);
                if ( !v392 )
                  ThreadUnlock1(v194, v193, v195);
                v80 = HMValidateHandleNoSecure((unsigned __int64)v191, 1);
                ThreadDesktopWindow = (struct tagWND *)v80;
                if ( !v80 )
                {
                  v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL) + 24LL);
                  ThreadDesktopWindow = (struct tagWND *)v80;
                  if ( !v80 )
                  {
                    v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
                    ThreadDesktopWindow = (struct tagWND *)v80;
                  }
                }
                if ( !*(_QWORD *)(v9 + 608)
                  && IsMiPEnabledForThread(v9)
                  && (v196 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 440LL)) != 0
                  && (v197 = ValidateHwnd(v196)) != 0
                  && ((v198 = *(_QWORD *)(v197 + 16), v199 = *(_QWORD *)(v9 + 432), *(_QWORD *)(v198 + 432) == v199)
                   || *(_QWORD *)(v198 + 424) == *(_QWORD *)(v9 + 424)) )
                {
                  v80 = v197;
                  ThreadDesktopWindow = (struct tagWND *)v197;
                  v381 = 1;
                  *(_DWORD *)(v199 + 148) = 0;
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(v401 + 432) + 148LL) = v381 != 1;
                }
              }
              if ( v80 == *(_QWORD *)(*(_QWORD *)(v9 + 432) + 104LL) )
              {
                v201 = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 288LL);
                v202 = *(_QWORD *)(*(_QWORD *)(v80 + 16) + 432LL);
                v203 = *(_QWORD *)(v202 + 104);
                v204 = v203 ? *(_QWORD *)(v203 + 16) : *(_QWORD *)(v202 + 88);
                if ( (((unsigned __int16)(v201 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v204 + 424) + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_528;
                if ( (v201 & 0xF) != 2 || (v205 = (v201 & 0x20000000) != 0, v206 = 1, !v205) )
                  v206 = 0;
                if ( v203 )
                  v207 = *(_QWORD *)(v203 + 16);
                else
                  v207 = *(_QWORD *)(v202 + 88);
                if ( (*(_DWORD *)(*(_QWORD *)(v207 + 424) + 280LL) & 0xF) != 2
                  || (!v203 ? (v208 = *(_QWORD *)(v202 + 88)) : (v208 = *(_QWORD *)(v203 + 16)),
                      v94 = (*(_DWORD *)(*(_QWORD *)(v208 + 424) + 280LL) & 0x20000000) == 0,
                      v209 = 1,
                      v94) )
                {
                  v209 = 0;
                }
                if ( v206 != v209
                  || *(_QWORD *)(v80 + 104) == GetMessageWindow(v80)
                  && (v210 = *(_QWORD *)(v80 + 136)) != 0
                  && (v211 = *(const char **)(v210 + 104)) != 0LL
                  && !strcmp_0(v211, "CLIPBRDWNDCLASS") )
                {
LABEL_528:
                  *(_QWORD *)&v380[1] = *(_QWORD *)&v400[5];
                  PhysicalToLogicalInPlacePointWithParent(v80, &v380[1], (char *)&v400[5] + 8);
                  v382 = (LOWORD(v380[2]) << 16) | LOWORD(v380[1]);
                  *(_QWORD *)((char *)&v400[3] + 4) = *(_QWORD *)&v380[1];
                }
              }
            }
            ThreadLockExchange(v80, (__int64)&v413);
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v80, v8, &v387, &v377, a8) )
              goto LABEL_348;
            v212 = v387;
            if ( v387 )
            {
              v213 = *(_QWORD *)(v80 + 16);
              v214 = a1;
              if ( *(_QWORD *)(v213 + 432) != *(_QWORD *)(a1 + 432) )
                goto LABEL_532;
              if ( !v386 )
              {
                v386 = *(_QWORD *)(v80 + 16);
                LockExchangeW32Thread(v213, (__int64)&v430);
              }
            }
            else
            {
              if ( (WORD2(v400[6]) & 0x1000) != 0
                && !(unsigned __int8)CheckAccess(&v400[7], *(_QWORD *)(*(_QWORD *)(v80 + 16) + 424LL) + 880LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*(_QWORD *)(v80 + 16) + 424LL),
                  (unsigned int)v64,
                  *(_QWORD *)&v400[2],
                  *((_QWORD *)&v400[2] + 1));
LABEL_532:
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                MouseKeyFlags = v385;
                v110 = v377;
                v9 = a1;
                goto LABEL_772;
              }
              v214 = a1;
            }
            v215 = *(struct tagPOINT *)&v380[1];
            v216 = *(_QWORD *)&v380[1];
            v217 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 432LL) + 148LL);
            if ( v217 && (v218 = v217 - 2) != 0 )
            {
              if ( v218 != 1 )
                goto LABEL_551;
              v219 = *(_QWORD *)(v80 + 40);
              if ( (*(_BYTE *)(v219 + 26) & 0x40) != 0 )
                v380[1] = *(_DWORD *)(v219 + 96) - v380[1];
              else
                v380[1] -= *(_DWORD *)(v219 + 88);
              v220 = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 92LL);
            }
            else
            {
              v221 = *(_QWORD *)(v80 + 40);
              if ( (*(_BYTE *)(v221 + 26) & 0x40) != 0 )
                v380[1] = *(_DWORD *)(v221 + 112) - v380[1];
              else
                v380[1] -= *(_DWORD *)(v221 + 104);
              v220 = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 108LL);
            }
            v380[2] -= v220;
            v215 = *(struct tagPOINT *)&v380[1];
LABEL_551:
            if ( v212 || *(_QWORD *)(v214 + 432) != gpqCursor )
              goto LABEL_588;
            LOBYTE(v10) = *(_QWORD *)(*(_QWORD *)(v214 + 456) + 184LL) != v80;
            v222 = v381;
            if ( v381 == 5
              && (v223 = *(_QWORD *)(v80 + 168)) != 0
              && (*(_BYTE *)(*(_QWORD *)(v80 + 40) + 16LL) & 1) != 0 )
            {
              v224 = MNItemHitTest(*(_QWORD *)(v80 + 168), v80);
              if ( v224 < 0 )
                goto LABEL_563;
              v225 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v223 + 88) + 96LL * v224) + 96LL);
              if ( v225 <= 6 )
              {
                if ( v225 >= 5 )
                {
                  v228 = ((unsigned __int16)v224 << 16) | 0x44;
                  goto LABEL_578;
                }
                v226 = v225 - 1;
                if ( !v226 )
                {
                  v228 = ((unsigned __int16)v224 << 16) | 0x41;
                  goto LABEL_578;
                }
                v227 = v226 - 1;
                if ( !v227 )
                {
                  v228 = ((unsigned __int16)v224 << 16) | 0x42;
                  goto LABEL_578;
                }
                if ( v227 == 1 )
                  goto LABEL_562;
LABEL_569:
                v228 = ((unsigned __int16)v224 << 16) | 0x45;
                goto LABEL_578;
              }
              if ( v225 == 7 )
              {
LABEL_562:
                v222 = 67;
LABEL_563:
                v228 = v222 | ((unsigned __int16)v224 << 16);
                goto LABEL_578;
              }
              if ( v225 != -1LL )
                goto LABEL_569;
              v228 = ((unsigned __int16)v224 << 16) | 0xFFFE;
            }
            else if ( v381 == 7 && (*(_BYTE *)(*(_QWORD *)(v80 + 40) + 16LL) & 2) != 0 )
            {
              v228 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v80, v381 - 6, v215) | 0x10000;
            }
            else if ( v381 == 6 && (*(_BYTE *)(*(_QWORD *)(v80 + 40) + 16LL) & 4) != 0 )
            {
              v228 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v80, 0, v215);
            }
            else
            {
              v228 = v381;
            }
LABEL_578:
            v229 = v374;
            if ( v374 != 512 || (_DWORD)v10 || *(_DWORD *)(*(_QWORD *)(v214 + 456) + 192LL) != v228 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              xxxTrackMouseMove((struct tagWND *)v80, v228, v229);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            LODWORD(v64) = v374;
            if ( !(_DWORD)v10 )
            {
              v230 = *(_QWORD *)(v214 + 456);
              if ( (*(_DWORD *)(v230 + 48) & 0x40) != 0 && (v374 != 512 || !PtInRect((_DWORD *)(v230 + 196), v216)) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                ResetMouseHover(*(struct tagDESKTOP **)(v214 + 456), (struct tagPOINT)v216);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              }
            }
            v10 = 0LL;
LABEL_588:
            v231 = CheckPwndFilter(v80, a3);
            LOBYTE(v8) = v375;
            if ( !v231 )
            {
              v9 = a1;
LABEL_42:
              v11 = v376;
              goto LABEL_43;
            }
            v232 = 0;
            v398 = 0;
            switch ( (int)v64 )
            {
              case 513:
                v233 = a1;
                v94 = (unsigned __int8)IsMessageInputSourceTouch(v400) == 0;
                v234 = *(_QWORD *)(a1 + 432);
                if ( v94 )
                  *(_DWORD *)(v234 + 388) &= ~0x800000u;
                else
                  *(_DWORD *)(v234 + 388) |= 0x800000u;
                v235 = IsMessageInputSourcePen(v400);
                v236 = *(_QWORD *)(v401 + 432);
                v237 = *(_DWORD *)(v236 + 388);
                if ( v235 )
                  *(_DWORD *)(v236 + 388) = v237 | 0x1000000;
                else
                  *(_DWORD *)(v236 + 388) = v237 & 0xFEFFFFFF;
                goto LABEL_597;
              case 514:
              case 517:
              case 520:
              case 524:
                v233 = a1;
                goto LABEL_610;
              case 516:
              case 519:
              case 523:
                v233 = a1;
LABEL_597:
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v80 + 136) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(v233 + 432) + 148LL) == 1
                  || (v238 = *(_QWORD *)(v233 + 608)) != 0 && (*(_DWORD *)(v238 + 8) & 1) != 0 )
                {
                  v232 = 1;
                  v398 = 1;
                  v239 = *(_QWORD *)(v233 + 432);
                  if ( LODWORD(v400[3]) <= *(_DWORD *)(v239 + 160)
                    && !gbClientDoubleClickSupport
                    && *(_QWORD *)v80 == *(_QWORD *)(v239 + 168)
                    && (_DWORD)v64 == *(_DWORD *)(v239 + 152)
                    && ((_DWORD)v64 != 523 || WORD1(v400[2]) == *(_WORD *)(v239 + 156)) )
                  {
                    v240 = *(_DWORD *)(gpsi + 2040LL) / 2;
                    v241 = *(_DWORD *)(v239 + 176);
                    v443[0] = v241 - v240;
                    v242 = *(_DWORD *)(gpsi + 2044LL);
                    v243 = *(_DWORD *)(v239 + 180);
                    v443[1] = v243 - v242 / 2;
                    v443[2] = v240 + v241;
                    v443[3] = v243 + v242 / 2;
                    if ( PtInRect(v443, *(unsigned __int64 *)((char *)&v400[3] + 4)) )
                    {
                      LODWORD(v64) = v64 + 2;
                      v374 = v64;
                      v380[0] = v64;
                      v232 = 2;
                      v398 = 2;
                    }
                  }
                }
LABEL_610:
                v244 = *(_QWORD *)(v233 + 432);
                v245 = *(_DWORD *)(v244 + 388);
                if ( (v245 & 8) != 0 )
                  *(_DWORD *)(v244 + 388) = v245 | 4;
                if ( (unsigned int)(v64 - 514) <= 0xA )
                {
                  v246 = 1097;
                  if ( _bittest(&v246, v64 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v233 + 432) + 160LL) && ((DWORD2(v400[7]) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v400[7]) == 4 )
                      {
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
                      }
                      else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                      {
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C032A038 + 11);
                        if ( TouchTimeFromCPLValue == -1 )
                          TouchTimeFromCPLValue = *((_DWORD *)off_1C032A038 + 10);
                      }
                      else
                      {
                        TouchTimeFromCPLValue = gdtDblClk;
                      }
                      *(_DWORD *)(*(_QWORD *)(v233 + 432) + 160LL) = DWORD2(v400[9]) + TouchTimeFromCPLValue;
                    }
                  }
                }
                break;
              default:
                break;
            }
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 16) + 432LL) + 148LL) == 1 )
            {
              LODWORD(v64) = v64 - 352;
              v374 = v64;
              v380[0] = v64;
              MouseKeyFlags = (unsigned int)v381;
              v385 = (unsigned int)v381;
            }
            else
            {
              MouseKeyFlags = v385;
            }
            if ( !(unsigned int)MiPCheckMsgFilter(v391, (unsigned int)v64, a4, a5) )
            {
              v9 = a1;
LABEL_41:
              LOBYTE(v8) = v375;
              goto LABEL_42;
            }
            v94 = v212 == 0;
            v9 = a1;
            if ( !v94 )
              goto LABEL_348;
            if ( (unsigned int)(v64 - 512) <= 0xE && (*(_DWORD *)(a1 + 488) & 0x8000) != 0 )
              goto LABEL_41;
            v248 = *(_DWORD *)(a1 + 488);
            if ( (v248 & 0x100000) != 0 )
            {
              *(_DWORD *)(a1 + 488) = v248 & 0xFFEFFFFF;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1u);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            v416[0] = *(_QWORD *)((char *)&v400[3] + 4);
            v416[1] = *(_QWORD *)v80;
            LODWORD(v417) = v381;
            *((_QWORD *)&v417 + 1) = *((_QWORD *)&v400[4] + 1);
            LODWORD(v418) = v400[2];
            v110 = v377;
            if ( v377 && (_DWORD)v64 != 512 && (_DWORD)v64 != 160 )
            {
              v390 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v416) )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680)) & 0x100) != 0 )
            {
              v390 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              if ( (unsigned int)xxxCallMouseHook((unsigned int)v64, v416, v110) )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
            {
              v249 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
              v389 = 0;
              v389 = *(_QWORD *)(v249 + 248) != 0LL;
              if ( v389 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v110 = v377;
                v250 = v380[0];
                v374 = v380[0];
                if ( xxxClientCallLocalMouseHooks(v380[0], v416, (unsigned int)v377) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  MouseKeyFlags = v385;
                  goto LABEL_773;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v80 = (unsigned __int64)ThreadDesktopWindow;
                MouseKeyFlags = v385;
              }
              else
              {
                v80 = (unsigned __int64)ThreadDesktopWindow;
                v250 = v380[0];
                v374 = v380[0];
                MouseKeyFlags = v385;
                v110 = v377;
              }
            }
            else
            {
              v250 = v374;
            }
            if ( (*(_DWORD *)(a1 + 1232) & 0x2000) == 0 && ((v381 + 2) & 0xFFFFFFFD) == 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v251 = 0LL;
              if ( v392 )
              {
                CompositionInputWindowUIOwner = (struct tagWND *)v80;
                if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)v80) )
                  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v80);
                TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                v251 = (unsigned __int64)TopLevelWindow;
                if ( TopLevelWindow )
                {
                  LOBYTE(v64) = 0;
                  if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v374 == 161 )
                    LODWORD(v64) = *(_QWORD *)(*(_QWORD *)(v251 + 16) + 432LL) == gpqForeground;
                  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v251);
                  v251 = (unsigned __int64)CompositeAppFrameWindowOrSelf;
                  if ( (_BYTE)v64 )
                  {
                    v255 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                    if ( *(_QWORD *)(v255 + 432) != gpqForeground )
                      *(_DWORD *)(v255 + 488) |= 0x20u;
                  }
                  *(_QWORD *)&v422 = *(_QWORD *)(a1 + 416);
                  *(_QWORD *)(a1 + 416) = &v422;
                  *((_QWORD *)&v422 + 1) = CompositeAppFrameWindowOrSelf;
                  if ( CompositeAppFrameWindowOrSelf )
                  {
                    HMLockObject(CompositeAppFrameWindowOrSelf);
                    v256 = *(_QWORD *)v251;
                  }
                  else
                  {
                    v256 = 0LL;
                  }
                  xxxSendMessage(
                    v251,
                    0x20u,
                    v256,
                    (struct _LARGE_STRING *)((unsigned __int16)v381 | (WORD4(v400[1]) << 16)));
                  ThreadUnlock1(v258, v257, v259);
                }
              }
              if ( !v251 )
                xxxSendMessage(
                  v80,
                  0x20u,
                  *(_QWORD *)v80,
                  (struct _LARGE_STRING *)((unsigned __int16)v381 | (WORD4(v400[1]) << 16)));
              v260 = v391;
              if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) == v391
                && v391
                && IsMiPActive(a1, (__int64)v391)
                && (*((_DWORD *)v260 + 25) & 0x800) != 0
                && (unsigned int)IsGenuineMouseInput((char *)v260 + 120)
                && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v260 + 6)) )
              {
                memset(v495, 0, sizeof(v495));
                v261 = v260;
                v250 = v374;
                GeneratePointerMessageFromMouse((struct tagQMSG *)v495, v374, v261, (struct tagWND *)v80, v110);
                SetMiPPromotion(*(_QWORD *)(v80 + 16), v495[6]);
              }
              else
              {
                v250 = v374;
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              goto LABEL_773;
            }
            v262 = v391;
            if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) != v391 )
            {
LABEL_844:
              v10 = 0LL;
              goto LABEL_348;
            }
            v454 = 0LL;
            v477 = 0LL;
            v478 = 0LL;
            v479 = 0LL;
            v480 = 0LL;
            v481 = 0LL;
            v482 = 0LL;
            v455 = 0LL;
            v456 = 0LL;
            v457 = 0LL;
            v458 = 0LL;
            v459 = 0LL;
            v460 = 0LL;
            LODWORD(v64) = 0;
            v483 = v400[0];
            v484 = v400[1];
            v485 = v400[2];
            v486 = v400[3];
            v487 = v400[4];
            v488 = v400[5];
            v489 = v400[6];
            v490 = v400[7];
            v491 = v400[8];
            v492 = v400[9];
            if ( v391 && IsMiPActive(a1, (__int64)v391) )
            {
              DWORD2(v484) = v250;
              *(_QWORD *)&v485 = MouseKeyFlags;
              if ( (*((_DWORD *)v262 + 25) & 0x800) != 0 )
              {
                memset(v493, 0, sizeof(v493));
                v263 = *(_QWORD *)(a1 + 1280);
                if ( v263 && (*(_DWORD *)v263 & 1) != 0 )
                {
                  v454 = *(_OWORD *)(v263 + 24);
                  v455 = v454;
                  v456 = *(_OWORD *)(v263 + 40);
                  v457 = *(_OWORD *)(v263 + 56);
                  v458 = *(_OWORD *)(v263 + 72);
                  v459 = *(_OWORD *)(v263 + 88);
                  v460 = *(_OWORD *)(v263 + 104);
                  LODWORD(v64) = 1;
                }
                if ( GeneratePointerMessageFromMouse((struct tagQMSG *)v493, v374, v391, (struct tagWND *)v80, v110) )
                {
                  v400[0] = v493[0];
                  v400[1] = v493[1];
                  v400[2] = v493[2];
                  v400[3] = v493[3];
                  v400[4] = v493[4];
                  v400[5] = v493[5];
                  v400[6] = v493[6];
                  v400[7] = v493[7];
                  v400[8] = v493[8];
                  v400[9] = v493[9];
                  v378 = 1;
                  v393 = 1;
                  v264 = DWORD2(v493[1]);
                  if ( DWORD2(v493[1]) == 582 && (unsigned int)IsMiPEnabledForWindow(v80) )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = *(_QWORD *)v80;
                  }
                  else if ( ((v264 - 579) & 0xFFFFFFFB) == 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
                  }
                }
                if ( v110 || !(unsigned int)IsMiPEnabledForWindow(v80) )
                {
                  v262 = v391;
                  *((_DWORD *)v391 + 25) &= ~0x800u;
                  goto LABEL_701;
                }
              }
              else
              {
                if ( !v110 )
                  goto LABEL_734;
                if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)v262 + 6)) )
                {
                  if ( (unsigned int)IsGenuineMouseInput((char *)v391 + 120) )
                  {
                    v265 = *(_DWORD **)(a1 + 1280);
                    if ( v265 )
                    {
                      if ( (*v265 & 2) == 0 && (*v265 & 4) == 0 )
                        goto LABEL_414;
                    }
                  }
                  v266 = *(_DWORD **)(a1 + 1280);
                  if ( v266 )
                    *v266 &= ~2u;
                }
              }
              v262 = v391;
            }
            else
            {
              v250 = DWORD2(v484);
            }
LABEL_701:
            if ( !v110 )
            {
LABEL_734:
              LODWORD(v64) = v378;
              goto LABEL_735;
            }
            if ( (v250 == 512 || v250 == 160)
              && *(_QWORD *)v80 != gMiPTracking
              && (unsigned int)IsGenuineMouseInput((char *)v262 + 120) )
            {
              v267 = HMValidateHandleNoSecure(gMiPTracking, 1);
              v268 = v267;
              if ( v267
                && IsMiPActive(*(_QWORD *)(v267 + 16), 0LL)
                && (GetMiPWindowFlags((struct tagWND *)v268) & 1) == 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v269 = *(_QWORD *)(v268 + 16);
                if ( v269 == a1 )
                {
                  v270 = *(_QWORD *)(a1 + 1280);
                  v463 = *(_OWORD *)(v270 + 24);
                  v467 = *(_OWORD *)(v270 + 40);
                  v466 = *(_OWORD *)(v270 + 56);
                  v473 = *(_OWORD *)(v270 + 72);
                  v465 = *(_OWORD *)(v270 + 88);
                  v464 = *(_OWORD *)(v270 + 104);
                  if ( (_DWORD)v64 )
                  {
                    *(_OWORD *)(v270 + 24) = v454;
                    *(_OWORD *)(v270 + 40) = v456;
                    *(_OWORD *)(v270 + 56) = v457;
                    *(_OWORD *)(v270 + 72) = v458;
                    *(_OWORD *)(v270 + 88) = v459;
                    *(_OWORD *)(v270 + 104) = v460;
                    v270 = *(_QWORD *)(v401 + 1280);
                  }
                  *(_QWORD *)v474 = ((*(_DWORD *)(v270 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                  v475 = 0LL;
                  v476 = 0LL;
                  v462[2] = 0LL;
                  v271 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v462[0] = *(_QWORD *)(v271 + 416);
                  *(_QWORD *)(v271 + 416) = v462;
                  v462[1] = v268;
                  HMLockObject(v268);
                  FindTimer(v268, 65523LL, 2u, 1, 0LL);
                  if ( (unsigned int)IsMiPEnabledForWindow(v268) )
                  {
                    _InterlockedIncrement(&glSendMessage);
                    xxxSendTransformableMessageTimeout(v268, 0x24Au, *(unsigned __int64 *)v474, 0LL, 0, 0, 0LL, 1, 0);
                  }
                  ThreadUnlock1(v273, v272, v274);
                  v80 = (unsigned __int64)ThreadDesktopWindow;
                  MouseKeyFlags = v385;
                  v110 = v377;
                  if ( (_DWORD)v64 )
                  {
                    v275 = *(_QWORD *)(a1 + 1280);
                    *(_OWORD *)(v275 + 24) = v463;
                    *(_OWORD *)(v275 + 40) = v467;
                    *(_OWORD *)(v275 + 56) = v466;
                    *(_OWORD *)(v275 + 72) = v473;
                    *(_OWORD *)(v275 + 88) = v465;
                    *(_OWORD *)(v275 + 104) = v464;
                  }
                  v374 = v380[0];
                }
                else
                {
                  PostEventMessageEx(
                    (struct tagTHREADINFO *)v269,
                    *(struct tagQ **)(v269 + 432),
                    0x15u,
                    (struct tagWND *)v268,
                    0,
                    0LL,
                    0LL,
                    0LL);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              }
              LODWORD(v64) = v378;
              if ( v378 )
                gMiPTracking = *(_QWORD *)v80;
              else
                gMiPTracking = 0LL;
            }
            else
            {
              LODWORD(v64) = v378;
            }
            if ( !(_DWORD)v64 )
            {
              v276 = v232 - 1;
              if ( v276 )
              {
                if ( v276 == 1 )
                  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = 0;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)(a1 + 432) + 152LL) = DWORD2(v400[1]);
                *(_WORD *)(*(_QWORD *)(a1 + 432) + 156LL) = WORD1(v400[2]);
                *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = gdtDblClk + LODWORD(v400[3]);
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 168LL) = *(_QWORD *)v80;
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 176LL) = *(_QWORD *)((char *)&v400[3] + 4);
              }
            }
            v277 = (const struct tagQMSG *)&v483;
            if ( !(_DWORD)v64 )
              v277 = (const struct tagQMSG *)v400;
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            v278 = xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)v80, v277, v381);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            if ( v278 == 1 )
              goto LABEL_772;
LABEL_735:
            if ( v110 )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v400, 1u);
              if ( v390 )
              {
                if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  xxxCallHook(6, v374, (__int64)v416, 5);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                }
              }
            }
            v390 = 0;
            v382 = (LOWORD(v380[2]) << 16) | LOWORD(v380[1]);
            v279 = v374;
            if ( v374 >= 0x200 )
            {
              MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
              v385 = MouseKeyFlags;
              v279 = v374;
            }
            if ( (v279 - 171 <= 2 || v279 - 523 <= 2) && !(_DWORD)v64 )
            {
              MouseKeyFlags |= *(_QWORD *)&v400[2];
              v385 = MouseKeyFlags;
            }
            v280 = *(_QWORD *)(a1 + 608);
            if ( v381 == 5
              && v110
              && v280
              && (*(_DWORD *)(v280 + 8) & 0x100) != 0
              && *(_QWORD *)v280
              && (**(_DWORD **)v280 & 1) != 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                (MenuStateOwnerLockxxxUnlock *)&v434,
                (struct tagMENUSTATE *)v280);
              if ( (unsigned int)xxxCallHandleMenuMessages(v280, v80, v374, MouseKeyFlags, v382) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v10 = 0LL;
                v11 = v376;
                LOBYTE(v8) = v375;
                if ( v434 )
                  xxxUnlockMenuStateInternal(v434, 0);
                goto LABEL_36;
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              if ( v434 )
                xxxUnlockMenuStateInternal(v434, 0);
            }
            v281 = v378;
            if ( !v378 )
              goto LABEL_811;
            v8 = v391;
            break;
        }
LABEL_758:
        LODWORD(v64) = DWORD2(v400[1]);
LABEL_759:
        if ( ((DWORD2(v400[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v400[7]) != 50 )
        {
          v380[0] = v64;
          v382 = *((_QWORD *)&v400[2] + 1);
          v385 = *(_QWORD *)&v400[2];
LABEL_786:
          if ( v110 )
          {
            if ( IsMiPActive(v9, 0LL) && v378 )
            {
              if ( v80 )
                v287 = *(_QWORD *)v80;
              else
                v287 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v9 + 1280) + 48LL) = v287;
              if ( (*(_DWORD *)(*(_QWORD *)(v9 + 1280) + 36LL) & 0x400000) != 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v288 = IsCompositionInputWindow((const struct tagWND *)v80);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                if ( !v288 )
                  *(_DWORD *)(*(_QWORD *)(v9 + 1280) + 36LL) &= ~0x400000u;
              }
              MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)v80);
              SetMiPWindowFlags((struct tagWND *)v80, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
              if ( ((DWORD2(v400[1]) - 578) & 0xFFFFFFFB) != 0 )
              {
                if ( ((DWORD2(v400[1]) - 579) & 0xFFFFFFFB) == 0 )
                  **(_DWORD **)(v9 + 1280) &= ~8u;
              }
              else
              {
                v290 = 0;
                if ( DWORD2(v400[1]) == 578 )
                  v290 = 8;
                **(_DWORD **)(v9 + 1280) = v290 | **(_DWORD **)(v9 + 1280) & 0xFFFFFFF7;
              }
            }
            else
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
            }
          }
          v281 = v378;
          if ( CTouchProcessor::IsPointerMessageTouchpad(
                 gpTouchProcessor,
                 (struct tagTHREADINFO *)v9,
                 *((unsigned __int64 *)&v400[2] + 1),
                 v378) )
          {
            if ( !v110
              && !(unsigned int)IsPTPAllowedOnThread(
                                  (struct tagTHREADINFO *)v9,
                                  DWORD2(v400[1]),
                                  *(unsigned __int64 *)&v400[2]) )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
            }
            v291 = v382;
            if ( (_DWORD)v64 == 595 )
              v291 = -1LL;
            v382 = v291;
          }
          goto LABEL_811;
        }
        EtwTraceBeginPointerMessageRetrieve(v8, LOWORD(v400[2]), (unsigned int)v64);
        LODWORD(v64) = (_DWORD)a8;
        v10 = 0LL;
        v282 = (unsigned int)xxxRetrievePointerInputMessage(
                               v9,
                               a3,
                               a4,
                               a5,
                               1,
                               0,
                               &v377,
                               v8,
                               (__int64)&ThreadDesktopWindow,
                               (__int64)v380,
                               (__int64)&v385,
                               (__int64)&v382,
                               &v387,
                               a8,
                               v372);
        InputTraceLogging::Pointer::RetrieveMessage(v8, 0LL, v282);
        EtwTraceEndPointerMessageRetrieve(v8, LOWORD(v400[2]), DWORD2(v400[1]));
        v80 = (unsigned __int64)ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ThreadLockExchange((__int64)ThreadDesktopWindow, (__int64)&v413);
        v283 = v282 - 1;
        if ( !v283 )
        {
          LODWORD(v64) = v380[0];
          v110 = v377;
          goto LABEL_786;
        }
        v284 = v283 - 1;
        if ( !v284 )
        {
          if ( v387 )
          {
            v406 = *(_QWORD *)(v80 + 16);
            LockExchangeW32Thread(v406, (__int64)&v437);
          }
          goto LABEL_348;
        }
        v285 = v284 - 1;
        if ( v285 )
        {
          *a8 = 0LL;
          if ( v285 == 1 )
            goto LABEL_41;
          v250 = v380[0];
          MouseKeyFlags = v385;
          v110 = v377;
        }
        else
        {
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          xxxDefPointerProc(v286, DWORD2(v400[1]), *(_QWORD *)&v400[2], *((_QWORD *)&v400[2] + 1));
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          *a8 = 0LL;
          v250 = v380[0];
          MouseKeyFlags = v385;
          v110 = v377;
        }
LABEL_773:
        xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
        if ( v390 )
        {
          if ( ((*(_BYTE *)(v9 + 680) | *(_BYTE *)(**(_QWORD **)(v9 + 464) + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            xxxCallHook(6, v250, (__int64)v416, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          }
          v390 = 0;
        }
        if ( v394 )
        {
          if ( ((*(_BYTE *)(v9 + 680) | *(_BYTE *)(**(_QWORD **)(v9 + 464) + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            xxxCallHook(7, MouseKeyFlags, v382, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          }
          v394 = 0;
        }
        v94 = v110 == 0;
        v10 = 0LL;
        v11 = v376;
        LOBYTE(v8) = v375;
        if ( !v94 )
          goto LABEL_36;
      }
      if ( DWORD2(v400[1]) == 522 )
        break;
      switch ( DWORD2(v400[1]) )
      {
        case 0x23:
          v382 = *((_QWORD *)&v400[2] + 1);
          if ( v80 )
          {
            v106 = *(_QWORD *)(v80 + 16);
            if ( v106 != v9 )
            {
              if ( *(_QWORD *)(v106 + 432) == *(_QWORD *)(v9 + 432) )
              {
                v107 = v386;
                if ( !v386 )
                {
                  v107 = *(_QWORD *)(v80 + 16);
                  LockExchangeW32Thread(v106, (__int64)&v430);
                }
                goto LABEL_349;
              }
LABEL_381:
              MouseKeyFlags = v385;
LABEL_382:
              v110 = v377;
              goto LABEL_772;
            }
          }
          if ( !(unsigned int)MiPCheckMsgFilter(v8, DWORD2(v400[1]), a4, a5) )
            goto LABEL_348;
          if ( !v377 )
            goto LABEL_810;
          goto LABEL_458;
        case 0xFE:
          goto LABEL_445;
        case 0xFF:
          v382 = *((_QWORD *)&v400[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v400[2];
          v385 = *(_QWORD *)&v400[2];
          v80 = 0LL;
          ThreadDesktopWindow = 0LL;
          v150 = 0LL;
          v64 = 0LL;
          if ( *((_QWORD *)&v400[2] + 1) )
          {
            v151 = HMValidateHandle(*((unsigned __int64 *)&v400[2] + 1), 0x12u);
            v150 = 0LL;
            if ( v151 )
            {
              v80 = *(_QWORD *)(v151 + 24);
              ThreadDesktopWindow = (struct tagWND *)v80;
              v150 = v80;
              v64 = v80;
            }
          }
          if ( !v150 )
          {
            v152 = *(_QWORD *)(v9 + 432);
            v80 = *(_QWORD *)(v152 + 112);
            ThreadDesktopWindow = (struct tagWND *)v80;
            v64 = v80;
            if ( !v80 )
            {
              v80 = *(_QWORD *)(v152 + 120);
              ThreadDesktopWindow = (struct tagWND *)v80;
              v64 = v80;
              if ( !v80 )
                goto LABEL_382;
            }
          }
          ThreadLockExchangeAlways(v80, (__int64)&v413);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v80, v8, &v387, &v377, a8) )
            goto LABEL_348;
          v153 = v387;
          if ( !v387 )
            goto LABEL_330;
          v64 += 16LL;
          if ( *(_QWORD *)(*(_QWORD *)v64 + 432LL) != *(_QWORD *)(v9 + 432) )
            goto LABEL_382;
          if ( (unsigned int)IsInsideMenuLoop(v9) )
          {
            v154 = *(_QWORD *)(**(_QWORD **)(v9 + 608) + 8LL);
          }
          else
          {
            v155 = *(_QWORD *)(v9 + 672);
            if ( !v155 )
              goto LABEL_328;
            v154 = *(_QWORD *)(v155 + 16);
          }
          if ( v154 )
          {
            v80 = v154;
            ThreadDesktopWindow = (struct tagWND *)v154;
            v64 = v154 + 16;
            v153 = *(_QWORD *)(v154 + 16) != v404;
            v387 = v153;
            ThreadLockExchangeAlways(v154, (__int64)&v413);
          }
LABEL_328:
          if ( !v396 )
          {
            v396 = *(_QWORD *)v64;
            v412 = v396;
            LockExchangeW32Thread(v396, (__int64)&v440);
          }
LABEL_330:
          if ( !a4 && a5 == -1 )
            goto LABEL_338;
          if ( a4 <= a5 )
          {
            LOBYTE(v8) = v375;
            if ( v374 < a4 || v374 > a5 )
              goto LABEL_42;
          }
          else if ( v374 >= a5 && v374 <= a4 )
          {
            goto LABEL_41;
          }
LABEL_338:
          v156 = CheckPwndFilter(v80, a3);
          LOBYTE(v8) = v375;
          if ( v156 )
          {
            if ( v153 )
            {
LABEL_348:
              v107 = v386;
LABEL_349:
              v157 = v383;
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 72LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(v9 + 432),
                  4u,
                  0x12u,
                  0x20u,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(v9 + 432),
                  v9,
                  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 64LL));
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 64LL) = 0LL;
              **(_DWORD **)(v9 + 448) &= ~1u;
              v158 = v396;
              if ( v157 || v107 || v407 || v396 || v406 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                if ( v407 )
                  v308 = (__int128 *)(v407 + 392);
                else
                  v308 = (__int128 *)gObjDummyLock;
                if ( v406 )
                  v309 = (__int128 *)(v406 + 392);
                else
                  v309 = (__int128 *)gObjDummyLock;
                v310 = gObjDummyLock;
                if ( v158 )
                  v310 = v158 + 392;
                v311 = gObjDummyLock;
                if ( v107 )
                  v311 = v107 + 392;
                v312 = gObjDummyLock;
                if ( v157 )
                  v312 = v157 + 392;
                v409 = gpsiLock;
                v410 = *((_QWORD *)&gpsiLock + 2);
                v409 = *(_OWORD *)(v9 + 392);
                v410 = *(_QWORD *)(v9 + 408);
                v409 = *(_OWORD *)v312;
                v410 = *(_QWORD *)(v312 + 16);
                v409 = *(_OWORD *)v311;
                v410 = *(_QWORD *)(v311 + 16);
                v409 = *(_OWORD *)v310;
                v410 = *(_QWORD *)(v310 + 16);
                v409 = *v309;
                v410 = *((_QWORD *)v309 + 2);
                v409 = *v308;
                v410 = *((_QWORD *)v308 + 2);
                if ( v157 )
                {
                  SetWakeBit(v157, 0x4001u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4001u, 0);
                }
                if ( v107 )
                {
                  SetWakeBit(v107, 0x4006u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4006u, 0);
                }
                if ( v158 )
                {
                  SetWakeBit(v158, 0x4400u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4400u, 0);
                }
                if ( v406 )
                {
                  SetWakeBit(v406, 0x5000u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5000u, 0);
                }
                v313 = v407;
                if ( v407 )
                {
                  if ( (*(_DWORD *)(v407 + 488) & 1) == 0 )
                  {
                    *(_WORD *)(*(_QWORD *)(v407 + 448) + 6LL) |= 0x2040u;
                    *(_WORD *)(*(_QWORD *)(v313 + 448) + 4LL) |= 0x2040u;
                    if ( (*(_WORD *)(*(_QWORD *)(v313 + 448) + 10LL) & 0x2040) != 0 )
                      KeSetEvent(*(PRKEVENT *)(v313 + 736), 2, 0);
                  }
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
                }
                else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  *(_WORD *)(*(_QWORD *)(v9 + 448) + 8LL) |= *(_WORD *)(*(_QWORD *)(v9 + 448) + 6LL) & 0x5C07;
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5C07u, 0);
                  *(_WORD *)(*(_QWORD *)(v9 + 448) + 4LL) &= 0xA3F8u;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              }
              else
              {
                *(_WORD *)(*(_QWORD *)(v9 + 448) + 8LL) = 0;
                ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
              }
              v314 = KeGetCurrentThread();
              v315 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v159)
                || (v319 = PsGetCurrentProcess(v317, v316, v318),
                    v320 = PsGetProcessSessionIdEx(v319),
                    v322 = PsGetCurrentThreadProcess(v321),
                    v320 == (unsigned int)PsGetProcessSessionIdEx(v322)) )
              {
                v323 = (__int64 *)PsGetThreadWin32Thread(v314);
                if ( v323 )
                  v315 = *v323;
              }
              *(_QWORD *)(v315 + 16) = v437;
              v324 = v438;
              if ( v438 )
                v439();
              v325 = KeGetCurrentThread();
              v326 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v324)
                || (v330 = PsGetCurrentProcess(v328, v327, v329),
                    v331 = PsGetProcessSessionIdEx(v330),
                    v333 = PsGetCurrentThreadProcess(v332),
                    v331 == (unsigned int)PsGetProcessSessionIdEx(v333)) )
              {
                v334 = (__int64 *)PsGetThreadWin32Thread(v325);
                if ( v334 )
                  v326 = *v334;
              }
              *(_QWORD *)(v326 + 16) = v440;
              v335 = v441;
              if ( v441 )
                v442();
              v336 = KeGetCurrentThread();
              v337 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v335)
                || (v341 = PsGetCurrentProcess(v339, v338, v340),
                    v342 = PsGetProcessSessionIdEx(v341),
                    v344 = PsGetCurrentThreadProcess(v343),
                    v342 == (unsigned int)PsGetProcessSessionIdEx(v344)) )
              {
                v345 = (__int64 *)PsGetThreadWin32Thread(v336);
                if ( v345 )
                  v337 = *v345;
              }
              *(_QWORD *)(v337 + 16) = v424;
              v346 = v425;
              if ( v425 )
                v426();
              v347 = KeGetCurrentThread();
              v348 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v346)
                || (v352 = PsGetCurrentProcess(v350, v349, v351),
                    v353 = PsGetProcessSessionIdEx(v352),
                    v355 = PsGetCurrentThreadProcess(v354),
                    v353 == (unsigned int)PsGetProcessSessionIdEx(v355)) )
              {
                v356 = (__int64 *)PsGetThreadWin32Thread(v347);
                if ( v356 )
                  v348 = *v356;
              }
              *(_QWORD *)(v348 + 16) = v430;
              v357 = v431;
              if ( v431 )
                v432();
              v358 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v357)
                || (v362 = PsGetCurrentProcess(v360, v359, v361),
                    v363 = PsGetProcessSessionIdEx(v362),
                    v365 = PsGetCurrentThreadProcess(v364),
                    v363 == (unsigned int)PsGetProcessSessionIdEx(v365)) )
              {
                v368 = (__int64 *)PsGetThreadWin32Thread(v358);
                if ( v368 )
                  v10 = *v368;
              }
              *(_QWORD *)(v10 + 16) = v427;
              v369 = v428;
              if ( v428 )
                v429();
              ThreadUnlock1(v369, v366, v367);
              goto LABEL_904;
            }
            if ( !v377 )
              goto LABEL_810;
LABEL_458:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
            goto LABEL_810;
          }
          goto LABEL_42;
        case 0x100:
        case 0x104:
          v397 = 1;
          if ( (*(_DWORD *)(v9 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
            goto LABEL_348;
          v108 = *(_QWORD *)&v400[2];
          v109 = LOBYTE(v400[2]);
          v110 = v377;
          if ( v377 && (DWORD1(v400[6]) & 0x40000) != 0 )
            goto LABEL_175;
          if ( LOBYTE(v400[2]) != 18LL )
          {
            *(_DWORD *)(*(_QWORD *)(v9 + 432) + 388LL) &= 0xFFFFFFF3;
            v108 = *(_QWORD *)&v400[2];
          }
          v111 = *(_BYTE *)(*(_QWORD *)(v9 + 432) + 232LL);
          v112 = v111 & 0x10;
          if ( v109 != 44 )
            goto LABEL_162;
          if ( (v111 & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 876) & 0x20) != 0 )
              goto LABEL_162;
LABEL_154:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
            if ( v112 || (DWORD2(v400[2]) & 0xFF0000) == 0x10000LL )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 120LL);
              v113 = v64 == 0;
              if ( !v64 )
                goto LABEL_160;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v64 = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v64);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            else
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 456) + 8LL) + 24LL);
            }
            v113 = v64 == 0;
LABEL_160:
            v10 = 0LL;
            v11 = v376;
            LOBYTE(v8) = v375;
            if ( !v113 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v114 = HIDWORD(v400[7]) != 1;
              *(_QWORD *)&v422 = *(_QWORD *)(v9 + 416);
              *(_QWORD *)(v9 + 416) = &v422;
              *((_QWORD *)&v422 + 1) = v64;
              HMLockObject(v64);
              xxxSnapWindow(v64, v114);
              ThreadUnlock1(v116, v115, v117);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
            goto LABEL_36;
          }
          if ( (*(_DWORD *)(v9 + 876) & 0x10) == 0 )
            goto LABEL_154;
LABEL_162:
          if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
          {
            v118 = v109 | 0x400;
            if ( (v111 & 0x10) == 0 )
              v118 = v109;
            v119 = v118 | 0x200;
            if ( (v111 & 4) == 0 )
              v119 = v118;
            v120 = v119;
            LODWORD(v120) = v119 | 0x100;
            if ( (v111 & 1) == 0 )
              v120 = v119;
            v121 = HotKeyToWindow(v120);
            v122 = (__int64 *)v121;
            if ( v121 )
            {
              if ( *(_QWORD *)(v9 + 456) == *(_QWORD *)(*(_QWORD *)(v121 + 16) + 456LL) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                v10 = 0LL;
                PostTransformableMessage(
                  *(struct tagWND **)(*(_QWORD *)(v9 + 432) + 120LL),
                  0x112u,
                  0xF150uLL,
                  *v122,
                  0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
LABEL_174:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
                v11 = v376;
                LOBYTE(v8) = v375;
                goto LABEL_36;
              }
            }
          }
LABEL_175:
          if ( v109 == 231 )
          {
            *(_WORD *)(v9 + 874) = WORD1(v108);
            v108 = 231LL;
          }
LABEL_178:
          v123 = (unsigned __int8)v108;
          if ( (unsigned __int8)v108 == 231LL )
            v108 = 231LL;
          *(_QWORD *)&v400[2] = v108;
          if ( !v110 || (DWORD1(v400[6]) & 0x40000) == 0 )
          {
            if ( WPP_MAIN_CB.DeviceLock.Header.LockNV )
            {
              if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE10(v400[2]) == 41 )
              {
                if ( v110 )
                {
                  v124 = *(_QWORD *)(v9 + 432);
                  if ( (*(_BYTE *)(v124 + 232) & 0x15) == 0
                    && (*(_BYTE *)(v124 + 250) & 0x40) == 0
                    && (*(_BYTE *)(v124 + 251) & 1) == 0 )
                  {
                    v125 = *(const struct tagWND **)(v124 + 112);
                    v64 = (unsigned __int64)v125;
                    if ( !v125 )
                    {
                      v125 = *(const struct tagWND **)(v124 + 120);
                      v64 = (unsigned __int64)v125;
                    }
                    if ( !v64 || *((_QWORD *)v125 + 2) == v9 )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
                      v10 = 0LL;
                      v11 = v376;
                      LOBYTE(v8) = v375;
                      if ( !v397 && v64 )
                      {
                        v468 = *(_QWORD *)v125;
                        v469 = 80;
                        v470 = 0LL;
                        v471 = 0LL;
                        v472 = 0;
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                        xxxCallCtfHook(3, 0, 1LL, (__int64)&v468);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                      }
                      goto LABEL_36;
                    }
                    LODWORD(v64) = v374;
                  }
                }
              }
            }
          }
          if ( v123 == 121 )
          {
            LODWORD(v64) = v64 | 4;
            v374 = v64;
            v380[0] = v64;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 432) + 232LL) & 4) != 0 && v123 == 27 )
          {
            LODWORD(v64) = v64 | 4;
            v374 = v64;
            v380[0] = v64;
          }
          if ( (*(_DWORD *)(v9 + 488) & 8) == 0 )
            *((_QWORD *)&v400[2] + 1) &= ~0x2000000uLL;
LABEL_205:
          MouseKeyFlags = LOBYTE(v400[2]);
          v127 = *(_QWORD *)(v9 + 432);
          v80 = *(_QWORD *)(v127 + 112);
          ThreadDesktopWindow = (struct tagWND *)v80;
          v128 = v80;
          if ( !v80 )
          {
            v80 = *(_QWORD *)(v127 + 120);
            v128 = v80;
            ThreadDesktopWindow = (struct tagWND *)v80;
            if ( !v80 )
              goto LABEL_772;
            if ( (unsigned int)(v64 - 256) <= 3 )
            {
              v374 = v64 + 4;
              v380[0] = v64 + 4;
            }
          }
          ThreadLockExchangeAlways(v80, (__int64)&v413);
          v129 = (__int64 *)(v128 + 16);
          v130 = *v129;
          LODWORD(v64) = *v129 != v404;
          v387 = v64;
          if ( v130 != v411 )
          {
            if ( *(_QWORD *)(v130 + 432) != *(_QWORD *)(v9 + 432) )
              goto LABEL_772;
            if ( (unsigned int)IsInsideMenuLoop(v9) )
            {
              v132 = *(_QWORD *)(**(_QWORD **)(v9 + 608) + 8LL);
LABEL_215:
              if ( v132 )
              {
                v80 = v132;
                ThreadDesktopWindow = (struct tagWND *)v132;
                v129 = (__int64 *)(v132 + 16);
                LODWORD(v64) = *(_QWORD *)(v132 + 16) != v131;
                v387 = v64;
                ThreadLockExchangeAlways(v132, (__int64)&v413);
              }
            }
            else
            {
              v133 = *(_QWORD *)(v9 + 672);
              if ( v133 )
              {
                v132 = *(_QWORD *)(v133 + 16);
                goto LABEL_215;
              }
            }
            if ( !v383 )
            {
              v383 = *v129;
              v405 = v383;
              LockExchangeW32Thread(v383, (__int64)&v427);
            }
          }
          if ( !a4 && a5 == -1 )
          {
            v134 = v374;
          }
          else
          {
            v134 = v374;
            if ( a4 <= a5 )
            {
              if ( v374 < a4 || v374 > a5 )
              {
LABEL_46:
                v10 = 0LL;
                goto LABEL_41;
              }
            }
            else if ( v374 >= a5 && v374 <= a4 )
            {
              v10 = 0LL;
              goto LABEL_41;
            }
          }
          if ( !(unsigned int)CheckPwndFilter(v80, a3) )
            goto LABEL_46;
          if ( (_DWORD)v64 )
            goto LABEL_844;
          if ( v110 )
          {
            if ( (DWORD1(v400[6]) & 0x40000) != 0 )
              goto LABEL_253;
            if ( !(unsigned int)IsInsideMenuLoop(v9) )
            {
              if ( MouseKeyFlags == 93 && v134 == 257 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                PostTransformableMessage((struct tagWND *)v80, 0x7Bu, *(_QWORD *)v80, -1LL, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              }
              if ( MouseKeyFlags == 112 && v134 == 256 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                PostMessage(v80, 77, 0, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              }
            }
          }
          if ( MouseKeyFlags == 16 )
          {
            v135 = DWORD2(v400[2]) & 0x1000000;
            if ( !v397 )
            {
              v136 = 1;
              if ( (DWORD2(v400[2]) & 0x1000000) == 0 )
                v136 = 4;
              if ( ((unsigned __int8)v136 & *(_BYTE *)(*(_QWORD *)(v9 + 432) + 268LL)) != 0
                && (unsigned int)IsDesktopApp(*(_QWORD *)(v9 + 424))
                && (*(_DWORD *)(v9 + 488) & 8) == 0 )
              {
                v10 = 0LL;
                *(_QWORD *)&v400[2] = (v135 != 0) + 160LL;
                goto LABEL_174;
              }
            }
          }
          v403 = *(unsigned __int8 *)((MouseKeyFlags >> 2) + *(_QWORD *)(v9 + 432) + 228) & (1 << (2
                                                                                                 * (MouseKeyFlags & 3)));
          if ( !v403 )
          {
LABEL_253:
            v137 = v391;
            goto LABEL_254;
          }
          v137 = v391;
          if ( !v110 )
            goto LABEL_260;
          if ( (unsigned __int64)v391 > 1 )
            *((_QWORD *)v391 + 5) |= 0x40000000uLL;
LABEL_254:
          if ( !v110 )
            goto LABEL_260;
          if ( (DWORD1(v400[6]) & 0x40000) != 0
            || (unsigned __int64)v137 <= 1
            || (*(_DWORD *)(v9 + 1232) & 0x10000000) == 0 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
LABEL_260:
            v64 = (unsigned __int64)v395;
            goto LABEL_261;
          }
          v64 = (unsigned __int64)xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 0);
          v395 = (struct tagQMSG *)v64;
LABEL_261:
          v382 = *((_QWORD *)&v400[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v400[2];
          v385 = *(_QWORD *)&v400[2];
          if ( v403 )
            v382 = *((_QWORD *)&v400[2] + 1) | 0x40000000LL;
          if ( v134 == 257 || v134 == 261 )
            v382 |= 0x80000000uLL;
          v138 = *(_QWORD *)(v9 + 432);
          if ( (*(_BYTE *)(v138 + 232) & 0x10) != 0 )
            v382 |= 0x20000000uLL;
          v139 = *(_QWORD *)(v9 + 608);
          if ( v139 && (*(_DWORD *)(v139 + 8) & 1) != 0 )
            v382 |= 0x10000000uLL;
          if ( (*(_DWORD *)(v138 + 388) & 0x4000) != 0 )
            v382 |= 0x8000000uLL;
          if ( (v420 || gpImeHotKeyListHeader) && (DWORD1(v400[6]) & 0x40000) == 0 )
          {
            if ( !v110 )
              goto LABEL_303;
            if ( (!v139 || (*(_DWORD *)(v139 + 8) & 1) == 0) && (*(_DWORD *)(v9 + 488) & 0x2000000) == 0 )
            {
              v140 = v400[2];
              if ( *(_QWORD *)&v400[2] == 231LL )
                v140 = (*(unsigned __int16 *)(v9 + 874) << 16) | 0xE7;
              *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v400[7] + 1);
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v141 = xxxImmProcessKey(*(_QWORD *)(v9 + 432), v80, v134, v140, v382);
              v142 = v141;
              v399 = v141;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              if ( (v142 & 0x11) != 0 )
              {
                if ( v64 )
                  FreeQEntry(v64);
                v395 = 0LL;
                goto LABEL_772;
              }
            }
          }
          if ( !v110 )
            goto LABEL_303;
          v394 = 1;
          LODWORD(v64) = 0;
          if ( (DWORD1(v400[6]) & 0x40000) != 0 )
            goto LABEL_302;
          v143 = *(_QWORD *)(v9 + 432);
          v144 = *(_QWORD *)(v143 + 408);
          *(_QWORD *)(v143 + 408) = *((_QWORD *)&v400[4] + 1);
          *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v400[7] + 1);
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          LODWORD(v64) = xxxCallCtfHook(2, v399 & 2, MouseKeyFlags, v382);
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          *(_QWORD *)(*(_QWORD *)(v9 + 432) + 408LL) = v144;
          v145 = v395;
          if ( !v395 )
            goto LABEL_302;
          if ( (unsigned int)(v64 - 2) > 1
            || (*(_DWORD *)(v9 + 1232) & 0x20000000) != 0
            || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(v9 + 432) + 24LL), v395, 1) )
          {
            FreeQEntry(v145);
            v395 = 0LL;
LABEL_302:
            if ( !(_DWORD)v64 )
            {
LABEL_303:
              if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 8) == 0 )
                goto LABEL_308;
              v394 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
              v146 = 3;
              if ( v110 )
                v146 = 0;
              if ( !(unsigned int)xxxCallHook(v146, MouseKeyFlags, v382, 2) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
LABEL_308:
                if ( v394
                  && v110
                  && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
                  v147 = v382;
                  v148 = MouseKeyFlags;
                  v149 = 7;
                  goto LABEL_312;
                }
                goto LABEL_810;
              }
LABEL_771:
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
            }
LABEL_772:
            v250 = v374;
            goto LABEL_773;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qqq(
              *(_QWORD *)(v9 + 432),
              5u,
              0x12u,
              0x1Fu,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL),
              *(_QWORD *)(v9 + 432),
              *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL));
          }
          *(_QWORD *)(*(_QWORD *)(v9 + 432) + 80LL) = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 24LL);
          if ( (_DWORD)v64 == 2 )
          {
            v11 = 1;
            v376 = 1;
          }
          else
          {
            v11 = v376;
            if ( (_DWORD)v64 == 3 )
              v11 = 2;
            v376 = v11;
          }
          DeferSysPeekMsg(v9, v11);
          v10 = 0LL;
          v395 = 0LL;
          LOBYTE(v8) = v375;
          break;
        case 0x101:
        case 0x105:
          v108 = *(_QWORD *)&v400[2];
          v110 = v377;
          goto LABEL_178;
        case 0x102:
          v110 = v377;
          goto LABEL_205;
        case 0x119:
        case 0x11B:
          goto LABEL_439;
        default:
          goto LABEL_460;
      }
    }
LABEL_372:
    if ( (*(_DWORD *)(v9 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
      goto LABEL_348;
    if ( (unsigned int)IsInsideMenuLoop(v9) )
      goto LABEL_381;
    if ( (DWORD1(v400[6]) & 0x800000) != 0 )
    {
      v80 = *(_QWORD *)(*(_QWORD *)(v9 + 432) + 112LL);
      ThreadDesktopWindow = (struct tagWND *)v80;
    }
    else
    {
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
      if ( v80 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v80) )
      {
        LODWORD(v64) = 1;
        if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v80) )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
          goto LABEL_381;
        }
      }
      else
      {
        ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
        LODWORD(v64) = 0;
      }
      v461[2] = 0LL;
      v163 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v461[0] = *(_QWORD *)(v163 + 416);
      *(_QWORD *)(v163 + 416) = v461;
      v164 = (int)ThreadDesktopWindow;
      v461[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        HMLockObject(ThreadDesktopWindow);
      v165 = xxxDCEWindowHitTest(
               v164,
               512,
               v400[2],
               DWORD2(v400[2]),
               *(struct tagPOINT *)&v400[5],
               (__int64)&v381,
               8 * (int)v64 + 1);
      v80 = HMValidateHandleNoSecure(v165, 1);
      ThreadDesktopWindow = (struct tagWND *)v80;
      v166 = (struct tagWND *)HMValidateHandleNoSecure(v165, 1);
      InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v400, (const struct tagPOINT *)&v400[5], v166);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
      ThreadUnlock1(v168, v167, v169);
      LODWORD(v64) = v380[0];
      v374 = v380[0];
    }
    if ( !v80 )
      goto LABEL_381;
    ThreadLockExchangeAlways(v80, (__int64)&v413);
    v170 = *(_QWORD *)(v80 + 16);
    v387 = v170 != v404;
    v171 = v411;
    if ( v170 != v411 )
    {
      if ( *(_QWORD *)(v170 + 432) != *(_QWORD *)(v9 + 432) )
        goto LABEL_381;
      if ( !v383 )
      {
        v383 = v170;
        v405 = v170;
        LockExchangeW32Thread(v170, (__int64)&v427);
      }
    }
    if ( !(unsigned int)MiPCheckMsgFilter(v8, (unsigned int)v64, a4, a5) || !(unsigned int)CheckPwndFilter(v80, a3) )
      goto LABEL_41;
    if ( v170 != v171 )
      goto LABEL_348;
    if ( !v8 || !IsMiPActive(v9, (__int64)v8) )
    {
      v110 = v377;
      goto LABEL_418;
    }
    if ( (*((_DWORD *)v8 + 25) & 0x800) != 0 )
    {
      memset(v494, 0, sizeof(v494));
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
      v409 = *(_OWORD *)(v80 + 56);
      v410 = *(_QWORD *)(v80 + 72);
      v172 = *(_QWORD *)(v80 + 272);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
      if ( !v172 )
        *((_DWORD *)v8 + 25) &= ~0x2000u;
      v110 = v377;
      if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v494, v64, v8, (struct tagWND *)v80, v377) )
      {
        if ( v110 || !(unsigned int)IsMiPEnabledForWindow(v80) )
          *((_DWORD *)v8 + 25) &= ~0x800u;
        goto LABEL_418;
      }
      v400[0] = v494[0];
      v400[1] = v494[1];
      v400[2] = v494[2];
      v400[3] = v494[3];
      v400[4] = v494[4];
      v400[5] = v494[5];
      v400[6] = v494[6];
      v400[7] = v494[7];
      v400[8] = v494[8];
      v400[9] = v494[9];
      v378 = 1;
      v393 = 1;
      if ( v110 || !(unsigned int)IsMiPEnabledForWindow(v80) )
        *((_DWORD *)v8 + 25) &= ~0x800u;
      goto LABEL_758;
    }
    v110 = v377;
    if ( !v377 )
      goto LABEL_420;
    if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)v8 + 6)) )
      goto LABEL_418;
    if ( (unsigned int)IsGenuineMouseInput((char *)v8 + 120) )
    {
      v173 = *(_DWORD **)(v9 + 1280);
      if ( v173 )
      {
        if ( (*v173 & 2) == 0 && (*v173 & 4) == 0 )
        {
LABEL_414:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
          v10 = 0LL;
          v11 = v376;
          LOBYTE(v8) = v375;
          continue;
        }
      }
    }
    break;
  }
  v174 = *(_DWORD **)(v9 + 1280);
  if ( v174 )
    *v174 &= ~2u;
LABEL_418:
  if ( v110 )
  {
    v175 = 1;
    xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v400, 1u);
  }
  else
  {
LABEL_420:
    v175 = 1;
  }
  v176 = GetMouseKeyFlags(*(_QWORD *)(v9 + 432));
  MouseKeyFlags = *(_QWORD *)&v400[2] | v176;
  v385 = MouseKeyFlags;
  v380[1] = SWORD4(v400[2]);
  v380[2] = SWORD5(v400[2]);
  PhysicalToLogicalDPIPointWithHitTest(&v380[1], &v380[1], 0LL, v80);
  v382 = (LOWORD(v380[2]) << 16) | LOWORD(v380[1]);
  *(_QWORD *)((char *)&v400[3] + 4) = *(_QWORD *)&v380[1];
  v416[0] = *(_QWORD *)&v380[1];
  v416[1] = *(_QWORD *)v80;
  LODWORD(v417) = 0;
  *((_QWORD *)&v417 + 1) = *((_QWORD *)&v400[4] + 1);
  LODWORD(v418) = v400[2];
  if ( v110 )
  {
    v390 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
    if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v416) )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  }
  if ( ((*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_DWORD *)(v9 + 680)) & 0x100) != 0 )
  {
    v390 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
    if ( (unsigned int)xxxCallMouseHook((unsigned int)v64, v416, v110) )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  }
  else
  {
    v175 = v390;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
    goto LABEL_435;
  v177 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v388 = 0;
  v388 = *(_QWORD *)(v177 + 248) != 0LL;
  if ( !v388 )
  {
    LODWORD(v64) = v380[0];
    v110 = v377;
    goto LABEL_434;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  v110 = v377;
  LODWORD(v64) = v380[0];
  v374 = v380[0];
  if ( xxxClientCallLocalMouseHooks(v380[0], v416, (unsigned int)v377) )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
    MouseKeyFlags = v385;
    goto LABEL_772;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
LABEL_434:
  v80 = (unsigned __int64)ThreadDesktopWindow;
LABEL_435:
  if ( v175
    && v110
    && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 464) + 16LL) | *(_BYTE *)(v9 + 680)) & 0x40) != 0 )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
    v148 = (unsigned int)v64;
    v147 = (__int64)v416;
    v149 = 6;
LABEL_312:
    xxxCallHook(v149, v148, v147, 5);
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  }
LABEL_810:
  v281 = v378;
LABEL_811:
  if ( *(_QWORD *)(v9 + 764) != *(_QWORD *)((char *)&v400[3] + 4) )
    *(_DWORD *)(v9 + 488) |= 0x100000u;
  v292 = v391;
  if ( (unsigned __int64)v391 > 1 && (BYTE4(v400[6]) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v391 + 6) == 512 )
    {
      v293 = 0LL;
      if ( v80 )
        v293 = *(_QWORD *)v80;
      *((_QWORD *)v391 + 2) = v293;
      *((_DWORD *)v292 + 25) |= 0x400u;
    }
    *((_QWORD *)v292 + 8) = v382;
  }
  *(_QWORD *)(v9 + 764) = *(_QWORD *)((char *)&v400[3] + 4);
  *(_DWORD *)(v9 + 772) = *(_DWORD *)(*(_QWORD *)(v80 + 40) + 288LL);
  *(_QWORD *)(v9 + 776) = *(_QWORD *)&v400[5];
  *(_DWORD *)(v9 + 568) = v400[3];
  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 408LL) = *((_QWORD *)&v400[4] + 1);
  *(_QWORD *)(*(_QWORD *)(v9 + 432) + 72LL) = 1LL;
  *(_QWORD *)(v9 + 576) = 1LL;
  *(_QWORD *)(v9 + 1240) = *((_QWORD *)&v400[7] + 1);
  *(_DWORD *)(v9 + 1288) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v294 = v401;
  v295 = *(_DWORD *)(v401 + 1232) | 0x20000;
  if ( *(_DWORD *)(v9 + 1244) != 1 )
    v295 = *(_DWORD *)(v401 + 1232) & 0xFFFDFFFF;
  *(_DWORD *)(v401 + 1232) = v295;
  **(_DWORD **)(v9 + 448) &= ~8u;
  **(_QWORD **)(v9 + 480) &= 0x7FFFFFFFuLL;
  v296 = 0LL;
  v297 = v377;
  if ( v377 )
  {
    v298 = *(unsigned __int64 **)(v294 + 480);
    v299 = *v298;
    if ( (BYTE4(v400[6]) & 1) != 0 )
      v300 = v299 | 0x1000;
    else
      v300 = v299 & 0xFFFFFFFFFFFFEFFFuLL;
    *v298 = v300;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  v301 = v380[0];
  TransferWakeBit(v9, v380[0]);
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
  if ( v297 )
  {
    if ( v281 )
    {
      v302 = *(_DWORD **)(v9 + 1280);
      if ( v302 )
      {
        if ( (*v302 & 1) != 0 && (*v302 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)v9);
      }
    }
  }
  if ( ThreadDesktopWindow )
    v296 = *(_QWORD *)ThreadDesktopWindow;
  *(_QWORD *)a2 = v296;
  *(_DWORD *)(a2 + 8) = v301;
  v303 = v385;
  if ( (v399 & 2) != 0 )
    v303 = 229LL;
  *(_QWORD *)(a2 + 16) = v303;
  *(_QWORD *)(a2 + 24) = v382;
  *(_DWORD *)(a2 + 32) = v400[3];
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v400[3] + 4);
  InputTraceLogging::Delivery::ScanSysQueue(
    (const struct tagQMSG *)v400,
    (const struct tagMSG *)a2,
    (const struct tagTHREADINFO *)v9,
    v297 != 0);
  if ( v297 )
  {
    EtwTraceInputProcessDelay(v9);
    *(_DWORD *)(*(_QWORD *)(v9 + 432) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v304 = *(_DWORD *)(a2 + 8);
    if ( v304 == 256 )
    {
      *(_DWORD *)(v9 + 1344) |= 1u;
      *(_QWORD *)(v9 + 1328) = *(_QWORD *)(v9 + 1240);
      *(_DWORD *)(v9 + 1320) = *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)(v9 + 1324) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 1336) = *(_QWORD *)&v400[9];
    }
    else if ( ((v304 - 257) & 0xFFFFFFFB) == 0 )
    {
      *(_DWORD *)(v9 + 1344) &= ~1u;
    }
    v297 = v377;
  }
  EtwTraceRetrieveInputMessage(a2, v297);
  PopAndFreeW32ThreadLock((__int64)&v437);
  PopAndFreeW32ThreadLock((__int64)&v440);
  PopAndFreeW32ThreadLock((__int64)&v424);
  PopAndFreeW32ThreadLock((__int64)&v430);
  PopAndFreeW32ThreadLock((__int64)&v427);
  ThreadUnlock1(v306, v305, v307);
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v373);
  return 1LL;
}
