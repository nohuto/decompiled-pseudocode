/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C00942A0
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C0093440 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C0093FD0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C00940E0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 * Callees:
 *     FreeHidData @ 0x1C0006700 (FreeHidData.c)
 *     IsShellFrameHangResilient @ 0x1C0030240 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00302CC (IsAdaptiveQueueDetachExempted.c)
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     zzzReattachThreads @ 0x1C0038514 (zzzReattachThreads.c)
 *     xxxDoSysExpunge @ 0x1C0042A4C (xxxDoSysExpunge.c)
 *     _tlgKeywordOn @ 0x1C005A788 (_tlgKeywordOn.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxCallCtfHook @ 0x1C0091874 (xxxCallCtfHook.c)
 *     xxxDoPaint @ 0x1C0092318 (xxxDoPaint.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0092F90 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     CalcWakeMask @ 0x1C0095A00 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C0095CE0 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C0095D70 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0095EB0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C00967B0 (WPP_RECORDER_SF_qqdd.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsPointerInputMessage @ 0x1C00A3934 (IsPointerInputMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00B2DE4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00B3268 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00B384C (PhkFirstGlobalValid.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0116598 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x1C011AC54 (SlowAppThreadInShellFrame.c)
 *     WaitMaskIncludesUserInput @ 0x1C011CB00 (WaitMaskIncludesUserInput.c)
 *     _IsChild @ 0x1C01213B4 (_IsChild.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0158AA0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0158ADC (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5545445AEBU?$_tlgWrapSz@G@@44446AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DEEC0 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@U3@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DF0F8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U-$_tlgWrapSz@G@@U1@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4434334AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DF2E4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U-$_tlgWrapSz.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DF510 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U-$_tlgWrapSz@G@.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E0518 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E0D80 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E1B8C (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1DB4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E23D8 (IsMiPEnabledForWindow.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1704 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F1C88 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1F80 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02193F4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0219E2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224EF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C0226280 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 *     xxxClientCallDefWindowProc @ 0x1C0232150 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C02322C0 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C023243C (xxxClientCallDelegateThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rsi
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r11d
  unsigned int v15; // r13d
  struct tagWND *v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // r14d
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  __int16 v26; // di
  __int64 v27; // rcx
  __int64 j; // rcx
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v35; // edi
  int v36; // eax
  int v37; // r12d
  int v38; // r12d
  __int16 v39; // di
  __int64 v40; // r9
  int v41; // eax
  int v42; // ecx
  int v43; // edi
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  unsigned __int16 v47; // r8
  unsigned int v48; // eax
  int v49; // ecx
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  unsigned int v54; // r13d
  unsigned int v55; // edi
  __int64 v56; // rcx
  unsigned __int64 v57; // r14
  struct _KTHREAD *v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdi
  __int64 v63; // rcx
  __int64 *v64; // r12
  unsigned __int64 v65; // r14
  bool v66; // zf
  struct tagWND *v68; // r14
  __int16 v69; // dx
  int v70; // edi
  __int64 v71; // rdi
  __int64 v72; // rax
  struct _KEVENT *v73; // rcx
  int v74; // eax
  __int16 v75; // dx
  __int64 *v76; // rdi
  __int64 v77; // rdx
  int v78; // eax
  _DWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  _DWORD *v82; // r13
  int v83; // edx
  int v84; // r8d
  int v85; // r9d
  int v86; // eax
  _QWORD *v87; // rax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int v93; // r9d
  __int64 v94; // rcx
  unsigned int v95; // r8d
  __int64 v96; // rcx
  __int64 *v97; // rdx
  __int64 **v98; // rax
  _QWORD *v99; // rdi
  __int64 v100; // rcx
  _QWORD *v101; // rax
  _QWORD *v102; // rcx
  unsigned int v103; // edi
  __int64 v104; // rcx
  int v105; // ecx
  unsigned int v106; // eax
  unsigned int v107; // r14d
  int v108; // eax
  int v109; // r12d
  unsigned int v110; // eax
  unsigned int v111; // r13d
  int v112; // edi
  BOOL v113; // eax
  __int64 v114; // rdi
  __int64 v115; // rax
  int v116; // eax
  int v117; // eax
  struct tagWND *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // r8
  int v121; // eax
  _DWORD *v122; // rdx
  int v123; // edx
  int v124; // ecx
  __int64 v125; // r14
  __int64 v126; // rdi
  __int64 v127; // r11
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 *v130; // r9
  int v131; // r14d
  __int64 v132; // rax
  __int64 v133; // r11
  unsigned __int64 i; // rax
  struct tagWND *v135; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v138; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int v140; // r12d
  int v141; // r9d
  unsigned int v142; // eax
  unsigned int v143; // edi
  unsigned int v144; // ecx
  __int64 v145; // rdx
  struct _KEVENT *v146; // rcx
  unsigned __int64 v147; // r12
  int v148; // edx
  __int64 v149; // rax
  const wchar_t *v150; // rcx
  __int64 v151; // rcx
  int v152; // r9d
  __int64 v153; // r8
  __int64 v154; // r8
  __int64 v155; // r8
  __int64 v156; // r8
  unsigned int v157; // edi
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v159; // r8
  __int64 v160; // rax
  int v161; // eax
  __int64 v162; // rax
  int v163; // edi
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 WindowDetails; // rax
  int v167; // edx
  unsigned int v168; // ecx
  int v169; // edx
  int v170; // [rsp+20h] [rbp-4A8h]
  int v171; // [rsp+28h] [rbp-4A0h]
  int v172; // [rsp+30h] [rbp-498h]
  int v173; // [rsp+B0h] [rbp-418h]
  __int16 v174; // [rsp+B4h] [rbp-414h]
  unsigned __int8 v175; // [rsp+B8h] [rbp-410h]
  _BYTE v176[4]; // [rsp+BCh] [rbp-40Ch] BYREF
  int v177; // [rsp+C0h] [rbp-408h]
  unsigned int v178; // [rsp+C4h] [rbp-404h]
  unsigned int v179; // [rsp+C8h] [rbp-400h]
  unsigned int v180; // [rsp+CCh] [rbp-3FCh]
  struct tagQMSG *v181; // [rsp+D0h] [rbp-3F8h]
  int v182; // [rsp+D8h] [rbp-3F0h] BYREF
  int v183; // [rsp+DCh] [rbp-3ECh]
  __int64 v184; // [rsp+E0h] [rbp-3E8h]
  struct tagWND *v185; // [rsp+E8h] [rbp-3E0h]
  __int128 v186; // [rsp+F0h] [rbp-3D8h]
  __int128 v187; // [rsp+100h] [rbp-3C8h]
  __int64 v188; // [rsp+110h] [rbp-3B8h]
  __int16 v189; // [rsp+118h] [rbp-3B0h]
  _WORD v190[5]; // [rsp+11Ah] [rbp-3AEh] BYREF
  int v191; // [rsp+124h] [rbp-3A4h]
  int v192; // [rsp+128h] [rbp-3A0h] BYREF
  int v193; // [rsp+12Ch] [rbp-39Ch] BYREF
  int v194; // [rsp+130h] [rbp-398h] BYREF
  int v195; // [rsp+134h] [rbp-394h] BYREF
  int v196; // [rsp+138h] [rbp-390h] BYREF
  int v197; // [rsp+13Ch] [rbp-38Ch] BYREF
  int v198; // [rsp+140h] [rbp-388h] BYREF
  int v199; // [rsp+144h] [rbp-384h] BYREF
  int v200; // [rsp+148h] [rbp-380h] BYREF
  int v201; // [rsp+14Ch] [rbp-37Ch] BYREF
  int v202; // [rsp+150h] [rbp-378h] BYREF
  int v203; // [rsp+154h] [rbp-374h] BYREF
  int v204; // [rsp+158h] [rbp-370h] BYREF
  int v205; // [rsp+15Ch] [rbp-36Ch] BYREF
  int v206; // [rsp+160h] [rbp-368h] BYREF
  int v207; // [rsp+164h] [rbp-364h] BYREF
  int v208; // [rsp+168h] [rbp-360h] BYREF
  int v209; // [rsp+16Ch] [rbp-35Ch] BYREF
  int v210; // [rsp+170h] [rbp-358h] BYREF
  int v211; // [rsp+174h] [rbp-354h] BYREF
  int v212; // [rsp+178h] [rbp-350h] BYREF
  int v213; // [rsp+17Ch] [rbp-34Ch] BYREF
  int v214; // [rsp+180h] [rbp-348h] BYREF
  int v215; // [rsp+184h] [rbp-344h] BYREF
  int v216; // [rsp+188h] [rbp-340h] BYREF
  int v217; // [rsp+18Ch] [rbp-33Ch] BYREF
  int v218; // [rsp+190h] [rbp-338h] BYREF
  int v219; // [rsp+194h] [rbp-334h] BYREF
  int v220; // [rsp+198h] [rbp-330h] BYREF
  int v221; // [rsp+19Ch] [rbp-32Ch] BYREF
  int v222; // [rsp+1A0h] [rbp-328h] BYREF
  int v223; // [rsp+1A4h] [rbp-324h] BYREF
  int v224; // [rsp+1A8h] [rbp-320h] BYREF
  int v225; // [rsp+1ACh] [rbp-31Ch] BYREF
  int v226; // [rsp+1B0h] [rbp-318h] BYREF
  int v227; // [rsp+1B4h] [rbp-314h] BYREF
  int v228; // [rsp+1B8h] [rbp-310h] BYREF
  int v229; // [rsp+1BCh] [rbp-30Ch] BYREF
  int v230; // [rsp+1C0h] [rbp-308h] BYREF
  int v231; // [rsp+1C4h] [rbp-304h] BYREF
  int v232; // [rsp+1C8h] [rbp-300h] BYREF
  int v233; // [rsp+1CCh] [rbp-2FCh] BYREF
  int v234; // [rsp+1D0h] [rbp-2F8h] BYREF
  int v235; // [rsp+1D4h] [rbp-2F4h] BYREF
  int v236; // [rsp+1D8h] [rbp-2F0h] BYREF
  int v237; // [rsp+1DCh] [rbp-2ECh] BYREF
  int v238; // [rsp+1E0h] [rbp-2E8h] BYREF
  int v239; // [rsp+1E4h] [rbp-2E4h] BYREF
  int v240; // [rsp+1E8h] [rbp-2E0h] BYREF
  int v241; // [rsp+1ECh] [rbp-2DCh] BYREF
  int v242[6]; // [rsp+1F0h] [rbp-2D8h] BYREF
  int v243; // [rsp+208h] [rbp-2C0h]
  int v244; // [rsp+20Ch] [rbp-2BCh] BYREF
  int v245; // [rsp+210h] [rbp-2B8h] BYREF
  _BYTE v246[16]; // [rsp+218h] [rbp-2B0h] BYREF
  __int64 v247; // [rsp+228h] [rbp-2A0h] BYREF
  char v248[8]; // [rsp+230h] [rbp-298h] BYREF
  char v249[8]; // [rsp+238h] [rbp-290h] BYREF
  __int64 v250; // [rsp+240h] [rbp-288h] BYREF
  __int64 v251; // [rsp+248h] [rbp-280h]
  __int64 v252; // [rsp+250h] [rbp-278h]
  __int128 v253; // [rsp+258h] [rbp-270h] BYREF
  __int64 v254; // [rsp+268h] [rbp-260h] BYREF
  __int64 v255; // [rsp+270h] [rbp-258h] BYREF
  __int64 v256; // [rsp+278h] [rbp-250h] BYREF
  __int64 v257; // [rsp+280h] [rbp-248h] BYREF
  __int64 v258; // [rsp+288h] [rbp-240h] BYREF
  __int64 v259; // [rsp+290h] [rbp-238h] BYREF
  __int128 v260; // [rsp+298h] [rbp-230h] BYREF
  __int64 v261; // [rsp+2A8h] [rbp-220h] BYREF
  __int64 v262; // [rsp+2B0h] [rbp-218h] BYREF
  __int64 v263; // [rsp+2B8h] [rbp-210h] BYREF
  __int64 v264; // [rsp+2C0h] [rbp-208h] BYREF
  __int64 v265; // [rsp+2C8h] [rbp-200h] BYREF
  __int64 v266; // [rsp+2D0h] [rbp-1F8h] BYREF
  __int128 v267; // [rsp+2D8h] [rbp-1F0h] BYREF
  __int64 v268; // [rsp+2E8h] [rbp-1E0h] BYREF
  unsigned __int64 v269; // [rsp+2F0h] [rbp-1D8h] BYREF
  __int64 v270; // [rsp+2F8h] [rbp-1D0h] BYREF
  __int64 v271; // [rsp+300h] [rbp-1C8h] BYREF
  __int64 v272; // [rsp+308h] [rbp-1C0h] BYREF
  unsigned __int64 v273; // [rsp+310h] [rbp-1B8h] BYREF
  __int128 v274; // [rsp+318h] [rbp-1B0h] BYREF
  __int64 v275; // [rsp+328h] [rbp-1A0h] BYREF
  __int64 v276; // [rsp+330h] [rbp-198h] BYREF
  __int64 v277; // [rsp+338h] [rbp-190h] BYREF
  __int64 v278; // [rsp+340h] [rbp-188h] BYREF
  __int128 v279; // [rsp+348h] [rbp-180h] BYREF
  __int64 v280; // [rsp+358h] [rbp-170h] BYREF
  unsigned __int64 v281; // [rsp+360h] [rbp-168h] BYREF
  __int64 v282; // [rsp+368h] [rbp-160h] BYREF
  __int64 v283; // [rsp+370h] [rbp-158h] BYREF
  __int64 v284; // [rsp+378h] [rbp-150h] BYREF
  unsigned __int64 v285; // [rsp+380h] [rbp-148h] BYREF
  __int128 v286; // [rsp+388h] [rbp-140h] BYREF
  __int64 v287; // [rsp+398h] [rbp-130h] BYREF
  __int64 v288; // [rsp+3A0h] [rbp-128h] BYREF
  __int64 v289; // [rsp+3A8h] [rbp-120h] BYREF
  __int64 v290; // [rsp+3B0h] [rbp-118h] BYREF
  __int64 v291; // [rsp+3B8h] [rbp-110h] BYREF
  __int64 v292; // [rsp+3C0h] [rbp-108h] BYREF
  __int128 v293; // [rsp+3D0h] [rbp-F8h] BYREF
  __int64 v294; // [rsp+3E0h] [rbp-E8h]
  _OWORD v295[3]; // [rsp+3E8h] [rbp-E0h] BYREF
  char v296[24]; // [rsp+418h] [rbp-B0h] BYREF
  _BYTE v297[48]; // [rsp+430h] [rbp-98h] BYREF
  char v298[104]; // [rsp+460h] [rbp-68h] BYREF
  char v299; // [rsp+4D8h] [rbp+10h]

  v293 = 0LL;
  v294 = 0LL;
  v299 = 0;
  v10 = 0LL;
  *(_DWORD *)&v190[3] = 0;
  v182 = 0;
  v179 = 0;
  v177 = 0;
  v178 = 0;
  v173 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
    goto LABEL_3;
  }
  if ( a2 < 2 )
  {
LABEL_3:
    v185 = (struct tagWND *)a2;
    v11 = 0;
    goto LABEL_4;
  }
  v118 = (struct tagWND *)ValidateHwnd(a2);
  v185 = v118;
  if ( !v118 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    if ( a6 )
      return 0xFFFFFFFFLL;
    else
      return 0LL;
  }
  *(_QWORD *)&v293 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v293;
  *((_QWORD *)&v293 + 1) = v118;
  HMLockObject(v118);
  v11 = 1;
LABEL_4:
  v184 = 1LL;
  v183 = v11;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  *(_DWORD *)&v190[1] = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v15 = CalcWakeMask(a3, v12, WORD1(a5));
  v180 = v15;
  v243 = v15 & 0x1C07;
  if ( (v15 & 0x1C07) != 0 )
  {
    v13 = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(gptiCurrent + 1400LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  if ( (v15 & 7) == 7 || (v15 & 6) != 0 && (v13 = gptiCurrent, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL)) )
  {
    if ( !v14 )
    {
      if ( a2 )
        goto LABEL_13;
      v16 = 0LL;
      goto LABEL_12;
    }
    if ( *((_QWORD *)v185 + 2) == gptiCurrent )
    {
      v16 = v185;
LABEL_12:
      xxxUpdateInputHangInfo(v16, 1LL);
    }
  }
LABEL_13:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v18 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v18 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v18 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0);
  }
  v19 = *(_QWORD *)(gptiCurrent + 416LL);
  v20 = gcSysExpunge;
  if ( *(_DWORD *)(v19 + 400) != gcSysExpunge )
  {
    *(_DWORD *)(v19 + 400) = gcSysExpunge;
    LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 404LL);
    if ( ((unsigned int)v19 & (__int64)WPP_MAIN_CB.Dpc.DpcListEntry.Next) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v21 = a5 & 1;
  v175 = a5 & 1;
  if ( (a5 & 1) != 0 && (v15 & 0x1CBF) != 0 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x80000) != 0 )
  {
    LODWORD(v19) = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
    if ( ((unsigned int)v19 & v15) != 0 )
    {
      v19 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
      if ( !*(_QWORD *)(v19 + 56) )
      {
        v19 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
        if ( !*(_QWORD *)(v19 + 48) )
          TryAttachShellFrame(gptiCurrent, v20);
      }
    }
  }
  v22 = *(_QWORD *)(gptiCurrent + 424LL);
  v23 = *(_QWORD *)(v22 + 64);
  if ( *(_QWORD *)(gptiCurrent + 504LL)
    || v23 == gptiCurrent && *(_QWORD *)(v22 + 72) == *(_QWORD *)(gptiCurrent + 568LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_qqq(
        v19,
        v20,
        18,
        15,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        v22,
        gptiCurrent,
        *(_QWORD *)(v22 + 64));
    }
    v299 = 1;
  }
  else
  {
    v24 = *(_QWORD *)(v22 + 64);
    if ( !v23 || *(_DWORD *)(v23 + 892) || !PhkFirstGlobalValid(gptiCurrent, 1LL) )
      goto LABEL_22;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v123) = 4;
      WPP_RECORDER_SF_qqq(
        v124,
        v123,
        18,
        16,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        v22,
        gptiCurrent,
        v23);
    }
  }
  v24 = 0LL;
  *(_QWORD *)(v22 + 64) = 0LL;
LABEL_22:
  if ( v24 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 864LL) = 0;
  v191 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v25 = *(_DWORD *)(gptiCurrent + 480LL);
    if ( (v25 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 472LL) + 28LL) = v25 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x80000u;
    }
  }
  v26 = v15 & 0xFFBF;
  v174 = v15 & 0xFFBF;
  v189 = ~(v15 & 0xFFBF);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v181 = 0LL;
          *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
          if ( *(_QWORD *)(gptiCurrent + 448LL) == gpdeskRecalcQueueAttach )
          {
            gpdeskRecalcQueueAttach = 0LL;
            if ( *(_QWORD *)(gptiCurrent + 448LL) )
            {
              if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
                && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL) )
              {
                zzzReattachThreads(2, 0LL, 0LL);
              }
            }
          }
          v27 = *(_QWORD *)(gptiCurrent + 440LL);
          *(_WORD *)(gptiCurrent + 864LL) |= v26 & *(_WORD *)(v27 + 4);
          *(_WORD *)(v27 + 4) &= v189;
          j = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
          if ( (j & 0x40) != 0 )
          {
            if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) == 0 )
            {
              v173 |= 0x80u;
              goto LABEL_165;
            }
            do
              xxxReceiveMessage(gptiCurrent);
            while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 );
          }
          LOBYTE(j) = v243 != 0;
          if ( v243 != 0 && (v15 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1116LL) )
          {
            do
            {
              *(_DWORD *)(gptiCurrent + 1116LL) = 0;
              for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL));
                    i;
                    i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL)) )
              {
                xxxNotifyCaptureChangeIfCaptured(i, v135, v23);
              }
            }
            while ( *(_DWORD *)(gptiCurrent + 1116LL) );
          }
          if ( *(_QWORD *)(gptiCurrent + 1456LL) && (v15 & 8) != 0 )
          {
            CurrentThread = KeGetCurrentThread();
            v30 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(j)
              || (CurrentProcess = PsGetCurrentProcess(v32, v31, v33),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v138),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v30 = *ThreadWin32Thread;
            }
            memset(v295, 0, 32);
            v244 = 0;
            v247 = 0LL;
            v35 = 0;
            ZwSetIoCompletionEx(v30[177], v30[181], 0LL, 2LL, 0, 0LL);
            while ( 1 )
            {
              LOBYTE(v171) = 0;
              v36 = ZwRemoveIoCompletionEx(v30[177], v295, 1LL, &v244, &v247, v171);
              v37 = 0;
              if ( v36 )
              {
                if ( v36 == 258 )
                {
LABEL_40:
                  if ( v35 )
                    ZwAssociateWaitCompletionPacket(v30[180], v30[177], v30[179], 0LL, 1LL, 0, 0LL, 0LL);
                  v21 = a5 & 1;
                  break;
                }
              }
              else
              {
                if ( DWORD2(v295[0]) == 2 )
                  goto LABEL_40;
                if ( DWORD2(v295[0]) == 1 )
                {
                  v35 = 1;
                  continue;
                }
                if ( !DWORD2(v295[0]) && v30[182] )
                {
                  v37 = DWORD2(v295[0]) + 4;
                  xxxHandleCoreMessagingQueueCompletion((__int64)v30, (ULONG64 *)v295, DWORD2(v295[0]) + 1);
                }
              }
              if ( v37 != 4 )
                goto LABEL_40;
            }
          }
          v38 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL);
          v39 = v15 & v38;
          if ( (v15 & v38) == 0 )
          {
            v173 |= 0x100u;
            goto LABEL_165;
          }
          j = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(j + 64) == gptiCurrent && (*(_DWORD *)(j + 388) & 0x400) != 0 )
          {
            EtwTraceInputQueueNoRemoveLocker();
            if ( (v39 & 0x3C07) != 0 )
            {
              v170 = *(_DWORD *)&v190[1];
              v121 = xxxScanSysQueue(gptiCurrent, a1, v185, a3);
              if ( v121 == 1 )
              {
                v41 = 2;
                goto LABEL_48;
              }
              if ( !v121 )
                UnblockDeferredInput(gptiCurrent);
            }
            else if ( (v38 & 0x2000) != 0 )
            {
              v173 |= 0x200u;
              goto LABEL_165;
            }
          }
          if ( (v39 & 8) != 0
            && (unsigned int)xxxReadPostMessage(
                               gptiCurrent,
                               (struct tagMSG *)a1,
                               v185,
                               a3,
                               *(unsigned int *)&v190[1],
                               (struct _QMSG_POSTCHAR_FLAGS *)&v190[3],
                               v21) )
          {
            break;
          }
          v68 = v185;
          if ( v185 == (struct tagWND *)1 )
          {
            v173 |= 0x400u;
            goto LABEL_165;
          }
          if ( (v39 & 0x3C07) == 0 )
          {
            if ( (v38 & 0x2000) != 0 )
            {
              v173 |= 0x800u;
              goto LABEL_165;
            }
            goto LABEL_112;
          }
          v170 = *(_DWORD *)&v190[1];
          v117 = xxxScanSysQueue(gptiCurrent, a1, v185, a3);
          if ( v117 != 2 )
          {
            v177 = 0;
            v178 = 0;
            v179 = 0;
            if ( v117 == 1 )
            {
              v41 = 2;
              goto LABEL_48;
            }
            goto LABEL_112;
          }
          if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v39 & 1) != 0 && a6 )
          {
            v140 = 0;
            v23 = v179;
            if ( v179 )
              v140 = v178;
            v178 = v140;
            v141 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v179 )
              v141 = v177;
            v177 = v141;
            v142 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v179 )
              v142 = v179;
            v179 = v142;
            v143 = v142;
            v144 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v142;
            if ( v144 >= 0xFA )
            {
              v179 = v142;
              if ( v141 == v142 )
              {
                TraceLoggingSysQueueLockedRetryFailed(v140, v144);
                v177 = 0;
                v179 = v143;
                v178 = v140;
              }
              goto LABEL_112;
            }
            xxxSleepThread2(v15, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v182);
            ++v178;
            v21 = a5 & 1;
            v26 = v174;
          }
          else
          {
LABEL_112:
            j = *(_QWORD *)(gptiCurrent + 440LL);
            v69 = *(_WORD *)(j + 6) & 0x40;
            if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
            {
              if ( v69 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 440LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
              }
            }
            else if ( v69 )
            {
              v173 |= 0x1000u;
              goto LABEL_165;
            }
            LOWORD(v70) = *(_WORD *)(j + 6);
            if ( ((unsigned __int16)v15 & (unsigned __int16)v70) == 0 )
            {
              v173 |= 0x2000u;
              goto LABEL_165;
            }
            if ( ((unsigned __int8)v15 & (unsigned __int8)v70 & 0x20) != 0 && (unsigned int)xxxDoPaint(v68, a1) )
            {
              v41 = 4;
              goto LABEL_48;
            }
            if ( v191 )
              goto LABEL_474;
            v71 = PsGetCurrentProcessWin32Process(j);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
            if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v145 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                v146 = *(struct _KEVENT **)(v145 + 32);
                if ( v146 )
                {
                  if ( v146 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v146, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v145 + 32) = -1LL;
                }
              }
            }
            else
            {
              v72 = *(_QWORD *)(gptiCurrent + 416LL);
              if ( !*(_QWORD *)(v72 + 328) )
              {
                *(_QWORD *)(v72 + 328) = gptiCurrent;
                v72 = *(_QWORD *)(gptiCurrent + 416LL);
              }
              if ( *(_QWORD *)(v72 + 328) == gptiCurrent )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v73 = *(struct _KEVENT **)(v71 + 16);
                if ( v73 )
                {
                  if ( v73 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v73, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(v71 + 16));
                    *(_QWORD *)(v71 + 16) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v71 + 16) = -1LL;
                }
              }
            }
            v74 = *(_DWORD *)(v71 + 12);
            if ( (v74 & 4) != 0 )
            {
              *(_DWORD *)(v71 + 12) = v74 & 0xFFFFFFFB;
              zzzCalcStartCursorHide(0LL, 0);
            }
            for ( j = *(_QWORD *)(gptiCurrent + 440LL);
                  (*(_BYTE *)(j + 6) & 0x40) != 0;
                  j = *(_QWORD *)(gptiCurrent + 440LL) )
            {
              xxxReceiveMessage(gptiCurrent);
            }
            v75 = *(_WORD *)(j + 6) & 0x40;
            if ( ((unsigned __int8)v15 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
            {
              if ( v75 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 440LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
              }
            }
            else if ( v75 )
            {
              v173 |= 0x4000u;
              goto LABEL_165;
            }
            v70 = *(unsigned __int16 *)(j + 6);
            if ( (v70 & v15) != 0 )
            {
LABEL_474:
              if ( ((unsigned __int8)v70 & (unsigned __int8)v15 & 0x10) != 0 )
              {
                v76 = *(__int64 **)(gptiCurrent + 1208LL);
                if ( v76 != (__int64 *)(gptiCurrent + 1208LL) )
                {
                  while ( 1 )
                  {
                    v77 = v76[4];
                    if ( !v185 || v185 == (struct tagWND *)v77 || (unsigned int)IsChild(v185, v77) )
                      break;
                    v76 = (__int64 *)*v76;
                    if ( v76 == v130 )
                      goto LABEL_165;
                  }
                  if ( (gdwExtraInstrumentations & 2) != 0 )
                  {
                    v147 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    v148 = v147 - *((_DWORD *)v76 + 18);
                    v23 = (unsigned int)dword_1C033B0A8;
                    if ( !dword_1C033B0A8 )
                      v23 = (unsigned int)v147;
                    dword_1C033B0A8 = v23;
                    v149 = 0LL;
                    v150 = L"\n";
                    do
                    {
                      if ( *((_DWORD *)v76 - 4) <= *(_DWORD *)v150 )
                        break;
                      v149 = (unsigned int)(v149 + 1);
                      v150 += 2;
                    }
                    while ( (unsigned int)v149 < 7 );
                    v151 = v149 + 8LL * gTimerCoalCurrentState;
                    ++gaTimerDeliveryDistribution[2 * v151];
                    v77 = (unsigned int)(v148 - *((_DWORD *)v76 - 4));
                    v152 = v77 + gaTimerDeliveryDistribution[2 * v151 + 1];
                    gaTimerDeliveryDistribution[2 * v151 + 1] = v152;
                    if ( gaTimerDeliveryDistribution[2 * v151] >= 0x7FFFFFFFu
                      || v152 >= 0x3FFFFFFF
                      || (unsigned int)(v147 - v23) >= 0xEA60 )
                    {
                      v153 = 0LL;
                      if ( gSessionId != gServiceSessionId )
                        v153 = 16LL;
                      dword_1C0339C98 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v153);
                      v154 = 4LL;
                      if ( gSessionId != gServiceSessionId )
                        v154 = 20LL;
                      dword_1C0339CD8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v154);
                      v155 = 8LL;
                      if ( gSessionId != gServiceSessionId )
                        v155 = 24LL;
                      dword_1C0339D18 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v155);
                      v156 = 12LL;
                      if ( gSessionId != gServiceSessionId )
                        v156 = 28LL;
                      dword_1C0339D58 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v156);
                      v170 = 32;
                      EtwTraceTimerDelayStatistics((unsigned int)gSessionId, 8LL, 4LL, L"\n");
                      dword_1C033B0A8 = v147;
                      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
                    }
                  }
                  v78 = *((_DWORD *)v76 + 19);
                  if ( *((_DWORD *)v76 + 18) == v78 )
                    *((_DWORD *)v76 + 18) = v78;
                  if ( *(_DWORD *)(gptiCurrent + 816LL) >= gUserPostMessageLimit )
                  {
                    UserSetLastError(1816LL, v77, v23);
                  }
                  else
                  {
                    v79 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                    v82 = v79;
                    if ( v79 )
                    {
                      memset(v79, 0, 0xA0uLL);
                      if ( *(_DWORD *)(gptiCurrent + 820LL) == 2 )
                        v86 = 8;
                      else
                        v86 = 4;
                      v82[25] |= v86;
                      v87 = *(_QWORD **)(gptiCurrent + 808LL);
                      if ( v87 )
                      {
                        *v87 = v82;
                        *((_QWORD *)v82 + 1) = *(_QWORD *)(gptiCurrent + 808LL);
                      }
                      else
                      {
                        *(_QWORD *)(gptiCurrent + 800LL) = v82;
                      }
                      *(_QWORD *)(gptiCurrent + 808LL) = v82;
                      v88 = *(_DWORD *)(gptiCurrent + 816LL) + 1;
                      *(_DWORD *)(gptiCurrent + 816LL) = v88;
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_qqdd(
                          (unsigned int)&WPP_RECORDER_INITIALIZED,
                          v83,
                          v84,
                          v85,
                          v170,
                          (char)v82,
                          gptiCurrent + 32,
                          *(_DWORD *)(gptiCurrent + 820LL),
                          v88);
                      v89 = v76[4];
                      if ( v89 )
                      {
                        v93 = *(_DWORD *)(*(_QWORD *)(v89 + 40) + 288LL);
                      }
                      else
                      {
                        v90 = *(_QWORD *)(gptiCurrent + 424LL);
                        v91 = *(_QWORD *)(v90 + 120);
                        if ( v91 )
                          v92 = *(_QWORD *)(v91 + 16);
                        else
                          v92 = *(_QWORD *)(v90 + 96);
                        v93 = *(_DWORD *)(*(_QWORD *)(v92 + 416) + 280LL);
                      }
                      if ( (*(_DWORD *)(v76 - 1) & 2) != 0 && *(v76 - 3) )
                        v94 = 280LL;
                      else
                        v94 = *(v76 - 3);
                      v95 = 280;
                      if ( (*(_DWORD *)(v76 - 1) & 2) == 0 )
                        v95 = 275;
                      StoreQMessage(
                        (struct tagQMSG *)v82,
                        (struct tagWND *)v89,
                        v95,
                        v76[5],
                        v94,
                        0,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        v93,
                        0LL,
                        0LL);
                      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
                      {
                        v23 = 264LL;
                        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) |= 0x108u;
                        *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 4LL) |= 0x108u;
                        if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) & 0x108) != 0 )
                          KeSetEvent(*(PRKEVENT *)(gptiCurrent + 728LL), 2, 0);
                      }
                    }
                    else
                    {
                      UserSetLastError(8LL, v80, v81);
                    }
                    v15 = v180;
                  }
                  *((_DWORD *)v76 - 2) &= ~1u;
                  v96 = *(v76 - 4);
                  v97 = (__int64 *)*v76;
                  v98 = (__int64 **)v76[1];
                  if ( *(__int64 **)(*v76 + 8) != v76 || *v98 != v76 )
                    goto LABEL_425;
                  *v98 = v97;
                  v97[1] = (__int64)v98;
                  v66 = (*(_DWORD *)(v96 + 596))-- == 1;
                  if ( v66 )
                    *(_WORD *)(*(_QWORD *)(v96 + 440) + 6LL) &= ~0x10u;
                  v99 = v76 + 2;
                  v100 = *v99;
                  v101 = (_QWORD *)v99[1];
                  if ( *(_QWORD **)(*v99 + 8LL) != v99
                    || (_QWORD *)*v101 != v99
                    || (*v101 = v100,
                        *(_QWORD *)(v100 + 8) = v101,
                        v102 = (_QWORD *)gtmrListHead[1],
                        *v102 != gtmrListHead[0]) )
                  {
LABEL_425:
                    __fastfail(3u);
                  }
                  *v99 = gtmrListHead[0];
                  v99[1] = v102;
                  *v102 = v99;
                  gtmrListHead[1] = v99;
                  v173 |= 8u;
                  goto LABEL_183;
                }
              }
            }
            else
            {
              v173 |= 0x8000u;
            }
