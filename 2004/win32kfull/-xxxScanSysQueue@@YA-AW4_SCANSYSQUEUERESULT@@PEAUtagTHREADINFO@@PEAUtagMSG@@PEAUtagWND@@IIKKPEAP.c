/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     LockExchangeW32Thread @ 0x1C0007E80 (LockExchangeW32Thread.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00225CC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00229B0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0035504 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostTransformableMessage @ 0x1C0037938 (_PostTransformableMessage.c)
 *     xxxCallMouseHook @ 0x1C0048840 (xxxCallMouseHook.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0050F48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C005CE5C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C0096880 (WPP_RECORDER_SF_qiqdd.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     FreeQEntry @ 0x1C00B06FC (FreeQEntry.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C00B085C (IsHiddenByInputService.c)
 *     xxxDCEWindowHitTest @ 0x1C00B09BC (xxxDCEWindowHitTest.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00B2200 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00B2CE8 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     IsMiPActive @ 0x1C00B2E7C (IsMiPActive.c)
 *     IsMiPEnabledForThread @ 0x1C00B2EC0 (IsMiPEnabledForThread.c)
 *     ThreadLockExchange @ 0x1C00B2F7C (ThreadLockExchange.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00B2FC4 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x1C00B3110 (TransferWakeBit.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00B31C0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     CheckPwndFilter @ 0x1C00B32DC (CheckPwndFilter.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B340C (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FC7C8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     xxxImmProcessKey @ 0x1C0101664 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C0101944 (GetAppImeCompatFlags.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxWindowHitTest @ 0x1C010B314 (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C010B5D0 (ThreadLockExchangeAlways.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C011022C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsInsideMenuLoop @ 0x1C0114F30 (IsInsideMenuLoop.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012B828 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0157ED0 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     strcmp_0 @ 0x1C015BCF2 (strcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D2C18 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01E0030 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E0494 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E0A4C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E0D54 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E16B4 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E17DC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E1808 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x1C01E271C (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E601C (PhysicalToLogicalInPlacePointWithParent.c)
 *     FreePointerMessageParams @ 0x1C01F00C8 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F0D78 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1704 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     GetMessageWindow @ 0x1C0209B48 (GetMessageWindow.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C0232784 (xxxClientCallLocalMouseHooks.c)
 *     MNItemHitTest @ 0x1C02375FC (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C02449C0 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C0244C4C (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0245424 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C0252DA8 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C02583A8 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C025E554 (_W32ExceptionHandler.c)
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
  int v72; // edx
  struct CMultiPerObjectLockExclusivePpiPtiQ *v73; // r9
  const struct tagWND **v74; // rax
  struct tagQMSG *v75; // rdx
  struct tagQMSG *NextSysMsg; // rax
  __int64 v77; // rdx
  PDEVICE_OBJECT v78; // rcx
  __int64 v79; // r8
  int v80; // eax
  unsigned __int64 v81; // r15
  struct _KTHREAD *v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rcx
  unsigned __int64 *v93; // rsi
  __int64 v94; // rcx
  bool v95; // zf
  __int64 v96; // rbx
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rcx
  _QWORD *v105; // rdx
  __int64 v106; // rdx
  int v107; // eax
  int v108; // eax
  int v109; // edx
  __int64 v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // r8
  __int64 v113; // r10
  int v114; // r14d
  char v115; // r9
  int v116; // ebx
  bool v117; // zf
  BOOL v118; // ebx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  unsigned int v122; // ecx
  unsigned int v123; // edx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 *v126; // rbx
  __int64 v127; // rsi
  __int64 v128; // rcx
  const struct tagWND *v129; // rbx
  unsigned __int64 MouseKeyFlags; // rsi
  __int64 v131; // rax
  unsigned __int64 v132; // rbx
  __int64 *v133; // rbx
  __int64 v134; // rcx
  __int64 v135; // rdx
  unsigned __int64 v136; // rcx
  __int64 v137; // rcx
  unsigned int v138; // r13d
  __int64 v139; // rbx
  char v140; // dl
  struct tagQMSG *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  int v144; // ebx
  int v145; // eax
  char v146; // bl
  __int64 v147; // rcx
  __int64 v148; // rbx
  unsigned int *v149; // rbx
  int v150; // ecx
  __int64 v151; // r8
  unsigned __int64 v152; // rdx
  int v153; // ecx
  unsigned __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rax
  int v157; // ebx
  unsigned __int64 v158; // rcx
  __int64 v159; // rcx
  int v160; // eax
  __int64 v161; // r15
  __int64 v162; // rsi
  __int64 v163; // rcx
  InteractiveControlManager *v164; // rax
  int v165; // ebx
  int v166; // ebx
  __int64 v167; // rax
  struct tagWND *v168; // rbx
  unsigned __int64 v169; // rbx
  struct tagWND *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // rbx
  __int64 v175; // rsi
  __int64 v176; // rbx
  _DWORD *v177; // rax
  _DWORD *v178; // rax
  int v179; // ebx
  unsigned int v180; // eax
  __int64 v181; // rcx
  char *v182; // rax
  char v183; // cl
  int v184; // eax
  unsigned int v185; // edx
  unsigned int v186; // r8d
  int v187; // ecx
  int v188; // eax
  int v189; // ebx
  int v190; // r8d
  int v191; // r9d
  __int64 v192; // rax
  __int64 *v193; // rcx
  int v194; // eax
  HWND v195; // rbx
  struct tagWND *v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // r8
  int v204; // ebx
  unsigned int v205; // r8d
  __int64 v206; // r9
  __int64 v207; // rdx
  __int64 v208; // rax
  bool v209; // cf
  int v210; // r8d
  __int64 v211; // rax
  __int64 v212; // rax
  int v213; // eax
  __int64 v214; // rax
  const char *v215; // rcx
  int v216; // r12d
  __int64 v217; // rcx
  __int64 v218; // r13
  struct tagPOINT v219; // r8
  unsigned __int64 v220; // rbx
  int v221; // eax
  int v222; // eax
  __int64 v223; // rcx
  int v224; // ecx
  __int64 v225; // rcx
  unsigned __int16 v226; // si
  __int64 v227; // rdi
  int v228; // eax
  unsigned __int64 v229; // rdx
  unsigned __int64 v230; // rdx
  unsigned __int64 v231; // rdx
  unsigned int v232; // edi
  unsigned int v233; // esi
  __int64 v234; // rcx
  int v235; // eax
  int v236; // r13d
  __int64 v237; // rbx
  __int64 v238; // rax
  char v239; // al
  __int64 v240; // rdx
  int v241; // ecx
  __int64 v242; // rax
  __int64 v243; // r11
  int v244; // r10d
  int v245; // r9d
  int v246; // kr04_4
  int v247; // edx
  __int64 v248; // rcx
  int v249; // eax
  int v250; // ecx
  int TouchTimeFromCPLValue; // ecx
  int v252; // eax
  __int64 v253; // rcx
  unsigned int v254; // ebx
  unsigned __int64 v255; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v259; // rdx
  unsigned __int64 v260; // r8
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  struct tagQMSG *v264; // rbx
  struct tagQMSG *v265; // r8
  struct tagQMSG *v266; // r9
  __int64 v267; // rcx
  int v268; // r9d
  _DWORD *v269; // rax
  _DWORD *v270; // rax
  __int64 v271; // rax
  unsigned __int64 v272; // rbx
  __int64 v273; // rcx
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // rax
  int v280; // r13d
  const struct tagQMSG *v281; // rbx
  int v282; // ebx
  unsigned int v283; // ecx
  __int64 v284; // rbx
  int v285; // ebx
  __int64 v286; // rbx
  int v287; // ebx
  int v288; // ebx
  int v289; // ebx
  __int64 v290; // rcx
  __int64 v291; // rax
  __int64 v292; // rax
  unsigned __int64 v293; // rcx
  int v294; // ebx
  unsigned __int64 MiPWindowFlags; // rax
  int v296; // edx
  __int64 v297; // rax
  struct tagQMSG *v298; // rcx
  unsigned __int64 v299; // rax
  __int64 v300; // r8
  unsigned int v301; // edx
  __int64 v302; // r13
  unsigned int v303; // edi
  unsigned __int64 *v304; // rcx
  unsigned __int64 v305; // rax
  unsigned __int64 v306; // rax
  unsigned int v307; // r15d
  _DWORD *v308; // rax
  unsigned __int64 v309; // rax
  int v310; // eax
  __int64 v311; // rdx
  __int64 v312; // rcx
  __int64 v313; // r8
  __int128 *v314; // r10
  __int128 *v315; // r9
  __int64 v316; // r8
  __int64 v317; // rdx
  __int64 v318; // rcx
  __int64 v319; // rbx
  struct _KTHREAD *v320; // rsi
  __int64 v321; // rdi
  __int64 v322; // rdx
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // rax
  int v326; // ebx
  __int64 v327; // rcx
  __int64 v328; // rax
  __int64 v329; // rdx
  __int64 v330; // r8
  __int64 *v331; // rax
  __int64 v332; // rcx
  struct _KTHREAD *v333; // rsi
  __int64 v334; // rdi
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // rax
  int v339; // ebx
  __int64 v340; // rcx
  __int64 v341; // rax
  __int64 v342; // rdx
  __int64 v343; // r8
  __int64 *v344; // rax
  __int64 v345; // rcx
  struct _KTHREAD *v346; // rsi
  __int64 v347; // rdi
  __int64 v348; // rdx
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // rax
  int v352; // ebx
  __int64 v353; // rcx
  __int64 v354; // rax
  __int64 v355; // rdx
  __int64 v356; // r8
  __int64 *v357; // rax
  __int64 v358; // rcx
  struct _KTHREAD *v359; // rsi
  __int64 v360; // rdi
  __int64 v361; // rdx
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // rax
  int v365; // ebx
  __int64 v366; // rcx
  __int64 v367; // rax
  __int64 v368; // rdx
  __int64 v369; // r8
  __int64 *v370; // rax
  __int64 v371; // rcx
  struct _KTHREAD *v372; // rdi
  __int64 v373; // rdx
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // rax
  int v377; // ebx
  __int64 v378; // rcx
  __int64 v379; // rax
  __int64 v380; // rdx
  __int64 v381; // r8
  __int64 *v382; // rax
  __int64 v383; // rcx
  struct tagQMSG **v384; // [rsp+20h] [rbp-818h]
  int *v385; // [rsp+28h] [rbp-810h]
  int v386; // [rsp+30h] [rbp-808h]
  __int64 v387; // [rsp+40h] [rbp-7F8h]
  __int64 v388; // [rsp+48h] [rbp-7F0h]
  int v389; // [rsp+70h] [rbp-7C8h]
  _BYTE v390[4]; // [rsp+80h] [rbp-7B8h] BYREF
  unsigned int v391; // [rsp+84h] [rbp-7B4h]
  BOOL v392; // [rsp+88h] [rbp-7B0h]
  int v393; // [rsp+8Ch] [rbp-7ACh]
  int v394; // [rsp+90h] [rbp-7A8h] BYREF
  int v395; // [rsp+94h] [rbp-7A4h]
  bool v396; // [rsp+98h] [rbp-7A0h]
  unsigned int v397[3]; // [rsp+9Ch] [rbp-79Ch] BYREF
  int v398; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v399; // [rsp+B0h] [rbp-788h] BYREF
  __int64 v400; // [rsp+B8h] [rbp-780h]
  struct tagWND *ThreadDesktopWindow; // [rsp+C0h] [rbp-778h] BYREF
  unsigned __int64 v402; // [rsp+C8h] [rbp-770h] BYREF
  __int64 v403; // [rsp+D0h] [rbp-768h]
  int v404; // [rsp+D8h] [rbp-760h] BYREF
  bool v405; // [rsp+DCh] [rbp-75Ch]
  bool v406; // [rsp+DDh] [rbp-75Bh]
  int v407; // [rsp+E0h] [rbp-758h]
  struct tagQMSG *v408; // [rsp+E8h] [rbp-750h]
  int v409; // [rsp+F0h] [rbp-748h]
  int v410; // [rsp+F4h] [rbp-744h]
  int v411; // [rsp+F8h] [rbp-740h]
  struct tagQMSG *v412; // [rsp+100h] [rbp-738h]
  __int64 v413; // [rsp+108h] [rbp-730h]
  int v414; // [rsp+110h] [rbp-728h]
  int v415; // [rsp+114h] [rbp-724h]
  int v416; // [rsp+118h] [rbp-720h]
  _OWORD v417[10]; // [rsp+120h] [rbp-718h] BYREF
  __int64 v418; // [rsp+1C0h] [rbp-678h]
  unsigned int v419; // [rsp+1C8h] [rbp-670h]
  int v420; // [rsp+1CCh] [rbp-66Ch]
  __int64 v421; // [rsp+1D0h] [rbp-668h]
  __int64 v422; // [rsp+1D8h] [rbp-660h]
  __int64 v423; // [rsp+1E0h] [rbp-658h]
  __int64 v424; // [rsp+1E8h] [rbp-650h]
  unsigned int v425; // [rsp+1F0h] [rbp-648h]
  __int128 v426; // [rsp+1F8h] [rbp-640h]
  __int64 v427; // [rsp+208h] [rbp-630h]
  __int64 v428; // [rsp+210h] [rbp-628h]
  __int64 v429; // [rsp+218h] [rbp-620h]
  __int64 v430; // [rsp+220h] [rbp-618h] BYREF
  unsigned __int64 v431; // [rsp+228h] [rbp-610h]
  __int64 v432; // [rsp+230h] [rbp-608h]
  __int64 v433[2]; // [rsp+238h] [rbp-600h] BYREF
  __int128 v434; // [rsp+248h] [rbp-5F0h]
  __int64 v435; // [rsp+258h] [rbp-5E0h]
  __int64 v436; // [rsp+260h] [rbp-5D8h]
  int v437; // [rsp+268h] [rbp-5D0h]
  int v438; // [rsp+26Ch] [rbp-5CCh] BYREF
  __int128 v439; // [rsp+270h] [rbp-5C8h] BYREF
  __int64 v440; // [rsp+280h] [rbp-5B8h]
  __int64 v441; // [rsp+288h] [rbp-5B0h] BYREF
  __int64 v442; // [rsp+290h] [rbp-5A8h]
  LONG_PTR (__fastcall *v443)(__int64); // [rsp+298h] [rbp-5A0h]
  __int64 v444; // [rsp+2A0h] [rbp-598h] BYREF
  __int64 v445; // [rsp+2A8h] [rbp-590h]
  LONG_PTR (__fastcall *v446)(__int64); // [rsp+2B0h] [rbp-588h]
  __int64 v447; // [rsp+2B8h] [rbp-580h] BYREF
  __int64 v448; // [rsp+2C0h] [rbp-578h]
  LONG_PTR (__fastcall *v449)(__int64); // [rsp+2C8h] [rbp-570h]
  __int64 v450; // [rsp+2D0h] [rbp-568h]
  struct tagMENUSTATE *v451; // [rsp+2E0h] [rbp-558h] BYREF
  struct InteractiveControlDevice *v452; // [rsp+2E8h] [rbp-550h] BYREF
  struct InteractiveControlInput *v453; // [rsp+2F0h] [rbp-548h] BYREF
  __int64 v454; // [rsp+2F8h] [rbp-540h] BYREF
  __int64 v455; // [rsp+300h] [rbp-538h]
  LONG_PTR (__fastcall *v456)(__int64); // [rsp+308h] [rbp-530h]
  __int64 v457; // [rsp+310h] [rbp-528h] BYREF
  __int64 v458; // [rsp+318h] [rbp-520h]
  LONG_PTR (__fastcall *v459)(__int64); // [rsp+320h] [rbp-518h]
  _DWORD v460[4]; // [rsp+328h] [rbp-510h] BYREF
  __int64 v461; // [rsp+338h] [rbp-500h] BYREF
  __int64 v462; // [rsp+340h] [rbp-4F8h] BYREF
  _DWORD v463[2]; // [rsp+350h] [rbp-4E8h] BYREF
  __int128 v464; // [rsp+358h] [rbp-4E0h]
  int *v465; // [rsp+368h] [rbp-4D0h]
  int v466; // [rsp+370h] [rbp-4C8h]
  int v467; // [rsp+374h] [rbp-4C4h]
  char *v468; // [rsp+378h] [rbp-4C0h]
  __int64 v469; // [rsp+380h] [rbp-4B8h]
  __int64 v470; // [rsp+388h] [rbp-4B0h]
  __int128 v471; // [rsp+390h] [rbp-4A8h]
  __int128 v472; // [rsp+3A0h] [rbp-498h]
  __int128 v473; // [rsp+3B0h] [rbp-488h]
  __int128 v474; // [rsp+3C0h] [rbp-478h]
  __int128 v475; // [rsp+3D0h] [rbp-468h]
  __int128 v476; // [rsp+3E0h] [rbp-458h]
  __int128 v477; // [rsp+3F0h] [rbp-448h]
  _QWORD v478[3]; // [rsp+400h] [rbp-438h] BYREF
  _QWORD v479[7]; // [rsp+418h] [rbp-420h] BYREF
  __int128 v480; // [rsp+450h] [rbp-3E8h]
  __int128 v481; // [rsp+460h] [rbp-3D8h]
  __int128 v482; // [rsp+470h] [rbp-3C8h]
  __int128 v483; // [rsp+480h] [rbp-3B8h]
  __int128 v484; // [rsp+490h] [rbp-3A8h]
  __int64 v485; // [rsp+4A0h] [rbp-398h] BYREF
  int v486; // [rsp+4A8h] [rbp-390h]
  __int128 v487; // [rsp+4ACh] [rbp-38Ch]
  __int128 v488; // [rsp+4BCh] [rbp-37Ch]
  int v489; // [rsp+4CCh] [rbp-36Ch]
  __int128 v490; // [rsp+4D0h] [rbp-368h]
  int v491[2]; // [rsp+4F0h] [rbp-348h]
  __int128 v492; // [rsp+4F8h] [rbp-340h]
  __int64 v493; // [rsp+508h] [rbp-330h]
  __int128 v494; // [rsp+510h] [rbp-328h]
  __int128 v495; // [rsp+520h] [rbp-318h]
  __int128 v496; // [rsp+530h] [rbp-308h]
  __int128 v497; // [rsp+540h] [rbp-2F8h]
  __int128 v498; // [rsp+550h] [rbp-2E8h]
  __int128 v499; // [rsp+560h] [rbp-2D8h]
  __int128 v500; // [rsp+570h] [rbp-2C8h] BYREF
  __int128 v501; // [rsp+580h] [rbp-2B8h]
  __int128 v502; // [rsp+590h] [rbp-2A8h]
  __int128 v503; // [rsp+5A0h] [rbp-298h]
  __int128 v504; // [rsp+5B0h] [rbp-288h]
  __int128 v505; // [rsp+5C0h] [rbp-278h]
  __int128 v506; // [rsp+5D0h] [rbp-268h]
  __int128 v507; // [rsp+5E0h] [rbp-258h]
  __int128 v508; // [rsp+5F0h] [rbp-248h]
  __int128 v509; // [rsp+600h] [rbp-238h]
  _OWORD v510[10]; // [rsp+610h] [rbp-228h] BYREF
  _OWORD v511[10]; // [rsp+6B0h] [rbp-188h] BYREF
  _DWORD v512[40]; // [rsp+750h] [rbp-E8h] BYREF

  v9 = a1;
  v428 = a1;
  v450 = a1;
  v421 = a1;
  v425 = a4;
  v419 = a5;
  v418 = a1;
  v436 = a1;
  memset(v417, 0, sizeof(v417));
  v10 = 0LL;
  v399 = 0LL;
  *(_QWORD *)&v397[1] = 0LL;
  v404 = 0;
  v398 = 0;
  *(_OWORD *)v433 = 0LL;
  v434 = 0LL;
  v435 = 0LL;
  v420 = 0;
  v432 = 0LL;
  v439 = 0LL;
  v440 = 0LL;
  v394 = a6 & 1;
  v409 = 0;
  v11 = 0;
  v393 = 0;
  LOBYTE(v8) = 0;
  v392 = (int)v8;
  v396 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)v390,
    (struct tagTHREADINFO *)v9);
  v412 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 )
  {
    v12 = *(_QWORD *)(v9 + 424);
    if ( *(_QWORD *)(v12 + 80) )
    {
      EtwTraceInputQueueLockedPeekRecursion();
LABEL_904:
      CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
      return 0LL;
    }
  }
  v414 = 0;
  v407 = 0;
  v411 = 0;
  v13 = *(_QWORD *)(v9 + 424);
  if ( !*(_QWORD *)(v13 + 64) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qqq(v12, 4u, 0x12u, 0x1Au, (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids, v13, v9, v9);
      v13 = *(_QWORD *)(v9 + 424);
    }
    *(_QWORD *)(v13 + 64) = v9;
    **(_DWORD **)(v9 + 440) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v14 = *(_QWORD *)(v9 + 424);
    v15 = *(_DWORD *)(v14 + 388);
    if ( (a6 & 1) != 0 )
      v16 = v15 & 0xFFFFFBFF;
    else
      v16 = v15 | 0x400;
    *(_DWORD *)(v14 + 388) = v16;
  }
  v17 = *(_QWORD *)(v9 + 424);
  if ( *(_QWORD *)(v17 + 64) != v9 )
  {
    EtwTraceInputQueueLocked();
    CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
    return 2LL;
  }
  v403 = 0LL;
  v400 = 0LL;
  v422 = 0LL;
  v424 = 0LL;
  v413 = 0LL;
  v429 = 0LL;
  v423 = 0LL;
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
  v444 = *(_QWORD *)(v20 + 16);
  *(_QWORD *)(v20 + 16) = &v444;
  v445 = 0LL;
  v446 = DereferenceW32Thread;
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
  v447 = *(_QWORD *)(v31 + 16);
  *(_QWORD *)(v31 + 16) = &v447;
  v448 = 0LL;
  v449 = DereferenceW32Thread;
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
  v441 = *(_QWORD *)(v42 + 16);
  *(_QWORD *)(v42 + 16) = &v441;
  v442 = 0LL;
  v443 = DereferenceW32Thread;
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
  v457 = *(_QWORD *)(v53 + 16);
  *(_QWORD *)(v53 + 16) = &v457;
  v458 = 0LL;
  v459 = DereferenceW32Thread;
  v63 = KeGetCurrentThread();
  v64 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v61)
    || (v68 = PsGetCurrentProcess(v66, v65, v67),
        v69 = PsGetProcessSessionIdEx(v68),
        v71 = PsGetCurrentThreadProcess(v70),
        v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
  {
    v74 = (const struct tagWND **)PsGetThreadWin32Thread(v63);
    if ( v74 )
      v64 = (unsigned __int64)*v74;
  }
  v454 = *(_QWORD *)(v64 + 16);
  *(_QWORD *)(v64 + 16) = &v454;
  v455 = 0LL;
  v456 = DereferenceW32Thread;
  v430 = *(_QWORD *)(v9 + 408);
  *(_QWORD *)(v9 + 408) = &v430;
  v431 = 0LL;
LABEL_36:
  while ( 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v72) = 5;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v9 + 424),
        v72,
        18,
        27,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        *(_QWORD *)(v9 + 424),
        *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
    }
    *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_43:
            v437 = (**(_DWORD **)(v9 + 472) >> 9) & 1;
            v75 = *(struct tagQMSG **)(*(_QWORD *)(v9 + 424) + 80LL);
            if ( v75 )
            {
              if ( !(_BYTE)v8 )
              {
                v392 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                v396 = ((v11 - 1) & 0xFFFFFFFD) == 0;
              }
              LODWORD(v64) = v392;
            }
            else
            {
              v11 = 0;
              v393 = 0;
              LOBYTE(v64) = 0;
              v392 = v64;
              v396 = 0;
            }
            v395 = 0;
            v410 = 0;
            v402 = 0LL;
            v416 = 0;
            NextSysMsg = xxxGetNextSysMsg((struct tagTHREADINFO *)v9, v75, (struct tagQMSG *)v417, v73);
            v8 = NextSysMsg;
            v408 = NextSysMsg;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v78 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL),
                  5u,
                  0x12u,
                  0x1Cu,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  NextSysMsg,
                  *(_QWORD *)(v9 + 424),
                  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
            }
            *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) = v8;
            if ( (unsigned __int64)v8 <= 1 )
              break;
            v80 = DWORD1(v417[6]);
            if ( (BYTE4(v417[6]) & 0x20) != 0 )
            {
              *a8 = v8;
              *((_DWORD *)v8 + 25) |= 0x100u;
              v394 = 0;
              v80 = DWORD1(v417[6]);
            }
            if ( (v80 & 0x10000) != 0 )
            {
              if ( *((_QWORD *)&v417[6] + 1) == v9 )
                v11 = 1;
              v393 = v11;
              LOBYTE(v8) = 1;
              v392 = (int)v8;
              v396 = 1;
            }
            else if ( (v80 & 0x80000) != 0 )
            {
              LOBYTE(v8) = v392;
              if ( *((_QWORD *)&v417[6] + 1) == v9 )
              {
                v11 = 3;
                v393 = 3;
              }
            }
            else if ( LODWORD(v417[6]) == 4 && (_BYTE)v64 )
            {
              DeferSysPeekMsg(v9, 3LL);
              LOBYTE(v8) = v392;
            }
            else if ( (v80 & 0x20000) != 0 )
            {
              LOBYTE(v8) = v392;
              if ( *((_QWORD *)&v417[6] + 1) == v9 )
              {
                v11 = 2;
                v393 = 2;
              }
            }
            else
            {
              if ( !(unsigned int)ShouldDeferMessage(v11, v417) )
                break;
              DeferSysPeekMsg(v9, 3LL);
              v11 = 3;
              v393 = 3;
              LOBYTE(v8) = v392;
            }
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) )
          {
            if ( a7 == 0x2000 )
              ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
            goto LABEL_348;
          }
          ThreadUnlock1(v78, v77, v79);
          v64 = *(_QWORD *)&v417[1];
          v81 = 0LL;
          v82 = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v83)
            || (v87 = PsGetCurrentProcess(v85, v84, v86),
                v88 = PsGetProcessSessionIdEx(v87),
                v90 = PsGetCurrentThreadProcess(v89),
                v88 == (unsigned int)PsGetProcessSessionIdEx(v90)) )
          {
            PsGetThreadWin32Thread(v82);
          }
          if ( (unsigned __int64)(unsigned __int16)v64 < *(_QWORD *)(gpsi + 8LL) )
          {
            v91 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v64 * LODWORD(gSharedInfo[2]);
            v93 = (unsigned __int64 *)HMPkheFromPhe(v91);
            v64 >>= 16;
            if ( ((_WORD)v64 == *(_WORD *)(v91 + 26)
               || (_WORD)v64 == 0xFFFF
               || !(_WORD)v64 && PsGetCurrentProcessWow64Process(v92))
              && (*(_BYTE *)(v91 + 25) & 1) == 0
              && *(_BYTE *)(v91 + 24) == 1 )
            {
              v81 = *v93;
            }
          }
          ThreadDesktopWindow = (struct tagWND *)v81;
          v430 = *(_QWORD *)(v9 + 408);
          *(_QWORD *)(v9 + 408) = &v430;
          v431 = v81;
          if ( v81 )
            HMLockObject(v81);
          if ( !LODWORD(v417[6]) )
            break;
          if ( LODWORD(v417[6]) == 4 )
          {
            v11 = v393;
            LOBYTE(v8) = v392;
            if ( *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) != *(_QWORD *)(*(_QWORD *)(v9 + 424) + 24LL) )
              continue;
          }
          if ( LODWORD(v417[6]) != 9 || DWORD2(v417[1]) != 96 )
            goto LABEL_99;
          v94 = *((_QWORD *)&v417[0] + 1);
          v95 = *((_QWORD *)&v417[0] + 1) == 0LL;
          if ( *((_QWORD *)&v417[0] + 1) )
          {
            do
            {
              if ( !IsHiddenByInputService(v94) )
                break;
              v94 = *(_QWORD *)(v94 + 8);
            }
            while ( v94 );
            v95 = v94 == 0;
          }
          v11 = v393;
          LOBYTE(v8) = v392;
          if ( v95 )
          {
LABEL_99:
            v96 = *((_QWORD *)&v417[6] + 1);
            if ( !*((_QWORD *)&v417[6] + 1) || *((_QWORD *)&v417[6] + 1) == v9 )
            {
              EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
              v102 = *(_QWORD *)(v9 + 424);
              v103 = *(_QWORD *)(v102 + 80);
              v104 = v102 + 24;
              v105 = *(_QWORD **)(v103 + 8);
              if ( v105 )
                *v105 = *(_QWORD *)v103;
              v106 = *(_QWORD *)v103;
              if ( *(_QWORD *)v103 )
                *(_QWORD *)(v106 + 8) = *(_QWORD *)(v103 + 8);
              if ( *(_QWORD *)v104 == v103 )
                *(_QWORD *)v104 = *(_QWORD *)v103;
              if ( *(_QWORD *)(v102 + 32) == v103 )
                *(_QWORD *)(v102 + 32) = *(_QWORD *)(v103 + 8);
              v107 = *(_DWORD *)(v103 + 100);
              if ( (v107 & 0x10000) == 0 && (v107 & 0x20000) == 0 && (v107 & 0x80000) == 0 )
              {
                v108 = *(_DWORD *)(v104 + 16) - 1;
                *(_DWORD *)(v104 + 16) = v108;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v388) = v108;
                  LODWORD(v387) = *(_DWORD *)(v104 + 20);
                  WPP_RECORDER_SF_qiqdd(
                    v104,
                    v106,
                    v101,
                    0x14u,
                    (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
                    v103,
                    *(_QWORD *)(v103 + 136),
                    v104,
                    v387,
                    v388);
                }
              }
              if ( (*(_DWORD *)(v103 + 100) & 8) != 0
                && !*(_DWORD *)(v103 + 96)
                && IsPointerInputMessage(*(_DWORD *)(v103 + 24)) )
              {
                FreePointerMessageParams(v103);
              }
              Win32FreeToPagedLookasideList(QEntryLookaside, v103);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v109) = 5;
                WPP_RECORDER_SF_qq(
                  *(_QWORD *)(v9 + 424),
                  v109,
                  18,
                  30,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(v9 + 424),
                  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
              }
              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) = 0LL;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              xxxProcessEventMessage(v9, (__int64)v417);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v11 = v393;
              LOBYTE(v8) = v392;
            }
            else
            {
              v97 = *(_QWORD *)(v9 + 424);
              if ( *(_QWORD *)(*((_QWORD *)&v417[6] + 1) + 424LL) == v97 )
              {
                v424 = *((_QWORD *)&v417[6] + 1);
                ObfReferenceObject(**((PVOID **)&v417[6] + 1));
                _InterlockedIncrement((volatile signed __int32 *)(v96 + 8));
                v100 = v442;
                v442 = v96;
                if ( v100 )
                  ((void (__fastcall *)(__int64, __int64, __int64))v443)(v100, v98, v99);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(v98) = 5;
                  WPP_RECORDER_SF_qq(
                    *(_QWORD *)(v9 + 424),
                    v98,
                    18,
                    29,
                    (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                    *(_QWORD *)(v9 + 424),
                    *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
                }
                *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) = 0LL;
                goto LABEL_348;
              }
              CleanEventMessage(*(struct tagQMSG **)(v97 + 80));
              DelQEntry(
                (unsigned int **)(*(_QWORD *)(v9 + 424) + 24LL),
                *(unsigned int **)(*(_QWORD *)(v9 + 424) + 80LL),
                1);
              v11 = v393;
              LOBYTE(v8) = v392;
            }
            goto LABEL_36;
          }
        }
        if ( a7 == 0x2000 )
          goto LABEL_41;
        LODWORD(v64) = DWORD2(v417[1]);
        v391 = DWORD2(v417[1]);
        v397[0] = DWORD2(v417[1]);
        if ( DWORD2(v417[1]) <= 0x20A )
          break;
        switch ( DWORD2(v417[1]) )
        {
          case 0x20E:
            goto LABEL_372;
          case 0x238:
            goto LABEL_445;
          case 0x240:
LABEL_439:
            if ( !v81 )
              goto LABEL_381;
            v182 = *(char **)(v81 + 40);
            if ( v182[20] < 0 )
              goto LABEL_381;
            if ( v182[19] < 0 )
              goto LABEL_381;
            v183 = v182[31];
            if ( (v183 & 8) != 0 )
              goto LABEL_381;
            if ( (v183 & 0x10) == 0 )
            {
              MouseKeyFlags = v402;
              v114 = v394;
              goto LABEL_772;
            }
LABEL_445:
            v399 = *((_QWORD *)&v417[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v417[2];
            v402 = *(_QWORD *)&v417[2];
            if ( !v81 )
              goto LABEL_382;
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v81, v8, &v404, &v394, a8) )
              goto LABEL_348;
            if ( v404 )
              goto LABEL_382;
            if ( !a4 && a5 == -1 )
              goto LABEL_456;
            if ( a4 <= a5 )
            {
              LOBYTE(v8) = v392;
              if ( (unsigned int)v64 < a4 || (unsigned int)v64 > a5 )
                goto LABEL_42;
            }
            else if ( (unsigned int)v64 >= a5 && (unsigned int)v64 <= a4 )
            {
              goto LABEL_41;
            }
LABEL_456:
            v184 = CheckPwndFilter(v81, a3);
            LOBYTE(v8) = v392;
            if ( v184 )
            {
              if ( !v394 )
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
            v114 = v394;
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
              if ( DWORD2(v417[1]) < v425 || DWORD2(v417[1]) > v419 )
                goto LABEL_348;
            }
            else if ( DWORD2(v417[1]) >= v419 && DWORD2(v417[1]) <= v425 )
            {
              goto LABEL_348;
            }
LABEL_359:
            if ( (unsigned int)IsInsideMenuLoop(v9) )
              goto LABEL_381;
            v114 = v394;
            if ( v394 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
            if ( !v81 )
            {
              v81 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 112LL);
              ThreadDesktopWindow = (struct tagWND *)v81;
            }
            v399 = *((_QWORD *)&v417[2] + 1);
            MouseKeyFlags = *(_QWORD *)&v417[2];
            v402 = *(_QWORD *)&v417[2];
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            v64 = MouseKeyFlags >> 16;
            v164 = InteractiveControlManager::Instance();
            v452 = 0LL;
            v453 = 0LL;
            if ( (int)InteractiveControlManager::FindDevice(v164, (unsigned __int16)MouseKeyFlags, 0LL, &v452, 0LL) >= 0
              && v452
              && (unsigned int)InteractiveControlDevice::GetInputReport(v452, WORD1(MouseKeyFlags), &v453) )
            {
              *((_DWORD *)v453 + 6) = 1;
              v165 = 1;
            }
            else
            {
              v165 = 2;
            }
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            v166 = v165 - 1;
            if ( !v166 )
              goto LABEL_810;
            if ( v166 == 1 )
              goto LABEL_844;
            goto LABEL_772;
          default:
LABEL_460:
            v397[1] = SWORD4(v417[2]);
            v397[2] = SWORD5(v417[2]);
            v398 = 1;
            if ( (BYTE4(v417[6]) & 0x20) == 0 )
              goto LABEL_470;
            if ( !v81 )
              goto LABEL_470;
            v185 = *(_DWORD *)(*(_QWORD *)(v81 + 40) + 288LL);
            v186 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 16) + 416LL) + 280LL);
            if ( (((unsigned __int16)(v185 >> 8) ^ (unsigned __int16)(v186 >> 8)) & 0x1FF) != 0 )
              goto LABEL_470;
            if ( (v185 & 0xF) != 2 || (v187 = 1, (v185 & 0x20000000) == 0) )
              v187 = 0;
            if ( (v186 & 0xF) != 2 || (v188 = 1, (v186 & 0x20000000) == 0) )
              v188 = 0;
            if ( v187 != v188 )
            {
LABEL_470:
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              if ( !v81 || (v189 = 1, !(unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v81)) )
                v189 = 0;
              v409 = v189;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v192 = *(_QWORD *)(v9 + 424);
              v193 = *(__int64 **)(v192 + 104);
              if ( v193 )
              {
                v81 = *(_QWORD *)(v192 + 104);
                ThreadDesktopWindow = (struct tagWND *)v81;
                if ( (unsigned int)dword_1C0330B30 > 4
                  && (qword_1C0330B40 & 0x40) != 0
                  && (qword_1C0330B48 & 0x40) == qword_1C0330B48 )
                {
                  v461 = *v193;
                  v438 = DWORD2(v417[1]);
                  v462 = *((_QWORD *)&v417[8] + 1);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C0330B30,
                    (unsigned int)&unk_1C02F0217,
                    v190,
                    v191,
                    (__int64)&v462,
                    (__int64)&v438,
                    (__int64)&v461);
                }
                if ( v189 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  v204 = IsCompositionInputWindowForHitTest((struct tagWND *)v81);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  if ( !v204 )
                  {
                    DWORD1(v417[6]) &= ~0x2000u;
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
                if ( !v189 )
                {
                  v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                  *(_QWORD *)&v439 = *(_QWORD *)(v9 + 408);
                  *(_QWORD *)(v9 + 408) = &v439;
                  *((_QWORD *)&v439 + 1) = v81;
                  if ( v81 )
                    HMLockObject(v81);
                }
                if ( (unsigned int)IsThreadDesktopComposed(v9) )
                {
                  v463[0] = DWORD2(v417[1]);
                  v463[1] = 0;
                  v464 = v417[2];
                  v465 = &v398;
                  v194 = 1;
                  if ( v189 )
                    v194 = 9;
                  v466 = v194;
                  v467 = 0;
                  v468 = (char *)&v417[5] + 8;
                  v469 = 0LL;
                  v470 = 0LL;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  v195 = xxxDCEWindowHitTestIndirect((struct tagWND *)v81, *(struct tagPOINT *)&v417[5], (__int64)v463);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  if ( v195 && (_DWORD)v469 )
                  {
                    *((_QWORD *)&v417[2] + 1) = *((_QWORD *)&v464 + 1);
                    DWORD1(v417[3]) = SWORD4(v464);
                    DWORD2(v417[3]) = SWORD5(v464);
                    *(_QWORD *)&v397[1] = *(_QWORD *)((char *)&v417[3] + 4);
                  }
                }
                else
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  v195 = (HWND)xxxWindowHitTest(v81);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                }
                v196 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v195, 1);
                InputTraceLogging::Mouse::SecondaryHitTest(
                  (const struct tagQMSG *)v417,
                  (const struct tagPOINT *)&v397[1],
                  v196);
                if ( !v409 )
                  ThreadUnlock1(v198, v197, v199);
                v81 = HMValidateHandleNoSecure((unsigned __int64)v195, 1);
                ThreadDesktopWindow = (struct tagWND *)v81;
                if ( !v81 )
                {
                  v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 448) + 8LL) + 24LL);
                  ThreadDesktopWindow = (struct tagWND *)v81;
                  if ( !v81 )
                  {
                    v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                    ThreadDesktopWindow = (struct tagWND *)v81;
                  }
                }
                if ( !*(_QWORD *)(v9 + 600)
                  && IsMiPEnabledForThread(v9)
                  && (v200 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 440LL)) != 0
                  && (v201 = ValidateHwnd(v200)) != 0
                  && ((v202 = *(_QWORD *)(v201 + 16), v203 = *(_QWORD *)(v9 + 424), *(_QWORD *)(v202 + 424) == v203)
                   || *(_QWORD *)(v202 + 416) == *(_QWORD *)(v9 + 416)) )
                {
                  v81 = v201;
                  ThreadDesktopWindow = (struct tagWND *)v201;
                  v398 = 1;
                  *(_DWORD *)(v203 + 148) = 0;
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(v418 + 424) + 148LL) = v398 != 1;
                }
              }
              if ( v81 == *(_QWORD *)(*(_QWORD *)(v9 + 424) + 104LL) )
              {
                v205 = *(_DWORD *)(*(_QWORD *)(v81 + 40) + 288LL);
                v206 = *(_QWORD *)(*(_QWORD *)(v81 + 16) + 424LL);
                v207 = *(_QWORD *)(v206 + 104);
                v208 = v207 ? *(_QWORD *)(v207 + 16) : *(_QWORD *)(v206 + 88);
                if ( (((unsigned __int16)(v205 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v208 + 416) + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_528;
                if ( (v205 & 0xF) != 2 || (v209 = (v205 & 0x20000000) != 0, v210 = 1, !v209) )
                  v210 = 0;
                if ( v207 )
                  v211 = *(_QWORD *)(v207 + 16);
                else
                  v211 = *(_QWORD *)(v206 + 88);
                if ( (*(_DWORD *)(*(_QWORD *)(v211 + 416) + 280LL) & 0xF) != 2
                  || (!v207 ? (v212 = *(_QWORD *)(v206 + 88)) : (v212 = *(_QWORD *)(v207 + 16)),
                      v95 = (*(_DWORD *)(*(_QWORD *)(v212 + 416) + 280LL) & 0x20000000) == 0,
                      v213 = 1,
                      v95) )
                {
                  v213 = 0;
                }
                if ( v210 != v213
                  || *(_QWORD *)(v81 + 104) == GetMessageWindow(v81)
                  && (v214 = *(_QWORD *)(v81 + 136)) != 0
                  && (v215 = *(const char **)(v214 + 104)) != 0LL
                  && !strcmp_0(v215, "CLIPBRDWNDCLASS") )
                {
LABEL_528:
                  *(_QWORD *)&v397[1] = *(_QWORD *)&v417[5];
                  PhysicalToLogicalInPlacePointWithParent(v81, &v397[1], (char *)&v417[5] + 8);
                  v399 = (LOWORD(v397[2]) << 16) | LOWORD(v397[1]);
                  *(_QWORD *)((char *)&v417[3] + 4) = *(_QWORD *)&v397[1];
                }
              }
            }
            ThreadLockExchange(v81, (__int64)&v430);
            if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v81, v8, &v404, &v394, a8) )
              goto LABEL_348;
            v216 = v404;
            if ( v404 )
            {
              v217 = *(_QWORD *)(v81 + 16);
              v218 = a1;
              if ( *(_QWORD *)(v217 + 424) != *(_QWORD *)(a1 + 424) )
                goto LABEL_532;
              if ( !v403 )
              {
                v403 = *(_QWORD *)(v81 + 16);
                LockExchangeW32Thread(v217, (__int64)&v447);
              }
            }
            else
            {
              if ( (WORD2(v417[6]) & 0x1000) != 0
                && !(unsigned __int8)CheckAccess(&v417[7], *(_QWORD *)(*(_QWORD *)(v81 + 16) + 416LL) + 880LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*(_QWORD *)(v81 + 16) + 416LL),
                  (unsigned int)v64,
                  *(_QWORD *)&v417[2],
                  *((_QWORD *)&v417[2] + 1));
LABEL_532:
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                MouseKeyFlags = v402;
                v114 = v394;
                v9 = a1;
                goto LABEL_772;
              }
              v218 = a1;
            }
            v219 = *(struct tagPOINT *)&v397[1];
            v220 = *(_QWORD *)&v397[1];
            v221 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 16) + 424LL) + 148LL);
            if ( v221 && (v222 = v221 - 2) != 0 )
            {
              if ( v222 != 1 )
                goto LABEL_551;
              v223 = *(_QWORD *)(v81 + 40);
              if ( (*(_BYTE *)(v223 + 26) & 0x40) != 0 )
                v397[1] = *(_DWORD *)(v223 + 96) - v397[1];
              else
                v397[1] -= *(_DWORD *)(v223 + 88);
              v224 = *(_DWORD *)(*(_QWORD *)(v81 + 40) + 92LL);
            }
            else
            {
              v225 = *(_QWORD *)(v81 + 40);
              if ( (*(_BYTE *)(v225 + 26) & 0x40) != 0 )
                v397[1] = *(_DWORD *)(v225 + 112) - v397[1];
              else
                v397[1] -= *(_DWORD *)(v225 + 104);
              v224 = *(_DWORD *)(*(_QWORD *)(v81 + 40) + 108LL);
            }
            v397[2] -= v224;
            v219 = *(struct tagPOINT *)&v397[1];
