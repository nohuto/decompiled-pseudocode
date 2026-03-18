/*
 * XREFs of xxxRealInternalGetMessage @ 0x1C004FF70
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x1C004F110 (NtUserRealInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C004FCA0 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C004FDB0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 * Callees:
 *     FreeHidData @ 0x1C00065A0 (FreeHidData.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     SlowAppThreadInShellFrame @ 0x1C0029684 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x1C002CDA8 (IsShellFrameHangResilient.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C002CE34 (IsAdaptiveQueueDetachExempted.c)
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     xxxCallCtfHook @ 0x1C004D454 (xxxCallCtfHook.c)
 *     xxxDoPaint @ 0x1C004DFE8 (xxxDoPaint.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     CalcWakeMask @ 0x1C00516D0 (CalcWakeMask.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x1C00519B0 (-HandleProcessSpinning@@YAHXZ.c)
 *     xxxUpdateInputHangInfo @ 0x1C0051A40 (xxxUpdateInputHangInfo.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0051B80 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0052480 (WPP_RECORDER_SF_qqdd.c)
 *     xxxSleepThread2 @ 0x1C0052630 (xxxSleepThread2.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     zzzCalcStartCursorHide @ 0x1C00CC4C0 (zzzCalcStartCursorHide.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00D77F8 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDoSysExpunge @ 0x1C01146E4 (xxxDoSysExpunge.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0117AE8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     WaitMaskIncludesUserInput @ 0x1C011DB0C (WaitMaskIncludesUserInput.c)
 *     _IsChild @ 0x1C0122214 (_IsChild.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C015B0F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C015B130 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U3@U2@U2@U3@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@5545445AEBU?$_tlgWrapSz@G@@44446AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DE200 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@U3@U3@U2@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DE438 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U2@U1@U2@U-$_tlgWrapSz@G@@U1@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4434334AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DE624 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U1@U2@U-$_tlgWrapSz.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@443434AEBU?$_tlgWrapSz@G@@33335AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01DE850 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U2@U1@U2@U1@U2@U-$_tlgWrapSz@G@.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01DF858 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E00C0 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E0ECC (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E10F4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     IsMiPEnabledForWindow @ 0x1C01E1718 (IsMiPEnabledForWindow.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F0A94 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F1018 (-PopFirstPendingDelegateCapture@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F1310 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0218564 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0218F9C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C02253F0 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 *     xxxClientCallDefWindowProc @ 0x1C02312C0 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0231430 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C02315AC (xxxClientCallDelegateThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRealInternalGetMessage(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rsi
  int v11; // r11d
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r11d
  unsigned int v17; // r13d
  struct tagWND *v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  __int16 v28; // di
  __int64 v29; // rcx
  __int64 j; // rcx
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD **ThreadWin32Thread; // rax
  int v37; // edi
  int v38; // eax
  int v39; // r12d
  int v40; // r12d
  __int16 v41; // di
  __int64 v42; // r9
  int v43; // eax
  int v44; // ecx
  int v45; // edi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  unsigned __int16 v49; // r8
  unsigned int v50; // eax
  int v51; // ecx
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // eax
  unsigned int v56; // r13d
  unsigned int v57; // edi
  __int64 v58; // rcx
  unsigned __int64 v59; // r14
  struct _KTHREAD *v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdi
  __int64 v65; // rcx
  __int64 *v66; // r12
  unsigned __int64 v67; // r14
  bool v68; // zf
  struct tagWND *v70; // r14
  unsigned __int16 v71; // ax
  __int64 v72; // rdx
  int v73; // edi
  __int64 v74; // rdi
  __int64 v75; // rax
  struct _KEVENT *v76; // rcx
  int v77; // eax
  __int16 v78; // dx
  __int64 *v79; // rdi
  struct tagWND *v80; // rdx
  int v81; // eax
  _DWORD *v82; // rax
  _DWORD *v83; // r13
  int v84; // edx
  int v85; // r8d
  int v86; // r9d
  int v87; // eax
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // r9d
  __int64 v95; // rcx
  unsigned int v96; // r8d
  __int64 v97; // rcx
  __int64 *v98; // rdx
  __int64 **v99; // rax
  _QWORD *v100; // rdi
  __int64 v101; // rcx
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  unsigned int v104; // edi
  __int64 v105; // rcx
  int v106; // ecx
  unsigned int v107; // eax
  unsigned int v108; // r14d
  int v109; // eax
  int v110; // r12d
  unsigned int v111; // eax
  unsigned int v112; // r13d
  int v113; // edi
  BOOL v114; // eax
  __int64 v115; // rdi
  __int64 v116; // rax
  int v117; // eax
  int v118; // eax
  struct tagWND *v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r8
  int v122; // eax
  _DWORD *v123; // rdx
  int v124; // edx
  int v125; // ecx
  __int64 v126; // r14
  __int64 v127; // rdi
  __int64 v128; // r11
  struct tagTHREADINFO *v129; // rax
  __int64 v130; // rax
  __int64 *v131; // r9
  int v132; // r14d
  __int64 v133; // rax
  __int64 v134; // r11
  unsigned __int64 i; // rax
  struct tagWND *v136; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v139; // rcx
  __int64 CurrentThreadProcess; // rax
  unsigned int v141; // r12d
  int v142; // r9d
  unsigned int v143; // eax
  unsigned int v144; // edi
  unsigned int v145; // ecx
  __int64 v146; // rdx
  struct _KEVENT *v147; // rcx
  unsigned __int64 v148; // r12
  int v149; // edx
  int v150; // r8d
  __int64 v151; // rax
  const wchar_t *v152; // rcx
  __int64 v153; // rcx
  int v154; // r9d
  __int64 v155; // r8
  __int64 v156; // r8
  __int64 v157; // r8
  __int64 v158; // r8
  unsigned int v159; // edi
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v161; // r8
  __int64 v162; // rax
  int v163; // eax
  __int64 v164; // rax
  int v165; // edi
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 WindowDetails; // rax
  int v169; // edx
  unsigned int v170; // ecx
  int v171; // edx
  int v172; // [rsp+20h] [rbp-4A8h]
  int v173; // [rsp+28h] [rbp-4A0h]
  int v174; // [rsp+B0h] [rbp-418h]
  __int16 v175; // [rsp+B4h] [rbp-414h]
  unsigned __int8 v176; // [rsp+B8h] [rbp-410h]
  _BYTE v177[4]; // [rsp+BCh] [rbp-40Ch] BYREF
  int v178; // [rsp+C0h] [rbp-408h]
  unsigned int v179; // [rsp+C4h] [rbp-404h]
  unsigned int v180; // [rsp+C8h] [rbp-400h]
  unsigned int v181; // [rsp+CCh] [rbp-3FCh]
  struct tagQMSG *v182; // [rsp+D0h] [rbp-3F8h]
  int v183; // [rsp+D8h] [rbp-3F0h] BYREF
  int v184; // [rsp+DCh] [rbp-3ECh]
  __int64 v185; // [rsp+E0h] [rbp-3E8h]
  struct tagWND *v186; // [rsp+E8h] [rbp-3E0h]
  __int128 v187; // [rsp+F0h] [rbp-3D8h]
  __int128 v188; // [rsp+100h] [rbp-3C8h]
  __int64 v189; // [rsp+110h] [rbp-3B8h]
  __int16 v190; // [rsp+118h] [rbp-3B0h]
  _WORD v191[5]; // [rsp+11Ah] [rbp-3AEh] BYREF
  int v192; // [rsp+124h] [rbp-3A4h]
  int v193; // [rsp+128h] [rbp-3A0h] BYREF
  int v194; // [rsp+12Ch] [rbp-39Ch] BYREF
  int v195; // [rsp+130h] [rbp-398h] BYREF
  int v196; // [rsp+134h] [rbp-394h] BYREF
  int v197; // [rsp+138h] [rbp-390h] BYREF
  int v198; // [rsp+13Ch] [rbp-38Ch] BYREF
  int v199; // [rsp+140h] [rbp-388h] BYREF
  int v200; // [rsp+144h] [rbp-384h] BYREF
  int v201; // [rsp+148h] [rbp-380h] BYREF
  int v202; // [rsp+14Ch] [rbp-37Ch] BYREF
  int v203; // [rsp+150h] [rbp-378h] BYREF
  int v204; // [rsp+154h] [rbp-374h] BYREF
  int v205; // [rsp+158h] [rbp-370h] BYREF
  int v206; // [rsp+15Ch] [rbp-36Ch] BYREF
  int v207; // [rsp+160h] [rbp-368h] BYREF
  int v208; // [rsp+164h] [rbp-364h] BYREF
  int v209; // [rsp+168h] [rbp-360h] BYREF
  int v210; // [rsp+16Ch] [rbp-35Ch] BYREF
  int v211; // [rsp+170h] [rbp-358h] BYREF
  int v212; // [rsp+174h] [rbp-354h] BYREF
  int v213; // [rsp+178h] [rbp-350h] BYREF
  int v214; // [rsp+17Ch] [rbp-34Ch] BYREF
  int v215; // [rsp+180h] [rbp-348h] BYREF
  int v216; // [rsp+184h] [rbp-344h] BYREF
  int v217; // [rsp+188h] [rbp-340h] BYREF
  int v218; // [rsp+18Ch] [rbp-33Ch] BYREF
  int v219; // [rsp+190h] [rbp-338h] BYREF
  int v220; // [rsp+194h] [rbp-334h] BYREF
  int v221; // [rsp+198h] [rbp-330h] BYREF
  int v222; // [rsp+19Ch] [rbp-32Ch] BYREF
  int v223; // [rsp+1A0h] [rbp-328h] BYREF
  int v224; // [rsp+1A4h] [rbp-324h] BYREF
  int v225; // [rsp+1A8h] [rbp-320h] BYREF
  int v226; // [rsp+1ACh] [rbp-31Ch] BYREF
  int v227; // [rsp+1B0h] [rbp-318h] BYREF
  int v228; // [rsp+1B4h] [rbp-314h] BYREF
  int v229; // [rsp+1B8h] [rbp-310h] BYREF
  int v230; // [rsp+1BCh] [rbp-30Ch] BYREF
  int v231; // [rsp+1C0h] [rbp-308h] BYREF
  int v232; // [rsp+1C4h] [rbp-304h] BYREF
  int v233; // [rsp+1C8h] [rbp-300h] BYREF
  int v234; // [rsp+1CCh] [rbp-2FCh] BYREF
  int v235; // [rsp+1D0h] [rbp-2F8h] BYREF
  int v236; // [rsp+1D4h] [rbp-2F4h] BYREF
  int v237; // [rsp+1D8h] [rbp-2F0h] BYREF
  int v238; // [rsp+1DCh] [rbp-2ECh] BYREF
  int v239; // [rsp+1E0h] [rbp-2E8h] BYREF
  int v240; // [rsp+1E4h] [rbp-2E4h] BYREF
  int v241; // [rsp+1E8h] [rbp-2E0h] BYREF
  int v242; // [rsp+1ECh] [rbp-2DCh] BYREF
  int v243[6]; // [rsp+1F0h] [rbp-2D8h] BYREF
  int v244; // [rsp+208h] [rbp-2C0h]
  int v245; // [rsp+20Ch] [rbp-2BCh] BYREF
  int v246; // [rsp+210h] [rbp-2B8h] BYREF
  _BYTE v247[16]; // [rsp+218h] [rbp-2B0h] BYREF
  __int64 v248; // [rsp+228h] [rbp-2A0h] BYREF
  char v249[8]; // [rsp+230h] [rbp-298h] BYREF
  char v250[8]; // [rsp+238h] [rbp-290h] BYREF
  __int64 v251; // [rsp+240h] [rbp-288h] BYREF
  __int64 v252; // [rsp+248h] [rbp-280h]
  struct tagTHREADINFO *v253; // [rsp+250h] [rbp-278h]
  __int128 v254; // [rsp+258h] [rbp-270h] BYREF
  __int64 v255; // [rsp+268h] [rbp-260h] BYREF
  __int64 v256; // [rsp+270h] [rbp-258h] BYREF
  __int64 v257; // [rsp+278h] [rbp-250h] BYREF
  __int64 v258; // [rsp+280h] [rbp-248h] BYREF
  __int64 v259; // [rsp+288h] [rbp-240h] BYREF
  __int64 v260; // [rsp+290h] [rbp-238h] BYREF
  __int128 v261; // [rsp+298h] [rbp-230h] BYREF
  __int64 v262; // [rsp+2A8h] [rbp-220h] BYREF
  __int64 v263; // [rsp+2B0h] [rbp-218h] BYREF
  __int64 v264; // [rsp+2B8h] [rbp-210h] BYREF
  __int64 v265; // [rsp+2C0h] [rbp-208h] BYREF
  __int64 v266; // [rsp+2C8h] [rbp-200h] BYREF
  __int64 v267; // [rsp+2D0h] [rbp-1F8h] BYREF
  __int128 v268; // [rsp+2D8h] [rbp-1F0h] BYREF
  __int64 v269; // [rsp+2E8h] [rbp-1E0h] BYREF
  __int64 v270; // [rsp+2F0h] [rbp-1D8h] BYREF
  __int64 v271; // [rsp+2F8h] [rbp-1D0h] BYREF
  __int64 v272; // [rsp+300h] [rbp-1C8h] BYREF
  __int64 v273; // [rsp+308h] [rbp-1C0h] BYREF
  __int64 v274; // [rsp+310h] [rbp-1B8h] BYREF
  __int128 v275; // [rsp+318h] [rbp-1B0h] BYREF
  __int64 v276; // [rsp+328h] [rbp-1A0h] BYREF
  __int64 v277; // [rsp+330h] [rbp-198h] BYREF
  __int64 v278; // [rsp+338h] [rbp-190h] BYREF
  __int64 v279; // [rsp+340h] [rbp-188h] BYREF
  __int128 v280; // [rsp+348h] [rbp-180h] BYREF
  __int64 v281; // [rsp+358h] [rbp-170h] BYREF
  __int64 v282; // [rsp+360h] [rbp-168h] BYREF
  __int64 v283; // [rsp+368h] [rbp-160h] BYREF
  __int64 v284; // [rsp+370h] [rbp-158h] BYREF
  __int64 v285; // [rsp+378h] [rbp-150h] BYREF
  __int64 v286; // [rsp+380h] [rbp-148h] BYREF
  __int128 v287; // [rsp+388h] [rbp-140h] BYREF
  __int64 v288; // [rsp+398h] [rbp-130h] BYREF
  __int64 v289; // [rsp+3A0h] [rbp-128h] BYREF
  __int64 v290; // [rsp+3A8h] [rbp-120h] BYREF
  __int64 v291; // [rsp+3B0h] [rbp-118h] BYREF
  __int64 v292; // [rsp+3B8h] [rbp-110h] BYREF
  __int64 v293; // [rsp+3C0h] [rbp-108h] BYREF
  __int128 v294; // [rsp+3D0h] [rbp-F8h] BYREF
  __int64 v295; // [rsp+3E0h] [rbp-E8h]
  _OWORD v296[3]; // [rsp+3E8h] [rbp-E0h] BYREF
  char v297[24]; // [rsp+418h] [rbp-B0h] BYREF
  _BYTE v298[48]; // [rsp+430h] [rbp-98h] BYREF
  char v299[104]; // [rsp+460h] [rbp-68h] BYREF
  char v300; // [rsp+4D8h] [rbp+10h]

  v294 = 0LL;
  v295 = 0LL;
  v300 = 0;
  v10 = 0LL;
  *(_DWORD *)&v191[3] = 0;
  v183 = 0;
  v180 = 0;
  v178 = 0;
  v179 = 0;
  v174 = 0;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
  {
    a2 = 1LL;
    goto LABEL_3;
  }
  if ( a2 < 2 )
  {
LABEL_3:
    v186 = (struct tagWND *)a2;
    v11 = 0;
    goto LABEL_4;
  }
  v119 = (struct tagWND *)ValidateHwnd(a2);
  v186 = v119;
  if ( !v119 )
  {
    *a1 = 0LL;
    *((_DWORD *)a1 + 2) = 0;
    EtwTraceBeginAppMessageProcessing(a6, 16LL, a1);
    if ( a6 )
      return 0xFFFFFFFFLL;
    else
      return 0LL;
  }
  *(_QWORD *)&v294 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v294;
  *((_QWORD *)&v294 + 1) = v119;
  HMLockObject(v119);
  v11 = 1;
LABEL_4:
  v185 = 1LL;
  v184 = v11;
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v12 = 0xFFFFFFFFLL;
  if ( a4 )
    v12 = a4;
  *(_DWORD *)&v191[1] = v12;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v17 = CalcWakeMask(a3, v12, WORD1(a5));
  v181 = v17;
  v244 = v17 & 0x1C07;
  if ( (v17 & 0x1C07) != 0 )
  {
    v14 = MEMORY[0xFFFFF78000000320];
    v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)(gptiCurrent + 1408LL) = v13;
  }
  if ( (v17 & 7) == 7 || (v17 & 6) != 0 && (v14 = gptiCurrent, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)) )
  {
    if ( !v16 )
    {
      if ( a2 )
        goto LABEL_13;
      v18 = 0LL;
      goto LABEL_12;
    }
    if ( *((_QWORD *)v186 + 2) == gptiCurrent )
    {
      v18 = v186;
LABEL_12:
      xxxUpdateInputHangInfo(v18, 1LL);
    }
  }
LABEL_13:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15);
  v20 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v20 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v20 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v21 = *(_QWORD *)(gptiCurrent + 424LL);
  v22 = gcSysExpunge;
  if ( *(_DWORD *)(v21 + 400) != gcSysExpunge )
  {
    *(_DWORD *)(v21 + 400) = gcSysExpunge;
    LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 404LL);
    if ( ((unsigned int)v21 & WPP_MAIN_CB.Dpc.ProcessorHistory) != 0 )
      xxxDoSysExpunge(gptiCurrent);
  }
  v23 = a5 & 1;
  v176 = a5 & 1;
  if ( (a5 & 1) != 0 && (v17 & 0x1CBF) != 0 && (*(_DWORD *)(gptiCurrent + 1232LL) & 0x80000) != 0 )
  {
    LODWORD(v21) = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
    if ( ((unsigned int)v21 & v17) != 0 )
    {
      v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
      if ( !*(_QWORD *)(v21 + 56) )
      {
        v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
        if ( !*(_QWORD *)(v21 + 48) )
          TryAttachShellFrame(gptiCurrent, v22);
      }
    }
  }
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  v25 = *(_QWORD *)(v24 + 64);
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    || v25 == gptiCurrent && *(_QWORD *)(v24 + 72) == *(_QWORD *)(gptiCurrent + 576LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 4;
      WPP_RECORDER_SF_qqq(
        v21,
        v22,
        18,
        15,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        v24,
        gptiCurrent,
        *(_QWORD *)(v24 + 64));
    }
    v300 = 1;
  }
  else
  {
    v26 = *(_QWORD *)(v24 + 64);
    if ( !v25 || *(_DWORD *)(v25 + 900) || !PhkFirstGlobalValid(gptiCurrent, 1LL) )
      goto LABEL_22;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v124) = 4;
      WPP_RECORDER_SF_qqq(
        v125,
        v124,
        18,
        16,
        (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
        v24,
        gptiCurrent,
        v25);
    }
  }
  v26 = 0LL;
  *(_QWORD *)(v24 + 64) = 0LL;
LABEL_22:
  if ( v26 != gptiCurrent )
    **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
  *(_WORD *)(gptiCurrent + 872LL) = 0;
  v192 = a5 & 2;
  if ( (a5 & 2) == 0 )
  {
    v27 = *(_DWORD *)(gptiCurrent + 488LL);
    if ( (v27 & 0x80000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) = v27 & 0xFFF7FFFF;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x2000u;
      *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x2000u;
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x80000u;
    }
  }
  v28 = v17 & 0xFFBF;
  v175 = v17 & 0xFFBF;
  v190 = ~(v17 & 0xFFBF);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v182 = 0LL;
          *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL);
          if ( *(_QWORD *)(gptiCurrent + 456LL) == gpdeskRecalcQueueAttach )
          {
            gpdeskRecalcQueueAttach = 0LL;
            if ( *(_QWORD *)(gptiCurrent + 456LL) )
            {
              if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 48LL)
                && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 56LL) )
              {
                zzzReattachThreads(2LL, 0LL, 0LL);
              }
            }
          }
          v29 = *(_QWORD *)(gptiCurrent + 448LL);
          *(_WORD *)(gptiCurrent + 872LL) |= v28 & *(_WORD *)(v29 + 4);
          *(_WORD *)(v29 + 4) &= v190;
          j = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
          if ( (j & 0x40) != 0 )
          {
            if ( ((unsigned __int8)v17 & (unsigned __int8)*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) == 0 )
            {
              v174 |= 0x80u;
              goto LABEL_165;
            }
            do
              xxxReceiveMessage(gptiCurrent);
            while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 );
          }
          LOBYTE(j) = v244 != 0;
          if ( v244 != 0 && (v17 & 0x40) != 0 && *(_DWORD *)(gptiCurrent + 1124LL) )
          {
            do
            {
              *(_DWORD *)(gptiCurrent + 1124LL) = 0;
              for ( i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL));
                    i;
                    i = PopFirstPendingDelegateCapture((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL)) )
              {
                xxxNotifyCaptureChangeIfCaptured(i, v136, v25);
              }
            }
            while ( *(_DWORD *)(gptiCurrent + 1124LL) );
          }
          if ( *(_QWORD *)(gptiCurrent + 1464LL) && (v17 & 8) != 0 )
          {
            CurrentThread = KeGetCurrentThread();
            v32 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(j)
              || (CurrentProcess = PsGetCurrentProcess(v34, v33, v35),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(v139),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              ThreadWin32Thread = (_QWORD **)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v32 = *ThreadWin32Thread;
            }
            memset(v296, 0, 32);
            v245 = 0;
            v248 = 0LL;
            v37 = 0;
            ZwSetIoCompletionEx(v32[178], v32[182], 0LL, 2LL, 0, 0LL);
            while ( 1 )
            {
              LOBYTE(v173) = 0;
              v38 = ZwRemoveIoCompletionEx(v32[178], v296, 1LL, &v245, &v248, v173);
              v39 = 0;
              if ( v38 )
              {
                if ( v38 == 258 )
                {
LABEL_40:
                  if ( v37 )
                    ZwAssociateWaitCompletionPacket(v32[181], v32[178], v32[180], 0LL, 1LL, 0, 0LL, 0LL);
                  v23 = a5 & 1;
                  break;
                }
              }
              else
              {
                if ( DWORD2(v296[0]) == 2 )
                  goto LABEL_40;
                if ( DWORD2(v296[0]) == 1 )
                {
                  v37 = 1;
                  continue;
                }
                if ( !DWORD2(v296[0]) && v32[183] )
                {
                  v39 = DWORD2(v296[0]) + 4;
                  xxxHandleCoreMessagingQueueCompletion((__int64)v32, (ULONG64 *)v296, DWORD2(v296[0]) + 1);
                }
              }
              if ( v39 != 4 )
                goto LABEL_40;
            }
          }
          v40 = *(unsigned __int16 *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL);
          v41 = v17 & v40;
          if ( (v17 & v40) == 0 )
          {
            v174 |= 0x100u;
            goto LABEL_165;
          }
          j = *(_QWORD *)(gptiCurrent + 432LL);
          if ( *(_QWORD *)(j + 64) == gptiCurrent && (*(_DWORD *)(j + 388) & 0x400) != 0 )
          {
            EtwTraceInputQueueNoRemoveLocker();
            if ( (v41 & 0x3C07) != 0 )
            {
              v172 = *(_DWORD *)&v191[1];
              v122 = xxxScanSysQueue(gptiCurrent, a1, v186, a3);
              if ( v122 == 1 )
              {
                v43 = 2;
                goto LABEL_48;
              }
              if ( !v122 )
                UnblockDeferredInput(gptiCurrent);
            }
            else if ( (v40 & 0x2000) != 0 )
            {
              v174 |= 0x200u;
              goto LABEL_165;
            }
          }
          if ( (v41 & 8) != 0
            && (unsigned int)xxxReadPostMessage(
                               gptiCurrent,
                               (struct tagMSG *)a1,
                               v186,
                               a3,
                               *(unsigned int *)&v191[1],
                               (struct _QMSG_POSTCHAR_FLAGS *)&v191[3],
                               v23) )
          {
            break;
          }
          v70 = v186;
          if ( v186 == (struct tagWND *)1 )
          {
            v174 |= 0x400u;
            goto LABEL_165;
          }
          if ( (v41 & 0x3C07) == 0 )
          {
            if ( (v40 & 0x2000) != 0 )
            {
              v174 |= 0x800u;
              goto LABEL_165;
            }
            goto LABEL_112;
          }
          v172 = *(_DWORD *)&v191[1];
          v118 = xxxScanSysQueue(gptiCurrent, a1, v186, a3);
          if ( v118 != 2 )
          {
            v178 = 0;
            v179 = 0;
            v180 = 0;
            if ( v118 == 1 )
            {
              v43 = 2;
              goto LABEL_48;
            }
            goto LABEL_112;
          }
          if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) && (v41 & 1) != 0 && a6 )
          {
            v141 = 0;
            v25 = v180;
            if ( v180 )
              v141 = v179;
            v179 = v141;
            v142 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v180 )
              v142 = v178;
            v178 = v142;
            v143 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v180 )
              v143 = v180;
            v180 = v143;
            v144 = v143;
            v145 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v143;
            if ( v145 >= 0xFA )
            {
              v180 = v143;
              if ( v142 == v143 )
              {
                TraceLoggingSysQueueLockedRetryFailed(v141, v145);
                v178 = 0;
                v180 = v144;
                v179 = v141;
              }
              goto LABEL_112;
            }
            xxxSleepThread2(v17, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v183);
            ++v179;
            v23 = a5 & 1;
            v28 = v175;
          }
          else
          {
LABEL_112:
            j = *(_QWORD *)(gptiCurrent + 448LL);
            v71 = *(_WORD *)(j + 6);
            v72 = v71;
            LOWORD(v72) = v71 & 0x40;
            if ( ((unsigned __int8)v17 & (unsigned __int8)v71 & 0x40) != 0 )
            {
              if ( (v71 & 0x40) != 0 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 448LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
              }
            }
            else if ( (v71 & 0x40) != 0 )
            {
              v174 |= 0x1000u;
              goto LABEL_165;
            }
            LOWORD(v73) = *(_WORD *)(j + 6);
            if ( ((unsigned __int16)v17 & (unsigned __int16)v73) == 0 )
            {
              v174 |= 0x2000u;
              goto LABEL_165;
            }
            if ( ((unsigned __int8)v17 & (unsigned __int8)v73 & 0x20) != 0 && (unsigned int)xxxDoPaint(v70, (__int64)a1) )
            {
              v43 = 4;
              goto LABEL_48;
            }
            if ( v192 )
              goto LABEL_474;
            v74 = PsGetCurrentProcessWin32Process(j, v72, v25);
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
            if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v146 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                v147 = *(struct _KEVENT **)(v146 + 32);
                if ( v147 )
                {
                  if ( v147 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v147, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v146 + 32) = -1LL;
                }
              }
            }
            else
            {
              v75 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v75 + 328) )
              {
                *(_QWORD *)(v75 + 328) = gptiCurrent;
                v75 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v75 + 328) == gptiCurrent )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                v76 = *(struct _KEVENT **)(v74 + 16);
                if ( v76 )
                {
                  if ( v76 != (struct _KEVENT *)-1LL )
                  {
                    KeSetEvent(v76, 1, 0);
                    ObfDereferenceObject(*(PVOID *)(v74 + 16));
                    *(_QWORD *)(v74 + 16) = -1LL;
                  }
                }
                else
                {
                  *(_QWORD *)(v74 + 16) = -1LL;
                }
              }
            }
            v77 = *(_DWORD *)(v74 + 12);
            if ( (v77 & 4) != 0 )
            {
              *(_DWORD *)(v74 + 12) = v77 & 0xFFFFFFFB;
              zzzCalcStartCursorHide(0LL, 0LL);
            }
            for ( j = *(_QWORD *)(gptiCurrent + 448LL);
                  (*(_BYTE *)(j + 6) & 0x40) != 0;
                  j = *(_QWORD *)(gptiCurrent + 448LL) )
            {
              xxxReceiveMessage(gptiCurrent);
            }
            v78 = *(_WORD *)(j + 6) & 0x40;
            if ( ((unsigned __int8)v17 & (unsigned __int8)*(_WORD *)(j + 6) & 0x40) != 0 )
            {
              if ( v78 )
              {
                do
                {
                  xxxReceiveMessage(gptiCurrent);
                  j = *(_QWORD *)(gptiCurrent + 448LL);
                }
                while ( (*(_BYTE *)(j + 6) & 0x40) != 0 );
              }
            }
            else if ( v78 )
            {
              v174 |= 0x4000u;
              goto LABEL_165;
            }
            v73 = *(unsigned __int16 *)(j + 6);
            if ( (v73 & v17) != 0 )
            {
LABEL_474:
              if ( ((unsigned __int8)v73 & (unsigned __int8)v17 & 0x10) != 0 )
              {
                v79 = *(__int64 **)(gptiCurrent + 1216LL);
                if ( v79 != (__int64 *)(gptiCurrent + 1216LL) )
                {
                  while ( 1 )
                  {
                    v80 = (struct tagWND *)v79[4];
                    if ( !v186 || v186 == v80 || (unsigned int)IsChild(v186, v80) )
                      break;
                    v79 = (__int64 *)*v79;
                    if ( v79 == v131 )
                      goto LABEL_165;
                  }
                  if ( (gdwExtraInstrumentations & 2) != 0 )
                  {
                    v148 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                    v149 = v148 - *((_DWORD *)v79 + 18);
                    v150 = dword_1C033A0D8;
                    if ( !dword_1C033A0D8 )
                      v150 = v148;
                    dword_1C033A0D8 = v150;
                    v151 = 0LL;
                    v152 = L"\n";
                    do
                    {
                      if ( *((_DWORD *)v79 - 4) <= *(_DWORD *)v152 )
                        break;
                      v151 = (unsigned int)(v151 + 1);
                      v152 += 2;
                    }
                    while ( (unsigned int)v151 < 7 );
                    v153 = v151 + 8LL * gTimerCoalCurrentState;
                    ++gaTimerDeliveryDistribution[2 * v153];
                    v154 = v149 - *((_DWORD *)v79 - 4) + gaTimerDeliveryDistribution[2 * v153 + 1];
                    gaTimerDeliveryDistribution[2 * v153 + 1] = v154;
                    if ( gaTimerDeliveryDistribution[2 * v153] >= 0x7FFFFFFFu
                      || v154 >= 0x3FFFFFFF
                      || (unsigned int)(v148 - v150) >= 0xEA60 )
                    {
                      v155 = 0LL;
                      if ( gSessionId != gServiceSessionId )
                        v155 = 16LL;
                      dword_1C0338CB8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v155);
                      v156 = 4LL;
                      if ( gSessionId != gServiceSessionId )
                        v156 = 20LL;
                      dword_1C0338CF8 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v156);
                      v157 = 8LL;
                      if ( gSessionId != gServiceSessionId )
                        v157 = 24LL;
                      dword_1C0338D38 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v157);
                      v158 = 12LL;
                      if ( gSessionId != gServiceSessionId )
                        v158 = 28LL;
                      dword_1C0338D78 = *(_DWORD *)((char *)&gTimerCoalescingSpec + v158);
                      EtwTraceTimerDelayStatistics(
                        (unsigned int)gSessionId,
                        8LL,
                        4LL,
                        L"\n",
                        32,
                        8,
                        gaTimerDeliveryDistribution);
                      dword_1C033A0D8 = v148;
                      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
                    }
                  }
                  v81 = *((_DWORD *)v79 + 19);
                  if ( *((_DWORD *)v79 + 18) == v81 )
                    *((_DWORD *)v79 + 18) = v81;
                  if ( *(_DWORD *)(gptiCurrent + 824LL) >= gUserPostMessageLimit )
                  {
                    UserSetLastError(1816LL);
                  }
                  else
                  {
                    v82 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                    v83 = v82;
                    if ( v82 )
                    {
                      memset(v82, 0, 0xA0uLL);
                      if ( *(_DWORD *)(gptiCurrent + 828LL) == 2 )
                        v87 = 8;
                      else
                        v87 = 4;
                      v83[25] |= v87;
                      v88 = *(_QWORD **)(gptiCurrent + 816LL);
                      if ( v88 )
                      {
                        *v88 = v83;
                        *((_QWORD *)v83 + 1) = *(_QWORD *)(gptiCurrent + 816LL);
                      }
                      else
                      {
                        *(_QWORD *)(gptiCurrent + 808LL) = v83;
                      }
                      *(_QWORD *)(gptiCurrent + 816LL) = v83;
                      v89 = *(_DWORD *)(gptiCurrent + 824LL) + 1;
                      *(_DWORD *)(gptiCurrent + 824LL) = v89;
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_qqdd(
                          (unsigned int)&WPP_RECORDER_INITIALIZED,
                          v84,
                          v85,
                          v86,
                          v172,
                          (char)v83,
                          gptiCurrent + 40,
                          *(_DWORD *)(gptiCurrent + 828LL),
                          v89);
                      v90 = v79[4];
                      if ( v90 )
                      {
                        v94 = *(_DWORD *)(*(_QWORD *)(v90 + 40) + 288LL);
                      }
                      else
                      {
                        v91 = *(_QWORD *)(gptiCurrent + 432LL);
                        v92 = *(_QWORD *)(v91 + 120);
                        if ( v92 )
                          v93 = *(_QWORD *)(v92 + 16);
                        else
                          v93 = *(_QWORD *)(v91 + 96);
                        v94 = *(_DWORD *)(*(_QWORD *)(v93 + 424) + 280LL);
                      }
                      if ( (*(_DWORD *)(v79 - 1) & 2) != 0 && *(v79 - 3) )
                        v95 = 280LL;
                      else
                        v95 = *(v79 - 3);
                      v96 = 280;
                      if ( (*(_DWORD *)(v79 - 1) & 2) == 0 )
                        v96 = 275;
                      StoreQMessage(
                        (struct tagQMSG *)v83,
                        (struct tagWND *)v90,
                        v96,
                        v79[5],
                        v95,
                        0,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        v94,
                        0LL,
                        0LL);
                      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
                      {
                        v25 = 264LL;
                        *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) |= 0x108u;
                        *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 4LL) |= 0x108u;
                        if ( (*(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) & 0x108) != 0 )
                          KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
                      }
                    }
                    else
                    {
                      UserSetLastError(8LL);
                    }
                    v17 = v181;
                  }
                  *((_DWORD *)v79 - 2) &= ~1u;
                  v97 = *(v79 - 4);
                  v98 = (__int64 *)*v79;
                  v99 = (__int64 **)v79[1];
                  if ( *(__int64 **)(*v79 + 8) != v79 || *v99 != v79 )
                    goto LABEL_425;
                  *v99 = v98;
                  v98[1] = (__int64)v99;
                  v68 = (*(_DWORD *)(v97 + 604))-- == 1;
                  if ( v68 )
                    *(_WORD *)(*(_QWORD *)(v97 + 448) + 6LL) &= ~0x10u;
                  v100 = v79 + 2;
                  v101 = *v100;
                  v102 = (_QWORD *)v100[1];
                  if ( *(_QWORD **)(*v100 + 8LL) != v100
                    || (_QWORD *)*v102 != v100
                    || (*v102 = v101,
                        *(_QWORD *)(v101 + 8) = v102,
                        v103 = (_QWORD *)gtmrListHead[1],
                        *v103 != gtmrListHead[0]) )
                  {
LABEL_425:
                    __fastfail(3u);
                  }
                  *v100 = gtmrListHead[0];
                  v100[1] = v103;
                  *v103 = v100;
                  gtmrListHead[1] = v100;
                  v174 |= 8u;
                  goto LABEL_183;
                }
              }
            }
            else
            {
              v174 |= 0x8000u;
            }
LABEL_165:
            v52 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( *(_QWORD *)(v52 + 64) == gptiCurrent )
            {
              *(_QWORD *)(v52 + 72) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v52) = 4;
                WPP_RECORDER_SF_qqq(
                  *(_QWORD *)(gptiCurrent + 432LL),
                  v52,
                  18,
                  17,
                  (__int64)&WPP_3f6cd7edd7993c9a5fb877f8c3b6394a_Traceguids,
                  *(_QWORD *)(gptiCurrent + 432LL),
                  gptiCurrent,
                  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL));
              }
              *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = 0LL;
              **(_DWORD **)(gptiCurrent + 448LL) &= ~1u;
              v300 = 1;
              v52 = *(_QWORD *)(gptiCurrent + 432LL);
            }
            else if ( !v300 )
            {
              goto LABEL_167;
            }
            if ( *(_DWORD *)(v52 + 392) > 1u )
            {
              v126 = 0LL;
              LODWORD(v127) = 0;
              CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v297, v52);
              v128 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 24LL);
              if ( !v128 )
                goto LABEL_257;
              if ( (*(_DWORD *)(v128 + 100) & 0x10) != 0 )
                goto LABEL_257;
              v133 = *(_QWORD *)(v128 + 104);
              if ( v133 == gptiCurrent )
                goto LABEL_257;
              v126 = *(_QWORD *)(v128 + 104);
              if ( !v133 )
                goto LABEL_257;
              v127 = CalcWakeMask(*(unsigned int *)(v128 + 24), *(unsigned int *)(v128 + 24), 0LL) & 0xFFFFFFB7LL;
              if ( !*(_DWORD *)(v134 + 96) )
                LODWORD(v127) = v127 & 0xFFFFDFFF;
              if ( (_DWORD)v52 != 786 )
                LODWORD(v127) = v127 & 0xFFFFFF7F;
              v25 = (unsigned __int16)(v127 & *(_WORD *)(*(_QWORD *)(v126 + 448) + 4LL));
              if ( (_DWORD)v25 != (_DWORD)v127 )
              {
LABEL_257:
                if ( v126 )
                  SetWakeBit(v126, (unsigned int)v127);
              }
            }
LABEL_167:
            if ( !a6 )
            {
              if ( v192 )
              {
LABEL_198:
                v56 = v174;
                goto LABEL_199;
              }
              v115 = PsGetCurrentProcessWin32Process(j, v52, v25);
              *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
              if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
              {
                j = *(_QWORD *)(gptiCurrent + 616LL);
                if ( *(_QWORD *)(j + 24) )
                {
                  EtwTraceWakeInputIdle(0LL, gptiCurrent);
                  v52 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                  j = *(_QWORD *)(v52 + 32);
                  if ( j )
                  {
                    if ( j != -1 )
                    {
                      KeSetEvent((PRKEVENT)j, 1, 0);
                      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
                      j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
                      *(_QWORD *)(j + 32) = -1LL;
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v52 + 32) = -1LL;
                  }
                }
                goto LABEL_195;
              }
              v116 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( !*(_QWORD *)(v116 + 328) )
              {
                *(_QWORD *)(v116 + 328) = gptiCurrent;
                v116 = *(_QWORD *)(gptiCurrent + 424LL);
              }
              if ( *(_QWORD *)(v116 + 328) == gptiCurrent )
              {
                EtwTraceWakeInputIdle(0LL, gptiCurrent);
                j = *(_QWORD *)(v115 + 16);
                if ( j )
                {
                  if ( j == -1 )
                    goto LABEL_195;
                  KeSetEvent((PRKEVENT)j, 1, 0);
                  ObfDereferenceObject(*(PVOID *)(v115 + 16));
                }
                *(_QWORD *)(v115 + 16) = -1LL;
              }
LABEL_195:
              v117 = *(_DWORD *)(v115 + 12);
              if ( (v117 & 4) != 0 )
              {
                *(_DWORD *)(v115 + 12) = v117 & 0xFFFFFFFB;
                zzzCalcStartCursorHide(0LL, 0LL);
              }
              while ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 448LL) + 6LL) & 0x40) != 0 )
                xxxReceiveMessage(gptiCurrent);
              goto LABEL_198;
            }
            if ( v184 )
            {
              v132 = 0;
              if ( (unsigned int)WaitMaskIncludesUserInput(v17) && *((_QWORD *)v186 + 2) == gptiCurrent )
              {
                v132 = 1;
                xxxUpdateInputHangInfo(v186, 0LL);
              }
              v113 = xxxRealSleepThread(v17, 0, 1, 0, 0LL);
              if ( v132 )
                xxxUpdateInputHangInfo(v186, 1LL);
LABEL_181:
              if ( v113 )
              {
                v174 = 0;
                goto LABEL_183;
              }
              v56 = v174 | 0x10000;
LABEL_199:
              v57 = 0;
              v185 = 0LL;
              goto LABEL_93;
            }
            v104 = 0;
            v183 = 0;
            v105 = *(_QWORD *)(gptiCurrent + 432LL);
            v252 = *(_QWORD *)(v105 + 72);
            v253 = *(struct tagTHREADINFO **)(v105 + 64);
            if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0
              || *(_DWORD *)(v105 + 392) <= 1u
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 48LL)
              || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 56LL)
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v120, v121) )
            {
              v106 = 0;
            }
            else
            {
              v106 = 1;
              v104 = gdwMDAQTimeoutDefenseInDepth;
            }
            v107 = 0;
            if ( !v106 )
              v107 = v179;
            v179 = v107;
            v108 = v107;
            v109 = 0;
            if ( !v106 )
              v109 = v178;
            v178 = v109;
            v110 = v109;
            v111 = 0;
            if ( !v106 )
              v111 = v180;
            v180 = v111;
            v112 = v111;
            v113 = xxxSleepThread2(v181, v104, 1, 0, (enum SLEEP_STATUS *)&v183);
            v114 = 0;
            if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) != 0 )
            {
              j = *(_QWORD *)(gptiCurrent + 432LL);
              if ( *(_DWORD *)(j + 392) > 1u )
              {
                j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
                if ( !*(_QWORD *)(j + 48) )
                {
                  j = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
                  if ( !*(_QWORD *)(j + 56) && !IsAdaptiveQueueDetachExempted(gptiCurrent, v52, v25) )
                    v114 = 1;
                }
              }
            }
            if ( !v114
              || (j = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), j != *(_QWORD *)(gptiCurrent + 1392LL))
              && (v180 = v112, v178 = v110, v179 = v108, j)
              || (v180 = v112, v178 = v110, v179 = v108, !v183) )
            {
              v17 = v181;
              goto LABEL_181;
            }
            v129 = SlowAppThreadInShellFrame(gptiCurrent, v253, v252, v183 == 2);
            if ( v129 )
              TryDetachShellFrame(gptiCurrent, v129, v183 == 2, 0LL);
            v180 = v112;
            v178 = v110;
            v179 = v108;
            v17 = v181;
LABEL_183:
            v23 = a5 & 1;
            v28 = v175;
          }
        }
        wil_details_FeatureReporting_ReportUsageToService(
          &Feature_DeliverViaSendMessage__private_reporting,
          21629918LL,
          0LL,
          0LL,
          &Feature_AtomicCheckFailure_logged_traits,
          0);
        v43 = 1;
LABEL_48:
        v174 |= v43;
        v44 = *((_DWORD *)a1 + 2);
        if ( v44 != 595 || (v25 = -1LL, a1[3] != -1LL) )
          v25 = 0LL;
        if ( (unsigned int)(v44 - 571) > 1
          && ((unsigned int)(v44 - 577) > 9 && (unsigned int)(v44 - 593) > 2
           || !CTouchProcessor::IsPointerMessageTouchpad(gpTouchProcessor, gptiCurrent, v25, *((_WORD *)a1 + 8)))
          || (*(_DWORD *)(gptiCurrent + 1232LL) & 0x2000) != 0
          || (v45 = 1, (unsigned int)IsPTPAllowedOnThread(gptiCurrent, *((_DWORD *)a1 + 2), a1[2])) )
        {
          v45 = 0;
        }
        v23 = a5 & 1;
        if ( ((a5 & 1) == 0 || !v182 || !*(_QWORD *)(gptiCurrent + 1256LL)) && !v45 )
        {
          if ( (a5 & 1) == 0 )
            goto LABEL_67;
          if ( *((_DWORD *)a1 + 2) == 258
            && (*(_DWORD *)(gptiCurrent + 1344LL) & 1) != 0
            && (v191[3] & 1) != 0
            && (unsigned int)xxxKeyboardCorrectionCallout(a1, *(unsigned int *)&v191[3], v25) == 1296 )
          {
            *((_DWORD *)a1 + 2) = 0;
            a1[2] = 0LL;
            a1[3] = 0LL;
          }
        }
        if ( (a5 & 1) == 0 )
          goto LABEL_67;
        v46 = *((_DWORD *)a1 + 2);
        if ( (v46 == 258 || v46 == 582 || v46 == 578 || v46 == 583 || v46 == 579 || (unsigned __int16)v46 >= 0xC000u)
          && (unsigned int)xxxCallCtfHook(3, 0, (unsigned int)a5, (__int64)a1)
          && *((_DWORD *)a1 + 2) == 258 )
        {
          *((_DWORD *)a1 + 2) = 0;
          a1[2] = 0LL;
          a1[3] = 0LL;
        }
        if ( !v182 || !*(_QWORD *)(gptiCurrent + 1256LL) )
        {
LABEL_67:
          if ( !v45
            && ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x10) != 0 )
          {
            xxxCallHook(0, (unsigned int)a5, (__int64)a1, 3);
          }
        }
        if ( (a5 & 1) != 0 )
        {
          v47 = *(_DWORD *)(gptiCurrent + 1120LL);
          if ( v47 )
          {
            if ( word_1C0339BC0 && qword_1C0339BC8 == gptiCurrent && dword_1C0339BC4 == v47 )
            {
              ForceCompletePendingPromotion();
              xxxProcessMousePromotionQueue();
            }
            else
            {
              *(_DWORD *)(gptiCurrent + 1120LL) = 0;
            }
          }
          v48 = *((_DWORD *)a1 + 2);
          if ( v48 == 583 )
          {
            v48 = 583;
            if ( (*((_WORD *)a1 + 9) & 0x2000) != 0
              && word_1C0339BC0
              && word_1C0339BC0 == *((_WORD *)a1 + 8)
              && qword_1C0339BC8 == gptiCurrent )
            {
              *(_DWORD *)(gptiCurrent + 1120LL) = dword_1C0339BC4;
              v48 = *((_DWORD *)a1 + 2);
            }
          }
          v49 = 0;
          v50 = v48 - 577;
          if ( (unsigned int)(v48 - 577) <= 0x16 )
          {
            v51 = 8122367;
            if ( _bittest(&v51, v50) )
              v49 = *((_WORD *)a1 + 8);
          }
          CTouchProcessor::UpdateThreadPointerList(
            gpTouchProcessor,
            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL),
            v49);
        }
        if ( !v182 || (*((_DWORD *)v182 + 25) & 0x100) == 0 )
          break;
        CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
          (CMultiPerObjectLockExclusivePpiPtiQ *)v177,
          gptiCurrent);
        if ( (a5 & 1) == 0 || !*(_QWORD *)(gptiCurrent + 1256LL) )
        {
          *((_DWORD *)v182 + 25) &= ~0x100u;
          CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v177);
          break;
        }
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v247,
          "Delegation",
          0LL);
        EtwTraceBeginDelegateInputCallback(v182, a1);
        InputTraceLogging::Delivery::CallDelegateThread(v182);
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)v249,
          "DelegationCallout",
          (const struct InputTraceLogging::ThreadLockedPerfRegion *)v247);
        v159 = xxxClientCallDelegateThread(*(_QWORD *)(gptiCurrent + 1256LL), a1, *(_QWORD *)(gptiCurrent + 1264LL));
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v249);
        EtwTraceEndDelegateInputCallback(v182, a1);
        if ( (*((_DWORD *)v182 + 25) & 0x20) != 0 )
        {
          TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
          CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v298, TouchProcessorLock, v161);
          *((_DWORD *)v182 + 25) &= ~0x100u;
          _HandleDelegatedInputWorker(gptiCurrent, v159, v182);
          CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v298);
        }
        v174 = 0x20000;
        InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v247);
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v177);
        v28 = v175;
      }
      if ( !v45 )
        break;
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v250,
        "PTPDownleveling",
        0LL);
      xxxClientCallDefaultInputHandler(a1);
      *(_OWORD *)a1 = 0LL;
      *((_OWORD *)a1 + 1) = 0LL;
      *((_OWORD *)a1 + 2) = 0LL;
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v250);
      v28 = v175;
    }
    v52 = a1[2];
    j = *((unsigned int *)a1 + 2);
    if ( (unsigned int)(j - 577) > 0xB && (unsigned int)(j - 590) > 9 )
      break;
LABEL_413:
    if ( (_WORD)v52 != 1 )
      goto LABEL_82;
    LOBYTE(v52) = 1;
    v162 = HMValidateHandleNoSecure(*a1, v52);
    v42 = v162;
    if ( !v162 || (unsigned int)IsMiPEnabledForWindow(v162) )
      goto LABEL_82;
    v163 = *((_DWORD *)a1 + 2);
    if ( (unsigned int)dword_1C032A3F8 > 5 )
    {
      v246 = a5 & 1;
      v193 = v163;
      v251 = v42;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        j,
        (unsigned int)&unk_1C02F0A35,
        v25,
        v42,
        (__int64)&v251,
        (__int64)&v193,
        (__int64)&v246);
    }
    if ( (a5 & 1) != 0 )
      xxxClientCallDefWindowProc(a1);
    *(_OWORD *)a1 = 0LL;
    *((_OWORD *)a1 + 1) = 0LL;
    *((_OWORD *)a1 + 2) = 0LL;
    v28 = v175;
  }
  if ( (_DWORD)j == 528 && (_WORD)v52 == 582 )
  {
    v52 >>= 16;
    goto LABEL_413;
  }
LABEL_82:
  if ( a6 && *((_DWORD *)a1 + 2) == 18 )
  {
    v56 = v174 | 0x40000;
    v57 = 0;
    v185 = 0LL;
  }
  else
  {
    if ( (a5 & 1) != 0 )
    {
      v53 = *(_QWORD *)(gptiCurrent + 1064LL);
      if ( v53 )
      {
        LOBYTE(v52) = 18;
        v130 = HMValidateHandleNoRip(v53, v52);
        if ( v130 )
          FreeHidData(v130);
        *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
      }
      v54 = *(_QWORD *)(gptiCurrent + 1072LL);
      if ( v54 )
      {
        FreeTouchInputInfo(v54, 1LL);
        *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
      }
      j = *(_QWORD *)(gptiCurrent + 1080LL);
      if ( j )
      {
        FreeGestureInfo(j, 1LL, v25, v42);
        *(_QWORD *)(gptiCurrent + 1080LL) = 0LL;
      }
      v55 = *((_DWORD *)a1 + 2);
      if ( v55 == 255 )
      {
        if ( a1[2] <= 1uLL )
          *(_QWORD *)(gptiCurrent + 1064LL) = a1[3];
      }
      else if ( v55 == 576 && (LOBYTE(v52) = 20, HMValidateHandle(a1[3], v52)) )
      {
        *(_QWORD *)(gptiCurrent + 1072LL) = a1[3];
      }
      else if ( ((*((_DWORD *)a1 + 2) - 281) & 0xFFFFFFFD) == 0 )
      {
        LOBYTE(v52) = 21;
        if ( HMValidateHandle(a1[3], v52) )
          *(_QWORD *)(gptiCurrent + 1080LL) = a1[3];
      }
    }
    v56 = v174;
    v57 = 1;
  }
LABEL_93:
  if ( v184 )
    ThreadUnlock1(j, v52, v25);
  if ( (unsigned int)HandleProcessSpinning() )
  {
    if ( v57 )
    {
      if ( *((_DWORD *)a1 + 2) == 512 && (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) != 0 )
      {
        v123 = *(_DWORD **)(gptiCurrent + 672LL);
        if ( v123 )
        {
          if ( (v123[49] & 0x100000) != 0 && v123[82] )
          {
            v58 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                - v123[82];
            v123[83] += v58;
            ++v123[84];
            v123[82] = 0;
          }
        }
      }
      *(_QWORD *)(gptiCurrent + 1184LL) = *a1;
      *(_DWORD *)(gptiCurrent + 1192LL) = *((_DWORD *)a1 + 2);
      *(_QWORD *)(gptiCurrent + 1200LL) = a1[2];
      v59 = *a1;
      v60 = KeGetCurrentThread();
      if ( !(unsigned __int8)KeIsAttachedProcess(v58)
        || (v164 = PsGetCurrentProcess(v62, v61, v63),
            v165 = PsGetProcessSessionIdEx(v164),
            v167 = PsGetCurrentThreadProcess(v166),
            v68 = v165 == (unsigned int)PsGetProcessSessionIdEx(v167),
            v57 = v185,
            v68) )
      {
        PsGetThreadWin32Thread(v60);
      }
      if ( (unsigned __int64)(unsigned __int16)v59 < *(_QWORD *)(gpsi + 8LL) )
      {
        v64 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v59 * LODWORD(gSharedInfo[2]);
        v66 = (__int64 *)HMPkheFromPhe(v64);
        v67 = v59 >> 16;
        if ( ((_WORD)v67 == *(_WORD *)(v64 + 26)
           || (_WORD)v67 == 0xFFFF
           || !(_WORD)v67 && PsGetCurrentProcessWow64Process(v65))
          && (*(_BYTE *)(v64 + 25) & 1) == 0 )
        {
          v68 = *(_BYTE *)(v64 + 24) == 1;
          v57 = v185;
          if ( v68 )
            v10 = *v66;
        }
        else
        {
          v57 = v185;
        }
      }
      if ( dword_1C032FB30 && tlgKeywordOn((__int64)&dword_1C032FB30, 0LL) )
      {
        WindowDetails = InputTraceLogging::GetWindowDetails(v299, v10);
        v187 = *(_OWORD *)WindowDetails;
        v188 = *(_OWORD *)(WindowDetails + 16);
        v189 = *(_QWORD *)(WindowDetails + 32);
        if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
        {
          if ( *((_WORD *)a1 + 8) == 1 )
          {
            if ( (unsigned int)dword_1C032FB30 > 4
              && (qword_1C032FB40 & 0x10) != 0
              && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
            {
              v254 = v187;
              v194 = HIDWORD(v189);
              v195 = v189;
              v196 = HIDWORD(v188);
              v197 = DWORD2(v188);
              v255 = v188;
              v256 = *a1;
              v198 = v176;
              v199 = *((unsigned __int16 *)a1 + 9);
              v257 = *(_QWORD *)(gptiCurrent + 432LL);
              v200 = *((_DWORD *)a1 + 8);
              v258 = a1[3];
              v259 = a1[2];
              v260 = v256;
              v201 = v169;
              v202 = v169;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                (int)&dword_1C032FB30,
                (int)&dword_1C02EFBD6,
                (__int64)&v202,
                (__int64)&v201,
                (__int64)&v260,
                (__int64)&v259,
                (__int64)&v258,
                (__int64)&v200,
                (__int64)&v257,
                (__int64)&v199,
                (__int64)&v198,
                (__int64)&v256,
                (__int64)&v255,
                (__int64)&v197,
                (__int64)&v196,
                (__int64)&v195,
                (__int64)&v194,
                (__int64)&v254 + 8,
                (__int64)&v254);
            }
          }
          else if ( (unsigned int)dword_1C032FB30 > 4
                 && (qword_1C032FB40 & 0x10) != 0
                 && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
          {
            v261 = v187;
            v203 = HIDWORD(v189);
            v204 = v189;
            v205 = HIDWORD(v188);
            v206 = DWORD2(v188);
            v262 = v188;
            v263 = *a1;
            v207 = v176;
            v208 = *((unsigned __int16 *)a1 + 9);
            v264 = *(_QWORD *)(gptiCurrent + 432LL);
            v209 = *((_DWORD *)a1 + 8);
            v265 = a1[3];
            v266 = a1[2];
            v267 = v263;
            v210 = v169;
            v211 = v169;
            v191[0] = v266;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C032FB30,
              (int)&dword_1C02EFCD6,
              (__int64)v191,
              (__int64)&v211,
              (__int64)&v210,
              (__int64)&v267,
              (__int64)&v266,
              (__int64)&v265,
              (__int64)&v209,
              (__int64)&v264,
              (__int64)&v208,
              (__int64)&v207,
              (__int64)&v263,
              (__int64)&v262,
              (__int64)&v206,
              (__int64)&v205,
              (__int64)&v204,
              (__int64)&v203,
              (__int64)&v261 + 8,
              (__int64)&v261);
          }
        }
        else if ( InputTraceLogging::IsMouseInputMessage(v170) )
        {
          if ( (unsigned int)dword_1C032FB30 > 4
            && (qword_1C032FB40 & 0x10) != 0
            && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
          {
            v268 = v187;
            v212 = HIDWORD(v189);
            v213 = v189;
            v214 = HIDWORD(v188);
            v215 = DWORD2(v188);
            v269 = v188;
            v270 = *a1;
            v216 = v176;
            v271 = *(_QWORD *)(gptiCurrent + 432LL);
            v217 = *((_DWORD *)a1 + 8);
            v272 = a1[3];
            v273 = a1[2];
            v274 = v270;
            v218 = v171;
            v219 = v171;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C032FB30,
              (int)&unk_1C02EFDE5,
              (__int64)&v219,
              (__int64)&v218,
              (__int64)&v274,
              (__int64)&v273,
              (__int64)&v272,
              (__int64)&v217,
              (__int64)&v271,
              (__int64)&v216,
              (__int64)&v270,
              (__int64)&v269,
              (__int64)&v215,
              (__int64)&v214,
              (__int64)&v213,
              (__int64)&v212,
              (__int64)&v268 + 8,
              (__int64)&v268);
          }
        }
        else if ( (unsigned int)(v171 - 256) > 9 )
        {
          if ( v171 == 255 )
          {
            if ( (unsigned int)dword_1C032FB30 > 4
              && (qword_1C032FB40 & 0x10) != 0
              && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
            {
              v280 = v187;
              v228 = HIDWORD(v189);
              v229 = v189;
              v230 = HIDWORD(v188);
              v231 = DWORD2(v188);
              v281 = v188;
              v282 = *a1;
              v232 = v176;
              v283 = *(_QWORD *)(gptiCurrent + 432LL);
              v233 = *((_DWORD *)a1 + 8);
              v284 = a1[3];
              v285 = a1[2];
              v286 = v282;
              v234 = 255;
              v235 = 255;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
                (int)&dword_1C032FB30,
                (int)&unk_1C02EFFC0,
                (__int64)&v235,
                (__int64)&v234,
                (__int64)&v286,
                (__int64)&v285,
                (__int64)&v284,
                (__int64)&v233,
                (__int64)&v283,
                (__int64)&v232,
                (__int64)&v282,
                (__int64)&v281,
                (__int64)&v231,
                (__int64)&v230,
                (__int64)&v229,
                (__int64)&v228,
                (__int64)&v280 + 8,
                (__int64)&v280);
            }
          }
          else if ( (unsigned int)(v171 - 571) <= 1
                 && (unsigned int)dword_1C032FB30 > 4
                 && (qword_1C032FB40 & 0x10) != 0
                 && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
          {
            v287 = v187;
            v236 = HIDWORD(v189);
            v237 = v189;
            v238 = HIDWORD(v188);
            v239 = DWORD2(v188);
            v288 = v188;
            v289 = *a1;
            v240 = v176;
            v290 = *(_QWORD *)(gptiCurrent + 432LL);
            v241 = *((_DWORD *)a1 + 8);
            v291 = a1[3];
            v292 = a1[2];
            v293 = v289;
            v242 = v171;
            v243[0] = v171;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
              (int)&dword_1C032FB30,
              (int)&dword_1C02F00B7,
              (__int64)v243,
              (__int64)&v242,
              (__int64)&v293,
              (__int64)&v292,
              (__int64)&v291,
              (__int64)&v241,
              (__int64)&v290,
              (__int64)&v240,
              (__int64)&v289,
              (__int64)&v288,
              (__int64)&v239,
              (__int64)&v238,
              (__int64)&v237,
              (__int64)&v236,
              (__int64)&v287 + 8,
              (__int64)&v287);
          }
        }
        else if ( (unsigned int)dword_1C032FB30 > 4
               && (qword_1C032FB40 & 0x10) != 0
               && (qword_1C032FB48 & 0x10) == qword_1C032FB48 )
        {
          v275 = v187;
          v220 = HIDWORD(v189);
          v221 = v189;
          v222 = HIDWORD(v188);
          v223 = DWORD2(v188);
          v276 = v188;
          v277 = *a1;
          v224 = v176;
          v278 = *(_QWORD *)(gptiCurrent + 432LL);
          v225 = *((_DWORD *)a1 + 8);
          v279 = v277;
          v226 = v171;
          v227 = v171;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C032FB30,
            (int)&dword_1C02EFED9,
            (__int64)&v227,
            (__int64)&v226,
            (__int64)&v279,
            (__int64)&v225,
            (__int64)&v278,
            (__int64)&v224,
            (__int64)&v277,
            (__int64)&v276,
            (__int64)&v223,
            (__int64)&v222,
            (__int64)&v221,
            (__int64)&v220,
            (__int64)&v275 + 8,
            (__int64)&v275);
        }
      }
    }
  }
  else
  {
    v57 = 0;
  }
  EtwTraceBeginAppMessageProcessing(a6, v56, a1);
  return v57;
}