LABEL_165:
            v50 = *(_QWORD *)(gptiCurrent + 424LL);
            if ( *(_QWORD *)(v50 + 64) == gptiCurrent )
            {
              *(_QWORD *)(v50 + 72) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v50) = 4;
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(gptiCurrent + 424LL),
                  v50,
                  18,
                  17,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(gptiCurrent + 424LL),
                  gptiCurrent,
                  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 64LL));
              }
              *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 64LL) = 0LL;
              **(_DWORD **)(gptiCurrent + 440LL) &= ~1u;
              v299 = 1;
              v50 = *(_QWORD *)(gptiCurrent + 424LL);
            }
            else if ( !v299 )
            {
              goto LABEL_167;
            }
            if ( *(_DWORD *)(v50 + 392) > 1u )
            {
              v125 = 0LL;
              LOWORD(v126) = 0;
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v296, v50);
              v127 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL);
              if ( !v127 )
                goto LABEL_257;
              if ( (*(_DWORD *)(v127 + 100) & 0x10) != 0 )
                goto LABEL_257;
              v132 = *(_QWORD *)(v127 + 104);
              if ( v132 == gptiCurrent )
                goto LABEL_257;
              v125 = *(_QWORD *)(v127 + 104);
              if ( !v132 )
                goto LABEL_257;
              v126 = CalcWakeMask(*(unsigned int *)(v127 + 24), *(unsigned int *)(v127 + 24), 0LL) & 0xFFFFFFB7LL;
              if ( !*(_DWORD *)(v133 + 96) )
                LODWORD(v126) = v126 & 0xFFFFDFFF;
              if ( (_DWORD)v50 != 786 )
                LODWORD(v126) = v126 & 0xFFFFFF7F;
              v23 = (unsigned __int16)(v126 & *(_WORD *)(*(_QWORD *)(v125 + 440) + 4LL));
              if ( (_DWORD)v23 != (_DWORD)v126 )
              {
LABEL_257:
                if ( v125 )
                  SetWakeBit(v125, v126);
              }
            }