LABEL_551:
            if ( v216 || *(_QWORD *)(v218 + 424) != gpqCursor )
              goto LABEL_588;
            LOBYTE(v10) = *(_QWORD *)(*(_QWORD *)(v218 + 448) + 184LL) != v81;
            v226 = v398;
            if ( v398 == 5
              && (v227 = *(_QWORD *)(v81 + 168)) != 0
              && (*(_BYTE *)(*(_QWORD *)(v81 + 40) + 16LL) & 1) != 0 )
            {
              v228 = MNItemHitTest(*(_QWORD *)(v81 + 168), v81);
              if ( v228 < 0 )
                goto LABEL_563;
              v229 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v227 + 88) + 96LL * v228) + 96LL);
              if ( v229 <= 6 )
              {
                if ( v229 >= 5 )
                {
                  v232 = ((unsigned __int16)v228 << 16) | 0x44;
                  goto LABEL_578;
                }
                v230 = v229 - 1;
                if ( !v230 )
                {
                  v232 = ((unsigned __int16)v228 << 16) | 0x41;
                  goto LABEL_578;
                }
                v231 = v230 - 1;
                if ( !v231 )
                {
                  v232 = ((unsigned __int16)v228 << 16) | 0x42;
                  goto LABEL_578;
                }
                if ( v231 == 1 )
                  goto LABEL_562;
LABEL_569:
                v232 = ((unsigned __int16)v228 << 16) | 0x45;
                goto LABEL_578;
              }
              if ( v229 == 7 )
              {
LABEL_562:
                v226 = 67;
LABEL_563:
                v232 = v226 | ((unsigned __int16)v228 << 16);
                goto LABEL_578;
              }
              if ( v229 != -1LL )
                goto LABEL_569;
              v232 = ((unsigned __int16)v228 << 16) | 0xFFFE;
            }
            else if ( v398 == 7 && (*(_BYTE *)(*(_QWORD *)(v81 + 40) + 16LL) & 2) != 0 )
            {
              v232 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v81, v398 - 6, v219) | 0x10000;
            }
            else if ( v398 == 6 && (*(_BYTE *)(*(_QWORD *)(v81 + 40) + 16LL) & 4) != 0 )
            {
              v232 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v81, 0, v219);
            }
            else
            {
              v232 = v398;
            }
