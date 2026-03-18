/*
 * XREFs of ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02 (-IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z.c)
 *     _xxxTrackMouseMove@12 @ 0x129D6 (_xxxTrackMouseMove@12.c)
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     _xxxDCEWindowHitTestIndirect@16 @ 0x262C0 (_xxxDCEWindowHitTestIndirect@16.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _xxxSendTransformableMessage@20 @ 0x2D496 (_xxxSendTransformableMessage@20.c)
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 *     _PtiMouseFromQ@4 @ 0x4810E (_PtiMouseFromQ@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ?AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z @ 0x6D81C (-AllocQEntryEx@@YGPAUtagQMSG@@PAUtagMLIST@@PAU1@_N@Z.c)
 *     _xxxCallCtfHook@16 @ 0x6D91E (_xxxCallCtfHook@16.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z @ 0x7007A (-xxxMouseActivate@@YGHPAUtagTHREADINFO@@PAUtagWND@@PBUtagQMSG@@H@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _xxxWindowHitTest@20 @ 0x7D14C (_xxxWindowHitTest@20.c)
 *     _ThreadLockExchangeAlways@8 @ 0x7D602 (_ThreadLockExchangeAlways@8.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z @ 0x9AE96 (-SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z.c)
 *     _xxxDCEWindowHitTest@32 @ 0x9AED8 (_xxxDCEWindowHitTest@32.c)
 *     _IsMiPActive@8 @ 0x9AF76 (_IsMiPActive@8.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z @ 0x9C586 (-CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z.c)
 *     _TransferWakeBit@8 @ 0xA255A (_TransferWakeBit@8.c)
 *     _xxxImmProcessKey@20 @ 0xA2CE0 (_xxxImmProcessKey@20.c)
 *     _GetAppImeCompatFlags@4 @ 0xA2FB2 (_GetAppImeCompatFlags@4.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _FindNCHitEx@16 @ 0xA3C10 (_FindNCHitEx@16.c)
 *     ??$?0UtagObjLock@@@?$CMultiPerObjectLockExclusive@$00@@QAE@AAUtagObjLock@@@Z @ 0xA4C20 (--$-0UtagObjLock@@@-$CMultiPerObjectLockExclusive@$00@@QAE@AAUtagObjLock@@@Z.c)
 *     _CheckPwndFilter@8 @ 0xA6D84 (_CheckPwndFilter@8.c)
 *     _IsHiddenByInputService@4 @ 0xAAB8E (_IsHiddenByInputService@4.c)
 *     _FreeQEntry@4 @ 0xAB19C (_FreeQEntry@4.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@000000@Z @ 0xAB276 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@0000.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAB848 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _IsMenuStarted@4 @ 0xABF6A (_IsMenuStarted@4.c)
 *     _IsInsideMenuLoop@4 @ 0xACC66 (_IsInsideMenuLoop@4.c)
 *     _LockExchangeW32Thread@8 @ 0xAD400 (_LockExchangeW32Thread@8.c)
 *     ?ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z @ 0xC4DB2 (-ResetMouseHover@@YGXPAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z @ 0xC93F4 (-CheckProcessForeground@@YGJPAUtagTHREADINFO@@@Z.c)
 *     ?ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z @ 0xEFB5A (-ClearWakeBit@@YGXPAUtagTHREADINFO@@IH@Z.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QAE@XZ @ 0x14CB0F (--1MenuStateOwnerLockxxxUnlock@@QAE@XZ.c)
 *     ?GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z @ 0x14CF17 (-GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YGKPAUtagWND@@@Z @ 0x14D15A (-GetMiPWindowFlags@@YGKPAUtagWND@@@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YGHPAUtagWND@@@Z @ 0x14D379 (-IsOleDragDropCaptureWindow@@YGHPAUtagWND@@@Z.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@PAUHWND__@@@Z @ 0x14D915 (-RedirectForCapture@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@PAUHWND__@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14DA70 (-RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@.c)
 *     ?SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z @ 0x14DB36 (-SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YGXPAUtagWND@@K@Z @ 0x14DB58 (-SetMiPWindowFlags@@YGXPAUtagWND@@K@Z.c)
 *     ?xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z @ 0x14E09D (-xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z.c)
 *     _IsMiPEnabledForWindow@4 @ 0x14E372 (_IsMiPEnabledForWindow@4.c)
 *     _IsStatelessPointerInputMessage@4 @ 0x14E3FC (_IsStatelessPointerInputMessage@4.c)
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 *     _PhysicalToLogicalDPIPointWithHitTest@16 @ 0x1514B5 (_PhysicalToLogicalDPIPointWithHitTest@16.c)
 *     _PhysicalToLogicalInPlacePointWithParent@12 @ 0x15156E (_PhysicalToLogicalInPlacePointWithParent@12.c)
 *     _xxxCallMouseHook@12 @ 0x152C40 (_xxxCallMouseHook@12.c)
 *     __KillSystemTimer@8 @ 0x1562F0 (__KillSystemTimer@8.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 *     ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16 (-IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z.c)
 *     ?IsPointerMessageTouchpad@@YGHPAUtagTHREADINFO@@KG@Z @ 0x15AE8D (-IsPointerMessageTouchpad@@YGHPAUtagTHREADINFO@@KG@Z.c)
 *     ?HasTransform@InputTransform@@YGHPAUtagWND@@@Z @ 0x15E641 (-HasTransform@InputTransform@@YGHPAUtagWND@@@Z.c)
 *     _GetCurrentThreadDesktopWindow@0 @ 0x16F3A6 (_GetCurrentThreadDesktopWindow@0.c)
 *     _GetPenDoubleClickTime@0 @ 0x16FB93 (_GetPenDoubleClickTime@0.c)
 *     _GetTouchDoubleClickTime@0 @ 0x16FBF1 (_GetTouchDoubleClickTime@0.c)
 *     _xxxClientCallLocalMouseHooks@12 @ 0x193975 (_xxxClientCallLocalMouseHooks@12.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x19F9AF (-xxxRetrieveInteractiveControlInputMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     _xxxDefPointerProc@16 @ 0x1A1EB4 (_xxxDefPointerProc@16.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     _HotKeyToWindow@4 @ 0x1A2512 (_HotKeyToWindow@4.c)
 *     __W32ExceptionHandler@4 @ 0x1B6D61 (__W32ExceptionHandler@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
// bad sp value at call has been detected, the output may be wrong!
int __fastcall xxxScanSysQueue(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        struct tagQMSG *a4,
        unsigned int a5,
        char a6,
        int a7,
        int *a8)
{
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  struct tagQMSG *v16; // ecx
  struct tagQMSG *NextSysMsg; // esi
  int v18; // edx
  int v19; // eax
  unsigned int v20; // esi
  void (__thiscall *v21)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // edi
  int v22; // edx
  _DWORD *CurrentThreadDesktopWindow; // edi
  int i; // ecx
  int v25; // esi
  int v26; // eax
  _DWORD *v27; // edi
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // esi
  int v32; // ecx
  unsigned int v33; // edx
  int v34; // eax
  int v35; // eax
  struct tagQMSG *v36; // edi
  unsigned int v37; // esi
  _DWORD *v38; // ecx
  int v39; // ecx
  int v40; // eax
  bool v41; // zf
  struct tagQMSG *v42; // esi
  struct tagTHREADINFO *v43; // eax
  int v44; // eax
  _BYTE *v45; // edx
  int v46; // edi
  int v47; // eax
  char v48; // dl
  int v49; // esi
  struct tagWND *CompositeAppFrameWindowOrSelf; // esi
  void (__thiscall *v51)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // edi
  BOOL v52; // ebx
  int v53; // ecx
  int v54; // eax
  _DWORD *v55; // esi
  int v56; // esi
  struct tagQMSG *v57; // edi
  int v58; // eax
  _DWORD *v59; // esi
  _DWORD *v60; // edi
  int v61; // eax
  _DWORD *v62; // esi
  _DWORD *v63; // esi
  _DWORD *v64; // eax
  _DWORD *v65; // ecx
  int v66; // ecx
  int v67; // eax
  struct tagQMSG *v68; // esi
  int v69; // eax
  void (__thiscall *v70)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // esi
  unsigned __int8 v71; // al
  int v72; // esi
  struct tagQMSG *v73; // eax
  int v74; // edx
  int v75; // esi
  int v76; // ebx
  int v77; // esi
  int v78; // ecx
  int v79; // esi
  int v80; // edx
  char *v81; // eax
  char v82; // al
  int v83; // eax
  PKTHREAD v84; // eax
  int v85; // eax
  int v86; // esi
  int v87; // edx
  int v88; // edx
  const struct tagQMSG *v89; // eax
  _DWORD *v90; // esi
  int v91; // edx
  int HasTransform; // esi
  struct tagQMSG *v93; // esi
  struct tagQMSG *v94; // esi
  int v95; // eax
  bool v96; // si
  _DWORD *v97; // eax
  _DWORD *v98; // eax
  PKTHREAD v99; // eax
  int v100; // eax
  int v101; // esi
  int v102; // eax
  int InteractiveControlInputMessage; // esi
  int v104; // esi
  int v105; // eax
  void (__thiscall *v106)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // esi
  _DWORD *v107; // eax
  HWND v108; // esi
  int v109; // edx
  const struct tagQMSG *v110; // eax
  int v111; // edx
  int v112; // esi
  int v113; // ecx
  unsigned int v114; // eax
  int v115; // ecx
  int v116; // edx
  int v117; // esi
  int v118; // edx
  int v119; // esi
  __int64 v120; // rax
  int v121; // edx
  __int64 v122; // rax
  int v123; // ecx
  struct tagQMSG *v124; // ecx
  int v125; // ecx
  struct tagDESKTOP *v126; // edx
  LONG v127; // esi
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  LONG NCHit; // eax
  int v134; // edx
  int v135; // esi
  int v136; // ecx
  struct tagDESKTOP *v137; // esi
  int v138; // esi
  int v139; // eax
  char v140; // al
  int v141; // edx
  int v142; // ecx
  unsigned int v143; // ecx
  LONG v144; // ecx
  int v145; // ebx
  int v146; // edi
  int v147; // kr00_4
  int v148; // edx
  BOOL v149; // eax
  int v150; // ecx
  int v151; // eax
  int TouchDoubleClickTime; // eax
  int v153; // eax
  PKTHREAD v154; // eax
  int v155; // eax
  unsigned int *v156; // esi
  struct tagWND *CompositionInputWindowUIOwner; // esi
  _DWORD *TopLevelWindow; // eax
  _DWORD *v159; // esi
  struct tagWND *v160; // eax
  int v161; // edx
  unsigned int v162; // edx
  struct tagQMSG *v163; // esi
  struct tagQMSG *v164; // edx
  _BYTE *v165; // esi
  struct tagQMSG *v166; // edi
  _DWORD *v167; // esi
  _DWORD *v168; // eax
  _DWORD *v169; // eax
  _DWORD *v170; // esi
  int v171; // edx
  LONG v172; // eax
  LONG v173; // edi
  int v174; // eax
  PKTHREAD v175; // eax
  int ThreadWin32Thread; // eax
  void *y; // esi
  struct tagTHREADINFO *v178; // edx
  int v179; // ecx
  struct tagTHREADINFO *v180; // esi
  int v181; // esi
  unsigned int v182; // eax
  struct tagWND *MouseKeyFlags; // ecx
  int v184; // esi
  struct tagQMSG *v185; // edi
  int v186; // ecx
  int v187; // esi
  int v188; // edx
  int v189; // esi
  int v190; // esi
  int v191; // esi
  int *v192; // eax
  struct tagQMSG *v193; // esi
  struct tagTHREADINFO *v194; // edx
  int v195; // ecx
  int v196; // esi
  int v197; // eax
  int v198; // eax
  int v199; // eax
  unsigned int v200; // eax
  int v201; // esi
  int *v202; // eax
  int v203; // eax
  _DWORD *v204; // eax
  _DWORD *v205; // edi
  int v206; // eax
  const struct tagMSG *v207; // eax
  struct tagQMSG *v208; // esi
  int v209; // ecx
  int v210; // esi
  int v211; // eax
  int v213; // edi
  char *v214; // esi
  int v215; // edx
  int v216; // ecx
  _DWORD *v217; // eax
  PKTHREAD CurrentThread; // eax
  struct tagPOINT v219; // [esp-4h] [ebp-554h]
  struct tagWND *v220; // [esp+0h] [ebp-550h]
  struct tagWND *v221; // [esp+0h] [ebp-550h]
  struct tagTHREADINFO *v222; // [esp+0h] [ebp-550h]
  struct CMultiPerObjectLockExclusivePpiPtiQ *v223; // [esp+4h] [ebp-54Ch]
  int v224; // [esp+4h] [ebp-54Ch]
  bool v225; // [esp+4h] [ebp-54Ch]
  _BYTE v226[88]; // [esp+10h] [ebp-540h] BYREF
  _DWORD v227[52]; // [esp+68h] [ebp-4E8h] BYREF
  _BYTE v228[120]; // [esp+138h] [ebp-418h] BYREF
  _BYTE v229[88]; // [esp+1B0h] [ebp-3A0h] BYREF
  _DWORD v230[30]; // [esp+208h] [ebp-348h] BYREF
  _DWORD v231[30]; // [esp+280h] [ebp-2D0h] BYREF
  unsigned int v232; // [esp+304h] [ebp-24Ch]
  int v233; // [esp+308h] [ebp-248h]
  int v234; // [esp+30Ch] [ebp-244h]
  int v235; // [esp+310h] [ebp-240h]
  int v236; // [esp+314h] [ebp-23Ch]
  _DWORD v237[8]; // [esp+318h] [ebp-238h] BYREF
  _DWORD v238[4]; // [esp+348h] [ebp-208h] BYREF
  _DWORD v239[2]; // [esp+358h] [ebp-1F8h] BYREF
  int v240; // [esp+360h] [ebp-1F0h]
  struct tagWND **v241; // [esp+364h] [ebp-1ECh]
  int v242; // [esp+368h] [ebp-1E8h]
  int v243; // [esp+36Ch] [ebp-1E4h]
  _DWORD *v244; // [esp+370h] [ebp-1E0h]
  int v245; // [esp+374h] [ebp-1DCh]
  int v246; // [esp+378h] [ebp-1D8h]
  _DWORD v247[3]; // [esp+37Ch] [ebp-1D4h] BYREF
  _DWORD v248[3]; // [esp+388h] [ebp-1C8h] BYREF
  _BYTE v249[12]; // [esp+394h] [ebp-1BCh] BYREF
  _BYTE v250[12]; // [esp+3A0h] [ebp-1B0h] BYREF
  _BYTE v251[12]; // [esp+3ACh] [ebp-1A4h] BYREF
  _BYTE v252[12]; // [esp+3B8h] [ebp-198h] BYREF
  _BYTE v253[12]; // [esp+3C4h] [ebp-18Ch] BYREF
  int v254; // [esp+3D0h] [ebp-180h]
  char v255[4]; // [esp+3D4h] [ebp-17Ch] BYREF
  int v256; // [esp+3D8h] [ebp-178h] BYREF
  struct tagWND *v257; // [esp+3DCh] [ebp-174h]
  int v258; // [esp+3E0h] [ebp-170h]
  int v259[6]; // [esp+3E4h] [ebp-16Ch] BYREF
  int v260; // [esp+3FCh] [ebp-154h]
  _DWORD *v261; // [esp+400h] [ebp-150h]
  int v262; // [esp+404h] [ebp-14Ch] BYREF
  _DWORD *v263; // [esp+408h] [ebp-148h]
  int v264; // [esp+40Ch] [ebp-144h]
  _DWORD *v265; // [esp+410h] [ebp-140h]
  _DWORD *v266; // [esp+414h] [ebp-13Ch]
  _DWORD v267[31]; // [esp+418h] [ebp-138h] BYREF
  struct tagQMSG *v268; // [esp+494h] [ebp-BCh]
  _DWORD *v269; // [esp+498h] [ebp-B8h]
  int v270; // [esp+49Ch] [ebp-B4h]
  int v271; // [esp+4A0h] [ebp-B0h]
  int v272; // [esp+4A4h] [ebp-ACh]
  struct tagDESKTOP *v273; // [esp+4A8h] [ebp-A8h]
  int v274; // [esp+4ACh] [ebp-A4h]
  int v275; // [esp+4B0h] [ebp-A0h]
  int v276; // [esp+4B4h] [ebp-9Ch]
  _DWORD *v277; // [esp+4B8h] [ebp-98h]
  BOOL v278; // [esp+4BCh] [ebp-94h]
  struct tagQMSG *v279; // [esp+4C0h] [ebp-90h]
  struct tagPOINT v280; // [esp+4C4h] [ebp-8Ch]
  int j; // [esp+4CCh] [ebp-84h]
  int v282; // [esp+4D0h] [ebp-80h]
  int v283; // [esp+4D4h] [ebp-7Ch]
  bool v284; // [esp+4DAh] [ebp-76h]
  bool v285; // [esp+4DBh] [ebp-75h]
  BOOL v286; // [esp+4DCh] [ebp-74h] BYREF
  int v287; // [esp+4E0h] [ebp-70h]
  int v288; // [esp+4E4h] [ebp-6Ch] BYREF
  struct tagDESKTOP *v289; // [esp+4E8h] [ebp-68h] BYREF
  LONG v290; // [esp+4ECh] [ebp-64h]
  int v291; // [esp+4F0h] [ebp-60h]
  struct tagWND *v292; // [esp+4F4h] [ebp-5Ch] BYREF
  struct tagWND *v293; // [esp+4F8h] [ebp-58h] BYREF
  char v294; // [esp+4FFh] [ebp-51h]
  _DWORD *v295; // [esp+500h] [ebp-50h] BYREF
  struct tagQMSG *v296; // [esp+504h] [ebp-4Ch] BYREF
  unsigned int v297; // [esp+508h] [ebp-48h]
  char v298; // [esp+50Fh] [ebp-41h]
  int v299; // [esp+510h] [ebp-40h] BYREF
  struct tagTHREADINFO *v300; // [esp+514h] [ebp-3Ch]
  struct tagWND *v301; // [esp+518h] [ebp-38h]
  struct tagQMSG *v302; // [esp+51Ch] [ebp-34h]
  void (__thiscall *v303)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // [esp+520h] [ebp-30h]
  void (__thiscall *v304)(CMultiPerObjectLockExclusivePpiPtiQ *__hidden); // [esp+524h] [ebp-2Ch]
  bool v305[4]; // [esp+528h] [ebp-28h]
  struct tagQMSG *v306; // [esp+52Ch] [ebp-24h]
  _BYTE v307[5]; // [esp+533h] [ebp-1Dh] BYREF
  CPPEH_RECORD ms_exc; // [esp+538h] [ebp-18h]

  v266 = a2;
  v8 = (int)a1;
  v287 = (int)a1;
  v261 = a1;
  v265 = a1;
  v269 = a1;
  v275 = 0;
  memset(v267, 0, 0x78u);
  v299 = 0;
  v289 = 0;
  v290 = 0;
  v286 = 0;
  v293 = 0;
  memset(v259, 0, sizeof(v259));
  v254 = 0;
  v264 = 0;
  v256 = 0;
  v257 = 0;
  v258 = 0;
  memset(v252, 0, sizeof(v252));
  memset(v253, 0, sizeof(v253));
  memset(v249, 0, sizeof(v249));
  memset(v250, 0, sizeof(v250));
  memset(v251, 0, sizeof(v251));
  v306 = (struct tagQMSG *)(a6 & 1);
  v296 = v306;
  v278 = 0;
  v283 = 0;
  v298 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)v307,
    (struct tagTHREADINFO *)v8);
  v10 = 0;
  v279 = 0;
  *a8 = 0;
  if ( a7 == 0x2000 && *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) )
  {
    EtwTraceInputQueueLockedPeekRecursion(*(_DWORD *)(v8 + 236));
    goto LABEL_767;
  }
  v260 = 0;
  v282 = 0;
  v271 = 0;
  v11 = *(_DWORD *)(v8 + 236);
  if ( !*(_DWORD *)(v11 + 36) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qqq(v9, v10, 0x12u, 26, (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids, v11, v8, v8);
      v11 = *(_DWORD *)(v8 + 236);
    }
    *(_DWORD *)(v11 + 36) = v8;
    **(_DWORD **)(v8 + 244) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v12 = *(_DWORD *)(v8 + 236);
    v13 = *(_DWORD *)(v12 + 284);
    if ( (a6 & 1) != 0 )
      v14 = v13 & 0xFFFFFBFF;
    else
      v14 = v13 | 0x400;
    *(_DWORD *)(v12 + 284) = v14;
  }
  if ( *(_DWORD *)(*(_DWORD *)(v8 + 236) + 36) != v8 )
  {
    EtwTraceInputQueueLocked(*(_DWORD *)(v8 + 236));
    v275 = 2;
    goto LABEL_767;
  }
  v276 = 0;
  v277 = 0;
  v274 = 0;
  v272 = 0;
  v268 = 0;
  LockW32Thread(0, v252);
  LockW32Thread(0, v253);
  LockW32Thread(0, v249);
  LockW32Thread(0, v250);
  LockW32Thread(0, v251);
  v262 = *(_DWORD *)(v8 + 228);
  *(_DWORD *)(v8 + 228) = &v262;
  v263 = 0;
  v270 = 8;
  v304 = CMultiPerObjectLockExclusivePpiPtiQ::unlock;
  v303 = CMultiPerObjectLockExclusivePpiPtiQ::lock;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
  {
    WPP_RECORDER_SF_qq(
      18,
      27,
      &WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
      *(_DWORD *)(v8 + 236),
      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44));
  }
  *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) = 0;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
              ms_exc.registration.TryLevel = 0;
              v280.x = (**(_DWORD **)(v8 + 260) >> 9) & 1;
              v237[7] = v280.x;
              ms_exc.registration.TryLevel = -2;
              if ( *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) )
              {
                if ( !v298 && (v283 == 3 || v283 == 1) )
                  v298 = 1;
              }
              else
              {
                v283 = 0;
                v298 = 0;
              }
              v300 = 0;
              j = 0;
              v301 = 0;
              v292 = 0;
              v275 = 0;
              NextSysMsg = xxxGetNextSysMsg((struct tagTHREADINFO *)v267, 0, (struct tagQMSG *)v219.y, v223);
              v302 = NextSysMsg;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v16 = (struct tagQMSG *)WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                {
                  LOBYTE(v15) = 5;
                  WPP_RECORDER_SF_qqq(
                    (int)WPP_GLOBAL_Control,
                    v15,
                    0x12u,
                    28,
                    (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                    (char)NextSysMsg,
                    *(_DWORD *)(v8 + 236),
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44));
                }
              }
              *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) = NextSysMsg;
              v18 = 1;
              if ( (unsigned int)NextSysMsg <= 1 )
                break;
              v19 = v267[16];
              if ( (v267[16] & 0x20) != 0 )
              {
                *a8 = (int)NextSysMsg;
                *((_DWORD *)NextSysMsg + 16) |= 0x100u;
                v306 = 0;
                v296 = 0;
                v19 = v267[16];
              }
              if ( (v19 & 0x10000) != 0 )
              {
                if ( v267[17] == v8 )
                  v283 = 1;
                v298 = 1;
              }
              else if ( ((unsigned int)&loc_80000 & v19) != 0 )
              {
                if ( v267[17] == v8 )
                  v283 = 3;
              }
              else if ( v267[15] == 4 && v298 )
              {
                DeferSysPeekMsg(v8, 3);
              }
              else if ( ((unsigned int)&loc_20000 & v19) != 0 )
              {
                if ( v267[17] == v8 )
                  v283 = 2;
              }
              else
              {
                if ( !ShouldDeferMessage(v283, v267) )
                  break;
                DeferSysPeekMsg(v8, 3);
                v283 = 3;
              }
            }
            v20 = 0;
            if ( !*(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) )
            {
              if ( a7 == 0x2000 )
                ClearWakeBit(0, v219.y, (int)v223);
              goto LABEL_50;
            }
            ThreadUnlock1();
            LOBYTE(v22) = 1;
            CurrentThreadDesktopWindow = (_DWORD *)HMValidateHandleNoSecure(v267[2], v22);
            v297 = (unsigned int)CurrentThreadDesktopWindow;
            v295 = CurrentThreadDesktopWindow;
            v262 = *(_DWORD *)(v8 + 228);
            *(_DWORD *)(v8 + 228) = &v262;
            v263 = CurrentThreadDesktopWindow;
            if ( CurrentThreadDesktopWindow )
              HMLockObject(CurrentThreadDesktopWindow);
            v18 = v267[15];
            if ( !v267[15] )
              break;
            if ( v267[15] != 4 || *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) == *(_DWORD *)(*(_DWORD *)(v8 + 236) + 12) )
            {
              if ( v267[15] != 9 || v267[3] != 96 )
                goto LABEL_70;
              for ( i = v267[1]; i && IsHiddenByInputService(); i = *(_DWORD *)(i + 4) )
                ;
              if ( !i )
              {
LABEL_70:
                v25 = v267[17];
                if ( v267[17] && v267[17] != v8 )
                {
                  v26 = *(_DWORD *)(v8 + 236);
                  if ( *(_DWORD *)(v267[17] + 236) == v26 )
                  {
                    LockExchangeW32Thread(v267[17], v249);
                    v27 = v269;
                    v16 = (struct tagQMSG *)v269[59];
                    v18 = (int)v16;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v8 = (int)v269;
                      if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                      {
                        WPP_RECORDER_SF_qq(
                          18,
                          29,
                          &WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                          (char)v16,
                          *((_DWORD *)v16 + 11));
                        v18 = v27[59];
                      }
                    }
                    *(_DWORD *)(v18 + 44) = 0;
                    v274 = v25;
                    goto LABEL_50;
                  }
                  CleanEventMessage(*(struct tagQMSG **)(v26 + 44));
                  DelQEntry(1);
                  goto LABEL_16;
                }
                if ( (a6 & 2) == 0 || (v28 = *(_DWORD *)(v8 + 264), (v28 & 2) == 0) || v18 == 4 || v18 == 9 )
                {
                  EtwTraceRetrieveQueueEventMessage(*(_DWORD *)(*(_DWORD *)(v8 + 236) + 44));
                  DelQEntry(1);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                  {
                    WPP_RECORDER_SF_qq(
                      18,
                      30,
                      &WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                      *(_DWORD *)(v8 + 236),
                      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44));
                  }
                  *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) = 0;
                  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  xxxProcessEventMessage(v8, (int)v267);
LABEL_87:
                  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  goto LABEL_16;
                }
                ms_exc.registration.TryLevel = 1;
                *(_DWORD *)(*(_DWORD *)(v8 + 260) + 20) = (unsigned int)&loc_80000 | v28;
                ms_exc.registration.TryLevel = -2;
                *(_DWORD *)(v8 + 264) |= (unsigned int)&loc_80000;
              }
            }
          }
        }
        while ( a7 == 0x2000 );
        v29 = v267[3];
        *(_DWORD *)v305 = v267[3];
        v288 = v267[3];
        if ( v267[3] > 0x11Bu )
          break;
        if ( v267[3] == 283 )
          goto LABEL_338;
        if ( v267[3] > 0x101u )
        {
          if ( v267[3] == 258 )
            goto LABEL_226;
          if ( v267[3] == 260 )
            goto LABEL_167;
          if ( v267[3] != 261 )
          {
            if ( v267[3] != 281 )
              goto LABEL_97;
            goto LABEL_338;
          }
LABEL_200:
          v56 = LOBYTE(v267[4]);
          j = LOBYTE(v267[4]);
          if ( LOBYTE(v267[4]) == 231 )
            v267[4] = 231;
          v57 = v306;
          if ( !v306 || (((unsigned int)&loc_3FFFD + 3) & v267[16]) == 0 )
          {
            if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
            {
              if ( (GetAppImeCompatFlags(0) & 0x800000) == 0 && BYTE2(v267[5]) == 41 )
              {
                if ( v57 )
                {
                  v58 = *(_DWORD *)(v8 + 236);
                  if ( (*(_BYTE *)(v58 + 156) & 0x15) == 0
                    && (*(_BYTE *)(v58 + 174) & 0x40) == 0
                    && (*(_BYTE *)(v58 + 175) & 1) == 0 )
                  {
                    v59 = *(_DWORD **)(v58 + 60);
                    v60 = v59;
                    if ( !v59 )
                    {
                      v59 = *(_DWORD **)(v58 + 64);
                      v60 = v59;
                    }
                    if ( !v60 || v59[2] == v8 )
                    {
                      xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                      if ( !v260 && v60 )
                      {
                        v237[0] = *v59;
                        v237[1] = 80;
                        memset(&v237[2], 0, 20);
                        v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                        xxxCallCtfHook(3, 0, 1, v237);
                        goto LABEL_87;
                      }
                      goto LABEL_16;
                    }
                    v56 = j;
                  }
                }
              }
            }
          }
          v29 = *(_DWORD *)v305;
          if ( v56 == 121 )
          {
            v29 = *(_DWORD *)v305 | 4;
            *(_DWORD *)v305 = v29;
            v288 = v29;
          }
          if ( (*(_BYTE *)(*(_DWORD *)(v8 + 236) + 156) & 4) != 0 && v56 == 27 )
          {
            v29 |= 4u;
            *(_DWORD *)v305 = v29;
            v288 = v29;
          }
          if ( (*(_BYTE *)(v8 + 264) & 8) == 0 )
            v267[5] &= ~0x2000000u;
LABEL_226:
          v301 = (struct tagWND *)LOBYTE(v267[4]);
          v61 = *(_DWORD *)(v8 + 236);
          CurrentThreadDesktopWindow = *(_DWORD **)(v61 + 60);
          v295 = CurrentThreadDesktopWindow;
          v62 = CurrentThreadDesktopWindow;
          if ( !CurrentThreadDesktopWindow )
          {
            CurrentThreadDesktopWindow = *(_DWORD **)(v61 + 64);
            v62 = CurrentThreadDesktopWindow;
            v295 = CurrentThreadDesktopWindow;
            if ( !CurrentThreadDesktopWindow )
              goto LABEL_109;
            if ( (unsigned int)(v29 - 256) <= 3 )
            {
              *(_DWORD *)v305 = v29 + 4;
              v288 = v29 + 4;
            }
          }
          ThreadLockExchangeAlways(CurrentThreadDesktopWindow, &v262);
          v63 = v62 + 2;
          v64 = (_DWORD *)*v63;
          v291 = *v63 != (_DWORD)v265;
          v286 = v291;
          if ( v64 != v261 )
          {
            if ( v64[59] != *(_DWORD *)(v8 + 236) )
              goto LABEL_109;
            if ( IsInsideMenuLoop(v8) )
            {
              v65 = *(_DWORD **)(**(_DWORD **)(v8 + 328) + 4);
            }
            else
            {
              v66 = *(_DWORD *)(v8 + 368);
              if ( v66 )
                v65 = *(_DWORD **)(v66 + 8);
              else
                v65 = 0;
            }
            if ( v65 )
            {
              CurrentThreadDesktopWindow = v65;
              v295 = v65;
              v63 = v65 + 2;
              v291 = v65[2] != (_DWORD)v265;
              v286 = v291;
              ThreadLockExchangeAlways(v65, &v262);
            }
            if ( !v277 )
            {
              v277 = (_DWORD *)*v63;
              LockExchangeW32Thread(v277, v252);
            }
          }
          if ( !a4 && a5 == -1 )
            goto LABEL_251;
          if ( (unsigned int)a4 <= a5 )
          {
            if ( *(_DWORD *)v305 >= (unsigned int)a4 && *(_DWORD *)v305 <= a5 )
              goto LABEL_251;
            v67 = 0;
            goto LABEL_250;
          }
          if ( *(_DWORD *)v305 < a5 || *(_DWORD *)v305 > (unsigned int)a4 )
          {
            v67 = 1;
LABEL_250:
            if ( v67 )
            {
LABEL_251:
              if ( CheckPwndFilter(CurrentThreadDesktopWindow, a3) )
              {
                if ( v291 )
                  goto LABEL_50;
                v68 = v306;
                if ( v306 )
                {
                  if ( (((unsigned int)&loc_3FFFD + 3) & v267[16]) != 0 )
                    goto LABEL_274;
                  if ( !IsInsideMenuLoop(v8) )
                  {
                    v69 = *(_DWORD *)v305;
                    if ( v301 == (struct tagWND *)93 && *(_DWORD *)v305 == 257 )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      _PostTransformableMessage(CurrentThreadDesktopWindow, 123, *CurrentThreadDesktopWindow, -1, 0);
                      v70 = v303;
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      v69 = *(_DWORD *)v305;
                    }
                    else
                    {
                      v70 = v303;
                    }
                    if ( v301 == (struct tagWND *)112 && v69 == 256 )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      _PostMessage(CurrentThreadDesktopWindow, 77, 0, 0);
                      v70((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    }
                  }
                }
                v71 = (unsigned __int8)v301;
                if ( v301 == (struct tagWND *)16 )
                {
                  v72 = v267[5] & 0x1000000;
                  if ( !v260 )
                  {
                    if ( ((unsigned __int8)(v72 != 0 ? 1 : 4) & *(_BYTE *)(*(_DWORD *)(v8 + 236) + 192)) != 0
                      && IsDesktopApp(*(_DWORD *)(v8 + 232))
                      && (*(_BYTE *)(v8 + 264) & 8) == 0 )
                    {
                      v267[4] = (v72 != 0) + 160;
                      goto LABEL_630;
                    }
                    v71 = (unsigned __int8)v301;
                  }
                }
                v254 = *(unsigned __int8 *)((v71 >> 2) + *(_DWORD *)(v8 + 236) + 152) & (1 << (2 * (v71 & 3)));
                v68 = v306;
                if ( v254 && v306 )
                {
                  v73 = v302;
                  if ( (unsigned int)v302 > 1 )
                    *((_DWORD *)v302 + 5) |= 0x40000000u;
                  goto LABEL_275;
                }
LABEL_274:
                v73 = v302;
LABEL_275:
                if ( v68 )
                {
                  if ( (((unsigned int)&loc_3FFFD + 3) & v267[16]) != 0
                    || (unsigned int)v73 <= 1
                    || (*(_DWORD *)(v8 + 688) & 0x10000000) == 0 )
                  {
                    xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                  }
                  else
                  {
                    v279 = xxxSkipSysMsgEx(0, (struct tagQMSG *)v219.y, (int)v223);
                  }
                }
                v299 = v267[5];
                v301 = (struct tagWND *)v267[4];
                v292 = (struct tagWND *)v267[4];
                if ( v254 )
                  v299 = v267[5] | 0x40000000;
                if ( *(_DWORD *)v305 == 257 || *(_DWORD *)v305 == 261 )
                  v299 |= 0x80000000;
                if ( (*(_BYTE *)(*(_DWORD *)(v8 + 236) + 156) & 0x10) != 0 )
                  v299 |= 0x20000000u;
                if ( IsMenuStarted(v8) )
                  v299 |= 0x10000000u;
                if ( (*(_DWORD *)(v74 + 284) & 0x4000) != 0 )
                  v299 |= 0x8000000u;
                if ( (v280.x || gpImeHotKeyListHeader) && (((unsigned int)&loc_3FFFD + 3) & v267[16]) == 0 )
                {
                  if ( !v68 )
                    goto LABEL_323;
                  if ( !IsMenuStarted(v8) && (*(_DWORD *)(v8 + 264) & 0x2000000) == 0 )
                  {
                    v75 = (int)v301;
                    if ( v301 == (struct tagWND *)231 )
                      v75 = (*(unsigned __int16 *)(v8 + 486) << 16) | 0xE7;
                    *(_DWORD *)(v8 + 696) = v267[20];
                    *(_DWORD *)(v8 + 700) = v267[21];
                    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    v76 = xxxImmProcessKey(*(_DWORD *)v305, v75, v299);
                    v275 = v76;
                    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    if ( (v76 & 0x11) != 0 )
                    {
                      if ( v279 )
                        FreeQEntry(v279);
                      v279 = 0;
                      v8 = v287;
                      goto LABEL_109;
                    }
                    v8 = v287;
                    v68 = v306;
                  }
                }
                if ( !v68 )
                  goto LABEL_323;
                v271 = 1;
                v77 = 0;
                if ( (((unsigned int)&loc_3FFFD + 3) & v267[16]) != 0 )
                  goto LABEL_321;
                v78 = *(_DWORD *)(v8 + 236);
                v79 = *(_DWORD *)(v78 + 300);
                *(_DWORD *)(v78 + 300) = v267[10];
                *(_DWORD *)(v8 + 696) = v267[20];
                *(_DWORD *)(v8 + 700) = v267[21];
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                v291 = xxxCallCtfHook(2, v275 & 2, v301, v299);
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                *(_DWORD *)(*(_DWORD *)(v8 + 236) + 300) = v79;
                v77 = v291;
                if ( !v279 )
                {
LABEL_321:
                  if ( !v77 )
                  {
                    v68 = v306;
LABEL_323:
                    if ( ((*(_BYTE *)(**(_DWORD **)(v8 + 252) + 8) | *(_BYTE *)(v8 + 372)) & 8) == 0 )
                      goto LABEL_327;
                    v271 = 1;
                    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    if ( !xxxCallHook(v299, 2u, v219.y, (int)v223) )
                    {
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_327:
                      if ( v271 && v68 && ((*(_BYTE *)(**(_DWORD **)(v8 + 252) + 8) | *(_BYTE *)(v8 + 372)) & 0x40) != 0 )
                      {
                        v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                        xxxCallHook(v299, 5u, v219.y, (int)v223);
                        goto LABEL_331;
                      }
                      goto LABEL_142;
                    }
LABEL_325:
                    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  }
LABEL_109:
                  v36 = v306;
LABEL_110:
                  xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                  if ( v282 )
                  {
                    if ( ((*(_BYTE *)(v8 + 372) | *(_BYTE *)(**(_DWORD **)(v8 + 252) + 8)) & 0x40) != 0 )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      xxxCallHook((int)v259, 5u, v219.y, (int)v223);
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    }
                    v282 = 0;
                  }
                  if ( v271 )
                  {
                    if ( ((*(_BYTE *)(v8 + 372) | *(_BYTE *)(**(_DWORD **)(v8 + 252) + 8)) & 0x40) != 0 )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      xxxCallHook(v299, 5u, v219.y, (int)v223);
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    }
                    v271 = 0;
                  }
                  if ( v36 )
                    goto LABEL_16;
                }
                else
                {
                  if ( v291 != 2 && v291 != 3
                    || (*(_DWORD *)(v8 + 688) & 0x20000000) != 0
                    || !AllocQEntryEx((struct tagMLIST *)1, (struct tagQMSG *)v219.y, (bool)v223) )
                  {
                    FreeQEntry(v279);
                    v279 = 0;
                    goto LABEL_321;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    && LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
                  {
                    LOBYTE(v80) = 5;
                    WPP_RECORDER_SF_qqq(
                      0,
                      v80,
                      0x12u,
                      31,
                      (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 12),
                      *(_DWORD *)(v8 + 236),
                      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44));
                  }
                  *(_DWORD *)(*(_DWORD *)(v8 + 236) + 44) = *(_DWORD *)(*(_DWORD *)(v8 + 236) + 12);
                  if ( v77 == 2 )
                  {
                    v283 = 1;
                  }
                  else if ( v77 == 3 )
                  {
                    v283 = 2;
                  }
                  DeferSysPeekMsg(v8, v283);
                  v279 = 0;
                }
              }
            }
          }
        }
        else
        {
          switch ( v267[3] )
          {
            case 0x101:
              goto LABEL_200;
            case 0x23:
              v299 = v267[5];
              if ( !CurrentThreadDesktopWindow
                || (v16 = (struct tagQMSG *)CurrentThreadDesktopWindow[2], v16 == (struct tagQMSG *)v8) )
              {
                v42 = v302;
                if ( MiPCheckMsgFilter(v302, 35, a4, a5) )
                {
                  if ( v306 )
                    xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                  goto LABEL_143;
                }
                goto LABEL_50;
              }
              if ( *((_DWORD *)v16 + 59) == *(_DWORD *)(v8 + 236) )
              {
                if ( !v276 )
                {
                  v276 = CurrentThreadDesktopWindow[2];
                  v45 = v253;
                  goto LABEL_157;
                }
LABEL_50:
                v21 = v304;
                *(_DWORD *)(*(_DWORD *)(v8 + 236) + 40) = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v18) = 4;
                  WPP_RECORDER_SF_qqq(
                    (int)v16,
                    v18,
                    0x12u,
                    32,
                    (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                    *(_DWORD *)(v8 + 236),
                    v8,
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 36));
                }
                *(_DWORD *)(*(_DWORD *)(v8 + 236) + 36) = 0;
                **(_DWORD **)(v8 + 244) &= ~1u;
                if ( v277 || v276 || v274 || v272 || v268 )
                {
                  v21((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  if ( v274 )
                    v213 = v274 + 216;
                  else
                    v213 = gObjDummyLock;
                  if ( v268 )
                    v214 = (char *)v268 + 216;
                  else
                    v214 = (char *)gObjDummyLock;
                  if ( v272 )
                    v215 = v272 + 216;
                  else
                    v215 = gObjDummyLock;
                  if ( v276 )
                    v216 = v276 + 216;
                  else
                    v216 = gObjDummyLock;
                  if ( v277 )
                    v217 = v277 + 54;
                  else
                    v217 = (_DWORD *)gObjDummyLock;
                  CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>(
                    gpsiLock,
                    v8 + 216,
                    v217,
                    v216,
                    v215,
                    v214,
                    v213);
                  if ( v277 )
                  {
                    SetWakeBit(v277, 16385);
                    ClearWakeBit(0, v219.y, (int)v223);
                  }
                  if ( v276 )
                  {
                    SetWakeBit(v276, 16390);
                    ClearWakeBit(0, v219.y, (int)v223);
                  }
                  if ( v272 )
                  {
                    SetWakeBit(v272, 17408);
                    ClearWakeBit(0, v219.y, (int)v223);
                  }
                  if ( v268 )
                  {
                    SetWakeBit(v268, 20480);
                    ClearWakeBit(0, v219.y, (int)v223);
                  }
                  if ( v274 )
                  {
                    SetWakeBit(v274, 8256);
                    ClearWakeBit(0, v219.y, (int)v223);
                  }
                  else
                  {
                    CurrentThread = KeGetCurrentThread();
                    if ( *(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 28) )
                    {
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      *(_WORD *)(*(_DWORD *)(v8 + 244) + 8) |= *(_WORD *)(*(_DWORD *)(v8 + 244) + 6) & 0x5C07;
                      ClearWakeBit(0, v219.y, (int)v223);
                      *(_WORD *)(*(_DWORD *)(v8 + 244) + 4) &= 0xA3F8u;
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    }
                  }
                  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                }
                else
                {
                  *(_WORD *)(*(_DWORD *)(v8 + 244) + 8) = 0;
                  ClearWakeBit((struct tagTHREADINFO *)1, v219.y, (int)v223);
                }
                PopAndFreeW32ThreadLock(v251);
                PopAndFreeW32ThreadLock(v250);
                PopAndFreeW32ThreadLock(v249);
                PopAndFreeW32ThreadLock(v253);
                PopAndFreeW32ThreadLock(v252);
                ThreadUnlock1();
                CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                return 0;
              }
              goto LABEL_109;
            case 0xFE:
              goto LABEL_343;
          }
          if ( v267[3] != 255 )
          {
            if ( v267[3] != 256 )
              goto LABEL_97;
LABEL_167:
            v260 = 1;
            if ( (*(_DWORD *)(v8 + 264) & 0x400) != 0 && CheckProcessForeground((struct tagTHREADINFO *)v219.y) < 0 )
              goto LABEL_50;
            v46 = LOBYTE(v267[4]);
            if ( !v306 || (((unsigned int)&loc_3FFFD + 3) & v267[16]) == 0 )
            {
              if ( LOBYTE(v267[4]) != 18 )
                *(_DWORD *)(*(_DWORD *)(v8 + 236) + 284) &= 0xFFFFFFF3;
              v47 = *(_DWORD *)(v8 + 236);
              v48 = *(_BYTE *)(v47 + 156);
              v49 = v48 & 0x10;
              if ( v46 == 44 )
              {
                if ( (*(_BYTE *)(v47 + 156) & 0x10) == 0 )
                  goto LABEL_177;
                if ( (*(_BYTE *)(v8 + 488) & 0x10) == 0 )
                  goto LABEL_178;
                if ( (*(_BYTE *)(v47 + 156) & 0x10) == 0 )
                {
LABEL_177:
                  if ( (*(_BYTE *)(v8 + 488) & 0x20) == 0 )
                  {
LABEL_178:
                    xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                    if ( v49 || (v267[5] & 0xFF0000) == 0x10000 )
                    {
                      CompositeAppFrameWindowOrSelf = *(struct tagWND **)(*(_DWORD *)(v8 + 236) + 64);
                      if ( CompositeAppFrameWindowOrSelf )
                      {
                        v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                        CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v219.y);
                        v51 = v303;
                        v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                        goto LABEL_182;
                      }
                    }
                    else
                    {
                      CompositeAppFrameWindowOrSelf = *(struct tagWND **)(*(_DWORD *)(*(_DWORD *)(v8 + 248) + 4) + 12);
                    }
                    v51 = v303;
LABEL_182:
                    if ( CompositeAppFrameWindowOrSelf )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      v52 = v267[21] != 1;
                      v256 = *(_DWORD *)(v287 + 228);
                      *(_DWORD *)(v287 + 228) = &v256;
                      v257 = CompositeAppFrameWindowOrSelf;
                      HMLockObject(CompositeAppFrameWindowOrSelf);
                      xxxSnapWindow(CompositeAppFrameWindowOrSelf, v52);
                      ThreadUnlock1();
                      v51((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      v8 = v287;
                    }
                    goto LABEL_16;
                  }
                }
              }
              if ( gcHotKey && (!_gfEnableHexNumpad || (_gfInNumpadHexInput & 2) == 0) )
              {
                v53 = v46;
                if ( (v48 & 0x10) != 0 )
                  v53 = v46 | 0x400;
                if ( (v48 & 4) != 0 )
                  v53 |= 0x200u;
                if ( (v48 & 1) != 0 )
                  v53 |= 0x100u;
                v54 = HotKeyToWindow(v53);
                v55 = (_DWORD *)v54;
                if ( v54 )
                {
                  if ( *(_DWORD *)(v8 + 248) == *(_DWORD *)(*(_DWORD *)(v54 + 8) + 248) )
                  {
                    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    _PostTransformableMessage(*(_DWORD *)(*(_DWORD *)(v8 + 236) + 64), 274, 61776, *v55, 0);
                    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_630:
                    xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                    goto LABEL_16;
                  }
                }
              }
            }
            if ( v46 == 231 )
            {
              *(_WORD *)(v8 + 486) = HIWORD(v267[4]);
              v267[4] = 231;
            }
            goto LABEL_200;
          }
          v301 = (struct tagWND *)v267[4];
          v292 = (struct tagWND *)v267[4];
          v299 = v267[5];
          v297 = 0;
          v295 = 0;
          v33 = 0;
          if ( v267[5] )
          {
            LOBYTE(v33) = 18;
            v34 = HMValidateHandle(v267[5], v33);
            v33 = 0;
            if ( v34 )
            {
              v297 = *(_DWORD *)(v34 + 12);
              v295 = (_DWORD *)v297;
              v33 = v297;
              v20 = v297;
            }
          }
          if ( v33 )
          {
            CurrentThreadDesktopWindow = (_DWORD *)v297;
          }
          else
          {
            v35 = *(_DWORD *)(v8 + 236);
            CurrentThreadDesktopWindow = *(_DWORD **)(v35 + 60);
            v295 = CurrentThreadDesktopWindow;
            v20 = (unsigned int)CurrentThreadDesktopWindow;
            if ( !CurrentThreadDesktopWindow )
            {
              CurrentThreadDesktopWindow = *(_DWORD **)(v35 + 64);
              v295 = CurrentThreadDesktopWindow;
              v20 = (unsigned int)CurrentThreadDesktopWindow;
              if ( !CurrentThreadDesktopWindow )
                goto LABEL_109;
            }
          }
          ThreadLockExchangeAlways(CurrentThreadDesktopWindow, &v262);
          if ( CheckCrossThreadInput(
                 (struct tagWND *const)&v286,
                 (struct tagQMSG *)&v296,
                 a8,
                 (int *)v219.y,
                 (struct tagQMSG **)v223) )
          {
            goto LABEL_50;
          }
          v291 = v286;
          if ( v286 )
          {
            v37 = v20 + 8;
            if ( *(_DWORD *)(*(_DWORD *)v37 + 236) != *(_DWORD *)(v8 + 236) )
              goto LABEL_495;
            if ( IsInsideMenuLoop(v8) )
            {
              v38 = *(_DWORD **)(**(_DWORD **)(v8 + 328) + 4);
            }
            else
            {
              v39 = *(_DWORD *)(v8 + 368);
              if ( v39 )
                v38 = *(_DWORD **)(v39 + 8);
              else
                v38 = 0;
            }
            if ( v38 )
            {
              CurrentThreadDesktopWindow = v38;
              v295 = v38;
              v37 = (unsigned int)(v38 + 2);
              v291 = v38[2] != (_DWORD)v265;
              v286 = v291;
              ThreadLockExchangeAlways(v38, &v262);
            }
            if ( !v272 )
            {
              v272 = *(_DWORD *)v37;
              LockExchangeW32Thread(v272, v250);
            }
          }
          if ( !a4 && a5 == -1 )
            goto LABEL_137;
          if ( (unsigned int)a4 <= a5 )
          {
            if ( *(_DWORD *)v305 < (unsigned int)a4 || *(_DWORD *)v305 > a5 )
            {
              v40 = 0;
              goto LABEL_136;
            }
LABEL_137:
            if ( !CheckPwndFilter(CurrentThreadDesktopWindow, a3) )
              goto LABEL_564;
            if ( v291 )
              goto LABEL_50;
            v41 = v296 == 0;
LABEL_140:
            if ( !v41 )
              xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
            goto LABEL_142;
          }
          if ( *(_DWORD *)v305 < a5 || *(_DWORD *)v305 > (unsigned int)a4 )
          {
            v40 = 1;
LABEL_136:
            if ( !v40 )
              goto LABEL_564;
            goto LABEL_137;
          }
LABEL_564:
          v306 = v296;
        }
      }
      if ( v267[3] <= 0x247u )
        break;
      v101 = *(_DWORD *)v305;
      if ( *(_DWORD *)v305 < 0x249u )
        goto LABEL_97;
      if ( *(_DWORD *)v305 > 0x24Au )
      {
        if ( *(_DWORD *)v305 <= 0x250u )
          goto LABEL_97;
        if ( *(_DWORD *)v305 > 0x253u )
        {
          if ( (unsigned int)(*(_DWORD *)v305 - 744) <= 0xD )
          {
            v16 = a4;
            if ( a4 || a5 != -1 )
            {
              if ( (unsigned int)a4 <= a5 )
              {
                if ( *(_DWORD *)v305 < (unsigned int)a4 || *(_DWORD *)v305 > a5 )
                {
                  v102 = 0;
                  goto LABEL_431;
                }
              }
              else
              {
                if ( *(_DWORD *)v305 >= a5 && *(_DWORD *)v305 <= (unsigned int)a4 )
                  goto LABEL_50;
                v102 = 1;
LABEL_431:
                if ( !v102 )
                  goto LABEL_50;
              }
            }
            if ( !IsInsideMenuLoop(v8) )
            {
              if ( v306 )
                xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
              if ( !CurrentThreadDesktopWindow )
              {
                CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(v8 + 236) + 60);
                v295 = CurrentThreadDesktopWindow;
              }
              v301 = (struct tagWND *)v267[4];
              v292 = (struct tagWND *)v267[4];
              v299 = v267[5];
              v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                                 (unsigned __int16)v301,
                                                 (unsigned int)v301 >> 16);
              v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              v104 = InteractiveControlInputMessage - 1;
              if ( !v104 )
                goto LABEL_142;
              if ( v104 == 1 )
                goto LABEL_50;
            }
            goto LABEL_109;
          }
LABEL_97:
          v289 = (struct tagDESKTOP *)SLOWORD(v267[5]);
          v290 = SHIWORD(v267[5]);
          v293 = (struct tagWND *)1;
          if ( (v267[16] & 0x20) == 0
            || !CurrentThreadDesktopWindow
            || (v30 = *(_DWORD *)(CurrentThreadDesktopWindow[5] + 184),
                v31 = *(_DWORD *)(*(_DWORD *)(CurrentThreadDesktopWindow[2] + 232) + 156),
                (((v31 >> 8) ^ (v30 >> 8)) & 0x1FF) != 0)
            || ((v30 & 0xF) != 2 || (v30 & 0x20000000) == 0 ? (v32 = 0) : (v32 = 1),
                (v31 & 0xF) != 2 || (v31 & 0x20000000) == 0 ? (v105 = 0) : (v105 = 1),
                v32 != v105) )
          {
            v106 = v304;
            v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
            v278 = CurrentThreadDesktopWindow && IsCompositionInputWindowForHitTest(CurrentThreadDesktopWindow);
            v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
            v107 = *(_DWORD **)(*(_DWORD *)(v8 + 236) + 56);
            if ( v107 )
            {
              CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(v8 + 236) + 56);
              v297 = (unsigned int)CurrentThreadDesktopWindow;
              v295 = v107;
              InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)v219.y, (HWND)v223);
              if ( v278 )
              {
                v106((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                v117 = IsCompositionInputWindowForHitTest(CurrentThreadDesktopWindow);
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( !v117 )
                {
                  v267[16] &= ~0x2000u;
                  if ( v302 )
                  {
                    if ( IsMiPActive(v8) )
                      *(_DWORD *)(v118 + 64) &= ~0x2000u;
                  }
                }
              }
            }
            else
            {
              if ( !v278 )
              {
                CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(_gptiRit + 248) + 4) + 12);
                v256 = *(_DWORD *)(v8 + 228);
                *(_DWORD *)(v8 + 228) = &v256;
                v257 = (struct tagWND *)CurrentThreadDesktopWindow;
                if ( CurrentThreadDesktopWindow )
                  HMLockObject(CurrentThreadDesktopWindow);
              }
              if ( IsThreadDesktopComposed((_DWORD *)v8) )
              {
                v239[0] = v267[3];
                v239[1] = v267[4];
                v240 = v267[5];
                v241 = &v293;
                v242 = 8 * v278 + 1;
                v243 = 0;
                v244 = &v267[13];
                v245 = 0;
                v246 = 0;
                v106((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                v108 = xxxDCEWindowHitTestIndirect(
                         (int)CurrentThreadDesktopWindow,
                         (int)v239,
                         (struct tagWND *)v267[11],
                         v267[12]);
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( v108 && v245 )
                {
                  v267[5] = v240;
                  v109 = (__int16)v240;
                  v267[7] = (__int16)v240;
                  v267[8] = SHIWORD(v240);
                  v289 = (struct tagDESKTOP *)(__int16)v240;
                  v290 = SHIWORD(v240);
                }
              }
              else
              {
                v106((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                v108 = (HWND)xxxWindowHitTest((ULONG_PTR)CurrentThreadDesktopWindow, 8 * v278 + 1, v289, v290);
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              }
              LOBYTE(v109) = 1;
              v110 = (const struct tagQMSG *)HMValidateHandleNoSecure(v108, v109);
              InputTraceLogging::Mouse::SecondaryHitTest(v110, (const struct tagPOINT *)v219.y, v223);
              if ( !v278 )
                ThreadUnlock1();
              LOBYTE(v111) = 1;
              CurrentThreadDesktopWindow = (_DWORD *)HMValidateHandleNoSecure(v108, v111);
              v297 = (unsigned int)CurrentThreadDesktopWindow;
              v295 = CurrentThreadDesktopWindow;
              if ( !CurrentThreadDesktopWindow )
              {
                CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v8 + 248) + 4) + 12);
                v297 = (unsigned int)CurrentThreadDesktopWindow;
                v295 = CurrentThreadDesktopWindow;
                if ( !CurrentThreadDesktopWindow )
                {
                  CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(_gptiRit + 248) + 4) + 12);
                  v297 = (unsigned int)CurrentThreadDesktopWindow;
                  v295 = CurrentThreadDesktopWindow;
                }
              }
              v112 = 0;
              if ( IsMiPActive(v8) )
              {
                v113 = *(_DWORD *)(*(_DWORD *)(v8 + 236) + 324);
                if ( v113 )
                {
                  v114 = ValidateHwnd(v113);
                  if ( v114 )
                  {
                    v115 = *(_DWORD *)(v114 + 8);
                    v116 = *(_DWORD *)(v8 + 236);
                    if ( *(_DWORD *)(v115 + 236) == v116 || *(_DWORD *)(v115 + 232) == *(_DWORD *)(v8 + 232) )
                    {
                      CurrentThreadDesktopWindow = (_DWORD *)v114;
                      v297 = v114;
                      v295 = (_DWORD *)v114;
                      v293 = (struct tagWND *)1;
                      *(_DWORD *)(v116 + 80) = 0;
                      v112 = 1;
                    }
                  }
                }
              }
              if ( !v112 )
                *(_DWORD *)(v269[59] + 80) = v293 != (struct tagWND *)1;
            }
            if ( CurrentThreadDesktopWindow == *(_DWORD **)(*(_DWORD *)(v8 + 236) + 56) )
            {
              v119 = *(_DWORD *)(CurrentThreadDesktopWindow[2] + 236);
              v120 = PtiMouseFromQ(v119, *(_DWORD *)(CurrentThreadDesktopWindow[5] + 184));
              if ( (((HIDWORD(v120) >> 8) ^ (*(_DWORD *)(*(_DWORD *)(v120 + 232) + 156) >> 8)) & 0x1FF) != 0
                || ((BYTE4(v120) & 0xF) != 2 || (v120 & 0x2000000000000000LL) == 0 ? (v121 = 0) : (v121 = 1),
                    (v122 = PtiMouseFromQ(v119, v121), (*(_DWORD *)(*(_DWORD *)(v122 + 232) + 156) & 0xF) != 2)
                 || (v122 = PtiMouseFromQ(v123, HIDWORD(v122)),
                     (*(_DWORD *)(*(_DWORD *)(v122 + 232) + 156) & 0x20000000) == 0)
                  ? (LODWORD(v122) = 0)
                  : (LODWORD(v122) = 1),
                    HIDWORD(v122) != (_DWORD)v122 || IsOleDragDropCaptureWindow((struct tagWND *)v219.y)) )
              {
                v289 = (struct tagDESKTOP *)v267[11];
                v290 = v267[12];
                PhysicalToLogicalInPlacePointWithParent(CurrentThreadDesktopWindow, &v289, &v267[13]);
                v299 = (unsigned __int16)v289 | ((unsigned __int16)v290 << 16);
                v267[7] = v289;
                v267[8] = v290;
              }
            }
          }
          ThreadLockExchange(CurrentThreadDesktopWindow, &v262);
          if ( CheckCrossThreadInput(
                 (struct tagWND *const)&v286,
                 (struct tagQMSG *)&v296,
                 a8,
                 (int *)v219.y,
                 (struct tagQMSG **)v223) )
          {
            goto LABEL_50;
          }
          v124 = (struct tagQMSG *)v286;
          v306 = (struct tagQMSG *)v286;
          if ( v286 )
          {
            v125 = CurrentThreadDesktopWindow[2];
            if ( *(_DWORD *)(v125 + 236) != *(_DWORD *)(v8 + 236) )
            {
              v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              zzzSetCursor((struct tagCURSOR *)v219.y);
              v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_495:
              v36 = v296;
              v306 = v296;
              goto LABEL_110;
            }
            if ( !v276 )
            {
              v276 = CurrentThreadDesktopWindow[2];
              LockExchangeW32Thread(v125, v253);
            }
LABEL_498:
            v124 = v306;
          }
          else if ( (v267[16] & 0x1000) != 0 )
          {
            if ( !(unsigned __int8)CheckAccess(&v267[18], *(_DWORD *)(CurrentThreadDesktopWindow[2] + 232) + 496) )
            {
              EtwTraceUIPIMsgError(
                0,
                *(_DWORD *)(CurrentThreadDesktopWindow[2] + 232),
                *(_DWORD *)v305,
                v267[4],
                v267[5]);
              v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              zzzSetCursor((struct tagCURSOR *)v219.y);
              v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              goto LABEL_507;
            }
            goto LABEL_498;
          }
          v126 = v289;
          v273 = v289;
          v127 = v290;
          v280.x = v290;
          v128 = *(_DWORD *)(*(_DWORD *)(CurrentThreadDesktopWindow[2] + 236) + 80);
          if ( v128 && (v129 = v128 - 2) != 0 )
          {
            if ( v129 == 1 )
            {
              v130 = CurrentThreadDesktopWindow[5];
              if ( (*(_BYTE *)(v130 + 18) & 0x40) != 0 )
                v126 = (struct tagDESKTOP *)(*(_DWORD *)(v130 + 60) - (_DWORD)v289);
              else
                v126 = (struct tagDESKTOP *)((char *)v289 - *(_DWORD *)(v130 + 52));
              v289 = v126;
              v131 = *(_DWORD *)(CurrentThreadDesktopWindow[5] + 56);
              goto LABEL_514;
            }
          }
          else
          {
            v132 = CurrentThreadDesktopWindow[5];
            if ( (*(_BYTE *)(v132 + 18) & 0x40) != 0 )
              v126 = (struct tagDESKTOP *)(*(_DWORD *)(v132 + 76) - (_DWORD)v289);
            else
              v126 = (struct tagDESKTOP *)((char *)v289 - *(_DWORD *)(v132 + 68));
            v289 = v126;
            v131 = *(_DWORD *)(CurrentThreadDesktopWindow[5] + 72);
LABEL_514:
            v127 = v290 - v131;
            v290 -= v131;
          }
          if ( !v124 && *(_DWORD *)(v8 + 236) == _gpqCursor )
          {
            v291 = *(_DWORD *)(*(_DWORD *)(v8 + 248) + 100) != (_DWORD)CurrentThreadDesktopWindow;
            NCHit = FindNCHitEx(CurrentThreadDesktopWindow, v293, v126, v127);
            v280.y = NCHit;
            v134 = *(_DWORD *)v305;
            v135 = v291;
            if ( *(_DWORD *)v305 != 512 || v291 || *(_DWORD *)(*(_DWORD *)(v8 + 248) + 104) != NCHit )
            {
              v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              xxxTrackMouseMove((struct tagWND *)CurrentThreadDesktopWindow, v280.y, *(int *)v305);
              v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              v134 = *(_DWORD *)v305;
            }
            if ( !v135 )
            {
              v136 = *(_DWORD *)(v8 + 248);
              if ( (*(_BYTE *)(v136 + 24) & 0x40) != 0 )
              {
                v137 = v273;
                if ( v134 != 512 || !PtInRect((_DWORD *)(v136 + 108), (int)v273, v280.x) )
                {
                  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  v219.x = v280.x;
                  ResetMouseHover(v137, v219);
                  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                }
              }
            }
          }
          if ( CheckPwndFilter(CurrentThreadDesktopWindow, a3) )
          {
            v291 = 0;
            v138 = *(_DWORD *)v305;
            switch ( *(_DWORD *)v305 )
            {
              case 0x201:
                v41 = (unsigned __int8)IsMessageInputSourceTouch(v267) == 0;
                v139 = *(_DWORD *)(v8 + 236);
                if ( v41 )
                  *(_DWORD *)(v139 + 284) &= ~0x800000u;
                else
                  *(_DWORD *)(v139 + 284) |= 0x800000u;
                v140 = IsMessageInputSourcePen(v267);
                v141 = v269[59];
                v142 = *(_DWORD *)(v141 + 284);
                if ( v140 )
                  v143 = v142 | 0x1000000;
                else
                  v143 = v142 & 0xFEFFFFFF;
                *(_DWORD *)(v141 + 284) = v143;
                goto LABEL_535;
              case 0x202:
              case 0x205:
              case 0x208:
              case 0x20C:
                goto LABEL_546;
              case 0x204:
              case 0x207:
              case 0x20B:
LABEL_535:
                if ( (*(_BYTE *)(*(_DWORD *)(CurrentThreadDesktopWindow[19] + 4) + 8) & 8) != 0
                  || *(_DWORD *)(*(_DWORD *)(v8 + 236) + 80) == 1
                  || IsMenuStarted(v8) )
                {
                  v291 = 1;
                  v144 = *(_DWORD *)(v8 + 236);
                  v280.y = v144;
                  if ( v267[6] <= *(_DWORD *)(v144 + 92)
                    && !_gbClientDoubleClickSupport
                    && *CurrentThreadDesktopWindow == *(_DWORD *)(v144 + 96)
                    && v138 == *(_DWORD *)(v144 + 84)
                    && (v138 != 523 || HIWORD(v267[4]) == *(_WORD *)(v144 + 88)) )
                  {
                    v145 = *(_DWORD *)(_gpsi + 1640) / 2;
                    v146 = *(_DWORD *)(v144 + 100);
                    v238[0] = v146 - v145;
                    v147 = *(_DWORD *)(_gpsi + 1644);
                    v148 = *(_DWORD *)(v280.y + 104);
                    v238[1] = v148 - v147 / 2;
                    v238[2] = v146 + v145;
                    v238[3] = v148 + v147 / 2;
                    v149 = PtInRect(v238, v267[7], v267[8]);
                    v138 = *(_DWORD *)v305;
                    v8 = v287;
                    CurrentThreadDesktopWindow = (_DWORD *)v297;
                    if ( v149 )
                    {
                      v138 = *(_DWORD *)v305 + 2;
                      *(_DWORD *)v305 = v138;
                      v288 = v138;
                      v291 = 2;
                    }
                  }
                }
LABEL_546:
                v150 = *(_DWORD *)(v8 + 236);
                v151 = *(_DWORD *)(v150 + 284);
                if ( (v151 & 8) != 0 )
                  *(_DWORD *)(v150 + 284) = v151 | 4;
                if ( v138 != 514 && v138 != 517 && v138 != 520 && v138 != 524
                  || !*(_DWORD *)(*(_DWORD *)(v8 + 236) + 92) )
                {
                  goto LABEL_558;
                }
                if ( v267[20] == 4 )
                {
                  TouchDoubleClickTime = GetTouchDoubleClickTime();
                }
                else
                {
                  if ( v267[20] != 8 )
                    goto LABEL_558;
                  TouchDoubleClickTime = GetPenDoubleClickTime();
                }
                *(_DWORD *)(*(_DWORD *)(v8 + 236) + 92) = v267[27] + TouchDoubleClickTime;
LABEL_558:
                if ( *(_DWORD *)(*(_DWORD *)(CurrentThreadDesktopWindow[2] + 236) + 80) == 1 )
                {
                  v138 -= 352;
                  *(_DWORD *)v305 = v138;
                  v288 = v138;
                  v301 = v293;
                  v292 = v293;
                }
                if ( !MiPCheckMsgFilter(v302, v138, a4, a5) )
                  goto LABEL_564;
                if ( v306 )
                  goto LABEL_50;
                if ( (unsigned int)(v138 - 512) <= 0xE && (*(_DWORD *)(v8 + 264) & 0x8000) != 0 )
                  goto LABEL_564;
                v153 = *(_DWORD *)(v8 + 264);
                if ( (v153 & 0x100000) != 0 )
                {
                  *(_DWORD *)(v8 + 264) = v153 & 0xFFEFFFFF;
                  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  xxxWindowEvent(32779, 0, -9, 0, 1);
                  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                }
                v259[0] = v267[7];
                v259[1] = v267[8];
                v259[2] = *CurrentThreadDesktopWindow;
                v259[3] = (int)v293;
                v259[4] = v267[10];
                v259[5] = v267[4];
                v306 = v296;
                if ( !v296 || v138 == 512 || v138 == 160 )
                  goto LABEL_572;
                v282 = 1;
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( xxxCallCtfHook(7, 0, v138, v259) )
                  goto LABEL_325;
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_572:
                if ( ((*(_DWORD *)(**(_DWORD **)(v8 + 252) + 8) | *(_DWORD *)(v8 + 372)) & 0x100) == 0 )
                  goto LABEL_575;
                v282 = 1;
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( xxxCallMouseHook(v138, (int)v259, (int)v306) )
                  goto LABEL_325;
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_575:
                if ( PsGetWin32KFilterSet() != 5 )
                  goto LABEL_579;
                v154 = KeGetCurrentThread();
                v155 = *(_DWORD *)(W32GetThreadWin32Thread(v154) + 260);
                v284 = 0;
                ms_exc.registration.TryLevel = 2;
                v284 = *(_DWORD *)(v155 + 168) != 0;
                ms_exc.registration.TryLevel = -2;
                v18 = (int)v304;
                if ( !v284 )
                  goto LABEL_579;
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( xxxClientCallLocalMouseHooks(v306) )
                  goto LABEL_325;
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_579:
                if ( (*(_DWORD *)(v8 + 688) & 0x2000) == 0 && (v293 == (struct tagWND *)-2 || !v293) )
                {
                  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  v156 = 0;
                  if ( v278 )
                  {
                    CompositionInputWindowUIOwner = (struct tagWND *)CurrentThreadDesktopWindow;
                    if ( IsIndependentInputWindow((const struct tagWND *)v219.y) )
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v219.y);
                    TopLevelWindow = (_DWORD *)_GetTopLevelWindow((int)CompositionInputWindowUIOwner);
                    v159 = TopLevelWindow;
                    if ( !TopLevelWindow )
                      goto LABEL_598;
                    v294 = 0;
                    if ( CoreWindowProp::IsComponent(TopLevelWindow)
                      && *(_DWORD *)v305 == 161
                      && *(_DWORD *)(v159[2] + 236) == _gpqForeground )
                    {
                      v294 = 1;
                    }
                    v160 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v219.y);
                    v156 = (unsigned int *)v160;
                    if ( v294 )
                    {
                      v161 = *((_DWORD *)v160 + 2);
                      if ( *(_DWORD *)(v161 + 236) != _gpqForeground )
                        *(_DWORD *)(v161 + 264) |= 0x20u;
                    }
                    v256 = *(_DWORD *)(v8 + 228);
                    *(_DWORD *)(v8 + 228) = &v256;
                    v257 = v160;
                    if ( v160 )
                    {
                      HMLockObject(v160);
                      v162 = *v156;
                    }
                    else
                    {
                      v162 = 0;
                    }
                    xxxSendMessage(v162, (unsigned __int16)v293 | (LOWORD(v267[3]) << 16));
                    ThreadUnlock1();
                  }
                  if ( v156 )
                  {
LABEL_599:
                    v163 = v302;
                    if ( *(struct tagQMSG **)(*(_DWORD *)(v8 + 236) + 44) == v302
                      && v302
                      && IsMiPActive(v8)
                      && (*((_DWORD *)v163 + 16) & 0x800) != 0
                      && IsGenuineMouseInput((char *)v163 + 80)
                      && IsMiPMouseMessage(*((_DWORD *)v163 + 3)) )
                    {
                      memset(&v227[22], 0, 0x78u);
                      GeneratePointerMessageFromMouse(
                        v163,
                        (unsigned int)CurrentThreadDesktopWindow,
                        v306,
                        (struct tagWND *)v219.y,
                        (int)v223);
                      SetMiPPromotion(CurrentThreadDesktopWindow[2], v227[25]);
                    }
                    goto LABEL_325;
                  }
LABEL_598:
                  xxxSendMessage(*CurrentThreadDesktopWindow, (unsigned __int16)v293 | (LOWORD(v267[3]) << 16));
                  goto LABEL_599;
                }
                v16 = v302;
                if ( *(struct tagQMSG **)(*(_DWORD *)(v8 + 236) + 44) != v302 )
                  goto LABEL_50;
                memset(v227, 0, 0x58u);
                qmemcpy(v229, v227, sizeof(v229));
                v273 = 0;
                qmemcpy(v230, v267, sizeof(v230));
                v164 = v302;
                if ( !v302 || !IsMiPActive(v8) )
                {
                  v166 = v306;
                  goto LABEL_635;
                }
                v230[3] = *(_DWORD *)v305;
                v230[4] = v301;
                if ( (*((_DWORD *)v164 + 16) & 0x800) != 0 )
                {
                  memset(v231, 0, sizeof(v231));
                  v165 = *(_BYTE **)(v8 + 720);
                  if ( v165 && (*v165 & 1) != 0 )
                  {
                    qmemcpy(v229, v165 + 16, sizeof(v229));
                    v273 = (struct tagDESKTOP *)1;
                  }
                  v166 = v306;
                  v167 = (_DWORD *)v297;
                  if ( GeneratePointerMessageFromMouse(v302, v297, v306, (struct tagWND *)v219.y, (int)v223) )
                  {
                    qmemcpy(v267, v231, 0x78u);
                    v300 = (struct tagTHREADINFO *)1;
                    v167 = (_DWORD *)v297;
                    if ( v231[3] == 582 && IsMiPEnabledForWindow(v297) )
                    {
                      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 324) = *v167;
                    }
                    else if ( v231[3] == 583 || v231[3] == 579 )
                    {
                      *(_DWORD *)(*(_DWORD *)(v8 + 236) + 324) = 0;
                    }
                    v166 = v306;
                  }
                  if ( v166 || !IsMiPEnabledForWindow(v167) )
                  {
                    v164 = v302;
                    *((_DWORD *)v302 + 16) &= ~0x800u;
                    goto LABEL_635;
                  }
LABEL_634:
                  v164 = v302;
                  goto LABEL_635;
                }
                v166 = v306;
                if ( !v306 )
                  goto LABEL_665;
                if ( !IsMiPMouseMessage(*((_DWORD *)v164 + 3)) )
                  goto LABEL_634;
                if ( IsGenuineMouseInput((char *)v302 + 80) )
                {
                  v168 = *(_DWORD **)(v8 + 720);
                  if ( v168 )
                  {
                    if ( (*v168 & 6) == 0 )
                      goto LABEL_630;
                  }
                }
                v169 = *(_DWORD **)(v8 + 720);
                v164 = v302;
                if ( v169 )
                  *v169 &= ~2u;
LABEL_635:
                if ( !v166 )
                {
LABEL_665:
                  CurrentThreadDesktopWindow = (_DWORD *)v297;
                  goto LABEL_666;
                }
                if ( v230[3] == 512 || v230[3] == 160 )
                {
                  v170 = (_DWORD *)v297;
                  if ( *(_DWORD *)v297 != _gMiPTracking )
                  {
                    if ( IsGenuineMouseInput((char *)v164 + 80) )
                    {
                      LOBYTE(v171) = 1;
                      v172 = HMValidateHandleNoSecure(_gMiPTracking, v171);
                      v173 = v172;
                      v280.y = v172;
                      if ( v172
                        && IsMiPActive(*(_DWORD *)(v172 + 8))
                        && (GetMiPWindowFlags((struct tagWND *)v219.y) & 1) == 0 )
                      {
                        v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                        if ( *(_DWORD *)(v173 + 8) == v8 )
                        {
                          v174 = *(_DWORD *)(v8 + 720);
                          qmemcpy(v226, (const void *)(v174 + 16), sizeof(v226));
                          if ( v273 )
                          {
                            qmemcpy((void *)(v174 + 16), v229, 0x58u);
                            v174 = v269[180];
                          }
                          v232 = ((*(_DWORD *)(v174 + 28) & 0xFFFFE1F7) << 16) | 1;
                          v233 = 0;
                          v234 = 0;
                          v235 = 0;
                          v236 = 0;
                          v247[2] = 0;
                          v175 = KeGetCurrentThread();
                          ThreadWin32Thread = W32GetThreadWin32Thread(v175);
                          v247[0] = *(_DWORD *)(ThreadWin32Thread + 228);
                          *(_DWORD *)(ThreadWin32Thread + 228) = v247;
                          y = (void *)v280.y;
                          v247[1] = v280.y;
                          HMLockObject(v280.y);
                          _KillSystemTimer(y, 65523);
                          if ( IsMiPEnabledForWindow(y) )
                            xxxSendTransformableMessage(y, v232, 0, 0);
                          ThreadUnlock1();
                          if ( v273 )
                            qmemcpy((void *)(*(_DWORD *)(v8 + 720) + 16), v226, 0x58u);
                          v170 = (_DWORD *)v297;
                        }
                        else
                        {
                          PostEventMessage(
                            (struct tagTHREADINFO *)0x15,
                            (struct tagQ *)v173,
                            0,
                            0,
                            0,
                            v219.y,
                            (int)v223);
                        }
                        v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      }
                      if ( v300 )
                        _gMiPTracking = *v170;
                      else
                        _gMiPTracking = 0;
                    }
                  }
                }
                v178 = v300;
                CurrentThreadDesktopWindow = (_DWORD *)v297;
                if ( !v300 )
                {
                  if ( v291 == 1 )
                  {
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 84) = v267[3];
                    *(_WORD *)(*(_DWORD *)(v8 + 236) + 88) = HIWORD(v267[4]);
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 92) = v267[6] + _gdtDblClk;
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 96) = *CurrentThreadDesktopWindow;
                    v179 = *(_DWORD *)(v8 + 236);
                    *(_DWORD *)(v179 + 100) = v267[7];
                    *(_DWORD *)(v179 + 104) = v267[8];
                  }
                  else if ( v291 == 2 )
                  {
                    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 92) &= (unsigned int)v300;
                  }
                }
                v180 = (struct tagTHREADINFO *)v267;
                if ( v178 )
                  v180 = (struct tagTHREADINFO *)v230;
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                v181 = xxxMouseActivate(v180, v293, (const struct tagQMSG *)v219.y, (int)v223);
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                if ( v181 == 1 )
                  goto LABEL_109;
LABEL_666:
                if ( v306 )
                {
                  xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
                  if ( v282 )
                  {
                    if ( ((*(_BYTE *)(**(_DWORD **)(v8 + 252) + 8) | *(_BYTE *)(v8 + 372)) & 0x40) != 0 )
                    {
                      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                      xxxCallHook((int)v259, 5u, v219.y, (int)v223);
                      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                    }
                  }
                }
                v282 = 0;
                v299 = (unsigned __int16)v289 | ((unsigned __int16)v290 << 16);
                v182 = *(_DWORD *)v305;
                if ( *(_DWORD *)v305 < 0x200u )
                {
                  MouseKeyFlags = v301;
                }
                else
                {
                  MouseKeyFlags = (struct tagWND *)GetMouseKeyFlags(*(_DWORD *)(v8 + 236));
                  v301 = MouseKeyFlags;
                  v292 = MouseKeyFlags;
                  v182 = *(_DWORD *)v305;
                }
                if ( (v182 >= 0xAB && v182 <= 0xAD || v182 - 523 <= 2) && !v300 )
                {
                  v301 = (struct tagWND *)(v267[4] | (unsigned int)MouseKeyFlags);
                  v292 = (struct tagWND *)(v267[4] | (unsigned int)MouseKeyFlags);
                }
                v184 = *(_DWORD *)(v8 + 328);
                if ( v293 != (struct tagWND *)5
                  || !v306
                  || !v184
                  || (*(_DWORD *)(v184 + 4) & 0x100) == 0
                  || !*(_DWORD *)v184
                  || (**(_BYTE **)v184 & 1) == 0 )
                {
                  goto LABEL_687;
                }
                v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                  (MenuStateOwnerLockxxxUnlock *)v255,
                  (struct tagMENUSTATE *)v184);
                if ( xxxCallHandleMenuMessages(*(_DWORD *)v305, v301, v299) )
                {
                  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v255);
                  goto LABEL_16;
                }
                v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
                MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v255);
LABEL_687:
                v43 = v300;
                if ( !v300 )
                {
                  v42 = v302;
                  goto LABEL_144;
                }
                break;
              default:
                goto LABEL_558;
            }
            goto LABEL_688;
          }
          goto LABEL_564;
        }
      }
LABEL_689:
      if ( v267[20] == 2 || v267[20] == 18 || v267[20] == 34 )
      {
        v288 = v101;
        v292 = (struct tagWND *)v267[4];
        v299 = v267[5];
        v193 = v306;
LABEL_711:
        if ( v193 )
        {
          if ( !IsMiPActive(v8) || v300 == v194 )
          {
            xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
          }
          else
          {
            if ( CurrentThreadDesktopWindow )
              v195 = *CurrentThreadDesktopWindow;
            else
              v195 = 0;
            *(_DWORD *)(*(_DWORD *)(v8 + 720) + 36) = v195;
            if ( (*(_DWORD *)(*(_DWORD *)(v8 + 720) + 28) & 0x400000) != 0 )
            {
              v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              v196 = IsCompositionInputWindow((const struct tagWND *)v219.y);
              v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
              v41 = v196 == 0;
              v193 = v306;
              if ( v41 )
                *(_DWORD *)(*(_DWORD *)(v8 + 720) + 28) &= ~0x400000u;
            }
            GetMiPWindowFlags((struct tagWND *)v219.y);
            SetMiPWindowFlags(v221, (unsigned int)v223);
            if ( v267[3] == 582 )
            {
              v270 = 0;
            }
            else if ( v267[3] != 578 )
            {
              if ( v267[3] == 583 || v267[3] == 579 )
                **(_DWORD **)(v8 + 720) &= ~8u;
              goto LABEL_728;
            }
            **(_DWORD **)(v8 + 720) = v270 | **(_DWORD **)(v8 + 720) & 0xFFFFFFF7;
          }
        }
LABEL_728:
        if ( !IsPointerMessageTouchpad(v300, v219.y, (unsigned __int16)v223) )
          goto LABEL_142;
        if ( !v193 && !IsPTPAllowedOnThread((struct tagTHREADINFO *)v267[4], v219.y, (unsigned int)v223) )
          xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
        v197 = IsStatelessPointerInputMessage(v288);
        v42 = v302;
        v41 = v197 == 0;
        v43 = v300;
        if ( !v41 )
          v299 = -1;
        goto LABEL_144;
      }
      v185 = v302;
      EtwTraceBeginPointerMessageRetrieve(v302, v267[4], v101);
      v187 = xxxRetrievePointerInputMessage(
               v8,
               a3,
               a4,
               a5,
               1,
               0,
               &v296,
               v185,
               &v295,
               &v288,
               &v292,
               &v299,
               &v286,
               a8,
               v186);
      LOBYTE(v188) = 0;
      InputTraceLogging::Pointer::RetrieveMessage(v185, v188, v187);
      EtwTraceEndPointerMessageRetrieve(v185, v267[4], v267[3]);
      CurrentThreadDesktopWindow = v295;
      if ( v295 )
        ThreadLockExchange(v295, &v262);
      v189 = v187 - 1;
      if ( !v189 )
      {
        v193 = v296;
        v306 = v296;
        goto LABEL_711;
      }
      v190 = v189 - 1;
      if ( !v190 )
      {
        if ( v286 )
        {
          v268 = (struct tagQMSG *)CurrentThreadDesktopWindow[2];
          v45 = v251;
          v16 = v268;
LABEL_157:
          LockExchangeW32Thread(v16, v45);
        }
        goto LABEL_50;
      }
      v191 = v190 - 1;
      if ( !v191 )
      {
        v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
        xxxDefPointerProc(v267[4], v267[5]);
        v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
        v192 = a8;
LABEL_698:
        *v192 = 0;
        v301 = v292;
LABEL_507:
        v36 = v296;
        v306 = v296;
        goto LABEL_110;
      }
      v192 = a8;
      if ( v191 != 1 )
        goto LABEL_698;
      *a8 = 0;
      v306 = v296;
    }
    if ( v267[3] >= 0x245u )
    {
      v101 = *(_DWORD *)v305;
      goto LABEL_689;
    }
    if ( v267[3] != 522 && v267[3] != 526 )
    {
      if ( v267[3] != 568 )
      {
        if ( v267[3] != 576 )
          goto LABEL_97;
LABEL_338:
        if ( !CurrentThreadDesktopWindow )
          goto LABEL_109;
        v81 = (char *)CurrentThreadDesktopWindow[5];
        if ( v81[12] < 0 )
          goto LABEL_109;
        if ( v81[11] < 0 )
          goto LABEL_109;
        v82 = v81[23];
        if ( (v82 & 8) != 0 || (v82 & 0x10) == 0 )
          goto LABEL_109;
      }
LABEL_343:
      v301 = (struct tagWND *)v267[4];
      v292 = (struct tagWND *)v267[4];
      v299 = v267[5];
      if ( !CurrentThreadDesktopWindow )
        goto LABEL_109;
      if ( CheckCrossThreadInput(
             (struct tagWND *const)&v286,
             (struct tagQMSG *)&v296,
             a8,
             (int *)v219.y,
             (struct tagQMSG **)v223) )
      {
        goto LABEL_50;
      }
      if ( v286 )
        goto LABEL_495;
      if ( a4 || a5 != -1 )
      {
        if ( (unsigned int)a4 > a5 )
        {
          if ( *(_DWORD *)v305 >= a5 && *(_DWORD *)v305 <= (unsigned int)a4 )
            goto LABEL_564;
          v83 = 1;
          goto LABEL_355;
        }
        if ( *(_DWORD *)v305 < (unsigned int)a4 || *(_DWORD *)v305 > a5 )
        {
          v83 = 0;
LABEL_355:
          if ( !v83 )
            goto LABEL_564;
        }
      }
      if ( CheckPwndFilter(CurrentThreadDesktopWindow, a3) )
      {
        v41 = v296 == 0;
        goto LABEL_140;
      }
      goto LABEL_564;
    }
    if ( (*(_DWORD *)(v8 + 264) & 0x400) != 0 && CheckProcessForeground((struct tagTHREADINFO *)v219.y) < 0 )
      goto LABEL_50;
    if ( IsInsideMenuLoop(v8) )
      goto LABEL_109;
    if ( (v267[16] & 0x800000) != 0 )
    {
      CurrentThreadDesktopWindow = *(_DWORD **)(*(_DWORD *)(v8 + 236) + 60);
      v297 = (unsigned int)CurrentThreadDesktopWindow;
      v295 = CurrentThreadDesktopWindow;
    }
    else
    {
      v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
      if ( CurrentThreadDesktopWindow && IsCompositionInputWindowForHitTest(CurrentThreadDesktopWindow) )
      {
        v20 = 1;
        if ( CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)CurrentThreadDesktopWindow) )
          goto LABEL_325;
      }
      else
      {
        CurrentThreadDesktopWindow = (_DWORD *)GetCurrentThreadDesktopWindow();
      }
      v248[2] = 0;
      v84 = KeGetCurrentThread();
      v85 = W32GetThreadWin32Thread(v84);
      v248[0] = *(_DWORD *)(v85 + 228);
      *(_DWORD *)(v85 + 228) = v248;
      v248[1] = CurrentThreadDesktopWindow;
      if ( CurrentThreadDesktopWindow )
        HMLockObject(CurrentThreadDesktopWindow);
      v86 = xxxDCEWindowHitTest(v267[4], v267[5], &v293, 8 * v20 + 1, v267[11], v267[12]);
      LOBYTE(v87) = 1;
      CurrentThreadDesktopWindow = (_DWORD *)HMValidateHandleNoSecure(v86, v87);
      v297 = (unsigned int)CurrentThreadDesktopWindow;
      v295 = CurrentThreadDesktopWindow;
      LOBYTE(v88) = 1;
      v89 = (const struct tagQMSG *)HMValidateHandleNoSecure(v86, v88);
      InputTraceLogging::Mouse::SecondaryHitTest(v89, (const struct tagPOINT *)v219.y, v223);
      v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
      ThreadUnlock1();
    }
    if ( !CurrentThreadDesktopWindow )
      goto LABEL_109;
    ThreadLockExchangeAlways(CurrentThreadDesktopWindow, &v262);
    v90 = (_DWORD *)CurrentThreadDesktopWindow[2];
    v286 = v90 != v265;
    if ( v90 != v261 )
    {
      if ( v90[59] != *(_DWORD *)(v8 + 236) )
        goto LABEL_109;
      if ( !v277 )
      {
        v277 = v90;
        LockExchangeW32Thread(v90, v252);
      }
    }
  }
  while ( !MiPCheckMsgFilter(v302, *(_DWORD *)v305, a4, a5) || !CheckPwndFilter(CurrentThreadDesktopWindow, a3) );
  if ( v90 != v261 )
    goto LABEL_50;
  if ( !v302 || !IsMiPActive(v8) )
    goto LABEL_391;
  if ( (*(_DWORD *)(v91 + 64) & 0x800) != 0 )
  {
    memset(v228, 0, sizeof(v228));
    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
    CMultiPerObjectLockExclusive<1>::CMultiPerObjectLockExclusive<1>(CurrentThreadDesktopWindow + 7);
    HasTransform = InputTransform::HasTransform((InputTransform *)v219.y, v223);
    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
    v41 = HasTransform == 0;
    v93 = v302;
    if ( v41 )
      *((_DWORD *)v302 + 16) &= ~0x2000u;
    if ( !GeneratePointerMessageFromMouse(v93, (unsigned int)CurrentThreadDesktopWindow, v306, v220, v224) )
    {
      if ( v306 || !IsMiPEnabledForWindow(CurrentThreadDesktopWindow) )
        *((_DWORD *)v93 + 16) &= ~0x800u;
LABEL_391:
      v94 = v306;
LABEL_392:
      if ( v94 )
        xxxSkipSysMsg((struct tagTHREADINFO *)v219.y, v223);
      goto LABEL_394;
    }
    qmemcpy(v267, v228, 0x78u);
    v300 = (struct tagTHREADINFO *)1;
    CurrentThreadDesktopWindow = (_DWORD *)v297;
    if ( v306 || !IsMiPEnabledForWindow(v297) )
      *((_DWORD *)v302 + 16) &= ~0x800u;
LABEL_688:
    v101 = v267[3];
    goto LABEL_689;
  }
  v94 = v306;
  if ( v306 )
  {
    if ( IsMiPMouseMessage(*(_DWORD *)(v91 + 12)) )
    {
      if ( IsGenuineMouseInput((char *)v302 + 80) )
      {
        v97 = *(_DWORD **)(v8 + 720);
        if ( v97 )
        {
          if ( (*v97 & 6) == 0 )
            goto LABEL_630;
        }
      }
      v98 = *(_DWORD **)(v8 + 720);
      if ( v98 )
        *v98 &= ~2u;
    }
    goto LABEL_392;
  }
LABEL_394:
  v95 = GetMouseKeyFlags(*(_DWORD *)(v8 + 236));
  v301 = (struct tagWND *)(v267[4] | v95);
  v292 = (struct tagWND *)(v267[4] | v95);
  v289 = (struct tagDESKTOP *)SLOWORD(v267[5]);
  v290 = SHIWORD(v267[5]);
  PhysicalToLogicalDPIPointWithHitTest(&v289, 0, CurrentThreadDesktopWindow);
  v299 = (unsigned __int16)v289 | ((unsigned __int16)v290 << 16);
  v267[7] = v289;
  v267[8] = v290;
  v259[0] = (int)v289;
  v259[1] = v290;
  v259[2] = *CurrentThreadDesktopWindow;
  v259[3] = 0;
  v259[4] = v267[10];
  v259[5] = v267[4];
  if ( v306 )
  {
    v282 = 1;
    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
    v96 = v305[0];
    if ( xxxCallCtfHook(7, 0, *(_DWORD *)v305, v259) )
      goto LABEL_325;
    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  }
  else
  {
    v96 = v305[0];
  }
  if ( ((*(_DWORD *)(**(_DWORD **)(v8 + 252) + 8) | *(_DWORD *)(v8 + 372)) & 0x100) != 0 )
  {
    v282 = 1;
    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
    if ( xxxCallMouseHook(v96, (int)v259, (int)v306) )
      goto LABEL_325;
    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  }
  if ( PsGetWin32KFilterSet() != 5 )
    goto LABEL_413;
  v99 = KeGetCurrentThread();
  v100 = *(_DWORD *)(W32GetThreadWin32Thread(v99) + 260);
  v285 = 0;
  ms_exc.registration.TryLevel = 3;
  v285 = *(_DWORD *)(v100 + 168) != 0;
  ms_exc.registration.TryLevel = -2;
  if ( !v285 )
    goto LABEL_413;
  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  if ( xxxClientCallLocalMouseHooks(v306) )
    goto LABEL_325;
  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
LABEL_413:
  if ( v282 && v306 && ((*(_BYTE *)(**(_DWORD **)(v8 + 252) + 8) | *(_BYTE *)(v8 + 372)) & 0x40) != 0 )
  {
    v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
    xxxCallHook((int)v259, 5u, v219.y, (int)v223);
LABEL_331:
    v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  }
LABEL_142:
  v42 = v302;
LABEL_143:
  v43 = v300;
LABEL_144:
  v280.x = (LONG)v43;
  if ( *(_DWORD *)(v8 + 416) != v267[7] || *(_DWORD *)(v8 + 420) != v267[8] )
    *(_DWORD *)(v8 + 264) |= 0x100000u;
  if ( (unsigned int)v42 > 1 && (v267[16] & 0x20) != 0 )
  {
    if ( *((_DWORD *)v42 + 3) == 512 )
    {
      if ( CurrentThreadDesktopWindow )
        v44 = *CurrentThreadDesktopWindow;
      else
        v44 = 0;
      *((_DWORD *)v42 + 2) = v44;
      *((_DWORD *)v42 + 16) |= 0x400u;
    }
    *((_DWORD *)v42 + 9) = v299;
  }
  *(_DWORD *)(v8 + 416) = v267[7];
  *(_DWORD *)(v8 + 420) = v267[8];
  *(_DWORD *)(v8 + 424) = *(_DWORD *)(CurrentThreadDesktopWindow[5] + 184);
  *(_DWORD *)(v8 + 428) = v267[11];
  *(_DWORD *)(v8 + 432) = v267[12];
  *(_DWORD *)(v8 + 304) = v267[6];
  *(_DWORD *)(*(_DWORD *)(v8 + 236) + 300) = v267[10];
  *(_DWORD *)(*(_DWORD *)(v8 + 236) + 40) = 1;
  *(_DWORD *)(v8 + 308) = 1;
  *(_DWORD *)(v8 + 696) = v267[20];
  *(_DWORD *)(v8 + 700) = v267[21];
  j = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    while ( 1 )
    {
      v280.y = MEMORY[0xFFDF0320];
      v8 = v287;
      if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
        break;
      _mm_pause();
    }
    v198 = j * (MEMORY[0xFFDF0324] << 8)
         + (((unsigned int)v280.y * (unsigned __int64)(unsigned int)MEMORY[0xFFDF0004]) >> 24);
  }
  else
  {
    v198 = (MEMORY[0xFFDF0320] * (unsigned __int64)(unsigned int)MEMORY[0xFFDF0004]) >> 24;
  }
  *(_DWORD *)(v8 + 724) = v198;
  v199 = v269[172];
  if ( *(_DWORD *)(v8 + 700) == 1 )
    v200 = (unsigned int)&loc_20000 | v199;
  else
    v200 = v199 & 0xFFFDFFFF;
  v269[172] = v200;
  **(_DWORD **)(v8 + 244) &= ~8u;
  ms_exc.registration.TryLevel = 4;
  **(_DWORD **)(v8 + 260) &= ~0x80000000;
  ms_exc.registration.TryLevel = -2;
  v304((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  v201 = v288;
  TransferWakeBit(v8, v288);
  v303((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  ClearWakeBit((struct tagTHREADINFO *)1, v219.y, (int)v223);
  if ( v296 )
  {
    if ( v280.x )
    {
      v202 = *(int **)(v8 + 720);
      if ( v202 )
      {
        v203 = *v202;
        if ( (v203 & 1) != 0 && (v203 & 4) != 0 )
          SetMiPWakeBit(v222);
      }
    }
  }
  v204 = v295;
  if ( v295 )
    v204 = (_DWORD *)*v295;
  v205 = v266;
  *v266 = v204;
  v280.y = (LONG)(v205 + 1);
  v205[1] = v201;
  v206 = 229;
  if ( (v275 & 2) == 0 )
    v206 = (int)v292;
  v205[2] = v206;
  v205[3] = v299;
  v205[4] = v267[6];
  v205[5] = v267[7];
  v207 = (const struct tagMSG *)v267[8];
  v205[6] = v267[8];
  v208 = v296;
  LOBYTE(v207) = v296 != 0;
  InputTraceLogging::Delivery::ScanSysQueue((const struct tagQMSG *)v8, v207, v222, v225);
  if ( v208 )
  {
    EtwTraceInputProcessDelay(v8);
    v280.x = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v210 = MEMORY[0xFFDF0324];
      for ( j = MEMORY[0xFFDF0320]; MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328]; j = MEMORY[0xFFDF0320] )
      {
        _mm_pause();
        v210 = MEMORY[0xFFDF0324];
      }
      v209 = v280.x * (v210 << 8) + (((unsigned int)v280.x * (unsigned __int64)(unsigned int)j) >> 24);
    }
    else
    {
      v209 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    *(_DWORD *)(*(_DWORD *)(v8 + 236) + 304) = v209;
    v211 = *(_DWORD *)v280.y;
    if ( *(_DWORD *)v280.y == 256 )
    {
      *(_DWORD *)(v8 + 764) |= 1u;
      *(_DWORD *)(v8 + 752) = *(_DWORD *)(v8 + 696);
      *(_DWORD *)(v8 + 756) = *(_DWORD *)(v8 + 700);
      *(_DWORD *)(v8 + 744) = *((unsigned __int16 *)v205 + 7);
      *(_DWORD *)(v8 + 748) = v205[2];
      *(_DWORD *)(v8 + 760) = v267[26];
    }
    else if ( v211 == 257 || v211 == 261 )
    {
      *(_DWORD *)(v8 + 764) &= ~1u;
    }
  }
  EtwTraceRetrieveInputMessage(v205, v296);
  PopAndFreeW32ThreadLock(v251);
  PopAndFreeW32ThreadLock(v250);
  PopAndFreeW32ThreadLock(v249);
  PopAndFreeW32ThreadLock(v253);
  PopAndFreeW32ThreadLock(v252);
  ThreadUnlock1();
  v275 = 1;
LABEL_767:
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)v307);
  return v275;
}