LABEL_167:
            if ( !a6 )
            {
              if ( v191 )
              {
LABEL_198:
                v54 = v173;
                goto LABEL_199;
              }
              v114 = PsGetCurrentProcessWin32Process(j);
              *(_DWORD *)(gptiCurrent + 480LL) &= ~0x2000u;
              if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000) != 0 )
              {
                j = *(_QWORD *)(gptiCurrent + 608LL);
                if ( *(_QWORD *)(j + 24) )
                {
                  EtwTraceWakeInputIdle(0LL, gptiCurrent);
                  v50 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                  j = *(_QWORD *)(v50 + 32);
                  if ( j )
                  {
                    if ( j != -1 )
                    {
                      KeSetEvent((PRKEVENT)j, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL) + 32LL));
                      j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 608LL) + 24LL);
                      *(_QWORD *)(j + 32) = -1LL;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v50 + 32) = -1LL;
                  }
                }
                goto LABEL_195;
              }
              v115 = *(_QWORD *)(gptiCurrent + 416LL);
              if ( !*(_QWORD *)(v115 + 328) )
              {
                *(_QWORD *)(v115 + 328) = gptiCurrent;
                v115 = *(_QWORD *)(gptiCurrent + 416LL);
              }
              if ( *(_QWORD *)(v115 + 328) == gptiCurrent )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                j = *(_QWORD *)(v114 + 16);
                if ( j )
                {
                  if ( j == -1 )
                    goto LABEL_195;
                  KeSetEvent((PRKEVENT)j, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(v114 + 16));
                }
                *(_QWORD *)(v114 + 16) = -1LL;
              }