LABEL_578:
            v233 = v391;
            if ( v391 != 512 || (_DWORD)v10 || *(_DWORD *)(*(_QWORD *)(v218 + 448) + 192LL) != v232 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              xxxTrackMouseMove((struct tagWND *)v81, v232, v233);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            LODWORD(v64) = v391;
            if ( !(_DWORD)v10 )
            {
              v234 = *(_QWORD *)(v218 + 448);
              if ( (*(_DWORD *)(v234 + 48) & 0x40) != 0 && (v391 != 512 || !PtInRect((_DWORD *)(v234 + 196), v220)) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                ResetMouseHover(*(struct tagDESKTOP **)(v218 + 448), (struct tagPOINT)v220);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              }
            }
            v10 = 0LL;
LABEL_588:
            v235 = CheckPwndFilter(v81, a3);
            LOBYTE(v8) = v392;
            if ( !v235 )
            {
              v9 = a1;
LABEL_42:
              v11 = v393;
              goto LABEL_43;
            }
            v236 = 0;
            v415 = 0;
            switch ( (int)v64 )
            {
              case 513:
                v237 = a1;
                v95 = (unsigned __int8)IsMessageInputSourceTouch(v417) == 0;
                v238 = *(_QWORD *)(a1 + 424);
                if ( v95 )
                  *(_DWORD *)(v238 + 388) &= ~0x800000u;
                else
                  *(_DWORD *)(v238 + 388) |= 0x800000u;
                v239 = IsMessageInputSourcePen(v417);
                v240 = *(_QWORD *)(v418 + 424);
                v241 = *(_DWORD *)(v240 + 388);
                if ( v239 )
                  *(_DWORD *)(v240 + 388) = v241 | 0x1000000;
                else
                  *(_DWORD *)(v240 + 388) = v241 & 0xFEFFFFFF;
                goto LABEL_597;
              case 514:
              case 517:
              case 520:
              case 524:
                v237 = a1;
                goto LABEL_610;
              case 516:
              case 519:
              case 523:
                v237 = a1;
LABEL_597:
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v81 + 136) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(v237 + 424) + 148LL) == 1
                  || (v242 = *(_QWORD *)(v237 + 600)) != 0 && (*(_DWORD *)(v242 + 8) & 1) != 0 )
                {
                  v236 = 1;
                  v415 = 1;
                  v243 = *(_QWORD *)(v237 + 424);
                  if ( LODWORD(v417[3]) <= *(_DWORD *)(v243 + 160)
                    && !gbClientDoubleClickSupport
                    && *(_QWORD *)v81 == *(_QWORD *)(v243 + 168)
                    && (_DWORD)v64 == *(_DWORD *)(v243 + 152)
                    && ((_DWORD)v64 != 523 || WORD1(v417[2]) == *(_WORD *)(v243 + 156)) )
                  {
                    v244 = *(_DWORD *)(gpsi + 2040LL) / 2;
                    v245 = *(_DWORD *)(v243 + 176);
                    v460[0] = v245 - v244;
                    v246 = *(_DWORD *)(gpsi + 2044LL);
                    v247 = *(_DWORD *)(v243 + 180);
                    v460[1] = v247 - v246 / 2;
                    v460[2] = v244 + v245;
                    v460[3] = v247 + v246 / 2;
                    if ( PtInRect(v460, *(unsigned __int64 *)((char *)&v417[3] + 4)) )
                    {
                      LODWORD(v64) = v64 + 2;
                      v391 = v64;
                      v397[0] = v64;
                      v236 = 2;
                      v415 = 2;
                    }
                  }
                }
