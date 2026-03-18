/*
 * XREFs of xxxRealDefWindowProc @ 0x1C004B5F8
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C004B480 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 * Callees:
 *     DWP_SetHotKey @ 0x1C0008590 (DWP_SetHotKey.c)
 *     xxxClientShutdown @ 0x1C000BD0C (xxxClientShutdown.c)
 *     _GetProcessWindowStation @ 0x1C000FF00 (_GetProcessWindowStation.c)
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00142DC (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0014CC0 (xxxGetTitleBarInfoEx.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C001A3EC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00393E0 (xxxSetCapture.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     xxxSendSizeMessage @ 0x1C003C4E4 (xxxSendSizeMessage.c)
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C00490C0 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     DefSetText @ 0x1C004ACE8 (DefSetText.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C004C93C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSleepThread2 @ 0x1C0052630 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     _InitPwSB @ 0x1C005E044 (_InitPwSB.c)
 *     xxxLoadUserApiHook @ 0x1C0074590 (xxxLoadUserApiHook.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0078134 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C00792C4 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     xxxGetSysMenu @ 0x1C007C474 (xxxGetSysMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C007C5D4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     xxxAdjustSize @ 0x1C009086C (xxxAdjustSize.c)
 *     _IsDescendant @ 0x1C0091BD8 (_IsDescendant.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C009495C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C00BF158 (PostShellHookMessagesEx.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00CC324 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     WCSToMBEx @ 0x1C00E5C48 (WCSToMBEx.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F1438 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F149C (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F155C (TextCopy.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F31AC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00F4DB0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C01045E8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     _SetMenuDefaultItem @ 0x1C010929C (_SetMenuDefaultItem.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0113AF8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0113CA4 (xxxDWP_EraseBkgnd.c)
 *     DWP_GetIcon @ 0x1C0113D58 (DWP_GetIcon.c)
 *     FindNCHit @ 0x1C0119040 (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     MNClearCachedPopupSizes @ 0x1C0122628 (MNClearCachedPopupSizes.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxMessageBeep @ 0x1C0152270 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C015AF40 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D1E08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSimulateShiftF10 @ 0x1C01D7C24 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02287F0 (SfnCOPYGLOBALDATA.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240B70 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDefPointerProc @ 0x1C0243720 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxSendHelpMessage @ 0x1C02500DC (xxxSendHelpMessage.c)
 *     ClientFrame @ 0x1C025DAA0 (ClientFrame.c)
 *     GetContextHelpId @ 0x1C02601D8 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct tagTHREADINFO *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  _DWORD *v16; // rax
  _BYTE *v17; // rcx
  int TitleBarInfo; // eax
  unsigned __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // edi
  unsigned int v22; // edi
  int v23; // eax
  __int64 v24; // r14
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // edi
  unsigned int v29; // edi
  HDC v30; // rdi
  __int16 v31; // bx
  unsigned int v32; // edi
  unsigned int v33; // edi
  unsigned int v34; // edi
  int v35; // eax
  __int64 v36; // rdi
  unsigned int v37; // edi
  HICON updated; // rax
  unsigned int v39; // edi
  unsigned int v40; // edi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // edi
  unsigned int v47; // edi
  unsigned int v48; // edi
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // ecx
  HDC DCEx; // rbx
  unsigned int v54; // edi
  unsigned int v55; // edi
  ULONG v56; // ecx
  ULONG v57; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v59; // r8d
  _QWORD *v60; // r13
  int v61; // eax
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v62; // rcx
  int v63; // eax
  int v64; // edi
  struct _LARGE_UNICODE_STRING *v65; // rax
  _WORD *v66; // rcx
  __int64 v67; // rdx
  char v68; // cl
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  int v75; // eax
  struct tagHOTKEYSTRUCT **v76; // rax
  int v77; // ebx
  __int64 DesktopWindow; // rax
  int v79; // edx
  int v80; // r8d
  __int64 v81; // r9
  __int64 v82; // rax
  char v83; // cl
  int v84; // edx
  struct tagWND *v85; // rcx
  bool v86; // zf
  int ContextHelpId; // eax
  unsigned int v88; // edi
  unsigned int v89; // edi
  unsigned int v90; // edi
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  struct tagBWL *v97; // rax
  __int64 v98; // rdx
  struct tagBWL *v99; // rsi
  _QWORD *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  struct tagWND *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // rdx
  struct tagWND *v110; // rcx
  __int64 v111; // rcx
  __int64 ProcessWindowStation; // rax
  char v113; // bl
  int v114; // r9d
  _BYTE *v115; // rdx
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // r8
  int v119; // edx
  unsigned int v120; // r12d
  int v121; // r9d
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  int v124; // r9d
  int v125; // edx
  int v126; // r8d
  int v127; // ecx
  __int64 v128; // rax
  __int16 v129; // r13
  int NCHit; // ecx
  unsigned int v131; // edi
  int v132; // ecx
  __int64 v133; // r8
  int v134; // r9d
  unsigned int v135; // edi
  __int64 *v136; // r8
  int v137; // edx
  int v138; // ecx
  const struct tagWND *v139; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  int v146; // edx
  struct tagWND *NonChildAncestor; // r15
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  unsigned __int64 v151; // r15
  __int64 v152; // rax
  int v153; // ecx
  unsigned int v154; // edi
  unsigned int v155; // edi
  __int64 v156; // r9
  unsigned __int64 v157; // rdx
  __int16 v158; // dx
  int v159; // eax
  int v160; // eax
  int v161; // r8d
  __int64 v162; // rbx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // rbx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rdi
  struct tagPROCESSINFO *v172; // r13
  unsigned __int8 v173; // al
  __int16 v174; // ax
  __int64 v175; // rbx
  __int64 v176; // rax
  __int64 v177; // rdi
  unsigned int v178; // ebx
  __int64 v179; // rcx
  unsigned __int16 v180; // ax
  int v181; // eax
  unsigned __int16 v182; // r13
  unsigned int v183; // ebx
  __int64 v184; // rbx
  __int64 v185; // rax
  __int64 v186; // rcx
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // r14
  __int64 v190; // rax
  __int64 v191; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v193; // ecx
  int v194; // edi
  __int64 v195; // rcx
  __int64 v196; // rcx
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp-178h] BYREF
  struct tagPROCESSINFO *v198; // [rsp+58h] [rbp-170h]
  _QWORD v199[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v200; // [rsp+70h] [rbp-158h]
  __int64 v201; // [rsp+78h] [rbp-150h] BYREF
  __int128 v202; // [rsp+80h] [rbp-148h] BYREF
  __int64 v203; // [rsp+90h] [rbp-138h]
  struct tagWND *v204; // [rsp+98h] [rbp-130h] BYREF
  __int128 v205; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v206; // [rsp+B0h] [rbp-118h]
  __int128 v207; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v208; // [rsp+C8h] [rbp-100h]
  _QWORD v209[3]; // [rsp+D0h] [rbp-F8h] BYREF
  _QWORD v210[3]; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v211[3]; // [rsp+100h] [rbp-C8h] BYREF
  _OWORD v212[2]; // [rsp+118h] [rbp-B0h] BYREF
  __int128 v213; // [rsp+138h] [rbp-90h]
  __int128 v214; // [rsp+150h] [rbp-78h] BYREF
  __int128 v215; // [rsp+160h] [rbp-68h] BYREF
  int v216; // [rsp+170h] [rbp-58h] BYREF
  __int128 v217; // [rsp+174h] [rbp-54h] BYREF

  v204 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v199);
  v202 = 0LL;
  v203 = 0LL;
  v205 = 0LL;
  v206 = 0LL;
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
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
              goto LABEL_458;
            if ( a2 <= 0x244 )
              goto LABEL_13;
            if ( a2 <= 0x247 )
              goto LABEL_458;
            if ( a2 <= 0x24D )
              goto LABEL_13;
            if ( a2 <= 0x24F )
            {
LABEL_458:
              updated = (HICON)xxxDefPointerProc(v9, a2, a3, 0LL);
              goto LABEL_74;
            }
            if ( a2 != 787
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
              || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground
              && !xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 0LL) )
            {
              goto LABEL_13;
            }
            v211[2] = 0LL;
            v115 = (_BYTE *)*((_QWORD *)a1 + 5);
            goto LABEL_443;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
        }
        else
        {
          v46 = a2 - 793;
          if ( !v46 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
                && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, a4, 10)) )
              {
                v193 = *(_DWORD *)(gptiCurrent + 1232LL);
                v194 = (v193 >> 11) & 1;
                v204 = *(struct tagWND **)(gptiCurrent + 1240LL);
                if ( (v193 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1392LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v195 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v195 )
                  {
                    v196 = *(_QWORD *)(v195 + 32);
                    if ( v196 )
                    {
                      if ( (*(_DWORD *)(v196 + 1232) & 0x800) != 0 )
                      {
                        v194 = 1;
                        v204 = *(struct tagWND **)(v196 + 1240);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCuLL,
                  a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v204 & -(__int64)(v194 != 0)));
              }
              goto LABEL_13;
            }
            v191 = *((_QWORD *)a1 + 13);
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v202 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v202;
            *((_QWORD *)&v202 + 1) = v191;
            HMLockObject(v191);
            v169 = 793LL;
            goto LABEL_462;
          }
          v47 = v46 - 2;
          if ( v47 )
          {
            v48 = v47 - 36;
            if ( v48 )
            {
              if ( v48 == 10 && a3 )
              {
                v50 = *((_QWORD *)a1 + 13);
                v51 = v50 ? *(_QWORD *)(v50 + 16) : 0LL;
                if ( v51 && *(struct tagWND **)(v51 + 1400) == a1 )
                  xxxSetFocus(a1);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
        }
LABEL_26:
        v19 = TitleBarInfo;
LABEL_27:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
        return v19;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1072LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1072LL) = 0LL;
        FreeTouchInputInfo(a4, 1LL);
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
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
            return 1162627398LL;
          }
          else
          {
            if ( a2 != 555 )
              goto LABEL_13;
            v183 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
            return ((unsigned __int64)v183 >> 4) & 1;
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
              || (v181 = *(_DWORD *)(gpsi + 4648LL), v181 != *(_DWORD *)(gpsi + 4568LL))
              || v181 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3);
              GreSetTextColor((HDC)a3);
              v24 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_37;
            }
            v177 = 4856LL;
            goto LABEL_421;
          case 0x138u:
            goto LABEL_414;
          case 0x205u:
            v179 = *((_QWORD *)a1 + 5);
            v180 = *(_WORD *)(v179 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v179 + 26) & 0x40) != 0 )
              v134 = (unsigned __int16)(*(_WORD *)(v179 + 112) - a4) | (v180 << 16);
            else
              v134 = (unsigned __int16)(a4 + *(_WORD *)(v179 + 104)) | (v180 << 16);
            v133 = *(_QWORD *)a1;
            _InterlockedAdd(&glSendMessage, 1u);
LABEL_412:
            v146 = 123;
            goto LABEL_413;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v184 = *((_QWORD *)a1 + 13);
      v185 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v202 = *(_QWORD *)(v185 + 416);
      *(_QWORD *)(v185 + 416) = &v202;
      *((_QWORD *)&v202 + 1) = v184;
      HMLockObject(v184);
      LODWORD(v118) = a3;
      v119 = a2;
      goto LABEL_435;
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
        v154 = a2 - 281;
        if ( v154 )
        {
          v155 = v154 - 1;
          if ( v155 )
          {
            if ( v155 != 13 )
              goto LABEL_13;
            LOWORD(v156) = a3;
            v201 = (unsigned __int16)a3;
            v157 = a3 >> 16;
            v198 = (struct tagPROCESSINFO *)(a3 >> 16);
            if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v158 = 0;
              v198 = 0LL;
              if ( (*gpsi & 0x80u) != 0 || (v159 = *(_DWORD *)(gpsi + 7004LL), (v159 & 0x20) != 0) || v159 >= 0 )
              {
LABEL_372:
                if ( !v158 )
                  goto LABEL_13;
                if ( (v158 & 1) != 0 )
                  v161 = ((_WORD)v156 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                else
                  v161 = 0;
                if ( (v158 & 2) != 0 )
                  v161 |= ((_WORD)v156 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
                if ( (v158 & 4) != 0 )
                  v161 |= ((_WORD)v156 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
                if ( !v161 )
                  goto LABEL_13;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                {
                  v162 = *((_QWORD *)a1 + 13);
                  v163 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  *(_QWORD *)&v202 = *(_QWORD *)(v163 + 416);
                  *(_QWORD *)(v163 + 416) = &v202;
                  *((_QWORD *)&v202 + 1) = v162;
                  HMLockObject(v162);
                  v19 = xxxSendMessage(*((_QWORD *)a1 + 13), 295LL, a3, 0LL);
                  ThreadUnlock1(v165, v164, v166);
                  goto LABEL_27;
                }
                updated = (HICON)xxxSendMessage(a1, 296LL, a3, 0LL);
                goto LABEL_74;
              }
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
              {
                v156 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                v158 = 3;
                a3 = v156 | 0x30000;
                goto LABEL_372;
              }
LABEL_375:
              LOWORD(v156) = v201;
              v158 = (__int16)v198;
              goto LABEL_372;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v160 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v160 & 0x20) == 0 && v160 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                  goto LABEL_375;
                LOWORD(v157) = (_WORD)v198;
                LOWORD(v156) = v201;
              }
            }
            v158 = v157 & 0xFFFC;
            goto LABEL_372;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v167 = *((_QWORD *)a1 + 13);
          v168 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v202 = *(_QWORD *)(v168 + 416);
          *(_QWORD *)(v168 + 416) = &v202;
          *((_QWORD *)&v202 + 1) = v167;
          HMLockObject(v167);
          v169 = 282LL;
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_13;
          v170 = *((_QWORD *)a1 + 13);
          v171 = *(_QWORD *)(*(_QWORD *)(v170 + 16) + 424LL);
          v172 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
          v198 = v172;
          if ( (struct tagPROCESSINFO *)v171 != v172 )
          {
            BytesInMultiByteString = IsMessageAllowedAcrossILByReceiver(
                                       v172,
                                       (void *const **)v171,
                                       (struct tagWND *)v170,
                                       0x119u,
                                       a3,
                                       a4,
                                       1);
            if ( !BytesInMultiByteString )
            {
              v201 = *(_QWORD *)v171 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v171 + 880);
              v173 = CheckAccess((char *)v172 + 880, &v201);
              BytesInMultiByteString = v173;
              if ( v173 )
              {
                if ( (unsigned __int8)Enforced() )
                  v174 = 5;
                else
                  v174 = 1;
                MSGSQMAddMessage(v198, (struct tagPROCESSINFO *)v171, 0x119u, a3, a4, 1, v174);
              }
            }
            if ( !BytesInMultiByteString )
            {
              EtwTraceUIPIMsgError(v198, v171, 281LL, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage(v198, (struct tagPROCESSINFO *)v171, 0x119u, a3, a4, 1, 0);
              goto LABEL_13;
            }
          }
          v175 = *((_QWORD *)a1 + 13);
          v176 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v202 = *(_QWORD *)(v176 + 416);
          *(_QWORD *)(v176 + 416) = &v202;
          *((_QWORD *)&v202 + 1) = v175;
          HMLockObject(v175);
          v169 = 281LL;
        }
LABEL_462:
        v93 = xxxSendMessage(*((_QWORD *)a1 + 13), v169, a3, a4);
LABEL_463:
        v24 = v93;
        ThreadUnlock1(v95, v94, v96);
        goto LABEL_37;
      }
      if ( a2 == 297 )
      {
        v178 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
        return ((v178 & 0x40 | ((unsigned __int64)v178 >> 2)) >> 5) | v178 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v177 = 4816LL;
LABEL_421:
          GreSetBkColor((HDC)a3);
          GreSetTextColor((HDC)a3);
          v24 = *(_QWORD *)(v177 + gpsi);
          goto LABEL_37;
        }
        goto LABEL_416;
      }
LABEL_414:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v177 = 4816LL;
        goto LABEL_421;
      }
LABEL_416:
      v177 = 4736LL;
      goto LABEL_421;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand(a1);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
        goto LABEL_89;
      if ( a2 == 164 )
      {
        memset(v212, 0, sizeof(v212));
        v213 = 0LL;
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture((__int64)a1);
        while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v212, 0, 512, 526, 1, 0) || DWORD2(v212[0]) != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)
            || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v131 = WORD2(v213) | (WORD4(v213) << 16);
        v132 = FindNCHit(a1, v131);
        if ( ((v132 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v115 = (_BYTE *)*((_QWORD *)a1 + 5);
        if ( (v115[234] & 0x20) != 0 )
        {
          if ( v132 == 2 )
            goto LABEL_443;
          if ( v132 == 3 )
          {
LABEL_268:
            v120 = 61536;
LABEL_444:
            xxxGetSysMenu(a1);
            v200 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v199);
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v199) )
              goto LABEL_13;
            if ( gihmodUserApiHook >= 0 )
            {
              v187 = v200;
              if ( !v200 )
                v187 = *(_QWORD *)v199[0];
              MNClearCachedPopupSizes(v187);
            }
            v188 = v200;
            if ( !v200 )
              v188 = *(_QWORD *)v199[0];
            SetMenuDefaultItem(v188, v120, 0LL);
            PostShellHookMessagesEx(9uLL, *(_QWORD *)a1, 0LL);
            v189 = v200;
            if ( !v200 )
              v189 = *(_QWORD *)v199[0];
            v190 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v211[0] = *(_QWORD *)(v190 + 416);
            *(_QWORD *)(v190 + 416) = v211;
            v211[1] = v189;
            HMLockObject(v189);
            if ( a4 == 0xFFFFFFFF )
            {
              v44 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v217 = 0LL;
                v216 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v217) )
                  xxxTrackPopupMenuEx(v199, 576LL, (unsigned int)v217, DWORD1(v217), a1, &v216);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v199, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_111;
          }
        }
        v133 = *(_QWORD *)a1;
        _InterlockedAdd(&glSendMessage, 1u);
        v134 = v131;
        goto LABEL_412;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar((_DWORD)a1, DCEx);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame((__int64)a1, (HDC)a3, a4);
          goto LABEL_13;
        }
        if ( a2 != 256 )
          goto LABEL_13;
        if ( a3 == 27 )
        {
          if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
            goto LABEL_13;
          Host = CoreWindowProp::GetHost(a1);
          if ( !Host )
            goto LABEL_13;
          TopLevelWindow = GetTopLevelWindow((__int64)Host);
          if ( !TopLevelWindow )
            goto LABEL_13;
          v124 = a4;
          v125 = 256;
          v126 = 27;
          v127 = TopLevelWindow;
          goto LABEL_307;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v128 = *(_QWORD *)(gptiCurrent + 432LL);
        goto LABEL_351;
      }
LABEL_280:
      v129 = 0;
      if ( WORD1(a3) == 1 )
      {
        v129 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        v129 = 2;
        goto LABEL_425;
      }
      if ( !v129 )
        goto LABEL_13;
LABEL_425:
      v182 = v129 | 0x8000;
      if ( a2 != 524 )
        LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
      xxxSendMessage(a1, 793LL, *(_QWORD *)a1, (unsigned __int16)a3 | ((unsigned __int64)v182 << 16));
      goto LABEL_13;
    }
    v54 = a2 - 260;
    if ( !v54 )
    {
      v151 = a4 >> 16;
      if ( (v151 & 0x2000) != 0 )
      {
        if ( (v151 & 0x4000) == 0 )
        {
          v152 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( a3 != 18 || (v153 = *(_DWORD *)(v152 + 388), (v153 & 8) != 0) )
          {
            *(_DWORD *)(v152 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v152 + 388) = v153 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x10u;
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) && (_DWORD)a3 == 115 )
          WindowManagementExtended::xxxCloseApplication(gptiCurrent, v8);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v128 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_351:
      *(_DWORD *)(v128 + 388) |= 0x10u;
      if ( (_GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v133 = *(_QWORD *)a1;
      _InterlockedAdd(&glSendMessage, 1u);
      v134 = -1;
      goto LABEL_412;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
LABEL_89:
      if ( a3 == 18
        && (v52 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL), (v52 & 0x80u) == 0)
        && (v52 & 0xC) == 8
        || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x10) != 0 )
      {
        NonChildAncestor = (struct tagWND *)GetNonChildAncestor(a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          *(_QWORD *)&v205 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v205;
          *((_QWORD *)&v205 + 1) = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((int)NonChildAncestor, 274, 61696, 0, 0, 0, 0LL, 1, 0);
          ThreadUnlock1(v149, v148, v150);
        }
      }
      if ( a3 == 18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v135 = v55 - 1;
    if ( v135 )
    {
      if ( v135 != 3 || a3 == 0xFFFF )
        goto LABEL_13;
      v124 = a4;
      v126 = a3;
      v125 = 258;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFF3;
      if ( a3 != 13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
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
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            v111 = *((_QWORD *)a1 + 13);
            *(_QWORD *)&v202 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v202;
            *((_QWORD *)&v202 + 1) = v111;
            HMLockObject(v111);
            v109 = 262LL;
            v108 = 32LL;
            v110 = (struct tagWND *)*((_QWORD *)a1 + 13);
            goto LABEL_254;
          }
          v136 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
          if ( v136 )
          {
            v137 = 0;
            v138 = *(_DWORD *)(v136[5] + 236);
            if ( v138 >= 8 && (v138 <= 11 || v138 == 13) )
              v137 = 1;
            if ( v137 )
            {
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x21u, *v136);
              goto LABEL_13;
            }
          }
        }
        if ( a3 != 32
          || (v139 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) == 0LL
          || !(unsigned int)IsCompositionInputWindow(v139) )
        {
          _InterlockedAdd(&glSendMessage, 1u);
          v134 = a3;
          LODWORD(v133) = 61696;
          v146 = 274;
LABEL_413:
          xxxSendTransformableMessageTimeout((int)a1, v146, v133, v134, 0, 0, 0LL, 1, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v141 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v141 )
          goto LABEL_13;
        v210[2] = 0LL;
        v142 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v210[0] = *(_QWORD *)(v142 + 416);
        *(_QWORD *)(v142 + 416) = v210;
        v210[1] = v141;
        HMLockObject(v141);
        xxxForceForegroundWindowNoRestoreFocus(v141, 0LL);
        if ( !ThreadUnlock1(v144, v143, v145) )
          goto LABEL_13;
        v124 = 32;
        v126 = 61696;
        v125 = 274;
        v127 = v141;
LABEL_307:
        PostMessage(v127, v125, v126, v124);
        goto LABEL_13;
      }
      v124 = 0;
      v126 = 61728;
      v125 = 274;
    }
    v127 = (int)a1;
    goto LABEL_307;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3, a4);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      v76 = HotKeyHelper(a1);
      v77 = 0;
      if ( *v76 )
        v77 = *((_DWORD *)*v76 + 2);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
      return v77;
    }
    if ( a2 <= 0x18 )
    {
      if ( a2 == 24 )
      {
        if ( !(_WORD)a4 )
          goto LABEL_13;
        v67 = *((_QWORD *)a1 + 5);
        if ( (((*(_BYTE *)(v67 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
          goto LABEL_13;
        v68 = *(_BYTE *)(v67 + 31) & 0x10;
        if ( a3 )
        {
          if ( v68 || (*(_BYTE *)(v67 + 17) & 0x40) == 0 )
            goto LABEL_13;
        }
        else if ( !v68 )
        {
          goto LABEL_13;
        }
        SetOrClrWF(0LL, a1, 320LL, 1LL);
        if ( !a3 )
          SetOrClrWF(1LL, a1, 320LL, 1LL);
        xxxShowWindowEx(a1, a3 != 0 ? 4 : 0, gdwPUDFlags & 0x10000);
        goto LABEL_13;
      }
      if ( a2 == 15 )
        goto LABEL_79;
      if ( a2 <= 0xF )
      {
        v32 = a2 - 6;
        if ( !v32 )
        {
          if ( a3 )
            xxxSetFocus(a1);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
            goto LABEL_13;
          v41 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1400LL);
          if ( !v41 )
            goto LABEL_13;
          v209[2] = 0LL;
          v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v209[0] = *(_QWORD *)(v42 + 416);
          *(_QWORD *)(v42 + 416) = v209;
          v209[1] = v41;
          HMLockObject(v41);
          xxxSendNotifyMessage(v41, 0x349u, a3, 0LL, 0);
          goto LABEL_111;
        }
        v33 = v32 - 5;
        if ( !v33 )
        {
          xxxDWP_SetRedraw(a1, a3 != 0);
          goto LABEL_13;
        }
        v34 = v33 - 1;
        if ( v34 )
        {
          v39 = v34 - 1;
          if ( v39 )
          {
            if ( v39 != 1 )
              goto LABEL_13;
            v56 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            if ( !v56 )
              goto LABEL_13;
            BytesInMultiByteString = 0;
            if ( a4 )
            {
              RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 23), v56);
              v57 = BytesInMultiByteString;
            }
            else
            {
              v57 = v56 >> 1;
              BytesInMultiByteString = v57;
            }
            v24 = v57;
            goto LABEL_37;
          }
          if ( !a3 )
            goto LABEL_13;
          if ( *((_QWORD *)a1 + 23) )
          {
            v214 = 0LL;
            StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (struct tagWND *)((char *)a1 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v214);
            DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
          }
          v59 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
          v60 = (_QWORD *)(a4 + 8);
          v61 = *(_DWORD *)(a4 + 4);
          if ( !v59 )
          {
            v66 = (_WORD *)*v60;
            if ( v61 >= 0 )
              *v66 = 0;
            else
              *(_BYTE *)v66 = 0;
            goto LABEL_13;
          }
          v62 = (struct tagWND *)((char *)a1 + 184);
          if ( v61 >= 0 )
          {
            v215 = 0LL;
            v65 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v62, (struct _LARGE_UNICODE_STRING *)&v215);
            v64 = TextCopy(v65, *v60, (unsigned int)a3);
            v63 = 2 * v64;
          }
          else
          {
            v63 = WCSToMBEx(0LL, *(_QWORD *)v62, v59 >> 1, a4 + 8, (v61 & 0x7FFFFFFFu) - 1);
            v64 = v63;
            *(_BYTE *)(v63 + *v60) = 0;
          }
          *(_DWORD *)a4 = v63;
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
          return v64;
        }
        else
        {
          v35 = DefSetText(a1, (unsigned int *)a4);
          v36 = v35;
          if ( v35 )
          {
            xxxRedrawTitle(a1, 8LL);
            xxxWindowEvent(0x800Cu, 0);
          }
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
          return v36;
        }
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
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
          v20 = a2 - 25;
          if ( v20 )
          {
            v21 = v20 - 6;
            if ( !v21 )
            {
              xxxDWP_DoCancelMode(a1);
              goto LABEL_13;
            }
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                v69 = *((_QWORD *)a1 + 13);
              else
                v69 = 0LL;
              if ( !v69
                || (v70 = W32GetThreadWin32Thread(KeGetCurrentThread()),
                    *(_QWORD *)&v205 = *(_QWORD *)(v70 + 416),
                    *(_QWORD *)(v70 + 416) = &v205,
                    *((_QWORD *)&v205 + 1) = v69,
                    HMLockObject(v69),
                    v24 = xxxSendMessage(v69, 33LL, a3, a4),
                    ThreadUnlock1(v72, v71, v73),
                    !v24) )
              {
                if ( (_WORD)a4 != 2 || (v74 = 3LL, WORD1(a4) != 513) )
                  v74 = 1LL;
                v24 = v74;
              }
              goto LABEL_37;
            }
            v23 = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
            goto LABEL_36;
          }
          goto LABEL_416;
        }
LABEL_79:
        xxxDWP_Paint(a1);
        goto LABEL_13;
      }
      if ( a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v75 = *(_DWORD *)(a4 + 12);
          if ( v75 == 4 || v75 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
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
          v24 = -1LL;
          goto LABEL_37;
        }
        if ( a2 != 50 )
          goto LABEL_13;
        TitleBarInfo = DWP_SetHotKey(a1, a3);
        goto LABEL_26;
      }
    }
    v23 = xxxDWP_EraseBkgnd(a1, a2, a3);
    goto LABEL_36;
  }
  if ( a2 > 0x55 )
  {
    v10 = a2 - 123;
    if ( v10 )
    {
      v11 = v10 - 4;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 2;
            if ( !v14 )
            {
              xxxCalcClientRect(a1, a4, 0LL);
              goto LABEL_13;
            }
            v28 = v14 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( !v29 )
              {
                SetOrClrWF(1LL, a1, 384LL, 1LL);
                v30 = (HDC)_GetDCEx(a1, a3, 328833LL);
                v31 = 0;
                if ( v30 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v31 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground;
                  xxxDrawWindowFrame((__int64)a1, v30, v31);
                  _ReleaseDC(v30);
                }
                SetOrClrWF(0LL, a1, 384LL, 1LL);
                goto LABEL_13;
              }
              v37 = v29 - 1;
              if ( v37 )
              {
                if ( v37 == 2 )
                {
                  SetOrClrWF(0LL, a1, 640LL, 1LL);
                  xxxInternalDoSyncPaint((__int64)a1, a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_63;
            }
            v23 = FindNCHit(a1, (unsigned int)a4);
LABEL_36:
            v24 = v23;
LABEL_37:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
            return v24;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 && !InitPwSB(a1) )
            goto LABEL_13;
          if ( a4 )
          {
            v16 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v17 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_63:
              v24 = 1LL;
              goto LABEL_37;
            }
            if ( *(int *)(a4 + 84) < 0 )
            {
              if ( *v16 && *v17 == 0xFF )
                goto LABEL_22;
            }
            else if ( *v16 >= 2u && *(_WORD *)v17 == 0xFFFF )
            {
LABEL_22:
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
              return 1LL;
            }
          }
          SetOrClrWF(1LL, a1, 514LL, 1LL);
          TitleBarInfo = DefSetText(a1, (unsigned int *)(a4 + 80));
          goto LABEL_26;
        }
        updated = xxxDWP_SetIcon(a1, a3, (HICON)a4);
      }
      else
      {
        updated = (HICON)DWP_GetIcon(a1, (unsigned int)a3);
      }
LABEL_74:
      v19 = (unsigned __int64)updated;
      goto LABEL_27;
    }
    v114 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v114 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), a1) )
        xxxDoScrollMenu(a1, 0LL, v121 - 6);
      goto LABEL_13;
    }
    v115 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( (v115[31] & 0xC0) == 0x40 )
    {
      v116 = *((_QWORD *)a1 + 13);
      v117 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v202 = *(_QWORD *)(v117 + 416);
      *(_QWORD *)(v117 + 416) = &v202;
      *((_QWORD *)&v202 + 1) = v116;
      HMLockObject(v116);
      v118 = *(_QWORD *)a1;
      v119 = 123;
LABEL_435:
      v186 = *((_QWORD *)a1 + 13);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v186, v119, v118, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_111;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      goto LABEL_13;
    if ( v114 != 2 )
    {
      if ( v114 != 3 )
      {
        if ( a4 == -1LL && (v115[21] & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_268;
    }
LABEL_443:
    v120 = (v115[31] & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_444;
  }
  if ( a2 != 85 )
  {
    if ( a2 <= 0x4D )
    {
      if ( a2 == 77 )
      {
        ContextHelpId = GetContextHelpId(a1);
        xxxSendHelpMessage((int)a1, ContextHelpId);
        goto LABEL_13;
      }
      v25 = a2 - 53;
      if ( !v25 )
      {
        v19 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_27;
      }
      v26 = v25 - 6;
      if ( !v26 )
      {
        v23 = xxxClientShutdown((__int64)a1, a3);
        goto LABEL_36;
      }
      v27 = v26 - 11;
      if ( !v27 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
          xxxAdjustSize(a1);
        goto LABEL_13;
      }
      v40 = v27 - 1;
      if ( !v40 )
      {
        v49 = *(_DWORD *)(a4 + 32);
        if ( (v49 & 0x1000) == 0 )
        {
          v198 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 5) + 104LL);
          DesktopWindow = GetDesktopWindow((__int64)a1);
          if ( v81 != DesktopWindow )
          {
            v82 = *(_QWORD *)(v81 + 40);
            LODWORD(v198) = v79 - *(_DWORD *)(v82 + 104);
            HIDWORD(v198) = v80 - *(_DWORD *)(v82 + 108);
          }
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (int)a1,
            3,
            0,
            (unsigned __int16)v198 | (WORD2(v198) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v49 = *(_DWORD *)(a4 + 32);
        }
        if ( (v49 & 0x8800) != 0x800 )
        {
          v83 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v83 & 0x20) != 0 )
          {
            v84 = 1;
            v85 = a1;
          }
          else
          {
            v86 = (v83 & 1) == 0;
            v85 = a1;
            if ( v86 )
              v84 = 0;
            else
              v84 = 2;
          }
          xxxSendSizeMessage((__int64)v85, v84);
        }
        goto LABEL_13;
      }
      if ( v40 == 2 )
      {
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
        goto LABEL_74;
      }
LABEL_13:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
      return 0LL;
    }
    v88 = a2 - 79;
    if ( !v88 )
    {
      if ( !ValidateHwnd(a3) )
        goto LABEL_13;
      goto LABEL_63;
    }
    v89 = v88 - 1;
    if ( v89 )
    {
      v90 = v89 - 1;
      if ( !v90 )
      {
        v207 = 0LL;
        v208 = 0LL;
        v97 = BuildHwndList(*((struct tagWND **)a1 + 14), 2, 0LL);
        v99 = v97;
        if ( v97 )
        {
          v100 = (_QWORD *)((char *)v97 + 32);
          v101 = *((_QWORD *)v97 + 4);
          if ( v101 != 1 )
          {
            do
            {
              LOBYTE(v98) = 1;
              v198 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v101, v98);
              if ( v198 )
              {
                v102 = W32GetThreadWin32Thread(KeGetCurrentThread());
                *(_QWORD *)&v207 = *(_QWORD *)(v102 + 416);
                *(_QWORD *)(v102 + 416) = &v207;
                *((_QWORD *)&v207 + 1) = v198;
                HMLockObject(v198);
                xxxSendMessage(v198, 81LL, a3, a4);
                ThreadUnlock1(v104, v103, v105);
              }
              v101 = *++v100;
            }
            while ( *v100 != 1LL );
          }
          FreeHwndList(v99);
          goto LABEL_13;
        }
        v24 = 0LL;
        goto LABEL_37;
      }
      if ( v90 != 2 )
        goto LABEL_13;
      v91 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 13) : *((_QWORD *)a1 + 15);
      if ( !v91 || v91 == GetThreadDesktopWindow(0LL) )
        goto LABEL_13;
      v92 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v205 = *(_QWORD *)(v92 + 416);
      *(_QWORD *)(v92 + 416) = &v205;
      *((_QWORD *)&v205 + 1) = v91;
      HMLockObject(v91);
      _InterlockedAdd(&glSendMessage, 1u);
      v93 = xxxSendTransformableMessageTimeout(v91, 83, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_463;
    }
    v106 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( !v106 || v106 == a1 || **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 904LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL);
      goto LABEL_13;
    }
    v107 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v205 = *(_QWORD *)(v107 + 416);
    *(_QWORD *)(v107 + 416) = &v205;
    *((_QWORD *)&v205 + 1) = v106;
    HMLockObject(v106);
    v108 = a3;
    v109 = 80LL;
    v110 = v106;
LABEL_254:
    xxxSendMessage(v110, v109, v108, a4);
LABEL_111:
    ThreadUnlock1(v44, v43, v45);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v113 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v199);
  return 2LL - ((v113 & 0x20) != 0);
}