LABEL_195:
              v116 = *(_DWORD *)(v114 + 12);
              if ( (v116 & 4) != 0 )
              {
                *(_DWORD *)(v114 + 12) = v116 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0);
              }
              while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 440LL) + 6LL) & 0x40) != 0 )
                xxxReceiveMessage(gptiCurrent);
              goto LABEL_198;
            }
            if ( v183 )
            {
              v131 = 0;
              if ( (unsigned int)WaitMaskIncludesUserInput(v15) && *((_QWORD *)v185 + 2) == gptiCurrent )
              {
                v131 = 1;
                xxxUpdateInputHangInfo(v185, 0LL);
              }
              v112 = xxxRealSleepThread(v15, 0, 1, 0, 0LL);
              if ( v131 )
                xxxUpdateInputHangInfo(v185, 1LL);
LABEL_181:
              if ( v112 )
              {
                v173 = 0;
                goto LABEL_183;
              }
              v54 = v173 | 0x10000;
LABEL_199:
              v55 = 0;
              v184 = 0LL;
              goto LABEL_93;
            }
            v103 = 0;
            v182 = 0;
            v104 = *(_QWORD *)(gptiCurrent + 424LL);
            v251 = *(_QWORD *)(v104 + 72);
            v252 = *(_QWORD *)(v104 + 64);
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0
              || *(_DWORD *)(v104 + 392) <= 1u
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL)
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v119, v120) )
            {
              v105 = 0;
            }
            else
            {
              v105 = 1;
              v103 = gdwMDAQTimeoutDefenseInDepth;
            }
            v106 = 0;
            if ( !v105 )
              v106 = v178;
            v178 = v106;
            v107 = v106;
            v108 = 0;
            if ( !v105 )
              v108 = v177;
            v177 = v108;
            v109 = v108;
            v110 = 0;
            if ( !v105 )
              v110 = v179;
            v179 = v110;
            v111 = v110;
            v112 = xxxSleepThread2(v180, v103, 1, 0, (enum SLEEP_STATUS *)&v182);
            v113 = 0;
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
            {
              j = *(_QWORD *)(gptiCurrent + 424LL);
              if ( *(_DWORD *)(j + 392) > 1u )
              {
                j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
                if ( !*(_QWORD *)(j + 48) )
                {
                  j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456);
                  if ( !*(_QWORD *)(j + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent, v50, v23) )
                    v113 = 1;
                }
              }
            }
            if ( !v113
              || (j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), j != *(_QWORD *)(gptiCurrent + 1384LL))
              && (v179 = v111, v177 = v109, v178 = v107, j)
              || (v179 = v111, v177 = v109, v178 = v107, !v182) )
            {
              v15 = v180;
              goto LABEL_181;
            }
            v128 = SlowAppThreadInShellFrame(gptiCurrent, v252, v251, v182 == 2);
            if ( v128 )
              TryDetachShellFrame(gptiCurrent, v128, v182 == 2, 0LL);
            v179 = v111;
            v177 = v109;
            v178 = v107;
            v15 = v180;