LABEL_610:
                v248 = *(_QWORD *)(v237 + 424);
                v249 = *(_DWORD *)(v248 + 388);
                if ( (v249 & 8) != 0 )
                  *(_DWORD *)(v248 + 388) = v249 | 4;
                if ( (unsigned int)(v64 - 514) <= 0xA )
                {
                  v250 = 1097;
                  if ( _bittest(&v250, v64 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v237 + 424) + 160LL) && ((DWORD2(v417[7]) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v417[7]) == 4 )
                      {
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
                      }
                      else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                      {
                        TouchTimeFromCPLValue = *((_DWORD *)off_1C032B038 + 11);
                        if ( TouchTimeFromCPLValue == -1 )
                          TouchTimeFromCPLValue = *((_DWORD *)off_1C032B038 + 10);
                      }
                      else
                      {
                        TouchTimeFromCPLValue = gdtDblClk;
                      }
                      *(_DWORD *)(*(_QWORD *)(v237 + 424) + 160LL) = DWORD2(v417[9]) + TouchTimeFromCPLValue;
                    }
                  }
                }
                break;
              default:
                break;
            }
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 16) + 424LL) + 148LL) == 1 )
            {
              LODWORD(v64) = v64 - 352;
              v391 = v64;
              v397[0] = v64;
              MouseKeyFlags = (unsigned int)v398;
              v402 = (unsigned int)v398;
            }
            else
            {
              MouseKeyFlags = v402;
            }
            if ( !(unsigned int)MiPCheckMsgFilter(v408, (unsigned int)v64, a4, a5, v384, v385, v386) )
            {
              v9 = a1;
LABEL_41:
              LOBYTE(v8) = v392;
              goto LABEL_42;
            }
            v95 = v216 == 0;
            v9 = a1;
            if ( !v95 )
              goto LABEL_348;
            if ( (unsigned int)(v64 - 512) <= 0xE && (*(_DWORD *)(a1 + 480) & 0x8000) != 0 )
              goto LABEL_41;
            v252 = *(_DWORD *)(a1 + 480);
            if ( (v252 & 0x100000) != 0 )
            {
              *(_DWORD *)(a1 + 480) = v252 & 0xFFEFFFFF;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1u);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            v433[0] = *(_QWORD *)((char *)&v417[3] + 4);
            v433[1] = *(_QWORD *)v81;
            LODWORD(v434) = v398;
            *((_QWORD *)&v434 + 1) = *((_QWORD *)&v417[4] + 1);
            LODWORD(v435) = v417[2];
            v114 = v394;
            if ( v394 && (_DWORD)v64 != 512 && (_DWORD)v64 != 160 )
            {
              v407 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v433) )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) != 0 )
            {
              v407 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              if ( xxxCallMouseHook() )
                goto LABEL_771;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
            {
              v253 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
              v406 = 0;
              v406 = *(_QWORD *)(v253 + 248) != 0LL;
              if ( v406 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v114 = v394;
                v254 = v397[0];
                v391 = v397[0];
                if ( xxxClientCallLocalMouseHooks(v397[0], v433, (unsigned int)v394) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  MouseKeyFlags = v402;
                  goto LABEL_773;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v81 = (unsigned __int64)ThreadDesktopWindow;
                MouseKeyFlags = v402;
              }
              else
              {
                v81 = (unsigned __int64)ThreadDesktopWindow;
                v254 = v397[0];
                v391 = v397[0];
                MouseKeyFlags = v402;
                v114 = v394;
              }
            }
            else
            {
              v254 = v391;
            }
            if ( (*(_DWORD *)(a1 + 1224) & 0x2000) == 0 && ((v398 + 2) & 0xFFFFFFFD) == 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v255 = 0LL;
              if ( v409 )
              {
                CompositionInputWindowUIOwner = (struct tagWND *)v81;
                if ( (unsigned int)IsIndependentInputWindow((const struct tagWND *)v81) )
                  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v81);
                TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                v255 = (unsigned __int64)TopLevelWindow;
                if ( TopLevelWindow )
                {
                  LOBYTE(v64) = 0;
                  if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v391 == 161 )
                    LODWORD(v64) = *(_QWORD *)(*(_QWORD *)(v255 + 16) + 424LL) == gpqForeground;
                  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v255);
                  v255 = (unsigned __int64)CompositeAppFrameWindowOrSelf;
                  if ( (_BYTE)v64 )
                  {
                    v259 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                    if ( *(_QWORD *)(v259 + 424) != gpqForeground )
                      *(_DWORD *)(v259 + 480) |= 0x20u;
                  }
                  *(_QWORD *)&v439 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)(a1 + 408) = &v439;
                  *((_QWORD *)&v439 + 1) = CompositeAppFrameWindowOrSelf;
                  if ( CompositeAppFrameWindowOrSelf )
                  {
                    HMLockObject(CompositeAppFrameWindowOrSelf);
                    v260 = *(_QWORD *)v255;
                  }
                  else
                  {
                    v260 = 0LL;
                  }
                  xxxSendMessage(
                    v255,
                    0x20u,
                    v260,
                    (struct _LARGE_STRING *)((unsigned __int16)v398 | (WORD4(v417[1]) << 16)));
                  ThreadUnlock1(v262, v261, v263);
                }
              }
              if ( !v255 )
                xxxSendMessage(
                  v81,
                  0x20u,
                  *(_QWORD *)v81,
                  (struct _LARGE_STRING *)((unsigned __int16)v398 | (WORD4(v417[1]) << 16)));
              v264 = v408;
              if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 80LL) == v408
                && v408
                && IsMiPActive(a1, (__int64)v408)
                && (*((_DWORD *)v264 + 25) & 0x800) != 0
                && (unsigned int)IsGenuineMouseInput((char *)v264 + 120)
                && (unsigned int)IsMiPMouseMessage(*((unsigned int *)v264 + 6)) )
              {
                memset(v512, 0, sizeof(v512));
                v265 = v264;
                v254 = v391;
                GeneratePointerMessageFromMouse((struct tagQMSG *)v512, v391, v265, (struct tagWND *)v81, v114);
                SetMiPPromotion(*(_QWORD *)(v81 + 16), v512[6]);
              }
              else
              {
                v254 = v391;
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              goto LABEL_773;
            }
            v266 = v408;
            if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 80LL) != v408 )
            {
LABEL_844:
              v10 = 0LL;
              goto LABEL_348;
            }
            v471 = 0LL;
            v494 = 0LL;
            v495 = 0LL;
            v496 = 0LL;
            v497 = 0LL;
            v498 = 0LL;
            v499 = 0LL;
            v472 = 0LL;
            v473 = 0LL;
            v474 = 0LL;
            v475 = 0LL;
            v476 = 0LL;
            v477 = 0LL;
            LODWORD(v64) = 0;
            v500 = v417[0];
            v501 = v417[1];
            v502 = v417[2];
            v503 = v417[3];
            v504 = v417[4];
            v505 = v417[5];
            v506 = v417[6];
            v507 = v417[7];
            v508 = v417[8];
            v509 = v417[9];
            if ( v408 && IsMiPActive(a1, (__int64)v408) )
            {
              DWORD2(v501) = v254;
              *(_QWORD *)&v502 = MouseKeyFlags;
              if ( (*((_DWORD *)v266 + 25) & 0x800) != 0 )
              {
                memset(v510, 0, sizeof(v510));
                v267 = *(_QWORD *)(a1 + 1272);
                if ( v267 && (*(_DWORD *)v267 & 1) != 0 )
                {
                  v471 = *(_OWORD *)(v267 + 24);
                  v472 = v471;
                  v473 = *(_OWORD *)(v267 + 40);
                  v474 = *(_OWORD *)(v267 + 56);
                  v475 = *(_OWORD *)(v267 + 72);
                  v476 = *(_OWORD *)(v267 + 88);
                  v477 = *(_OWORD *)(v267 + 104);
                  LODWORD(v64) = 1;
                }
                if ( GeneratePointerMessageFromMouse((struct tagQMSG *)v510, v391, v408, (struct tagWND *)v81, v114) )
                {
                  v417[0] = v510[0];
                  v417[1] = v510[1];
                  v417[2] = v510[2];
                  v417[3] = v510[3];
                  v417[4] = v510[4];
                  v417[5] = v510[5];
                  v417[6] = v510[6];
                  v417[7] = v510[7];
                  v417[8] = v510[8];
                  v417[9] = v510[9];
                  v395 = 1;
                  v410 = 1;
                  v268 = DWORD2(v510[1]);
                  if ( DWORD2(v510[1]) == 582 && (unsigned int)IsMiPEnabledForWindow(v81) )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 440LL) = *(_QWORD *)v81;
                  }
                  else if ( ((v268 - 579) & 0xFFFFFFFB) == 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 440LL) = 0LL;
                  }
                }
                if ( v114 || !(unsigned int)IsMiPEnabledForWindow(v81) )
                {
                  v266 = v408;
                  *((_DWORD *)v408 + 25) &= ~0x800u;
                  goto LABEL_701;
                }
              }
              else
              {
                if ( !v114 )
                  goto LABEL_734;
                if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)v266 + 6)) )
                {
                  if ( (unsigned int)IsGenuineMouseInput((char *)v408 + 120) )
                  {
                    v269 = *(_DWORD **)(a1 + 1272);
                    if ( v269 )
                    {
                      if ( (*v269 & 2) == 0 && (*v269 & 4) == 0 )
                        goto LABEL_414;
                    }
                  }
                  v270 = *(_DWORD **)(a1 + 1272);
                  if ( v270 )
                    *v270 &= ~2u;
                }
              }
              v266 = v408;
            }
            else
            {
              v254 = DWORD2(v501);
            }
