/*
 * XREFs of xxxRealDefWindowProc @ 0x1C00ACEC8
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACD50 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 * Callees:
 *     DWP_SetHotKey @ 0x1C00085A0 (DWP_SetHotKey.c)
 *     _IsDescendant @ 0x1C0020EA8 (_IsDescendant.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00251C0 (xxxSendSizeMessage.c)
 *     _InitPwSB @ 0x1C0027658 (_InitPwSB.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00309B0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C0033A88 (PostShellHookMessagesEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0035F20 (xxxSetCapture.c)
 *     xxxSendNotifyMessage @ 0x1C0036510 (xxxSendNotifyMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     xxxLoadUserApiHook @ 0x1C00456D0 (xxxLoadUserApiHook.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x1C005CB7C (_SetMenuDefaultItem.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C005D518 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C005DFA8 (xxxDWP_EraseBkgnd.c)
 *     xxxDWP_DoNCActivate @ 0x1C005E4B4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00603D8 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0068068 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C006C830 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     DefSetText @ 0x1C00ADA20 (DefSetText.c)
 *     xxxAdjustSize @ 0x1C00ADCE8 (xxxAdjustSize.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00ADDCC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BA9D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     xxxClientShutdown @ 0x1C00C07DC (xxxClientShutdown.c)
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 *     WCSToMBEx @ 0x1C00E99E8 (WCSToMBEx.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F6BD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F6C3C (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F6CFC (TextCopy.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F76E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00FF930 (GetThreadDesktopWindow.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C01084D8 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C01124B4 (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0112B9C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     DWP_GetIcon @ 0x1C0112F34 (DWP_GetIcon.c)
 *     FindNCHit @ 0x1C01179B4 (FindNCHit.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     MNClearCachedPopupSizes @ 0x1C01216B8 (MNClearCachedPopupSizes.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C01270FC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMessageBeep @ 0x1C014FA70 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D2C18 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01D88E4 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0229680 (SfnCOPYGLOBALDATA.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0241E10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDefPointerProc @ 0x1C02449C0 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C024648C (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C02516EC (xxxSendHelpMessage.c)
 *     ClientFrame @ 0x1C025F0B4 (ClientFrame.c)
 *     GetContextHelpId @ 0x1C02617F8 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct tagTHREADINFO *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  _DWORD *v18; // rax
  _BYTE *v19; // rcx
  int TitleBarInfo; // eax
  unsigned __int64 v21; // rbx
  unsigned int v22; // edi
  unsigned int v23; // edi
  unsigned int v24; // edi
  int v25; // eax
  __int64 v26; // r14
  unsigned int v27; // edi
  unsigned int v28; // edi
  unsigned int v29; // edi
  unsigned int v30; // edi
  unsigned int v31; // edi
  __int64 v32; // rdi
  BOOL v33; // ebx
  unsigned int v34; // edi
  unsigned int v35; // edi
  unsigned int v36; // edi
  int v37; // eax
  __int64 v38; // rdi
  unsigned int v39; // edi
  HICON updated; // rax
  unsigned int v41; // edi
  unsigned int v42; // edi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // edi
  unsigned int v49; // edi
  unsigned int v50; // edi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  HDC DCEx; // rbx
  unsigned int v56; // edi
  unsigned int v57; // edi
  ULONG v58; // ecx
  ULONG v59; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v61; // r8d
  _QWORD *v62; // r13
  int v63; // eax
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v64; // rcx
  int v65; // eax
  int v66; // edi
  struct _LARGE_UNICODE_STRING *v67; // rax
  _WORD *v68; // rcx
  __int64 v69; // rdx
  char v70; // cl
  unsigned __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // eax
  struct tagHOTKEYSTRUCT **v78; // rax
  int v79; // ebx
  __int64 DesktopWindow; // rax
  int v81; // edx
  int v82; // r8d
  __int64 v83; // r9
  __int64 v84; // rax
  char v85; // cl
  int v86; // edx
  __int64 v87; // rcx
  bool v88; // zf
  int ContextHelpId; // eax
  unsigned int v90; // edi
  unsigned int v91; // edi
  unsigned int v92; // edi
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  struct tagBWL *v99; // rax
  struct tagBWL *v100; // rsi
  unsigned __int64 *v101; // rdi
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  unsigned __int64 v107; // rdi
  __int64 v108; // rax
  unsigned __int64 v109; // r8
  unsigned int v110; // edx
  unsigned __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  char v116; // bl
  int v117; // r9d
  _BYTE *v118; // rdx
  __int64 v119; // rbx
  __int64 v120; // rax
  unsigned __int64 v121; // r8
  unsigned int v122; // edx
  unsigned int v123; // r12d
  int v124; // r9d
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  int v127; // r9d
  int v128; // edx
  int v129; // r8d
  int v130; // ecx
  __int64 v131; // rax
  __int16 v132; // r13
  int NCHit; // ecx
  int v134; // edi
  int v135; // ecx
  unsigned __int64 v136; // r8
  __int64 v137; // r9
  unsigned int v138; // edi
  __int64 *v139; // r8
  int v140; // edx
  int v141; // ecx
  const struct tagWND *v142; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  unsigned int v149; // edx
  struct tagWND *NonChildAncestor; // r15
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  unsigned __int64 v154; // r15
  __int64 v155; // rax
  int v156; // ecx
  unsigned int v157; // edi
  unsigned int v158; // edi
  __int64 v159; // r9
  unsigned __int64 v160; // rdx
  __int16 v161; // dx
  int v162; // eax
  int v163; // eax
  int v164; // r8d
  __int64 v165; // rbx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rbx
  __int64 v171; // rax
  unsigned int v172; // edx
  __int64 v173; // r8
  __int64 v174; // rdi
  struct tagPROCESSINFO *v175; // r13
  unsigned __int8 v176; // al
  __int64 v177; // rcx
  __int16 v178; // ax
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // rbx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rdi
  unsigned int v185; // ebx
  __int64 v186; // rcx
  unsigned __int16 v187; // ax
  __int64 v188; // rbx
  int v189; // eax
  unsigned __int16 v190; // r13
  unsigned int v191; // ebx
  __int64 v192; // rbx
  __int64 v193; // rax
  unsigned __int64 v194; // rcx
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // r14
  __int64 v198; // rax
  __int64 v199; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v201; // ecx
  int v202; // edi
  __int64 v203; // rcx
  __int64 v204; // rcx
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp-178h] BYREF
  struct tagPROCESSINFO *v206; // [rsp+58h] [rbp-170h]
  _QWORD v207[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v208; // [rsp+70h] [rbp-158h]
  __int64 v209; // [rsp+78h] [rbp-150h] BYREF
  __int128 v210; // [rsp+80h] [rbp-148h] BYREF
  __int64 v211; // [rsp+90h] [rbp-138h]
  unsigned __int64 v212; // [rsp+98h] [rbp-130h] BYREF
  __int128 v213; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v214; // [rsp+B0h] [rbp-118h]
  __int128 v215; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v216; // [rsp+C8h] [rbp-100h]
  _QWORD v217[3]; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD v218[3]; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v219[3]; // [rsp+100h] [rbp-C8h] BYREF
  _OWORD v220[2]; // [rsp+118h] [rbp-B0h] BYREF
  __int128 v221; // [rsp+138h] [rbp-90h]
  __int128 v222; // [rsp+150h] [rbp-78h] BYREF
  __int128 v223; // [rsp+160h] [rbp-68h] BYREF
  int v224; // [rsp+170h] [rbp-58h] BYREF
  __int128 v225; // [rsp+174h] [rbp-54h] BYREF

  v212 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v207);
  v210 = 0LL;
  v211 = 0LL;
  v213 = 0LL;
  v214 = 0LL;
  if ( a1 == -1LL || a2 > 0x400 )
    goto LABEL_13;
  if ( a2 > 0xA3 )
  {
    if ( a2 > 0x136 )
    {
      if ( a2 > 0x240 )
      {
        if ( a2 <= 0x317 )
        {
          if ( a2 != 791 )
          {
            if ( a2 <= 0x243 )
              goto LABEL_459;
            if ( a2 <= 0x244 )
              goto LABEL_13;
            if ( a2 <= 0x247 )
              goto LABEL_459;
            if ( a2 <= 0x24D )
              goto LABEL_13;
            if ( a2 <= 0x24F )
            {
LABEL_459:
              updated = (HICON)xxxDefPointerProc(v9, a2, a3, 0LL);
              goto LABEL_74;
            }
            if ( a2 != 787
              || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 8) != 0
              || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != gpqForeground
              && !xxxSetForegroundWindowWithOptions((_QWORD *)a1, 2LL, 0LL, 0LL) )
            {
              goto LABEL_13;
            }
            v219[2] = 0LL;
            v118 = *(_BYTE **)(a1 + 40);
            goto LABEL_444;
          }
          TitleBarInfo = xxxDWPPrint((struct tagWND *)a1, (HDC)a3, a4);
        }
        else
        {
          v48 = a2 - 793;
          if ( !v48 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != GetDesktopWindow(a1)
                && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, a4, 10)) )
              {
                v201 = *(_DWORD *)(gptiCurrent + 1224LL);
                v202 = (v201 >> 11) & 1;
                v212 = *(_QWORD *)(gptiCurrent + 1232LL);
                if ( (v201 & 0x40000) != 0 && *(_QWORD *)(gptiCurrent + 1384LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)a1) )
                {
                  v203 = *(_QWORD *)(gptiCurrent + 504LL);
                  if ( v203 )
                  {
                    v204 = *(_QWORD *)(v203 + 32);
                    if ( v204 )
                    {
                      if ( (*(_DWORD *)(v204 + 1224) & 0x800) != 0 )
                      {
                        v202 = 1;
                        v212 = *(_QWORD *)(v204 + 1232);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCu,
                  a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v212 & -(__int64)(v202 != 0)));
              }
              goto LABEL_13;
            }
            v199 = *(_QWORD *)(a1 + 104);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v210 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v210;
            *((_QWORD *)&v210 + 1) = v199;
            HMLockObject(v199);
            v172 = 793;
            goto LABEL_463;
          }
          v49 = v48 - 2;
          if ( v49 )
          {
            v50 = v49 - 36;
            if ( v50 )
            {
              if ( v50 == 10 && a3 )
              {
                v52 = *(_QWORD *)(a1 + 104);
                v53 = v52 ? *(_QWORD *)(v52 + 16) : 0LL;
                if ( v53 && *(_QWORD *)(v53 + 1392) == a1 )
                  xxxSetFocus((struct tagWND *)a1, (__int64)v8, v10, v11);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx((struct tagWND *)a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
        }
LABEL_26:
        v21 = TitleBarInfo;
LABEL_27:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
        return v21;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1064LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
        FreeTouchInputInfo(a4, 1LL, v10, v11);
        goto LABEL_13;
      }
      if ( a2 > 0x20C )
      {
        if ( a2 != 526 )
        {
          if ( a2 <= 0x217 )
            goto LABEL_13;
          if ( a2 <= 0x219 )
            goto LABEL_63;
          if ( a2 == 554 )
          {
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
            return 1162627398LL;
          }
          else
          {
            if ( a2 != 555 )
              goto LABEL_13;
            v191 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
            return ((unsigned __int64)v191 >> 4) & 1;
          }
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_280;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v189 = *(_DWORD *)(gpsi + 4648LL), v189 != *(_DWORD *)(gpsi + 4568LL))
              || v189 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
              GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + 4628LL));
              v26 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_37;
            }
            v183 = 4648LL;
            v184 = 4856LL;
            goto LABEL_421;
          case 0x138u:
            goto LABEL_414;
          case 0x205u:
            v186 = *(_QWORD *)(a1 + 40);
            v187 = *(_WORD *)(v186 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v186 + 26) & 0x40) != 0 )
              v137 = (unsigned __int16)(*(_WORD *)(v186 + 112) - a4) | ((unsigned __int64)v187 << 16);
            else
              v137 = (unsigned __int16)(a4 + *(_WORD *)(v186 + 104)) | (v187 << 16);
            v136 = *(_QWORD *)a1;
            _InterlockedAdd(&glSendMessage, 1u);
LABEL_412:
            v149 = 123;
            goto LABEL_413;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v192 = *(_QWORD *)(a1 + 104);
      v193 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v210 = *(_QWORD *)(v193 + 408);
      *(_QWORD *)(v193 + 408) = &v210;
      *((_QWORD *)&v210 + 1) = v192;
      HMLockObject(v192);
      v121 = a3;
      v122 = a2;
      goto LABEL_436;
    }
    if ( a2 == 310 )
      goto LABEL_414;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = (HICON)xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_74;
        }
        v157 = a2 - 281;
        if ( v157 )
        {
          v158 = v157 - 1;
          if ( v158 )
          {
            if ( v158 != 13 )
              goto LABEL_13;
            LOWORD(v159) = a3;
            v209 = (unsigned __int16)a3;
            v160 = a3 >> 16;
            v206 = (struct tagPROCESSINFO *)(a3 >> 16);
            if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v161 = 0;
              v206 = 0LL;
              if ( (*gpsi & 0x80u) != 0 || (v162 = *(_DWORD *)(gpsi + 7004LL), (v162 & 0x20) != 0) || v162 >= 0 )
              {
LABEL_372:
                if ( !v161 )
                  goto LABEL_13;
                if ( (v161 & 1) != 0 )
                  v164 = ((_WORD)v159 == 1) ^ (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 27LL) >> 7);
                else
                  v164 = 0;
                if ( (v161 & 2) != 0 )
                  v164 |= ((_WORD)v159 == 1) ^ (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 27LL) >> 6) & 1;
                if ( (v161 & 4) != 0 )
                  v164 |= ((_WORD)v159 == 1) ^ (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 27LL) >> 2) & 1;
                if ( !v164 )
                  goto LABEL_13;
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
                {
                  v165 = *(_QWORD *)(a1 + 104);
                  v166 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  *(_QWORD *)&v210 = *(_QWORD *)(v166 + 408);
                  *(_QWORD *)(v166 + 408) = &v210;
                  *((_QWORD *)&v210 + 1) = v165;
                  HMLockObject(v165);
                  v21 = xxxSendMessage(*(_QWORD *)(a1 + 104), 0x127u, a3, 0LL);
                  ThreadUnlock1(v168, v167, v169);
                  goto LABEL_27;
                }
                updated = (HICON)xxxSendMessage(a1, 0x128u, a3, 0LL);
                goto LABEL_74;
              }
              if ( (GetAppCompatFlags2(0x400u) & 2) == 0 )
              {
                v159 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                v161 = 3;
                a3 = v159 | 0x30000;
                goto LABEL_372;
              }
LABEL_375:
              LOWORD(v159) = v209;
              v161 = (__int16)v206;
              goto LABEL_372;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v163 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v163 & 0x20) == 0 && v163 < 0 )
              {
                if ( (GetAppCompatFlags2(0x400u) & 2) == 0 )
                  goto LABEL_375;
                LOWORD(v160) = (_WORD)v206;
                LOWORD(v159) = v209;
              }
            }
            v161 = v160 & 0xFFFC;
            goto LABEL_372;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v170 = *(_QWORD *)(a1 + 104);
          v171 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v210 = *(_QWORD *)(v171 + 408);
          *(_QWORD *)(v171 + 408) = &v210;
          *((_QWORD *)&v210 + 1) = v170;
          HMLockObject(v170);
          v172 = 282;
        }
        else
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v173 = *(_QWORD *)(a1 + 104);
          v174 = *(_QWORD *)(*(_QWORD *)(v173 + 16) + 416LL);
          v175 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
          v206 = v175;
          if ( (struct tagPROCESSINFO *)v174 != v175 )
          {
            BytesInMultiByteString = IsMessageAllowedAcrossILByReceiver(
                                       v175,
                                       (void *const **)v174,
                                       (struct tagWND *)v173,
                                       0x119u,
                                       a3,
                                       a4,
                                       1);
            if ( !BytesInMultiByteString )
            {
              v209 = *(_QWORD *)v174 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v174 + 880);
              v176 = CheckAccess((char *)v175 + 880, &v209);
              BytesInMultiByteString = v176;
              if ( v176 )
              {
                if ( (unsigned __int8)Enforced(v177) )
                  v178 = 5;
                else
                  v178 = 1;
                MSGSQMAddMessage(v206, (struct tagPROCESSINFO *)v174, 0x119u, a3, a4, 1, v178);
              }
            }
            if ( !BytesInMultiByteString )
            {
              EtwTraceUIPIMsgError(v206, v174, 281LL, a3, a4);
              UserSetLastError(5LL, v179, v180);
              MSGSQMAddMessage(v206, (struct tagPROCESSINFO *)v174, 0x119u, a3, a4, 1, 0);
              goto LABEL_13;
            }
          }
          v181 = *(_QWORD *)(a1 + 104);
          v182 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v210 = *(_QWORD *)(v182 + 408);
          *(_QWORD *)(v182 + 408) = &v210;
          *((_QWORD *)&v210 + 1) = v181;
          HMLockObject(v181);
          v172 = 281;
        }
LABEL_463:
        v95 = xxxSendMessage(*(_QWORD *)(a1 + 104), v172, a3, (struct _LARGE_STRING *)a4);
LABEL_464:
        v26 = v95;
        ThreadUnlock1(v97, v96, v98);
        goto LABEL_37;
      }
      if ( a2 == 297 )
      {
        v185 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
        return ((v185 & 0x40 | ((unsigned __int64)v185 >> 2)) >> 5) | v185 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) != 0 )
        {
          v183 = 4628LL;
          v184 = 4816LL;
LABEL_421:
          v188 = 4640LL;
          goto LABEL_422;
        }
LABEL_416:
        v183 = 4588LL;
        v188 = 4600LL;
        v184 = 4736LL;
        goto LABEL_422;
      }
LABEL_414:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) != 0 )
      {
        v183 = 4628LL;
        v188 = 4600LL;
        v184 = 4816LL;
LABEL_422:
        GreSetBkColor((HDC)a3, *(_DWORD *)(v183 + gpsi));
        GreSetTextColor((HDC)a3, *(_DWORD *)(v188 + gpsi));
        v26 = *(_QWORD *)(v184 + gpsi);
        goto LABEL_37;
      }
      goto LABEL_416;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand((struct tagWND *)a1, a3, a4);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
        goto LABEL_89;
      if ( a2 == 164 )
      {
        memset(v220, 0, sizeof(v220));
        v221 = 0LL;
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture(a1);
        while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v220, 0, 512, 526, 1, 0) || DWORD2(v220[0]) != 517 )
        {
          if ( a1 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL)
            || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v134 = WORD2(v221) | (WORD4(v221) << 16);
        v135 = FindNCHit(a1, (unsigned int)v134);
        if ( ((v135 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v118 = *(_BYTE **)(a1 + 40);
        if ( (v118[234] & 0x20) != 0 )
        {
          if ( v135 == 2 )
            goto LABEL_444;
          if ( v135 == 3 )
          {
LABEL_268:
            v123 = 61536;
LABEL_445:
            xxxGetSysMenu((struct tagWND *)a1, 1);
            v208 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v207);
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v207) )
              goto LABEL_13;
            if ( gihmodUserApiHook >= 0 )
            {
              v195 = v208;
              if ( !v208 )
                v195 = *(_QWORD *)v207[0];
              MNClearCachedPopupSizes(v195);
            }
            v196 = v208;
            if ( !v208 )
              v196 = *(_QWORD *)v207[0];
            SetMenuDefaultItem(v196, v123, 0);
            PostShellHookMessagesEx(9u, *(_QWORD *)a1, 0LL);
            v197 = v208;
            if ( !v208 )
              v197 = *(_QWORD *)v207[0];
            v198 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v219[0] = *(_QWORD *)(v198 + 408);
            *(_QWORD *)(v198 + 408) = v219;
            v219[1] = v197;
            HMLockObject(v197);
            if ( a4 == 0xFFFFFFFF )
            {
              v46 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v225 = 0LL;
                v224 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v225) )
                  xxxTrackPopupMenuEx(v207, 576LL, (unsigned int)v225, DWORD1(v225), a1, &v224);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v207, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_111;
          }
        }
        v136 = *(_QWORD *)a1;
        _InterlockedAdd(&glSendMessage, 1u);
        v137 = v134;
        goto LABEL_412;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar(a1, DCEx, a3);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
          goto LABEL_13;
        }
        if ( a2 != 256 )
          goto LABEL_13;
        if ( a3 == 27 )
        {
          if ( !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)a1) )
            goto LABEL_13;
          Host = CoreWindowProp::GetHost((const struct tagWND *)a1);
          if ( !Host )
            goto LABEL_13;
          TopLevelWindow = GetTopLevelWindow((__int64)Host);
          if ( !TopLevelWindow )
            goto LABEL_13;
          v127 = a4;
          v128 = 256;
          v129 = 27;
          v130 = TopLevelWindow;
          goto LABEL_307;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v131 = *(_QWORD *)(gptiCurrent + 424LL);
        goto LABEL_351;
      }
LABEL_280:
      v132 = 0;
      if ( WORD1(a3) == 1 )
      {
        v132 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        v132 = 2;
        goto LABEL_426;
      }
      if ( !v132 )
        goto LABEL_13;
LABEL_426:
      v190 = v132 | 0x8000;
      if ( a2 != 524 )
        LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 424LL));
      xxxSendMessage(
        a1,
        0x319u,
        *(_QWORD *)a1,
        (struct _LARGE_STRING *)((unsigned __int16)a3 | ((unsigned __int64)v190 << 16)));
      goto LABEL_13;
    }
    v56 = a2 - 260;
    if ( !v56 )
    {
      v154 = a4 >> 16;
      if ( (v154 & 0x2000) != 0 )
      {
        if ( (v154 & 0x4000) == 0 )
        {
          v155 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( a3 != 18 || (v156 = *(_DWORD *)(v155 + 388), (v156 & 8) != 0) )
          {
            *(_DWORD *)(v155 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v155 + 388) = v156 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x10u;
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) && (_DWORD)a3 == 115 )
          WindowManagementExtended::xxxCloseApplication(gptiCurrent, v8);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v131 = *(_QWORD *)(gptiCurrent + 424LL);
LABEL_351:
      *(_DWORD *)(v131 + 388) |= 0x10u;
      if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v136 = *(_QWORD *)a1;
      _InterlockedAdd(&glSendMessage, 1u);
      v137 = -1LL;
      goto LABEL_412;
    }
    v57 = v56 - 1;
    if ( !v57 )
    {
LABEL_89:
      if ( a3 == 18
        && (v54 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL), (v54 & 0x80u) == 0)
        && (v54 & 0xC) == 8
        || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x10) != 0 )
      {
        NonChildAncestor = (struct tagWND *)GetNonChildAncestor(a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          *(_QWORD *)&v213 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v213;
          *((_QWORD *)&v213 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)NonChildAncestor,
            0x112u,
            0xF100uLL,
            0LL,
            0,
            0,
            0LL,
            1,
            0);
          ThreadUnlock1(v152, v151, v153);
        }
      }
      if ( a3 == 18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v138 = v57 - 1;
    if ( v138 )
    {
      if ( v138 != 3 || a3 == 0xFFFF )
        goto LABEL_13;
      v127 = a4;
      v129 = a3;
      v128 = 258;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= 0xFFFFFFF3;
      if ( a3 != 13 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
      {
        if ( (a4 & 0x20000000) == 0 || !a3 )
        {
          if ( a3 != 27 )
            xxxMessageBeep(0LL);
          goto LABEL_13;
        }
        if ( a3 == 9 || a3 == 27 )
          goto LABEL_13;
        if ( a3 == 32 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
          {
            v112 = *(_QWORD *)(a1 + 104);
            *(_QWORD *)&v210 = *(_QWORD *)(gptiCurrent + 408LL);
            *(_QWORD *)(gptiCurrent + 408LL) = &v210;
            *((_QWORD *)&v210 + 1) = v112;
            HMLockObject(v112);
            v110 = 262;
            v109 = 32LL;
            v111 = *(_QWORD *)(a1 + 104);
            goto LABEL_254;
          }
          v139 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
          if ( v139 )
          {
            v140 = 0;
            v141 = *(_DWORD *)(v139[5] + 236);
            if ( v141 >= 8 && (v141 <= 11 || v141 == 13) )
              v140 = 1;
            if ( v140 )
            {
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x21u, *v139);
              goto LABEL_13;
            }
          }
        }
        if ( a3 != 32
          || (v142 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)) == 0LL
          || !(unsigned int)IsCompositionInputWindow(v142) )
        {
          _InterlockedAdd(&glSendMessage, 1u);
          v137 = (unsigned int)a3;
          v136 = 61696LL;
          v149 = 274;
LABEL_413:
          xxxSendTransformableMessageTimeout(a1, v149, v136, (struct _LARGE_STRING *)v137, 0, 0, 0LL, 1, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v144 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v144 )
          goto LABEL_13;
        v218[2] = 0LL;
        v145 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v218[0] = *(_QWORD *)(v145 + 408);
        *(_QWORD *)(v145 + 408) = v218;
        v218[1] = v144;
        HMLockObject(v144);
        xxxForceForegroundWindowNoRestoreFocus(v144, 0LL);
        if ( !ThreadUnlock1(v147, v146, v148) )
          goto LABEL_13;
        v127 = 32;
        v129 = 61696;
        v128 = 274;
        v130 = v144;
LABEL_307:
        PostMessage(v130, v128, v129, v127);
        goto LABEL_13;
      }
      v127 = 0;
      v129 = 61728;
      v128 = 274;
    }
    v130 = a1;
    goto LABEL_307;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse((struct tagWND *)a1, a2, a3, a4);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      v78 = HotKeyHelper((struct tagWND *)a1);
      v79 = 0;
      if ( *v78 )
        v79 = *((_DWORD *)*v78 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
      return v79;
    }
    if ( a2 <= 0x18 )
    {
      if ( a2 == 24 )
      {
        if ( !(_WORD)a4 )
          goto LABEL_13;
        v69 = *(_QWORD *)(a1 + 40);
        if ( (((*(_BYTE *)(v69 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*(_QWORD *)(a1 + 120) )
          goto LABEL_13;
        v70 = *(_BYTE *)(v69 + 31) & 0x10;
        if ( a3 )
        {
          if ( v70 || (*(_BYTE *)(v69 + 17) & 0x40) == 0 )
            goto LABEL_13;
        }
        else if ( !v70 )
        {
          goto LABEL_13;
        }
        SetOrClrWF(0, a1, 0x140u, 1);
        if ( !a3 )
          SetOrClrWF(1, a1, 0x140u, 1);
        xxxShowWindowEx((struct tagWND *)a1, a3 != 0 ? 4 : 0, gdwPUDFlags & 0x10000);
        goto LABEL_13;
      }
      if ( a2 == 15 )
        goto LABEL_79;
      if ( a2 <= 0xF )
      {
        v34 = a2 - 6;
        if ( !v34 )
        {
          if ( a3 )
            xxxSetFocus((struct tagWND *)a1, (__int64)v8, v10, v11);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x40) == 0 )
            goto LABEL_13;
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1392LL);
          if ( !v43 )
            goto LABEL_13;
          v217[2] = 0LL;
          v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v217[0] = *(_QWORD *)(v44 + 408);
          *(_QWORD *)(v44 + 408) = v217;
          v217[1] = v43;
          HMLockObject(v43);
          xxxSendNotifyMessage(v43, 0x349u, a3, 0LL, 0);
          goto LABEL_111;
        }
        v35 = v34 - 5;
        if ( !v35 )
        {
          xxxDWP_SetRedraw((struct tagWND *)a1, a3 != 0);
          goto LABEL_13;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v41 = v36 - 1;
          if ( v41 )
          {
            if ( v41 != 1 )
              goto LABEL_13;
            v58 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
            if ( !v58 )
              goto LABEL_13;
            BytesInMultiByteString = 0;
            if ( a4 )
            {
              RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *(PCWCH *)(a1 + 184), v58);
              v59 = BytesInMultiByteString;
            }
            else
            {
              v59 = v58 >> 1;
              BytesInMultiByteString = v59;
            }
            v26 = v59;
            goto LABEL_37;
          }
          if ( !a3 )
            goto LABEL_13;
          if ( *(_QWORD *)(a1 + 184) )
          {
            v222 = 0LL;
            StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v222);
            DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(a1 + 24), StrName);
          }
          v61 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
          v62 = (_QWORD *)(a4 + 8);
          v63 = *(_DWORD *)(a4 + 4);
          if ( !v61 )
          {
            v68 = (_WORD *)*v62;
            if ( v63 >= 0 )
              *v68 = 0;
            else
              *(_BYTE *)v68 = 0;
            goto LABEL_13;
          }
          v64 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184);
          if ( v63 >= 0 )
          {
            v223 = 0LL;
            v67 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v64, (struct _LARGE_UNICODE_STRING *)&v223);
            v66 = TextCopy(v67, *v62, (unsigned int)a3);
            v65 = 2 * v66;
          }
          else
          {
            v65 = WCSToMBEx(0LL, *(_QWORD *)v64, v61 >> 1, a4 + 8, (v63 & 0x7FFFFFFFu) - 1);
            v66 = v65;
            *(_BYTE *)(v65 + *v62) = 0;
          }
          *(_DWORD *)a4 = v65;
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
          return v66;
        }
        else
        {
          v37 = DefSetText(a1, a4);
          v38 = v37;
          if ( v37 )
          {
            xxxRedrawTitle((unsigned __int64 *)a1, 8u);
            xxxWindowEvent(0x800Cu, (struct tagWND *)a1, 0, 0, 0);
          }
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
          return v38;
        }
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow((__int64 *)a1);
        goto LABEL_13;
      }
      if ( a2 == 17 || a2 == 19 )
        goto LABEL_63;
      if ( a2 != 20 )
        goto LABEL_13;
    }
    else
    {
      if ( a2 <= 0x26 )
      {
        if ( a2 != 38 )
        {
          v22 = a2 - 25;
          if ( v22 )
          {
            v23 = v22 - 6;
            if ( !v23 )
            {
              xxxDWP_DoCancelMode((struct tagWND *)a1);
              goto LABEL_13;
            }
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
                v71 = *(_QWORD *)(a1 + 104);
              else
                v71 = 0LL;
              if ( !v71
                || (v72 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
                    *(_QWORD *)&v213 = *(_QWORD *)(v72 + 408),
                    *(_QWORD *)(v72 + 408) = &v213,
                    *((_QWORD *)&v213 + 1) = v71,
                    HMLockObject(v71),
                    v26 = xxxSendMessage(v71, 0x21u, a3, (struct _LARGE_STRING *)a4),
                    ThreadUnlock1(v74, v73, v75),
                    !v26) )
              {
                if ( (_WORD)a4 != 2 || (v76 = 3LL, WORD1(a4) != 513) )
                  v76 = 1LL;
                v26 = v76;
              }
              goto LABEL_37;
            }
            v25 = xxxDWP_SetCursor((struct tagWND *)a1, (HWND)a3, (__int16)a4, WORD1(a4));
            goto LABEL_36;
          }
          goto LABEL_416;
        }
LABEL_79:
        xxxDWP_Paint((struct tagWND *)a1);
        goto LABEL_13;
      }
      if ( a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v77 = *(_DWORD *)(a4 + 12);
          if ( v77 == 4 || v77 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
            ClientFrame(*(HDC *)(a4 + 32));
        }
        goto LABEL_13;
      }
      if ( a2 != 39 )
      {
        if ( a2 <= 0x2D )
          goto LABEL_13;
        if ( a2 <= 0x2F )
        {
          v26 = -1LL;
          goto LABEL_37;
        }
        if ( a2 != 50 )
          goto LABEL_13;
        TitleBarInfo = DWP_SetHotKey((struct tagWND *)a1, a3);
        goto LABEL_26;
      }
    }
    v25 = xxxDWP_EraseBkgnd(a1, a2, a3);
    goto LABEL_36;
  }
  if ( a2 > 0x55 )
  {
    v12 = a2 - 123;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 2;
            if ( !v16 )
            {
              xxxCalcClientRect(a1, (_DWORD *)a4, 0);
              goto LABEL_13;
            }
            v30 = v16 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( !v31 )
              {
                SetOrClrWF(1, a1, 0x180u, 1);
                v32 = _GetDCEx(a1, a3, 328833LL);
                v33 = 0;
                if ( v32 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 0x40) != 0 )
                    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v32, v33);
                  _ReleaseDC(v32);
                }
                SetOrClrWF(0, a1, 0x180u, 1);
                goto LABEL_13;
              }
              v39 = v31 - 1;
              if ( v39 )
              {
                if ( v39 == 2 )
                {
                  SetOrClrWF(0, a1, 0x280u, 1);
                  xxxInternalDoSyncPaint(a1, a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_63;
            }
            v25 = FindNCHit(a1, (unsigned int)a4);
LABEL_36:
            v26 = v25;
LABEL_37:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
            return v26;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 0x30) != 0 && !InitPwSB(a1) )
            goto LABEL_13;
          if ( a4 )
          {
            v18 = (_DWORD *)(a4 + 80);
            if ( !*(_QWORD *)(a1 + 24) || a4 == -80LL || (v19 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) = 0;
LABEL_63:
              v26 = 1LL;
              goto LABEL_37;
            }
            if ( *(int *)(a4 + 84) < 0 )
            {
              if ( *v18 && *v19 == 0xFF )
                goto LABEL_22;
            }
            else if ( *v18 >= 2u && *(_WORD *)v19 == 0xFFFF )
            {
LABEL_22:
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
              return 1LL;
            }
          }
          SetOrClrWF(1, a1, 0x202u, 1);
          TitleBarInfo = DefSetText(a1, a4 + 80);
          goto LABEL_26;
        }
        updated = xxxDWP_SetIcon((struct tagWND *)a1, a3, (HICON)a4);
      }
      else
      {
        updated = (HICON)DWP_GetIcon(a1, (unsigned int)a3);
      }
LABEL_74:
      v21 = (unsigned __int64)updated;
      goto LABEL_27;
    }
    v117 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v117 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), a1) )
        xxxDoScrollMenu((struct tagWND *)a1, 0LL, v124 - 6);
      goto LABEL_13;
    }
    v118 = *(_BYTE **)(a1 + 40);
    if ( (v118[31] & 0xC0) == 0x40 )
    {
      v119 = *(_QWORD *)(a1 + 104);
      v120 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v210 = *(_QWORD *)(v120 + 408);
      *(_QWORD *)(v120 + 408) = &v210;
      *((_QWORD *)&v210 + 1) = v119;
      HMLockObject(v119);
      v121 = *(_QWORD *)a1;
      v122 = 123;
LABEL_436:
      v194 = *(_QWORD *)(a1 + 104);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v194, v122, v121, (struct _LARGE_STRING *)a4, 0, 0, 0LL, 1, 1);
      goto LABEL_111;
    }
    if ( a1 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
      goto LABEL_13;
    if ( v117 != 2 )
    {
      if ( v117 != 3 )
      {
        if ( a4 == -1LL && (v118[21] & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_268;
    }
LABEL_444:
    v123 = (v118[31] & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_445;
  }
  if ( a2 != 85 )
  {
    if ( a2 <= 0x4D )
    {
      if ( a2 == 77 )
      {
        ContextHelpId = GetContextHelpId(a1);
        xxxSendHelpMessage(a1, ContextHelpId);
        goto LABEL_13;
      }
      v27 = a2 - 53;
      if ( !v27 )
      {
        v21 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 16LL) >> 6) & 1;
        goto LABEL_27;
      }
      v28 = v27 - 6;
      if ( !v28 )
      {
        v25 = xxxClientShutdown(a1, a3);
        goto LABEL_36;
      }
      v29 = v28 - 11;
      if ( !v29 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
          xxxAdjustSize((struct tagWND *)a1);
        goto LABEL_13;
      }
      v42 = v29 - 1;
      if ( !v42 )
      {
        v51 = *(_DWORD *)(a4 + 32);
        if ( (v51 & 0x1000) == 0 )
        {
          v206 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a1 + 40) + 104LL);
          DesktopWindow = GetDesktopWindow(a1);
          if ( v83 != DesktopWindow )
          {
            v84 = *(_QWORD *)(v83 + 40);
            LODWORD(v206) = v81 - *(_DWORD *)(v84 + 104);
            HIDWORD(v206) = v82 - *(_DWORD *)(v84 + 108);
          }
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            a1,
            3u,
            0LL,
            (struct _LARGE_STRING *)((unsigned __int16)v206 | (WORD2(v206) << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v51 = *(_DWORD *)(a4 + 32);
        }
        if ( (v51 & 0x8800) != 0x800 )
        {
          v85 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
          if ( (v85 & 0x20) != 0 )
          {
            v86 = 1;
            v87 = a1;
          }
          else
          {
            v88 = (v85 & 1) == 0;
            v87 = a1;
            if ( v88 )
              v86 = 0;
            else
              v86 = 2;
          }
          xxxSendSizeMessage(v87, v86);
        }
        goto LABEL_13;
      }
      if ( v42 == 2 )
      {
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
        goto LABEL_74;
      }
LABEL_13:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
      return 0LL;
    }
    v90 = a2 - 79;
    if ( !v90 )
    {
      if ( !ValidateHwnd(a3) )
        goto LABEL_13;
      goto LABEL_63;
    }
    v91 = v90 - 1;
    if ( v91 )
    {
      v92 = v91 - 1;
      if ( !v92 )
      {
        v215 = 0LL;
        v216 = 0LL;
        v99 = BuildHwndList(*(struct tagWND **)(a1 + 112), 2, 0LL);
        v100 = v99;
        if ( v99 )
        {
          v101 = (unsigned __int64 *)((char *)v99 + 32);
          v102 = *((_QWORD *)v99 + 4);
          if ( v102 != 1 )
          {
            do
            {
              v206 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v102, 1);
              if ( v206 )
              {
                v103 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v215 = *(_QWORD *)(v103 + 408);
                *(_QWORD *)(v103 + 408) = &v215;
                *((_QWORD *)&v215 + 1) = v206;
                HMLockObject(v206);
                xxxSendMessage((unsigned __int64)v206, 0x51u, a3, (struct _LARGE_STRING *)a4);
                ThreadUnlock1(v105, v104, v106);
              }
              v102 = *++v101;
            }
            while ( *v101 != 1 );
          }
          FreeHwndList(v100);
          goto LABEL_13;
        }
        v26 = 0LL;
        goto LABEL_37;
      }
      if ( v92 != 2 )
        goto LABEL_13;
      v93 = (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 ? *(_QWORD *)(a1 + 104) : *(_QWORD *)(a1 + 120);
      if ( !v93 || v93 == GetThreadDesktopWindow(0LL) )
        goto LABEL_13;
      v94 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v213 = *(_QWORD *)(v94 + 408);
      *(_QWORD *)(v94 + 408) = &v213;
      *((_QWORD *)&v213 + 1) = v93;
      HMLockObject(v93);
      _InterlockedAdd(&glSendMessage, 1u);
      v95 = xxxSendTransformableMessageTimeout(v93, 0x53u, a3, (struct _LARGE_STRING *)a4, 0, 0, 0LL, 1, 1);
      goto LABEL_464;
    }
    v107 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
    if ( !v107 || v107 == a1 || **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) == *(_WORD *)(gpsi + 904LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL, v114, v115);
      goto LABEL_13;
    }
    v108 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v213 = *(_QWORD *)(v108 + 408);
    *(_QWORD *)(v108 + 408) = &v213;
    *((_QWORD *)&v213 + 1) = v107;
    HMLockObject(v107);
    v109 = a3;
    v110 = 80;
    v111 = v107;
LABEL_254:
    xxxSendMessage(v111, v110, v109, (struct _LARGE_STRING *)a4);
LABEL_111:
    ThreadUnlock1(v46, v45, v47);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v116 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v207);
  return 2LL - ((v116 & 0x20) != 0);
}