LABEL_183:
            v21 = a5 & 1;
            v26 = v174;
          }
        }
        wil_details_FeatureReporting_ReportUsageToService(
          (int)&Feature_DeliverViaSendMessage__private_reporting,
          0x14A0BDEu,
          0,
          0,
          (__int64)&Feature_AtomicCheckFailure_logged_traits,
          0,
          v172);
        v41 = 1;
LABEL_48:
        v173 |= v41;
        v42 = *(_DWORD *)(a1 + 8);
        if ( v42 != 595 || (v23 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
          v23 = 0LL;
        if ( (unsigned int)(v42 - 571) > 1
          && ((unsigned int)(v42 - 577) > 9 && (unsigned int)(v42 - 593) > 2
           || !CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v23, *(_WORD *)(a1 + 16)))
          || (*(_DWORD *)(gptiCurrent + 1224LL) & 0x2000) != 0
          || (v43 = 1, (unsigned int)IsPTPAllowedOnThread(gptiCurrent, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16))) )
        {
          v43 = 0;
        }
        v21 = a5 & 1;
        if ( ((a5 & 1) == 0 || !v181 || !*(_QWORD *)(gptiCurrent + 1248LL)) && !v43 )
        {
          if ( (a5 & 1) == 0 )
            goto LABEL_67;
          if ( *(_DWORD *)(a1 + 8) == 258
            && (*(_DWORD *)(gptiCurrent + 1336LL) & 1) != 0
            && (v190[3] & 1) != 0
            && (unsigned int)xxxKeyboardCorrectionCallout(a1, *(unsigned int *)&v190[3], v23) == 1296 )
          {
            *(_DWORD *)(a1 + 8) = 0;
            *(_QWORD *)(a1 + 16) = 0LL;
            *(_QWORD *)(a1 + 24) = 0LL;
          }
        }
        if ( (a5 & 1) == 0 )
          goto LABEL_67;
        v44 = *(_DWORD *)(a1 + 8);
        if ( (v44 == 258 || v44 == 582 || v44 == 578 || v44 == 583 || v44 == 579 || (unsigned __int16)v44 >= 0xC000u)
          && (unsigned int)xxxCallCtfHook(3, 0, (unsigned int)a5, a1)
          && *(_DWORD *)(a1 + 8) == 258 )
        {
          *(_DWORD *)(a1 + 8) = 0;
          *(_QWORD *)(a1 + 16) = 0LL;
          *(_QWORD *)(a1 + 24) = 0LL;
        }
        if ( !v181 || !*(_QWORD *)(gptiCurrent + 1248LL) )
        {
LABEL_67:
          if ( !v43
            && ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, a1, 3);
          }
        }
        if ( (a5 & 1) != 0 )
        {
          v45 = *(_DWORD *)(gptiCurrent + 1112LL);
          if ( v45 )
          {
            if ( word_1C033AB90 && qword_1C033AB98 == gptiCurrent && dword_1C033AB94 == v45 )
            {
              ForceCompletePendingPromotion();
              xxxProcessMousePromotionQueue();
            }
            else
            {
              *(_DWORD *)(gptiCurrent + 1112LL) = 0;
            }
          }
          v46 = *(_DWORD *)(a1 + 8);
          if ( v46 == 583 )
          {
            v46 = 583;
            if ( (*(_WORD *)(a1 + 18) & 0x2000) != 0
              && word_1C033AB90
              && word_1C033AB90 == *(_WORD *)(a1 + 16)
              && qword_1C033AB98 == gptiCurrent )
            {
              *(_DWORD *)(gptiCurrent + 1112LL) = dword_1C033AB94;
              v46 = *(_DWORD *)(a1 + 8);
            }
          }
          v47 = 0;
          v48 = v46 - 577;
          if ( (unsigned int)(v46 - 577) <= 0x16 )
          {
            v49 = 8122367;
            if ( _bittest(&v49, v48) )
              v47 = *(_WORD *)(a1 + 16);
          }
          CTouchProcessor::UpdateThreadPointerList(
            gpTouchProcessor,
            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL),
            v47);
        }
        if ( !v181 || (*((_DWORD *)v181 + 25) & 0x100) == 0 )
          break;
        CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
          (CMultiPerObjectLockExclusivePpiPtiQ *)v176,
          gptiCurrent);
        if ( (a5 & 1) == 0 || !*(_QWORD *)(gptiCurrent + 1248LL) )
        {
          *((_DWORD *)v181 + 25) &= ~0x100u;
          CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v176);
          break;
        }
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v246,
          "Delegation",
          0LL);
        EtwTraceBeginDelegateInputCallback(v181, a1);
        InputTraceLogging::Delivery::CallDelegateThread(v181);
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v248,
          "DelegationCallout",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)v246);
        v157 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1248LL), a1, *(_QWORD *)(gptiCurrent + 1256LL));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v248);
        EtwTraceEndDelegateInputCallback(v181, a1);
        if ( (*((_DWORD *)v181 + 25) & 0x20) != 0 )
        {
          TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
          CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v297, TouchProcessorLock, v159);
          *((_DWORD *)v181 + 25) &= ~0x100u;
          _HandleDelegatedInputWorker(gptiCurrent, v157, v181);
          CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v297);
        }
        v173 = 0x20000;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v246);
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v176);
        v26 = v174;
      }
      if ( !v43 )
        break;
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v249,
        "PTPDownleveling",
        0LL);
      xxxClientCallDefaultInputHandler(a1);
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_OWORD *)(a1 + 32) = 0LL;
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v249);
      v26 = v174;
    }
    v50 = *(_QWORD *)(a1 + 16);
    j = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)(j - 577) > 0xB && (unsigned int)(j - 590) > 9 )
      break;