LABEL_701:
            if ( !v114 )
            {
LABEL_734:
              LODWORD(v64) = v395;
              goto LABEL_735;
            }
            if ( (v254 == 512 || v254 == 160)
              && *(_QWORD *)v81 != gMiPTracking
              && (unsigned int)IsGenuineMouseInput((char *)v266 + 120) )
            {
              v271 = HMValidateHandleNoSecure(gMiPTracking, 1);
              v272 = v271;
              if ( v271
                && IsMiPActive(*(_QWORD *)(v271 + 16), 0LL)
                && (GetMiPWindowFlags((struct tagWND *)v272) & 1) == 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v273 = *(_QWORD *)(v272 + 16);
                if ( v273 == a1 )
                {
                  v274 = *(_QWORD *)(a1 + 1272);
                  v480 = *(_OWORD *)(v274 + 24);
                  v484 = *(_OWORD *)(v274 + 40);
                  v483 = *(_OWORD *)(v274 + 56);
                  v490 = *(_OWORD *)(v274 + 72);
                  v482 = *(_OWORD *)(v274 + 88);
                  v481 = *(_OWORD *)(v274 + 104);
                  if ( (_DWORD)v64 )
                  {
                    *(_OWORD *)(v274 + 24) = v471;
                    *(_OWORD *)(v274 + 40) = v473;
                    *(_OWORD *)(v274 + 56) = v474;
                    *(_OWORD *)(v274 + 72) = v475;
                    *(_OWORD *)(v274 + 88) = v476;
                    *(_OWORD *)(v274 + 104) = v477;
                    v274 = *(_QWORD *)(v418 + 1272);
                  }
                  *(_QWORD *)v491 = ((*(_DWORD *)(v274 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                  v492 = 0LL;
                  v493 = 0LL;
                  v479[2] = 0LL;
                  v275 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v479[0] = *(_QWORD *)(v275 + 408);
                  *(_QWORD *)(v275 + 408) = v479;
                  v479[1] = v272;
                  HMLockObject(v272);
                  FindTimer(v272, 65523, 2, 1, 0LL);
                  if ( (unsigned int)IsMiPEnabledForWindow(v272) )
                  {
                    _InterlockedIncrement(&glSendMessage);
                    xxxSendTransformableMessageTimeout(v272, 0x24Au, *(unsigned __int64 *)v491, 0LL, 0, 0, 0LL, 1, 0);
                  }
                  ThreadUnlock1(v277, v276, v278);
                  v81 = (unsigned __int64)ThreadDesktopWindow;
                  MouseKeyFlags = v402;
                  v114 = v394;
                  if ( (_DWORD)v64 )
                  {
                    v279 = *(_QWORD *)(a1 + 1272);
                    *(_OWORD *)(v279 + 24) = v480;
                    *(_OWORD *)(v279 + 40) = v484;
                    *(_OWORD *)(v279 + 56) = v483;
                    *(_OWORD *)(v279 + 72) = v490;
                    *(_OWORD *)(v279 + 88) = v482;
                    *(_OWORD *)(v279 + 104) = v481;
                  }
                  v391 = v397[0];
                }
                else
                {
                  PostEventMessageEx(
                    (struct tagTHREADINFO *)v273,
                    *(struct tagQ **)(v273 + 424),
                    0x15u,
                    (struct tagWND *)v272,
                    0,
                    0LL,
                    0LL,
                    0LL);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              }
              LODWORD(v64) = v395;
              if ( v395 )
                gMiPTracking = *(_QWORD *)v81;
              else
                gMiPTracking = 0LL;
            }
            else
            {
              LODWORD(v64) = v395;
            }
            if ( !(_DWORD)v64 )
            {
              v280 = v236 - 1;
              if ( v280 )
              {
                if ( v280 == 1 )
                  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = 0;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)(a1 + 424) + 152LL) = DWORD2(v417[1]);
                *(_WORD *)(*(_QWORD *)(a1 + 424) + 156LL) = WORD1(v417[2]);
                *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = gdtDblClk + LODWORD(v417[3]);
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = *(_QWORD *)v81;
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 176LL) = *(_QWORD *)((char *)&v417[3] + 4);
              }
            }
            v281 = (const struct tagQMSG *)&v500;
            if ( !(_DWORD)v64 )
              v281 = (const struct tagQMSG *)v417;
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            v282 = xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)v81, v281, v398);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            if ( v282 == 1 )
              goto LABEL_772;
LABEL_735:
            if ( v114 )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v417, 1);
              if ( v407 )
              {
                if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  xxxCallHook(6, v391, (__int64)v433, 5);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                }
              }
            }
            v407 = 0;
            v399 = (LOWORD(v397[2]) << 16) | LOWORD(v397[1]);
            v283 = v391;
            if ( v391 >= 0x200 )
            {
              MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 424));
              v402 = MouseKeyFlags;
              v283 = v391;
            }
            if ( (v283 - 171 <= 2 || v283 - 523 <= 2) && !(_DWORD)v64 )
            {
              MouseKeyFlags |= *(_QWORD *)&v417[2];
              v402 = MouseKeyFlags;
            }
            v284 = *(_QWORD *)(a1 + 600);
            if ( v398 == 5
              && v114
              && v284
              && (*(_DWORD *)(v284 + 8) & 0x100) != 0
              && *(_QWORD *)v284
              && (**(_DWORD **)v284 & 1) != 0 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                (MenuStateOwnerLockxxxUnlock *)&v451,
                (struct tagMENUSTATE *)v284);
              if ( (unsigned int)xxxCallHandleMenuMessages(v284, v81, v391, MouseKeyFlags, v399) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v10 = 0LL;
                v11 = v393;
                LOBYTE(v8) = v392;
                if ( v451 )
                  xxxUnlockMenuStateInternal(v451, 0);
                goto LABEL_36;
              }
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              if ( v451 )
                xxxUnlockMenuStateInternal(v451, 0);
            }
            v285 = v395;
            if ( !v395 )
              goto LABEL_811;
            v8 = v408;
            break;
        }
LABEL_758:
        LODWORD(v64) = DWORD2(v417[1]);
LABEL_759:
        if ( ((DWORD2(v417[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v417[7]) != 50 )
        {
          v397[0] = v64;
          v399 = *((_QWORD *)&v417[2] + 1);
          v402 = *(_QWORD *)&v417[2];
LABEL_786:
          if ( v114 )
          {
            if ( IsMiPActive(v9, 0LL) && v395 )
            {
              if ( v81 )
                v293 = *(_QWORD *)v81;
              else
                v293 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v9 + 1272) + 48LL) = v293;
              if ( (*(_DWORD *)(*(_QWORD *)(v9 + 1272) + 36LL) & 0x400000) != 0 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v294 = IsCompositionInputWindow((const struct tagWND *)v81);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                if ( !v294 )
                  *(_DWORD *)(*(_QWORD *)(v9 + 1272) + 36LL) &= ~0x400000u;
              }
              MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)v81);
              SetMiPWindowFlags((struct tagWND *)v81, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
              if ( ((DWORD2(v417[1]) - 578) & 0xFFFFFFFB) != 0 )
              {
                if ( ((DWORD2(v417[1]) - 579) & 0xFFFFFFFB) == 0 )
                  **(_DWORD **)(v9 + 1272) &= ~8u;
              }
              else
              {
                v296 = 0;
                if ( DWORD2(v417[1]) == 578 )
                  v296 = 8;
                **(_DWORD **)(v9 + 1272) = v296 | **(_DWORD **)(v9 + 1272) & 0xFFFFFFF7;
              }
            }
            else
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
            }
          }
          v285 = v395;
          if ( CTouchProcessor::IsPointerMessageTouchpad(
                 gpTouchProcessor,
                 (struct tagTHREADINFO *)v9,
                 *((unsigned __int64 *)&v417[2] + 1),
                 v395) )
          {
            if ( !v114
              && !(unsigned int)IsPTPAllowedOnThread(
                                  (struct tagTHREADINFO *)v9,
                                  DWORD2(v417[1]),
                                  *(unsigned __int64 *)&v417[2]) )
            {
              xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
            }
            v297 = v399;
            if ( (_DWORD)v64 == 595 )
              v297 = -1LL;
            v399 = v297;
          }
          goto LABEL_811;
        }
        EtwTraceBeginPointerMessageRetrieve(v8, LOWORD(v417[2]), (unsigned int)v64);
        LODWORD(v64) = (_DWORD)a8;
        v10 = 0LL;
        v286 = (unsigned int)xxxRetrievePointerInputMessage(
                               v9,
                               a3,
                               a4,
                               a5,
                               1,
                               0,
                               &v394,
                               v8,
                               (__int64)&ThreadDesktopWindow,
                               (__int64)v397,
                               (__int64)&v402,
                               (__int64)&v399,
                               &v404,
                               a8,
                               v389);
        InputTraceLogging::Pointer::RetrieveMessage(v8, 0LL, v286);
        EtwTraceEndPointerMessageRetrieve(v8, LOWORD(v417[2]), DWORD2(v417[1]));
        v81 = (unsigned __int64)ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          ThreadLockExchange((__int64)ThreadDesktopWindow, (__int64)&v430);
        v287 = v286 - 1;
        if ( !v287 )
        {
          LODWORD(v64) = v397[0];
          v114 = v394;
          goto LABEL_786;
        }
        v288 = v287 - 1;
        if ( !v288 )
        {
          if ( v404 )
          {
            v423 = *(_QWORD *)(v81 + 16);
            LockExchangeW32Thread(v423, (__int64)&v454);
          }
          goto LABEL_348;
        }
        v289 = v288 - 1;
        if ( v289 )
        {
          *a8 = 0LL;
          if ( v289 == 1 )
            goto LABEL_41;
          v254 = v397[0];
          MouseKeyFlags = v402;
          v114 = v394;
        }
        else
        {
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          xxxDefPointerProc(v290, DWORD2(v417[1]), *(_QWORD *)&v417[2], *((_QWORD *)&v417[2] + 1));
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          *a8 = 0LL;
          v254 = v397[0];
          MouseKeyFlags = v402;
          v114 = v394;
        }
LABEL_773:
        xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
        if ( v407 )
        {
          v291 = *(_QWORD *)(v9 + 456);
          v72 = *(_DWORD *)(v9 + 672) | *(_DWORD *)(*(_QWORD *)v291 + 16LL);
          if ( ((*(_BYTE *)(v9 + 672) | *(_BYTE *)(*(_QWORD *)v291 + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            xxxCallHook(6, v254, (__int64)v433, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          }
          v407 = 0;
        }
        if ( v411 )
        {
          v292 = *(_QWORD *)(v9 + 456);
          v72 = *(_DWORD *)(v9 + 672) | *(_DWORD *)(*(_QWORD *)v292 + 16LL);
          if ( ((*(_BYTE *)(v9 + 672) | *(_BYTE *)(*(_QWORD *)v292 + 16LL)) & 0x40) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            xxxCallHook(7, MouseKeyFlags, v399, 5);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          }
          v411 = 0;
        }
        v95 = v114 == 0;
        v10 = 0LL;
        v11 = v393;
        LOBYTE(v8) = v392;
        if ( !v95 )
          goto LABEL_36;
      }
      if ( DWORD2(v417[1]) == 522 )
        break;
      switch ( DWORD2(v417[1]) )
      {
        case 0x23:
          v399 = *((_QWORD *)&v417[2] + 1);
          if ( v81 )
          {
            v110 = *(_QWORD *)(v81 + 16);
            if ( v110 != v9 )
            {
              if ( *(_QWORD *)(v110 + 424) == *(_QWORD *)(v9 + 424) )
              {
                v111 = v403;
                if ( !v403 )
                {
                  v111 = *(_QWORD *)(v81 + 16);
                  LockExchangeW32Thread(v110, (__int64)&v447);
                }
                goto LABEL_349;
              }
LABEL_381:
              MouseKeyFlags = v402;
LABEL_382:
              v114 = v394;
              goto LABEL_772;
            }
          }
          if ( !(unsigned int)MiPCheckMsgFilter(v8, DWORD2(v417[1]), a4, a5, v384, v385, v386) )
            goto LABEL_348;
          if ( !v394 )
            goto LABEL_810;
          goto LABEL_458;
        case 0xFE:
          goto LABEL_445;
        case 0xFF:
          v399 = *((_QWORD *)&v417[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v417[2];
          v402 = *(_QWORD *)&v417[2];
          v81 = 0LL;
          ThreadDesktopWindow = 0LL;
          v154 = 0LL;
          v64 = 0LL;
          if ( *((_QWORD *)&v417[2] + 1) )
          {
            v155 = HMValidateHandle(*((unsigned __int64 *)&v417[2] + 1), 0x12u);
            v154 = 0LL;
            if ( v155 )
            {
              v81 = *(_QWORD *)(v155 + 24);
              ThreadDesktopWindow = (struct tagWND *)v81;
              v154 = v81;
              v64 = v81;
            }
          }
          if ( !v154 )
          {
            v156 = *(_QWORD *)(v9 + 424);
            v81 = *(_QWORD *)(v156 + 112);
            ThreadDesktopWindow = (struct tagWND *)v81;
            v64 = v81;
            if ( !v81 )
            {
              v81 = *(_QWORD *)(v156 + 120);
              ThreadDesktopWindow = (struct tagWND *)v81;
              v64 = v81;
              if ( !v81 )
                goto LABEL_382;
            }
          }
          ThreadLockExchangeAlways(v81, &v430);
          if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v81, v8, &v404, &v394, a8) )
            goto LABEL_348;
          v157 = v404;
          if ( !v404 )
            goto LABEL_330;
          v64 += 16LL;
          if ( *(_QWORD *)(*(_QWORD *)v64 + 424LL) != *(_QWORD *)(v9 + 424) )
            goto LABEL_382;
          if ( (unsigned int)IsInsideMenuLoop(v9) )
          {
            v158 = *(_QWORD *)(**(_QWORD **)(v9 + 600) + 8LL);
          }
          else
          {
            v159 = *(_QWORD *)(v9 + 664);
            if ( !v159 )
              goto LABEL_328;
            v158 = *(_QWORD *)(v159 + 16);
          }
          if ( v158 )
          {
            v81 = v158;
            ThreadDesktopWindow = (struct tagWND *)v158;
            v64 = v158 + 16;
            v157 = *(_QWORD *)(v158 + 16) != v421;
            v404 = v157;
            ThreadLockExchangeAlways(v158, &v430);
          }
LABEL_328:
          if ( !v413 )
          {
            v413 = *(_QWORD *)v64;
            v429 = v413;
            LockExchangeW32Thread(v413, (__int64)&v457);
          }
LABEL_330:
          if ( !a4 && a5 == -1 )
            goto LABEL_338;
          if ( a4 <= a5 )
          {
            LOBYTE(v8) = v392;
            if ( v391 < a4 || v391 > a5 )
              goto LABEL_42;
          }
          else if ( v391 >= a5 && v391 <= a4 )
          {
            goto LABEL_41;
          }
LABEL_338:
          v160 = CheckPwndFilter(v81, a3);
          LOBYTE(v8) = v392;
          if ( v160 )
          {
            if ( v157 )
            {
LABEL_348:
              v111 = v403;
LABEL_349:
              v161 = v400;
              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 72LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(v9 + 424),
                  4u,
                  0x12u,
                  0x20u,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(v9 + 424),
                  v9,
                  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 64LL));
              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 64LL) = 0LL;
              **(_DWORD **)(v9 + 440) &= ~1u;
              v162 = v413;
              if ( v161 || v111 || v424 || v413 || v423 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                if ( v424 )
                  v314 = (__int128 *)(v424 + 384);
                else
                  v314 = (__int128 *)gObjDummyLock;
                if ( v423 )
                  v315 = (__int128 *)(v423 + 384);
                else
                  v315 = (__int128 *)gObjDummyLock;
                v316 = gObjDummyLock;
                if ( v162 )
                  v316 = v162 + 384;
                v317 = gObjDummyLock;
                if ( v111 )
                  v317 = v111 + 384;
                v318 = gObjDummyLock;
                if ( v161 )
                  v318 = v161 + 384;
                v426 = gpsiLock;
                v427 = *((_QWORD *)&gpsiLock + 2);
                v426 = *(_OWORD *)(v9 + 384);
                v427 = *(_QWORD *)(v9 + 400);
                v426 = *(_OWORD *)v318;
                v427 = *(_QWORD *)(v318 + 16);
                v426 = *(_OWORD *)v317;
                v427 = *(_QWORD *)(v317 + 16);
                v426 = *(_OWORD *)v316;
                v427 = *(_QWORD *)(v316 + 16);
                v426 = *v315;
                v427 = *((_QWORD *)v315 + 2);
                v426 = *v314;
                v427 = *((_QWORD *)v314 + 2);
                if ( v161 )
                {
                  SetWakeBit(v161, 0x4001u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4001u, 0);
                }
                if ( v111 )
                {
                  SetWakeBit(v111, 0x4006u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4006u, 0);
                }
                if ( v162 )
                {
                  SetWakeBit(v162, 0x4400u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x4400u, 0);
                }
                if ( v423 )
                {
                  SetWakeBit(v423, 0x5000u);
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5000u, 0);
                }
                v319 = v424;
                if ( v424 )
                {
                  if ( (*(_DWORD *)(v424 + 480) & 1) == 0 )
                  {
                    *(_WORD *)(*(_QWORD *)(v424 + 440) + 6LL) |= 0x2040u;
                    *(_WORD *)(*(_QWORD *)(v319 + 440) + 4LL) |= 0x2040u;
                    if ( (*(_WORD *)(*(_QWORD *)(v319 + 440) + 10LL) & 0x2040) != 0 )
                      KeSetEvent(*(PRKEVENT *)(v319 + 728), 2, 0);
                  }
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x2000u, 0);
                }
                else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 56LL) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  *(_WORD *)(*(_QWORD *)(v9 + 440) + 8LL) |= *(_WORD *)(*(_QWORD *)(v9 + 440) + 6LL) & 0x5C07;
                  ClearWakeBit((struct tagTHREADINFO *)v9, 0x5C07u, 0);
                  *(_WORD *)(*(_QWORD *)(v9 + 440) + 4LL) &= 0xA3F8u;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              }
              else
              {
                *(_WORD *)(*(_QWORD *)(v9 + 440) + 8LL) = 0;
                ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
              }
              v320 = KeGetCurrentThread();
              v321 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v163)
                || (v325 = PsGetCurrentProcess(v323, v322, v324),
                    v326 = PsGetProcessSessionIdEx(v325),
                    v328 = PsGetCurrentThreadProcess(v327),
                    v326 == (unsigned int)PsGetProcessSessionIdEx(v328)) )
              {
                v331 = (__int64 *)PsGetThreadWin32Thread(v320);
                if ( v331 )
                  v321 = *v331;
              }
              *(_QWORD *)(v321 + 16) = v454;
              v332 = v455;
              if ( v455 )
                ((void (__fastcall *)(__int64, __int64, __int64))v456)(v455, v329, v330);
              v333 = KeGetCurrentThread();
              v334 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v332)
                || (v338 = PsGetCurrentProcess(v336, v335, v337),
                    v339 = PsGetProcessSessionIdEx(v338),
                    v341 = PsGetCurrentThreadProcess(v340),
                    v339 == (unsigned int)PsGetProcessSessionIdEx(v341)) )
              {
                v344 = (__int64 *)PsGetThreadWin32Thread(v333);
                if ( v344 )
                  v334 = *v344;
              }
              *(_QWORD *)(v334 + 16) = v457;
              v345 = v458;
              if ( v458 )
                ((void (__fastcall *)(__int64, __int64, __int64))v459)(v458, v342, v343);
              v346 = KeGetCurrentThread();
              v347 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v345)
                || (v351 = PsGetCurrentProcess(v349, v348, v350),
                    v352 = PsGetProcessSessionIdEx(v351),
                    v354 = PsGetCurrentThreadProcess(v353),
                    v352 == (unsigned int)PsGetProcessSessionIdEx(v354)) )
              {
                v357 = (__int64 *)PsGetThreadWin32Thread(v346);
                if ( v357 )
                  v347 = *v357;
              }
              *(_QWORD *)(v347 + 16) = v441;
              v358 = v442;
              if ( v442 )
                ((void (__fastcall *)(__int64, __int64, __int64))v443)(v442, v355, v356);
              v359 = KeGetCurrentThread();
              v360 = 0LL;
              if ( !(unsigned __int8)KeIsAttachedProcess(v358)
                || (v364 = PsGetCurrentProcess(v362, v361, v363),
                    v365 = PsGetProcessSessionIdEx(v364),
                    v367 = PsGetCurrentThreadProcess(v366),
                    v365 == (unsigned int)PsGetProcessSessionIdEx(v367)) )
              {
                v370 = (__int64 *)PsGetThreadWin32Thread(v359);
                if ( v370 )
                  v360 = *v370;
              }
              *(_QWORD *)(v360 + 16) = v447;
              v371 = v448;
              if ( v448 )
                ((void (__fastcall *)(__int64, __int64, __int64))v449)(v448, v368, v369);
              v372 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v371)
                || (v376 = PsGetCurrentProcess(v374, v373, v375),
                    v377 = PsGetProcessSessionIdEx(v376),
                    v379 = PsGetCurrentThreadProcess(v378),
                    v377 == (unsigned int)PsGetProcessSessionIdEx(v379)) )
              {
                v382 = (__int64 *)PsGetThreadWin32Thread(v372);
                if ( v382 )
                  v10 = *v382;
              }
              *(_QWORD *)(v10 + 16) = v444;
              v383 = v445;
              if ( v445 )
                ((void (__fastcall *)(__int64, __int64, __int64))v446)(v445, v380, v381);
              ThreadUnlock1(v383, v380, v381);
              goto LABEL_904;
            }
            if ( !v394 )
              goto LABEL_810;