LABEL_413:
    if ( (_WORD)v50 != 1 )
      goto LABEL_82;
    v160 = HMValidateHandleNoSecure(*(_QWORD *)a1, 1);
    v40 = v160;
    if ( !v160 || (unsigned int)IsMiPEnabledForWindow(v160) )
      goto LABEL_82;
    v161 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)dword_1C032B3F8 > 5 )
    {
      v245 = a5 & 1;
      v192 = v161;
      v250 = v40;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        j,
        (unsigned int)&unk_1C02F1425,
        v23,
        v40,
        (__int64)&v250,
        (__int64)&v192,
        (__int64)&v245);
    }
    if ( (a5 & 1) != 0 )
      xxxClientCallDefWindowProc(a1);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    v26 = v174;
  }
  if ( (_DWORD)j == 528 && (_WORD)v50 == 582 )
  {
    v50 >>= 16;
    goto LABEL_413;
  }
LABEL_82:
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v54 = v173 | 0x40000;
    v55 = 0;
    v184 = 0LL;
  }
  else
  {
    if ( (a5 & 1) != 0 )
    {
      v51 = *(_QWORD *)(gptiCurrent + 1056LL);
      if ( v51 )
      {
        v129 = HMValidateHandleNoRip(v51, 18);
        if ( v129 )
          FreeHidData(v129);
        *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
      }
      v52 = *(_QWORD *)(gptiCurrent + 1064LL);
      if ( v52 )
      {
        FreeTouchInputInfo(v52, 1LL, v23, v40);
        *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
      }
      j = *(_QWORD *)(gptiCurrent + 1072LL);
      if ( j )
      {
        FreeGestureInfo(j, 1LL, v23, v40);
        *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
      }
      v53 = *(_DWORD *)(a1 + 8);
      if ( v53 == 255 )
      {
        if ( *(_QWORD *)(a1 + 16) <= 1uLL )
          *(_QWORD *)(gptiCurrent + 1056LL) = *(_QWORD *)(a1 + 24);
      }
      else if ( v53 == 576 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x14u) )
      {
        *(_QWORD *)(gptiCurrent + 1064LL) = *(_QWORD *)(a1 + 24);
      }
      else if ( ((*(_DWORD *)(a1 + 8) - 281) & 0xFFFFFFFD) == 0 && HMValidateHandle(*(_QWORD *)(a1 + 24), 0x15u) )
      {
        *(_QWORD *)(gptiCurrent + 1072LL) = *(_QWORD *)(a1 + 24);
      }
    }
    v54 = v173;
    v55 = 1;
  }