LABEL_458:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
            goto LABEL_810;
          }
          goto LABEL_42;
        case 0x100:
        case 0x104:
          v414 = 1;
          if ( (*(_DWORD *)(v9 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
            goto LABEL_348;
          v112 = *(_QWORD *)&v417[2];
          v113 = LOBYTE(v417[2]);
          v114 = v394;
          if ( v394 && (DWORD1(v417[6]) & 0x40000) != 0 )
            goto LABEL_175;
          if ( LOBYTE(v417[2]) != 18LL )
          {
            *(_DWORD *)(*(_QWORD *)(v9 + 424) + 388LL) &= 0xFFFFFFF3;
            v112 = *(_QWORD *)&v417[2];
          }
          v115 = *(_BYTE *)(*(_QWORD *)(v9 + 424) + 232LL);
          v116 = v115 & 0x10;
          if ( v113 != 44 )
            goto LABEL_162;
          if ( (v115 & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v9 + 868) & 0x20) != 0 )
              goto LABEL_162;
LABEL_154:
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
            if ( v116 || (DWORD2(v417[2]) & 0xFF0000) == 0x10000LL )
            {
              v64 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 120LL);
              v117 = v64 == 0;
              if ( !v64 )
                goto LABEL_160;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v64 = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v64);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            else
            {
              v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 448) + 8LL) + 24LL);
            }
            v117 = v64 == 0;
LABEL_160:
            v10 = 0LL;
            v11 = v393;
            LOBYTE(v8) = v392;
            if ( !v117 )
            {
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v118 = HIDWORD(v417[7]) != 1;
              *(_QWORD *)&v439 = *(_QWORD *)(v9 + 408);
              *(_QWORD *)(v9 + 408) = &v439;
              *((_QWORD *)&v439 + 1) = v64;
              HMLockObject(v64);
              xxxSnapWindow(v64, v118);
              ThreadUnlock1(v120, v119, v121);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
            goto LABEL_36;
          }
          if ( (*(_DWORD *)(v9 + 868) & 0x10) == 0 )
            goto LABEL_154;
LABEL_162:
          if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
          {
            v122 = v113 | 0x400;
            if ( (v115 & 0x10) == 0 )
              v122 = v113;
            v123 = v122 | 0x200;
            if ( (v115 & 4) == 0 )
              v123 = v122;
            v124 = v123;
            LODWORD(v124) = v123 | 0x100;
            if ( (v115 & 1) == 0 )
              v124 = v123;
            v125 = HotKeyToWindow(v124);
            v126 = (__int64 *)v125;
            if ( v125 )
            {
              if ( *(_QWORD *)(v9 + 448) == *(_QWORD *)(*(_QWORD *)(v125 + 16) + 448LL) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                v10 = 0LL;
                PostTransformableMessage(
                  *(struct tagWND **)(*(_QWORD *)(v9 + 424) + 120LL),
                  0x112u,
                  0xF150uLL,
                  *v126,
                  0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
LABEL_174:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
                v11 = v393;
                LOBYTE(v8) = v392;
                goto LABEL_36;
              }
            }
          }
LABEL_175:
          if ( v113 == 231 )
          {
            *(_WORD *)(v9 + 866) = WORD1(v112);
            v112 = 231LL;
          }
LABEL_178:
          v127 = (unsigned __int8)v112;
          if ( (unsigned __int8)v112 == 231LL )
            v112 = 231LL;
          *(_QWORD *)&v417[2] = v112;
          if ( !v114 || (DWORD1(v417[6]) & 0x40000) == 0 )
          {
            if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
            {
              if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE10(v417[2]) == 41 )
              {
                if ( v114 )
                {
                  v128 = *(_QWORD *)(v9 + 424);
                  if ( (*(_BYTE *)(v128 + 232) & 0x15) == 0
                    && (*(_BYTE *)(v128 + 250) & 0x40) == 0
                    && (*(_BYTE *)(v128 + 251) & 1) == 0 )
                  {
                    v129 = *(const struct tagWND **)(v128 + 112);
                    v64 = (unsigned __int64)v129;
                    if ( !v129 )
                    {
                      v129 = *(const struct tagWND **)(v128 + 120);
                      v64 = (unsigned __int64)v129;
                    }
                    if ( !v64 || *((_QWORD *)v129 + 2) == v9 )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
                      v10 = 0LL;
                      v11 = v393;
                      LOBYTE(v8) = v392;
                      if ( !v414 && v64 )
                      {
                        v485 = *(_QWORD *)v129;
                        v486 = 80;
                        v487 = 0LL;
                        v488 = 0LL;
                        v489 = 0;
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                        xxxCallCtfHook(3, 0, 1LL, (__int64)&v485);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                      }
                      goto LABEL_36;
                    }
                    LODWORD(v64) = v391;
                  }
                }
              }
            }
          }
          if ( v127 == 121 )
          {
            LODWORD(v64) = v64 | 4;
            v391 = v64;
            v397[0] = v64;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v9 + 424) + 232LL) & 4) != 0 && v127 == 27 )
          {
            LODWORD(v64) = v64 | 4;
            v391 = v64;
            v397[0] = v64;
          }
          if ( (*(_DWORD *)(v9 + 480) & 8) == 0 )
            *((_QWORD *)&v417[2] + 1) &= ~0x2000000uLL;
LABEL_205:
          MouseKeyFlags = LOBYTE(v417[2]);
          v131 = *(_QWORD *)(v9 + 424);
          v81 = *(_QWORD *)(v131 + 112);
          ThreadDesktopWindow = (struct tagWND *)v81;
          v132 = v81;
          if ( !v81 )
          {
            v81 = *(_QWORD *)(v131 + 120);
            v132 = v81;
            ThreadDesktopWindow = (struct tagWND *)v81;
            if ( !v81 )
              goto LABEL_772;
            if ( (unsigned int)(v64 - 256) <= 3 )
            {
              v391 = v64 + 4;
              v397[0] = v64 + 4;
            }
          }
          ThreadLockExchangeAlways(v81, &v430);
          v133 = (__int64 *)(v132 + 16);
          v134 = *v133;
          LODWORD(v64) = *v133 != v421;
          v404 = v64;
          if ( v134 != v428 )
          {
            if ( *(_QWORD *)(v134 + 424) != *(_QWORD *)(v9 + 424) )
              goto LABEL_772;
            if ( (unsigned int)IsInsideMenuLoop(v9) )
            {
              v136 = *(_QWORD *)(**(_QWORD **)(v9 + 600) + 8LL);
LABEL_215:
              if ( v136 )
              {
                v81 = v136;
                ThreadDesktopWindow = (struct tagWND *)v136;
                v133 = (__int64 *)(v136 + 16);
                LODWORD(v64) = *(_QWORD *)(v136 + 16) != v135;
                v404 = v64;
                ThreadLockExchangeAlways(v136, &v430);
              }
            }
            else
            {
              v137 = *(_QWORD *)(v9 + 664);
              if ( v137 )
              {
                v136 = *(_QWORD *)(v137 + 16);
                goto LABEL_215;
              }
            }
            if ( !v400 )
            {
              v400 = *v133;
              v422 = v400;
              LockExchangeW32Thread(v400, (__int64)&v444);
            }
          }
          if ( !a4 && a5 == -1 )
          {
            v138 = v391;
          }
          else
          {
            v138 = v391;
            if ( a4 <= a5 )
            {
              if ( v391 < a4 || v391 > a5 )
              {
LABEL_46:
                v10 = 0LL;
                goto LABEL_41;
              }
            }
            else if ( v391 >= a5 && v391 <= a4 )
            {
              v10 = 0LL;
              goto LABEL_41;
            }
          }
          if ( !(unsigned int)CheckPwndFilter(v81, a3) )
            goto LABEL_46;
          if ( (_DWORD)v64 )
            goto LABEL_844;
          if ( v114 )
          {
            if ( (DWORD1(v417[6]) & 0x40000) != 0 )
              goto LABEL_253;
            if ( !(unsigned int)IsInsideMenuLoop(v9) )
            {
              if ( MouseKeyFlags == 93 && v138 == 257 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                PostTransformableMessage((struct tagWND *)v81, 0x7Bu, *(_QWORD *)v81, -1LL, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              }
              if ( MouseKeyFlags == 112 && v138 == 256 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                PostMessage(v81, 77, 0, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              }
            }
          }
          if ( MouseKeyFlags == 16 )
          {
            v139 = DWORD2(v417[2]) & 0x1000000;
            if ( !v414 )
            {
              v140 = 1;
              if ( (DWORD2(v417[2]) & 0x1000000) == 0 )
                v140 = 4;
              if ( ((unsigned __int8)v140 & *(_BYTE *)(*(_QWORD *)(v9 + 424) + 268LL)) != 0
                && (unsigned int)IsDesktopApp(*(_QWORD *)(v9 + 416))
                && (*(_DWORD *)(v9 + 480) & 8) == 0 )
              {
                v10 = 0LL;
                *(_QWORD *)&v417[2] = (v139 != 0) + 160LL;
                goto LABEL_174;
              }
            }
          }
          v420 = *(unsigned __int8 *)((MouseKeyFlags >> 2) + *(_QWORD *)(v9 + 424) + 228) & (1 << (2
                                                                                                 * (MouseKeyFlags & 3)));
          if ( !v420 )
          {
LABEL_253:
            v141 = v408;
            goto LABEL_254;
          }
          v141 = v408;
          if ( !v114 )
            goto LABEL_260;
          if ( (unsigned __int64)v408 > 1 )
            *((_QWORD *)v408 + 5) |= 0x40000000uLL;
LABEL_254:
          if ( !v114 )
            goto LABEL_260;
          if ( (DWORD1(v417[6]) & 0x40000) != 0
            || (unsigned __int64)v141 <= 1
            || (*(_DWORD *)(v9 + 1224) & 0x10000000) == 0 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
LABEL_260:
            v64 = (unsigned __int64)v412;
            goto LABEL_261;
          }
          v64 = (unsigned __int64)xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 0);
          v412 = (struct tagQMSG *)v64;
LABEL_261:
          v399 = *((_QWORD *)&v417[2] + 1);
          MouseKeyFlags = *(_QWORD *)&v417[2];
          v402 = *(_QWORD *)&v417[2];
          if ( v420 )
            v399 = *((_QWORD *)&v417[2] + 1) | 0x40000000LL;
          if ( v138 == 257 || v138 == 261 )
            v399 |= 0x80000000uLL;
          v142 = *(_QWORD *)(v9 + 424);
          if ( (*(_BYTE *)(v142 + 232) & 0x10) != 0 )
            v399 |= 0x20000000uLL;
          v143 = *(_QWORD *)(v9 + 600);
          if ( v143 && (*(_DWORD *)(v143 + 8) & 1) != 0 )
            v399 |= 0x10000000uLL;
          if ( (*(_DWORD *)(v142 + 388) & 0x4000) != 0 )
            v399 |= 0x8000000uLL;
          if ( (v437 || gpImeHotKeyListHeader) && (DWORD1(v417[6]) & 0x40000) == 0 )
          {
            if ( !v114 )
              goto LABEL_303;
            if ( (!v143 || (*(_DWORD *)(v143 + 8) & 1) == 0) && (*(_DWORD *)(v9 + 480) & 0x2000000) == 0 )
            {
              v144 = v417[2];
              if ( *(_QWORD *)&v417[2] == 231LL )
                v144 = (*(unsigned __int16 *)(v9 + 866) << 16) | 0xE7;
              *(_QWORD *)(v9 + 1232) = *((_QWORD *)&v417[7] + 1);
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v145 = xxxImmProcessKey(*(_QWORD *)(v9 + 424), v81, v138, v144, v399);
              v146 = v145;
              v416 = v145;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              if ( (v146 & 0x11) != 0 )
              {
                if ( v64 )
                  FreeQEntry((unsigned int *)v64);
                v412 = 0LL;
                goto LABEL_772;
              }
            }
          }
          if ( !v114 )
            goto LABEL_303;
          v411 = 1;
          LODWORD(v64) = 0;
          if ( (DWORD1(v417[6]) & 0x40000) != 0 )
            goto LABEL_302;
          v147 = *(_QWORD *)(v9 + 424);
          v148 = *(_QWORD *)(v147 + 408);
          *(_QWORD *)(v147 + 408) = *((_QWORD *)&v417[4] + 1);
          *(_QWORD *)(v9 + 1232) = *((_QWORD *)&v417[7] + 1);
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          LODWORD(v64) = xxxCallCtfHook(2, v416 & 2, MouseKeyFlags, v399);
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          *(_QWORD *)(*(_QWORD *)(v9 + 424) + 408LL) = v148;
          v149 = (unsigned int *)v412;
          if ( !v412 )
            goto LABEL_302;
          if ( (unsigned int)(v64 - 2) > 1
            || (*(_DWORD *)(v9 + 1224) & 0x20000000) != 0
            || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(v9 + 424) + 24LL), v412, 1) )
          {
            FreeQEntry(v149);
            v412 = 0LL;
LABEL_302:
            if ( !(_DWORD)v64 )
            {
LABEL_303:
              if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 456) + 16LL) | *(_BYTE *)(v9 + 672)) & 8) == 0 )
                goto LABEL_308;
              v411 = 1;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
              v150 = 3;
              if ( v114 )
                v150 = 0;
              if ( !(unsigned int)xxxCallHook(v150, MouseKeyFlags, v399, 2) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
LABEL_308:
                if ( v411
                  && v114
                  && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 456) + 16LL) | *(_BYTE *)(v9 + 672)) & 0x40) != 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
                  v151 = v399;
                  v152 = MouseKeyFlags;
                  v153 = 7;
                  goto LABEL_312;
                }
                goto LABEL_810;
              }