LABEL_93:
  if ( v183 )
    ThreadUnlock1(j, v50, v23);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v55 )
    {
      if ( *(_DWORD *)(a1 + 8) == 512 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
      {
        v122 = *(_DWORD **)(gptiCurrent + 664LL);
        if ( v122 )
        {
          if ( (v122[49] & 0x100000) != 0 && v122[82] )
          {
            v56 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                - v122[82];
            v122[83] += v56;
            ++v122[84];
            v122[82] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1176LL) = *(_QWORD *)a1;
      *(_DWORD *)(gptiCurrent + 1184LL) = *(_DWORD *)(a1 + 8);
      *(_QWORD *)(gptiCurrent + 1192LL) = *(_QWORD *)(a1 + 16);
      v57 = *(_QWORD *)a1;
      v58 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v56)
        || (v162 = PsGetCurrentProcess(v60, v59, v61),
            v163 = PsGetProcessSessionIdEx(v162),
            v165 = PsGetCurrentThreadProcess(v164),
            v66 = v163 == (unsigned int)PsGetProcessSessionIdEx(v165),
            v55 = v184,
            v66) )
      {
        PsGetThreadWin32Thread(v58);
      }
      if ( (unsigned __int64)(unsigned __int16)v57 < *(_QWORD *)(gpsi + 8LL) )
      {
        v62 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v57 * LODWORD(gSharedInfo[2]);
        v64 = (__int64 *)HMPkheFromPhe(v62);
        v65 = v57 >> 16;
        if ( ((_WORD)v65 == *(_WORD *)(v62 + 26)
           || (_WORD)v65 == 0xFFFF
           || !(_WORD)v65 && PsGetCurrentProcessWow64Process(v63))
          && (*(_BYTE *)(v62 + 25) & 1) == 0 )
        {
          v66 = *(_BYTE *)(v62 + 24) == 1;
          v55 = v184;
          if ( v66 )
            v10 = *v64;
        }
        else
        {
          v55 = v184;
        }
      }
      if ( dword_1C0330B30 && tlgKeywordOn((__int64)&dword_1C0330B30, 0LL) )
      {
        WindowDetails = InputTraceLogging::GetWindowDetails(v298, v10);
        v186 = *(_OWORD *)WindowDetails;
        v187 = *(_OWORD *)(WindowDetails + 16);
        v188 = *(_QWORD *)(WindowDetails + 32);
        if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(a1 + 8)) )
        {
          if ( *(_WORD *)(a1 + 16) == 1 )
          {
            if ( (unsigned int)dword_1C0330B30 > 4
              && (qword_1C0330B40 & 0x10) != 0
              && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
            {
              v253 = v186;
              v193 = HIDWORD(v188);
              v194 = v188;
              v195 = HIDWORD(v187);
              v196 = DWORD2(v187);
              v254 = v187;
              v255 = *(_QWORD *)a1;
              v197 = v175;
              v198 = *(unsigned __int16 *)(a1 + 18);
              v256 = *(_QWORD *)(gptiCurrent + 424LL);
              v199 = *(_DWORD *)(a1 + 32);
              v257 = *(_QWORD *)(a1 + 24);
              v258 = *(_QWORD *)(a1 + 16);
              v259 = v255;
              v200 = v167;
              v201 = v167;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                (int)&dword_1C0330B30,
                (int)&dword_1C02F05C6,
                (__int64)&v201,
                (__int64)&v200,
                (__int64)&v259,
                (__int64)&v258,
                (__int64)&v257,
                (__int64)&v199,
                (__int64)&v256,
                (__int64)&v198,
                (__int64)&v197,
                (__int64)&v255,
                (__int64)&v254,
                (__int64)&v196,
                (__int64)&v195,
                (__int64)&v194,
                (__int64)&v193,
                (__int64)&v253 + 8,
                (__int64)&v253);
            }
          }
          else if ( (unsigned int)dword_1C0330B30 > 4
                 && (qword_1C0330B40 & 0x10) != 0
                 && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
          {
            v260 = v186;
            v202 = HIDWORD(v188);
            v203 = v188;
            v204 = HIDWORD(v187);
            v205 = DWORD2(v187);
            v261 = v187;
            v262 = *(_QWORD *)a1;
            v206 = v175;
            v207 = *(unsigned __int16 *)(a1 + 18);
            v263 = *(_QWORD *)(gptiCurrent + 424LL);
            v208 = *(_DWORD *)(a1 + 32);
            v264 = *(_QWORD *)(a1 + 24);
            v265 = *(_QWORD *)(a1 + 16);
            v266 = v262;
            v209 = v167;
            v210 = v167;
            v190[0] = v265;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C0330B30,
              (int)&dword_1C02F06C6,
              (__int64)v190,
              (__int64)&v210,
              (__int64)&v209,
              (__int64)&v266,
              (__int64)&v265,
              (__int64)&v264,
              (__int64)&v208,
              (__int64)&v263,
              (__int64)&v207,
              (__int64)&v206,
              (__int64)&v262,
              (__int64)&v261,
              (__int64)&v205,
              (__int64)&v204,
              (__int64)&v203,
              (__int64)&v202,
              (__int64)&v260 + 8,
              (__int64)&v260);
          }
        }
        else if ( InputTraceLogging::IsMouseInputMessage(v168) )
        {
          if ( (unsigned int)dword_1C0330B30 > 4
            && (qword_1C0330B40 & 0x10) != 0
            && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
          {
            v267 = v186;
            v211 = HIDWORD(v188);
            v212 = v188;
            v213 = HIDWORD(v187);
            v214 = DWORD2(v187);
            v268 = v187;
            v269 = *(_QWORD *)a1;
            v215 = v175;
            v270 = *(_QWORD *)(gptiCurrent + 424LL);
            v216 = *(_DWORD *)(a1 + 32);
            v271 = *(_QWORD *)(a1 + 24);
            v272 = *(_QWORD *)(a1 + 16);
            v273 = v269;
            v217 = v169;
            v218 = v169;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C0330B30,
              (int)&unk_1C02F07D5,
              (__int64)&v218,
              (__int64)&v217,
              (__int64)&v273,
              (__int64)&v272,
              (__int64)&v271,
              (__int64)&v216,
              (__int64)&v270,
              (__int64)&v215,
              (__int64)&v269,
              (__int64)&v268,
              (__int64)&v214,
              (__int64)&v213,
              (__int64)&v212,
              (__int64)&v211,
              (__int64)&v267 + 8,
              (__int64)&v267);
          }
        }
        else if ( (unsigned int)(v169 - 256) > 9 )
        {
          if ( v169 == 255 )
          {
            if ( (unsigned int)dword_1C0330B30 > 4
              && (qword_1C0330B40 & 0x10) != 0
              && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
            {
              v279 = v186;
              v227 = HIDWORD(v188);
              v228 = v188;
              v229 = HIDWORD(v187);
              v230 = DWORD2(v187);
              v280 = v187;
              v281 = *(_QWORD *)a1;
              v231 = v175;
              v282 = *(_QWORD *)(gptiCurrent + 424LL);
              v232 = *(_DWORD *)(a1 + 32);
              v283 = *(_QWORD *)(a1 + 24);
              v284 = *(_QWORD *)(a1 + 16);
              v285 = v281;
              v233 = 255;
              v234 = 255;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                (int)&dword_1C0330B30,
                (int)&unk_1C02F09B0,
                (__int64)&v234,
                (__int64)&v233,
                (__int64)&v285,
                (__int64)&v284,
                (__int64)&v283,
                (__int64)&v232,
                (__int64)&v282,
                (__int64)&v231,
                (__int64)&v281,
                (__int64)&v280,
                (__int64)&v230,
                (__int64)&v229,
                (__int64)&v228,
                (__int64)&v227,
                (__int64)&v279 + 8,
                (__int64)&v279);
            }
          }
          else if ( (unsigned int)(v169 - 571) <= 1
                 && (unsigned int)dword_1C0330B30 > 4
                 && (qword_1C0330B40 & 0x10) != 0
                 && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
          {
            v286 = v186;
            v235 = HIDWORD(v188);
            v236 = v188;
            v237 = HIDWORD(v187);
            v238 = DWORD2(v187);
            v287 = v187;
            v288 = *(_QWORD *)a1;
            v239 = v175;
            v289 = *(_QWORD *)(gptiCurrent + 424LL);
            v240 = *(_DWORD *)(a1 + 32);
            v290 = *(_QWORD *)(a1 + 24);
            v291 = *(_QWORD *)(a1 + 16);
            v292 = v288;
            v241 = v169;
            v242[0] = v169;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C0330B30,
              (int)&dword_1C02F0AA7,
              (__int64)v242,
              (__int64)&v241,
              (__int64)&v292,
              (__int64)&v291,
              (__int64)&v290,
              (__int64)&v240,
              (__int64)&v289,
              (__int64)&v239,
              (__int64)&v288,
              (__int64)&v287,
              (__int64)&v238,
              (__int64)&v237,
              (__int64)&v236,
              (__int64)&v235,
              (__int64)&v286 + 8,
              (__int64)&v286);
          }
        }
        else if ( (unsigned int)dword_1C0330B30 > 4
               && (qword_1C0330B40 & 0x10) != 0
               && (qword_1C0330B48 & 0x10) == qword_1C0330B48 )
        {
          v274 = v186;
          v219 = HIDWORD(v188);
          v220 = v188;
          v221 = HIDWORD(v187);
          v222 = DWORD2(v187);
          v275 = v187;
          v276 = *(_QWORD *)a1;
          v223 = v175;
          v277 = *(_QWORD *)(gptiCurrent + 424LL);
          v224 = *(_DWORD *)(a1 + 32);
          v278 = v276;
          v225 = v169;
          v226 = v169;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C0330B30,
            (int)&dword_1C02F08C9,
            (__int64)&v226,
            (__int64)&v225,
            (__int64)&v278,
            (__int64)&v224,
            (__int64)&v277,
            (__int64)&v223,
            (__int64)&v276,
            (__int64)&v275,
            (__int64)&v222,
            (__int64)&v221,
            (__int64)&v220,
            (__int64)&v219,
            (__int64)&v274 + 8,
            (__int64)&v274);
        }
      }
    }
  }
  else
  {
    v55 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v54, a1);
  return v55;
}