LABEL_771:
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
            }
LABEL_772:
            v254 = v391;
            goto LABEL_773;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qqq(
              *(_QWORD *)(v9 + 424),
              5u,
              0x12u,
              0x1Fu,
              (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 24LL),
              *(_QWORD *)(v9 + 424),
              *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL));
          }
          *(_QWORD *)(*(_QWORD *)(v9 + 424) + 80LL) = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 24LL);
          if ( (_DWORD)v64 == 2 )
          {
            v11 = 1;
            v393 = 1;
          }
          else
          {
            v11 = v393;
            if ( (_DWORD)v64 == 3 )
              v11 = 2;
            v393 = v11;
          }
          DeferSysPeekMsg(v9, v11);
          v10 = 0LL;
          v412 = 0LL;
          LOBYTE(v8) = v392;
          break;
        case 0x101:
        case 0x105:
          v112 = *(_QWORD *)&v417[2];
          v114 = v394;
          goto LABEL_178;
        case 0x102:
          v114 = v394;
          goto LABEL_205;
        case 0x119:
        case 0x11B:
          goto LABEL_439;
        default:
          goto LABEL_460;
      }
    }
LABEL_372:
    if ( (*(_DWORD *)(v9 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)v9) < 0 )
      goto LABEL_348;
    if ( (unsigned int)IsInsideMenuLoop(v9) )
      goto LABEL_381;
    if ( (DWORD1(v417[6]) & 0x800000) != 0 )
    {
      v81 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 112LL);
      ThreadDesktopWindow = (struct tagWND *)v81;
    }
    else
    {
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
      if ( v81 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v81) )
      {
        LODWORD(v64) = 1;
        if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v81) )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
          goto LABEL_381;
        }
      }
      else
      {
        ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
        LODWORD(v64) = 0;
      }
      v478[2] = 0LL;
      v167 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v478[0] = *(_QWORD *)(v167 + 408);
      *(_QWORD *)(v167 + 408) = v478;
      v168 = ThreadDesktopWindow;
      v478[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        HMLockObject(ThreadDesktopWindow);
      v386 = 8 * v64 + 1;
      v385 = &v398;
      v384 = *(struct tagQMSG ***)&v417[5];
      v169 = xxxDCEWindowHitTest(v168);
      v81 = HMValidateHandleNoSecure(v169, 1);
      ThreadDesktopWindow = (struct tagWND *)v81;
      v170 = (struct tagWND *)HMValidateHandleNoSecure(v169, 1);
      InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v417, (const struct tagPOINT *)&v417[5], v170);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
      ThreadUnlock1(v172, v171, v173);
      LODWORD(v64) = v397[0];
      v391 = v397[0];
    }
    if ( !v81 )
      goto LABEL_381;
    ThreadLockExchangeAlways(v81, &v430);
    v174 = *(_QWORD *)(v81 + 16);
    v404 = v174 != v421;
    v175 = v428;
    if ( v174 != v428 )
    {
      if ( *(_QWORD *)(v174 + 424) != *(_QWORD *)(v9 + 424) )
        goto LABEL_381;
      if ( !v400 )
      {
        v400 = v174;
        v422 = v174;
        LockExchangeW32Thread(v174, (__int64)&v444);
      }
    }
    if ( !(unsigned int)MiPCheckMsgFilter(v8, (unsigned int)v64, a4, a5, v384, v385, v386)
      || !(unsigned int)CheckPwndFilter(v81, a3) )
    {
      goto LABEL_41;
    }
    if ( v174 != v175 )
      goto LABEL_348;
    if ( !v8 || !IsMiPActive(v9, (__int64)v8) )
    {
      v114 = v394;
      goto LABEL_418;
    }
    if ( (*((_DWORD *)v8 + 25) & 0x800) != 0 )
    {
      memset(v511, 0, sizeof(v511));
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
      v426 = *(_OWORD *)(v81 + 56);
      v427 = *(_QWORD *)(v81 + 72);
      v176 = *(_QWORD *)(v81 + 272);
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
      if ( !v176 )
        *((_DWORD *)v8 + 25) &= ~0x2000u;
      v114 = v394;
      if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v511, v64, v8, (struct tagWND *)v81, v394) )
      {
        if ( v114 || !(unsigned int)IsMiPEnabledForWindow(v81) )
          *((_DWORD *)v8 + 25) &= ~0x800u;
        goto LABEL_418;
      }
      v417[0] = v511[0];
      v417[1] = v511[1];
      v417[2] = v511[2];
      v417[3] = v511[3];
      v417[4] = v511[4];
      v417[5] = v511[5];
      v417[6] = v511[6];
      v417[7] = v511[7];
      v417[8] = v511[8];
      v417[9] = v511[9];
      v395 = 1;
      v410 = 1;
      if ( v114 || !(unsigned int)IsMiPEnabledForWindow(v81) )
        *((_DWORD *)v8 + 25) &= ~0x800u;
      goto LABEL_758;
    }
    v114 = v394;
    if ( !v394 )
      goto LABEL_420;
    if ( !(unsigned int)IsMiPMouseMessage(*((unsigned int *)v8 + 6)) )
      goto LABEL_418;
    if ( (unsigned int)IsGenuineMouseInput((char *)v8 + 120) )
    {
      v177 = *(_DWORD **)(v9 + 1272);
      if ( v177 )
      {
        if ( (*v177 & 2) == 0 && (*v177 & 4) == 0 )
        {
LABEL_414:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
          v10 = 0LL;
          v11 = v393;
          LOBYTE(v8) = v392;
          continue;
        }
      }
    }
    break;
  }
  v178 = *(_DWORD **)(v9 + 1272);
  if ( v178 )
    *v178 &= ~2u;
LABEL_418:
  if ( v114 )
  {
    v179 = 1;
    xxxSkipSysMsgEx((struct tagTHREADINFO *)v9, (struct tagQMSG *)v417, 1);
  }
  else
  {
LABEL_420:
    v179 = 1;
  }
  v180 = GetMouseKeyFlags(*(_QWORD *)(v9 + 424));
  MouseKeyFlags = *(_QWORD *)&v417[2] | v180;
  v402 = MouseKeyFlags;
  v397[1] = SWORD4(v417[2]);
  v397[2] = SWORD5(v417[2]);
  PhysicalToLogicalDPIPointWithHitTest(&v397[1], &v397[1], 0LL, v81);
  v399 = (LOWORD(v397[2]) << 16) | LOWORD(v397[1]);
  *(_QWORD *)((char *)&v417[3] + 4) = *(_QWORD *)&v397[1];
  v433[0] = *(_QWORD *)&v397[1];
  v433[1] = *(_QWORD *)v81;
  LODWORD(v434) = 0;
  *((_QWORD *)&v434 + 1) = *((_QWORD *)&v417[4] + 1);
  LODWORD(v435) = v417[2];
  if ( v114 )
  {
    v407 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
    if ( (unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v64, (__int64)v433) )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  }
  if ( ((*(_DWORD *)(**(_QWORD **)(v9 + 456) + 16LL) | *(_DWORD *)(v9 + 672)) & 0x100) != 0 )
  {
    v407 = 1;
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
    if ( xxxCallMouseHook() )
      goto LABEL_771;
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  }
  else
  {
    v179 = v407;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
    goto LABEL_435;
  v181 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
  v405 = 0;
  v405 = *(_QWORD *)(v181 + 248) != 0LL;
  if ( !v405 )
  {
    LODWORD(v64) = v397[0];
    v114 = v394;
    goto LABEL_434;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  v114 = v394;
  LODWORD(v64) = v397[0];
  v391 = v397[0];
  if ( xxxClientCallLocalMouseHooks(v397[0], v433, (unsigned int)v394) )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
    MouseKeyFlags = v402;
    goto LABEL_772;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
LABEL_434:
  v81 = (unsigned __int64)ThreadDesktopWindow;
LABEL_435:
  if ( v179
    && v114
    && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v9 + 456) + 16LL) | *(_BYTE *)(v9 + 672)) & 0x40) != 0 )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
    v152 = (unsigned int)v64;
    v151 = (__int64)v433;
    v153 = 6;
LABEL_312:
    xxxCallHook(v153, v152, v151, 5);
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  }
LABEL_810:
  v285 = v395;
LABEL_811:
  if ( *(_QWORD *)(v9 + 756) != *(_QWORD *)((char *)&v417[3] + 4) )
    *(_DWORD *)(v9 + 480) |= 0x100000u;
  v298 = v408;
  if ( (unsigned __int64)v408 > 1 && (BYTE4(v417[6]) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v408 + 6) == 512 )
    {
      v299 = 0LL;
      if ( v81 )
        v299 = *(_QWORD *)v81;
      *((_QWORD *)v408 + 2) = v299;
      *((_DWORD *)v298 + 25) |= 0x400u;
    }
    *((_QWORD *)v298 + 8) = v399;
  }
  *(_QWORD *)(v9 + 756) = *(_QWORD *)((char *)&v417[3] + 4);
  *(_DWORD *)(v9 + 764) = *(_DWORD *)(*(_QWORD *)(v81 + 40) + 288LL);
  *(_QWORD *)(v9 + 768) = *(_QWORD *)&v417[5];
  *(_DWORD *)(v9 + 560) = v417[3];
  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 408LL) = *((_QWORD *)&v417[4] + 1);
  *(_QWORD *)(*(_QWORD *)(v9 + 424) + 72LL) = 1LL;
  *(_QWORD *)(v9 + 568) = 1LL;
  *(_QWORD *)(v9 + 1232) = *((_QWORD *)&v417[7] + 1);
  *(_DWORD *)(v9 + 1280) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v300 = v418;
  v301 = *(_DWORD *)(v418 + 1224) | 0x20000;
  if ( *(_DWORD *)(v9 + 1236) != 1 )
    v301 = *(_DWORD *)(v418 + 1224) & 0xFFFDFFFF;
  *(_DWORD *)(v418 + 1224) = v301;
  **(_DWORD **)(v9 + 440) &= ~8u;
  **(_QWORD **)(v9 + 472) &= 0x7FFFFFFFuLL;
  v302 = 0LL;
  v303 = v394;
  if ( v394 )
  {
    v304 = *(unsigned __int64 **)(v300 + 472);
    v305 = *v304;
    if ( (BYTE4(v417[6]) & 1) != 0 )
      v306 = v305 | 0x1000;
    else
      v306 = v305 & 0xFFFFFFFFFFFFEFFFuLL;
    *v304 = v306;
  }
  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  v307 = v397[0];
  TransferWakeBit(v9, v397[0]);
  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  ClearWakeBit((struct tagTHREADINFO *)v9, 0x7C07u, 1);
  if ( v303 )
  {
    if ( v285 )
    {
      v308 = *(_DWORD **)(v9 + 1272);
      if ( v308 )
      {
        if ( (*v308 & 1) != 0 && (*v308 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)v9);
      }
    }
  }
  if ( ThreadDesktopWindow )
    v302 = *(_QWORD *)ThreadDesktopWindow;
  *(_QWORD *)a2 = v302;
  *(_DWORD *)(a2 + 8) = v307;
  v309 = v402;
  if ( (v416 & 2) != 0 )
    v309 = 229LL;
  *(_QWORD *)(a2 + 16) = v309;
  *(_QWORD *)(a2 + 24) = v399;
  *(_DWORD *)(a2 + 32) = v417[3];
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v417[3] + 4);
  InputTraceLogging::Delivery::ScanSysQueue(
    (const struct tagQMSG *)v417,
    (const struct tagMSG *)a2,
    (const struct tagTHREADINFO *)v9,
    v303 != 0);
  if ( v303 )
  {
    EtwTraceInputProcessDelay(v9);
    *(_DWORD *)(*(_QWORD *)(v9 + 424) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v310 = *(_DWORD *)(a2 + 8);
    if ( v310 == 256 )
    {
      *(_DWORD *)(v9 + 1336) |= 1u;
      *(_QWORD *)(v9 + 1320) = *(_QWORD *)(v9 + 1232);
      *(_DWORD *)(v9 + 1312) = *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)(v9 + 1316) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 1328) = *(_QWORD *)&v417[9];
    }
    else if ( ((v310 - 257) & 0xFFFFFFFB) == 0 )
    {
      *(_DWORD *)(v9 + 1336) &= ~1u;
    }
    v303 = v394;
  }
  EtwTraceRetrieveInputMessage(a2, v303);
  PopAndFreeW32ThreadLock((__int64)&v454);
  PopAndFreeW32ThreadLock((__int64)&v457);
  PopAndFreeW32ThreadLock((__int64)&v441);
  PopAndFreeW32ThreadLock((__int64)&v447);
  PopAndFreeW32ThreadLock((__int64)&v444);
  ThreadUnlock1(v312, v311, v313);
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v390);
  return 1LL;
}
