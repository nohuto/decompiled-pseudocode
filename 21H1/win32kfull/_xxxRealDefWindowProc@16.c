/*
 * XREFs of _xxxRealDefWindowProc@16 @ 0x3D3F2
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     ?xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x3D2F0 (-xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     ?xxxDWP_Paint@@YGXPAUtagWND@@@Z @ 0x1246C (-xxxDWP_Paint@@YGXPAUtagWND@@@Z.c)
 *     ?xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z @ 0x13876 (-xxxDWP_SetIcon@@YGPAUHICON__@@PAUtagWND@@IPAU1@@Z.c)
 *     _xxxLoadUserApiHook@0 @ 0x16798 (_xxxLoadUserApiHook@0.c)
 *     _xxxRedrawTitle@8 @ 0x17084 (_xxxRedrawTitle@8.c)
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z @ 0x1D702 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QBEPAU_LARGE_UNICODE_STRING@@AAU3@@Z.c)
 *     _DesktopVerifyHeapLargeUnicodeString@8 @ 0x1D74A (_DesktopVerifyHeapLargeUnicodeString@8.c)
 *     _TextCopy@12 @ 0x1D7C6 (_TextCopy@12.c)
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x26218 (-GetTopLevelHostForComponent@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2 (--9-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _xxxSendTransformableMessage@20 @ 0x2D496 (_xxxSendTransformableMessage@20.c)
 *     _xxxAdjustSize@12 @ 0x2D59A (_xxxAdjustSize@12.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@XZ @ 0x3EE60 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z @ 0x43794 (-xxxDWP_SetCursor@@YGHPAUtagWND@@PAUHWND__@@HI@Z.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     __IsDescendant@8 @ 0x72F90 (__IsDescendant@8.c)
 *     _DWP_SetHotKey@8 @ 0x730DE (_DWP_SetHotKey@8.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     __GetProcessWindowStation@4 @ 0xA1FCA (__GetProcessWindowStation@4.c)
 *     _GetAppCompatFlags2@4 @ 0xA3AF6 (_GetAppCompatFlags2@4.c)
 *     _xxxDWP_EraseBkgnd@12 @ 0xA4032 (_xxxDWP_EraseBkgnd@12.c)
 *     _xxxDWP_UpdateUIState@12 @ 0xA50F8 (_xxxDWP_UpdateUIState@12.c)
 *     _IsInsideUserApiHook@0 @ 0xA6D30 (_IsInsideUserApiHook@0.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _DWP_GetIcon@8 @ 0xA9716 (_DWP_GetIcon@8.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBEPAUtagMENU@@XZ @ 0xAAD18 (--B-$SmartObjStackRef@UtagMENU@@@@QBEPAUtagMENU@@XZ.c)
 *     _xxxHandleWindowPosChanged@8 @ 0xAB7B6 (_xxxHandleWindowPosChanged@8.c)
 *     ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4 (-xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0xAEC26 (--9-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _xxxGetSysMenu@8 @ 0xB9DDC (_xxxGetSysMenu@8.c)
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     _xxxDWP_ProcessVirtKey@4 @ 0xC5870 (_xxxDWP_ProcessVirtKey@4.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QBEKXZ @ 0xC5932 (--B-$SmartObjStackRef@UtagMENU@@@@QBEKXZ.c)
 *     ?DWP_DrawItem@@YGXPAUtagDRAWITEMSTRUCT@@@Z @ 0xC593E (-DWP_DrawItem@@YGXPAUtagDRAWITEMSTRUCT@@@Z.c)
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxClientShutdown@8 @ 0xD0CA6 (_xxxClientShutdown@8.c)
 *     _xxxSleepThread@16 @ 0xEFFA2 (_xxxSleepThread@16.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _ClrWF@8 @ 0x140084 (_ClrWF@8.c)
 *     _SetWF@8 @ 0x1401CD (_SetWF@8.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QBEEABG@Z @ 0x141580 (--9-$RedirectedFieldatomClassName@G@tagCLS@@QBEEABG@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D (-xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z @ 0x141923 (-xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QAEAAV0@QAUtagMENU@@@Z @ 0x1433E2 (--4-$SmartObjStackRef@UtagMENU@@@@QAEAAV0@QAUtagMENU@@@Z.c)
 *     _PostIAMShellHookMessage@8 @ 0x145C2C (_PostIAMShellHookMessage@8.c)
 *     _xxxSimulateShiftF10@0 @ 0x1465FC (_xxxSimulateShiftF10@0.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     __GetWindowDC@4 @ 0x154393 (__GetWindowDC@4.c)
 *     _GetCurrentThreadDesktopWindow@0 @ 0x16F3A6 (_GetCurrentThreadDesktopWindow@0.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     _xxxSetCapture@4 @ 0x18772B (_xxxSetCapture@4.c)
 *     _SfnCOPYGLOBALDATA@32 @ 0x18A2D8 (_SfnCOPYGLOBALDATA@32.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 *     _InImmersiveApplicationBand@4 @ 0x1A1E1A (_InImmersiveApplicationBand@4.c)
 *     _xxxDefPointerProc@16 @ 0x1A1EB4 (_xxxDefPointerProc@16.c)
 *     _DWP_GetHotKey@4 @ 0x1A2502 (_DWP_GetHotKey@4.c)
 *     _xxxDoScrollMenu@16 @ 0x1A370F (_xxxDoScrollMenu@16.c)
 *     _xxxGetTitleBarInfoEx@8 @ 0x1A70D8 (_xxxGetTitleBarInfoEx@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _MNClearCachedPopupSizes@4 @ 0x1AB7D1 (_MNClearCachedPopupSizes@4.c)
 *     _xxxSendHelpMessage@20 @ 0x1ACB94 (_xxxSendHelpMessage@20.c)
 *     _WCSToMBEx@24 @ 0x1B73F3 (_WCSToMBEx@24.c)
 *     _GetContextHelpId@4 @ 0x1B98AF (_GetContextHelpId@4.c)
 */

unsigned int __fastcall xxxRealDefWindowProc(_DWORD *a1, ULONG a2, HDC a3, struct tagWND *a4)
{
  ULONG v6; // esi
  ULONG v7; // esi
  ULONG v8; // esi
  ULONG v9; // esi
  ULONG v10; // edi
  ULONG v11; // edi
  HDC v12; // edx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v13; // ecx
  unsigned int *StrName; // eax
  unsigned int v15; // edi
  struct tagWND *v16; // esi
  int v17; // eax
  int v18; // eax
  struct _LARGE_UNICODE_STRING *v19; // eax
  _WORD *v20; // ecx
  HDC v21; // edi
  int v22; // esi
  PKTHREAD v23; // eax
  int v24; // eax
  struct tagWND *Icon; // eax
  int v26; // edx
  char v27; // cl
  char v28; // al
  HDC v29; // esi
  ULONG v30; // esi
  ULONG v31; // esi
  ULONG v32; // esi
  _DWORD *v33; // ebx
  PKTHREAD v34; // eax
  int v35; // eax
  ULONG v36; // esi
  ULONG v37; // esi
  ULONG v38; // esi
  ULONG v39; // esi
  int updated; // eax
  int v41; // esi
  int v42; // esi
  int v43; // esi
  int ContextHelpId; // eax
  ULONG v45; // esi
  ULONG v46; // esi
  ULONG v47; // esi
  _DWORD *v48; // ebx
  PKTHREAD v49; // eax
  int v50; // eax
  int v51; // eax
  _DWORD *v52; // eax
  unsigned int v53; // eax
  HDC v54; // edi
  struct tagWND *v55; // esi
  PKTHREAD v56; // eax
  int v57; // eax
  _DWORD *v58; // esi
  PKTHREAD v59; // eax
  int v60; // eax
  int ProcessWindowStation; // eax
  BOOL v62; // ebx
  struct tagWND *v64; // esi
  _DWORD *v65; // eax
  _WORD *v66; // edx
  int DCEx; // esi
  BOOL v68; // eax
  struct tagWND *v69; // edi
  int v70; // eax
  int v71; // esi
  _BYTE *v72; // ecx
  int v73; // esi
  PKTHREAD v74; // eax
  int v75; // eax
  struct tagWND *Host; // eax
  int v77; // eax
  int v78; // eax
  int WindowDC; // esi
  __int16 v80; // di
  unsigned __int16 MouseKeyFlags; // ax
  int NCHit; // eax
  int v83; // eax
  ULONG v84; // esi
  ULONG v85; // esi
  ULONG v86; // esi
  ULONG v87; // edx
  HDC v88; // esi
  struct tagWND *v89; // edi
  int v90; // ecx
  _DWORD *v91; // ecx
  ULONG v92; // esi
  struct tagWND *CompositionInputWindowUIOwner; // edi
  int TopLevelWindow; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  HDC v97; // esi
  int v98; // eax
  _DWORD *NonChildAncestor; // ecx
  WindowManagementExtended *v100; // edi
  int v101; // eax
  int v102; // ecx
  int v103; // edx
  struct tagWND *v104; // edi
  HDC v105; // esi
  unsigned __int8 v106; // al
  char v107; // al
  int v108; // esi
  PKTHREAD v109; // eax
  int v110; // eax
  int v111; // ebx
  HDC v112; // edi
  unsigned __int16 v113; // dx
  unsigned int v114; // ecx
  int v115; // esi
  int v116; // eax
  int v117; // eax
  char AppCompatFlags2; // al
  int v119; // esi
  PKTHREAD v120; // eax
  int v121; // eax
  unsigned __int8 v122; // bl
  ULONG v123; // esi
  ULONG v124; // esi
  ULONG v125; // esi
  int v126; // esi
  PKTHREAD v127; // eax
  int v128; // eax
  int v129; // ecx
  unsigned __int16 v130; // ax
  int v131; // eax
  unsigned __int16 v132; // di
  struct tagWND *v133; // eax
  int SysMenu; // eax
  int v135; // eax
  int v136; // esi
  PKTHREAD v137; // eax
  int v138; // eax
  ULONG v139; // esi
  ULONG v140; // esi
  ULONG v141; // esi
  int v142; // eax
  int v143; // eax
  int v144; // esi
  PKTHREAD v145; // eax
  int v146; // eax
  struct tagWND *v147; // esi
  unsigned int v148; // ecx
  int v149; // edi
  ULONG v150; // eax
  int v151; // ecx
  _DWORD *v152; // ecx
  struct tagWND *v153; // [esp-Ch] [ebp-ACh]
  int v154; // [esp-Ch] [ebp-ACh]
  int v155; // [esp-8h] [ebp-A8h]
  int v156; // [esp-8h] [ebp-A8h]
  int v157; // [esp-4h] [ebp-A4h]
  struct tagWND *v158; // [esp-4h] [ebp-A4h]
  _BYTE *v159; // [esp-4h] [ebp-A4h]
  const struct tagWND *v160; // [esp+0h] [ebp-A0h]
  const struct tagWND *v161; // [esp+0h] [ebp-A0h]
  HICON v162; // [esp+4h] [ebp-9Ch]
  _DWORD v163[7]; // [esp+10h] [ebp-90h] BYREF
  int v164; // [esp+30h] [ebp-70h] BYREF
  _DWORD *v165; // [esp+34h] [ebp-6Ch]
  int v166; // [esp+38h] [ebp-68h]
  int v167; // [esp+3Ch] [ebp-64h] BYREF
  ULONG v168; // [esp+40h] [ebp-60h]
  int v169; // [esp+44h] [ebp-5Ch]
  _BYTE v170[12]; // [esp+48h] [ebp-58h] BYREF
  int v171; // [esp+54h] [ebp-4Ch] BYREF
  int v172; // [esp+58h] [ebp-48h]
  int v173; // [esp+5Ch] [ebp-44h]
  _DWORD *v174; // [esp+60h] [ebp-40h]
  ULONG BytesInMultiByteString; // [esp+64h] [ebp-3Ch] BYREF
  struct tagWND *v176; // [esp+68h] [ebp-38h]
  HDC v177; // [esp+6Ch] [ebp-34h]
  int v178; // [esp+70h] [ebp-30h] BYREF
  int v179; // [esp+74h] [ebp-2Ch] BYREF
  int v180; // [esp+78h] [ebp-28h] BYREF
  int v181; // [esp+7Ch] [ebp-24h] BYREF
  _DWORD *v182; // [esp+80h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+88h] [ebp-18h]

  BytesInMultiByteString = a2;
  v182 = a1;
  v177 = a3;
  v176 = a4;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v170);
  v171 = 0;
  v172 = 0;
  v173 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  if ( a1 == (_DWORD *)-1 || a2 > 0x400 )
    goto LABEL_421;
  if ( a2 > 0xA3 )
  {
    if ( a2 <= 0x136 )
    {
      if ( a2 != 310 )
      {
        if ( a2 <= 0x112 )
        {
          if ( a2 == 274 )
          {
            xxxSysCommand((ULONG_PTR)a1, (int)v176);
            goto LABEL_421;
          }
          if ( a2 > 0x101 )
          {
            v84 = a2 - 260;
            if ( !v84 )
            {
              if ( (((unsigned int)v176 >> 16) & 0x2000) != 0 )
              {
                v100 = (WindowManagementExtended *)v177;
                if ( (((unsigned int)v176 >> 16) & 0x4000) == 0 )
                {
                  v101 = *(_DWORD *)(_gptiCurrent + 236);
                  if ( v177 != (HDC)18 || (v102 = *(_DWORD *)(v101 + 284), (v102 & 8) != 0) )
                  {
                    *(_DWORD *)(v101 + 284) &= 0xFFFFFFF3;
                  }
                  else
                  {
                    *(_DWORD *)(v101 + 284) = v102 | 8;
                    xxxDrawMenuBarUnderlines(a1, 1);
                  }
                }
                *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x10u;
                xxxDWP_ProcessVirtKey(v100);
                goto LABEL_421;
              }
              if ( v177 != (HDC)121 )
                goto LABEL_421;
              v78 = *(_DWORD *)(_gptiCurrent + 236);
LABEL_279:
              *(_DWORD *)(v78 + 284) |= 0x10u;
              if ( (_GetKeyState(16) & 0x8000u) == 0 || (*(_BYTE *)(a1[5] + 13) & 2) == 0 )
                goto LABEL_421;
              v155 = -1;
              goto LABEL_342;
            }
            v85 = v84 - 1;
            if ( v85 )
            {
              v86 = v85 - 1;
              if ( v86 )
              {
                if ( v86 != 3 || v177 == (HDC)0xFFFF )
                  goto LABEL_421;
                v158 = v176;
                v156 = (int)v177;
                v154 = 258;
              }
              else
              {
                v87 = _gptiCurrent;
                BytesInMultiByteString = _gptiCurrent;
                *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= 0xFFFFFFF3;
                v88 = v177;
                if ( v177 != (HDC)13 || (*(_BYTE *)(a1[5] + 23) & 0x20) == 0 )
                {
                  v89 = v176;
                  if ( (((unsigned int)v176 >> 16) & 0x2000) == 0 || !v177 )
                  {
                    if ( v177 != (HDC)27 )
                      xxxMessageBeep(0);
                    goto LABEL_421;
                  }
                  if ( v177 == (HDC)9 || v177 == (HDC)27 )
                    goto LABEL_421;
                  if ( v177 == (HDC)32 )
                  {
                    if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
                    {
                      v90 = a1[14];
                      v171 = *(_DWORD *)(_gptiCurrent + 228);
                      *(_DWORD *)(_gptiCurrent + 228) = &v171;
                      v172 = v90;
                      HMLockObject(v90);
                      xxxSendMessage(0x20u, v89);
                      goto LABEL_337;
                    }
                    if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64) )
                    {
                      if ( InImmersiveApplicationBand() )
                      {
                        PostIAMShellHookMessage(33, *v91);
                        goto LABEL_421;
                      }
                      v87 = BytesInMultiByteString;
                    }
                    if ( *(_DWORD *)(*(_DWORD *)(v87 + 236) + 64) && IsCompositionInputWindow(v160) )
                    {
                      v92 = BytesInMultiByteString;
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v161);
                      if ( CoreWindowProp::IsComponent(*(_DWORD **)(*(_DWORD *)(v92 + 236) + 64)) )
                        CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent();
                      if ( CompositionInputWindowUIOwner )
                      {
                        TopLevelWindow = _GetTopLevelWindow((int)CompositionInputWindowUIOwner);
                        if ( TopLevelWindow )
                        {
                          v169 = 0;
                          CurrentThread = KeGetCurrentThread();
                          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
                          v167 = *(_DWORD *)(ThreadWin32Thread + 228);
                          *(_DWORD *)(ThreadWin32Thread + 228) = &v167;
                          v168 = TopLevelWindow;
                          HMLockObject(TopLevelWindow);
                          xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 0);
                          if ( ThreadUnlock1() )
                            _PostMessage(TopLevelWindow, 274, 61696, 32);
                        }
                      }
                      goto LABEL_421;
                    }
                  }
                  xxxSendTransformableMessage(a1, 0xF100u, (int)v88, 0);
                  goto LABEL_421;
                }
                v158 = 0;
                v156 = 61728;
                v154 = 274;
              }
              _PostMessage(a1, v154, v156, v158);
              goto LABEL_421;
            }
          }
          else if ( a2 != 257 )
          {
            if ( a2 != 164 )
            {
              if ( a2 != 172 )
              {
                if ( a2 == 174 )
                {
                  WindowDC = _GetWindowDC(a1);
                  xxxDrawCaptionBar((struct tagVWPL **)a1, (int)v177);
                  _ReleaseDC(WindowDC);
                  goto LABEL_421;
                }
                if ( a2 == 175 )
                {
                  xxxDrawWindowFrame((struct tagVWPL **)a1, v176);
                  goto LABEL_421;
                }
                if ( a2 != 256 )
                  goto LABEL_421;
                if ( v177 == (HDC)27 )
                {
                  if ( CoreWindowProp::IsComponent(a1) )
                  {
                    Host = CoreWindowProp::GetHost(v160);
                    if ( Host )
                    {
                      v77 = _GetTopLevelWindow((int)Host);
                      if ( v77 )
                        _PostMessage(v77, 256, 27, v176);
                    }
                  }
                  goto LABEL_421;
                }
                if ( v177 != (HDC)121 )
                  goto LABEL_421;
                v78 = *(_DWORD *)(_gptiCurrent + 236);
                goto LABEL_279;
              }
LABEL_199:
              v80 = 0;
              MouseKeyFlags = (unsigned __int16)v177;
              if ( (unsigned int)v177 >> 16 == 1 )
              {
                v80 = 1;
              }
              else if ( (unsigned int)v177 >> 16 == 2 )
              {
                v80 = 2;
                goto LABEL_354;
              }
              if ( !v80 )
                goto LABEL_421;
LABEL_354:
              v132 = v80 | 0x8000;
              if ( a2 != 524 )
                MouseKeyFlags = GetMouseKeyFlags(*(_DWORD *)(_gptiCurrent + 236));
              xxxSendMessage(*a1, MouseKeyFlags | (v132 << 16));
              goto LABEL_421;
            }
            memset(v163, 0, sizeof(v163));
            v182 = (_DWORD *)_gptiCurrent;
            v69 = v176;
            NCHit = FindNCHit(a1, v176);
            if ( NCHit == 7 || NCHit == 6 )
            {
              if ( !_IsDescendant(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64), a1) )
                goto LABEL_421;
            }
            else if ( NCHit != 2 && NCHit != 3 || a1 != *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 64) )
            {
              goto LABEL_421;
            }
            xxxSetCapture(a1);
            while ( !xxxInternalGetMessage(512, 526, 1, 0) || v163[1] != 517 )
            {
              if ( a1 != *(_DWORD **)(v182[59] + 56) || !xxxSleepThread(1, 0) )
                goto LABEL_421;
            }
            xxxReleaseCapture();
            v182 = (_DWORD *)(LOWORD(v163[5]) | (LOWORD(v163[6]) << 16));
            v83 = FindNCHit(a1, v182);
            if ( v83 != 2 && v83 != 3 && v83 != 7 && v83 != 6 )
              goto LABEL_421;
            v72 = (_BYTE *)a1[5];
            if ( (v72[146] & 0x20) == 0 )
            {
LABEL_223:
              v155 = (int)v182;
LABEL_342:
              xxxSendTransformableMessage(a1, *a1, v155, 0);
              goto LABEL_421;
            }
            if ( v83 != 2 )
            {
              if ( v83 == 3 )
              {
                BytesInMultiByteString = 61536;
LABEL_380:
                v159 = v72;
                SysMenu = xxxGetSysMenu(v72);
                SmartObjStackRef<tagMENU>::operator=(SysMenu);
                if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v159) )
                  goto LABEL_421;
                if ( IsInsideUserApiHook() )
                {
                  v135 = SmartObjStackRef<tagMENU>::operator tagMENU *(v170);
                  MNClearCachedPopupSizes(v135);
                }
                SmartObjStackRef<tagMENU>::operator tagMENU *(v170);
                _SetMenuDefaultItem(0);
                PostShellHookMessages();
                v136 = SmartObjStackRef<tagMENU>::operator unsigned long(v170);
                v137 = KeGetCurrentThread();
                v138 = W32GetThreadWin32Thread(v137);
                v167 = *(_DWORD *)(v138 + 228);
                *(_DWORD *)(v138 + 228) = &v167;
                v168 = v136;
                HMLockObject(v136);
                if ( v69 == (struct tagWND *)-1 )
                {
                  if ( (*(_BYTE *)(_gpsi + 1720) & 8) != 0 )
                  {
                    v179 = 0;
                    v180 = 0;
                    v181 = 0;
                    v182 = 0;
                    v178 = 20;
                    if ( xxxSendMinRectMessages(a1, &v179) )
                      xxxTrackPopupMenuEx(v170, 576, v179, v180, a1, &v178);
                  }
                }
                else
                {
                  xxxTrackPopupMenuEx(v170, 514, (__int16)v69, SHIWORD(v69), a1, 0);
                }
                goto LABEL_337;
              }
              goto LABEL_223;
            }
LABEL_379:
            BytesInMultiByteString = (v72[23] & 0x21) != 0 ? 61728 : 61488;
            goto LABEL_380;
          }
          v97 = v177;
          if ( v177 == (HDC)18
            && (v98 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284), (v98 & 0x80u) == 0)
            && (v98 & 0xC) == 8
            || v177 == (HDC)121 && (*(_BYTE *)(*(_DWORD *)(_gptiCurrent + 236) + 284) & 0x10) != 0 )
          {
            NonChildAncestor = (_DWORD *)GetNonChildAncestor((int)a1);
            v182 = NonChildAncestor;
            if ( (_DWORD *)gspwndFullScreen != NonChildAncestor )
            {
              v164 = *(_DWORD *)(_gptiCurrent + 228);
              *(_DWORD *)(_gptiCurrent + 228) = &v164;
              v165 = NonChildAncestor;
              if ( NonChildAncestor )
                HMLockObject(NonChildAncestor);
              if ( v97 == (HDC)121 )
                xxxDrawMenuBarUnderlines(a1, 1);
              xxxSendTransformableMessage(v182, 0xF100u, 0, 0);
              ThreadUnlock1();
            }
          }
          if ( v97 == (HDC)18 )
          {
            *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x80u;
            xxxDrawMenuBarUnderlines(a1, 0);
          }
          *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= 0xFFFFFFE3;
          goto LABEL_421;
        }
        switch ( a2 )
        {
          case 0x119u:
            if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) != 0x40 )
              goto LABEL_421;
            v103 = a1[14];
            v174 = *(_DWORD **)(*(_DWORD *)(v103 + 8) + 232);
            BytesInMultiByteString = *(_DWORD *)(_gptiCurrent + 232);
            v104 = v176;
            if ( v174 != (_DWORD *)BytesInMultiByteString )
            {
              v105 = v177;
              v176 = (struct tagWND *)IsMessageAllowedAcrossILByReceiver(
                                        (struct tagPROCESSINFO *)v103,
                                        (struct tagPROCESSINFO *)0x119,
                                        (struct tagWND *)v177,
                                        (unsigned int)v176,
                                        1u,
                                        (int)v160,
                                        (int)v162);
              if ( !v176 )
              {
                if ( *v174 == _gpepCSRSS )
                {
                  v181 = 0x2000;
                  v182 = 0;
                }
                else
                {
                  v181 = v174[124];
                  v182 = (_DWORD *)v174[125];
                }
                v106 = CheckAccess(BytesInMultiByteString + 496, &v181);
                v176 = (struct tagWND *)v106;
                if ( !v106
                  || (v107 = Enforced(),
                      MSGSQMAddMessage(BytesInMultiByteString, v174, 281, v105, v104, 1, 4 * (v107 != 0) + 1),
                      !v176) )
                {
                  EtwTraceUIPIMsgError(BytesInMultiByteString, v174, 281, v105, v104);
                  UserSetLastError(5);
                  MSGSQMAddMessage(BytesInMultiByteString, v174, 281, v105, v104, 1, 0);
                  if ( !v176 )
                    goto LABEL_421;
                }
              }
            }
            v108 = a1[14];
            v109 = KeGetCurrentThread();
            v110 = W32GetThreadWin32Thread(v109);
            v171 = *(_DWORD *)(v110 + 228);
            *(_DWORD *)(v110 + 228) = &v171;
            v172 = v108;
            HMLockObject(v108);
            v51 = xxxSendMessage((unsigned int)v177, v104);
            goto LABEL_407;
          case 0x11Au:
            if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
              goto LABEL_406;
            goto LABEL_421;
          case 0x127u:
            v112 = v177;
            v113 = (unsigned __int16)v177;
            BytesInMultiByteString = (unsigned __int16)v177;
            v114 = (unsigned int)v177 >> 16;
            v177 = (HDC)v114;
            v115 = 0;
            if ( (v114 & 0xFFF8) != 0 || v113 > 3u || v176 )
              goto LABEL_421;
            if ( v113 == 3 )
            {
              LOWORD(v114) = 0;
              v177 = 0;
              if ( (char)*_gpsi >= 0 )
              {
                v116 = *(_DWORD *)(_gpsi + 6248);
                if ( (v116 & 0x20) == 0 && v116 < 0 )
                {
                  if ( (GetAppCompatFlags2(1024) & 2) != 0 )
                  {
                    LOWORD(v114) = (_WORD)v177;
                    goto LABEL_314;
                  }
                  v114 = 3;
                  v112 = (HDC)((unsigned __int16)(((*_gpsi & 0x40) != 0) + 1) | 0x30000);
                  BytesInMultiByteString = (unsigned __int16)(((*_gpsi & 0x40) != 0) + 1);
                  goto LABEL_313;
                }
              }
            }
            else if ( (char)*_gpsi < 0
                   || (v117 = *(_DWORD *)(_gpsi + 6248), (v117 & 0x20) != 0)
                   || v117 >= 0
                   || (AppCompatFlags2 = GetAppCompatFlags2(1024), LOWORD(v114) = (_WORD)v177,
                                                                   (AppCompatFlags2 & 2) != 0) )
            {
              v114 &= 0xFFFCu;
LABEL_313:
              v177 = (HDC)v114;
            }
LABEL_314:
            if ( !(_WORD)v114 )
              goto LABEL_421;
            if ( (v114 & 1) != 0 )
              v115 = ((_WORD)BytesInMultiByteString == 1) ^ (*(unsigned __int8 *)(a1[5] + 19) >> 7);
            if ( (v114 & 2) != 0 )
            {
              v115 |= ((_WORD)BytesInMultiByteString == 1) ^ (*(unsigned __int8 *)(a1[5] + 19) >> 6) & 1;
              LOBYTE(v114) = (_BYTE)v177;
            }
            if ( (v114 & 4) != 0 )
              v115 |= ((_WORD)BytesInMultiByteString == 1) ^ (*(unsigned __int8 *)(a1[5] + 19) >> 2) & 1;
            if ( !v115 )
              goto LABEL_421;
            if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
            {
              v119 = a1[14];
              v120 = KeGetCurrentThread();
              v121 = W32GetThreadWin32Thread(v120);
              v171 = *(_DWORD *)(v121 + 228);
              *(_DWORD *)(v121 + 228) = &v171;
              v172 = v119;
              HMLockObject(v119);
              v42 = xxxSendMessage((unsigned int)v112, 0);
              ThreadUnlock1();
              goto LABEL_154;
            }
            updated = xxxSendMessage((unsigned int)v112, 0);
            goto LABEL_134;
          case 0x128u:
            updated = xxxDWP_UpdateUIState(v176);
            goto LABEL_134;
          case 0x129u:
            v122 = *(_BYTE *)(a1[5] + 19);
            SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
            return ((unsigned int)(v122 & 0x40 | (v122 >> 2)) >> 5) | v122 & 4;
          case 0x132u:
            goto LABEL_343;
          case 0x133u:
          case 0x134u:
            goto LABEL_345;
          case 0x135u:
            if ( (*(_BYTE *)(a1[5] + 13) & 2) == 0 )
              goto LABEL_345;
            v111 = 4352;
            goto LABEL_350;
          default:
            goto LABEL_421;
        }
      }
      goto LABEL_343;
    }
    if ( a2 <= 0x240 )
    {
      if ( a2 == 576 )
      {
        v133 = v176;
        if ( *(struct tagWND **)(_gptiCurrent + 604) == v176 )
          *(_DWORD *)(_gptiCurrent + 604) = 0;
        _FreeTouchInputInfo(v133, 1);
        goto LABEL_421;
      }
      if ( a2 > 0x20C )
      {
        if ( a2 != 526 )
        {
          if ( a2 <= 0x217 )
            goto LABEL_421;
          if ( a2 <= 0x219 )
            goto LABEL_128;
          if ( a2 == 554 )
          {
            SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
            return 1162627398;
          }
          if ( a2 != 555 )
            goto LABEL_421;
          v41 = *(unsigned __int8 *)(a1[5] + 16) >> 4;
          goto LABEL_98;
        }
      }
      else
      {
        if ( a2 == 524 )
          goto LABEL_199;
        v123 = a2 - 311;
        if ( !v123 )
        {
          if ( *(_WORD *)(_gpsi + 6240) < 8u
            || (v131 = *(_DWORD *)(_gpsi + 4248), v131 != *(_DWORD *)(_gpsi + 4168))
            || v131 == *(_DWORD *)(_gpsi + 4188) )
          {
            GreSetBkColor(v177);
            GreSetTextColor(v177);
            v11 = *(_DWORD *)(_gpsi + 4416);
            goto LABEL_408;
          }
          v111 = 4372;
          goto LABEL_350;
        }
        v124 = v123 - 1;
        if ( !v124 )
        {
LABEL_343:
          if ( (*(_BYTE *)(a1[5] + 13) & 2) == 0 )
          {
LABEL_345:
            v111 = 4312;
            goto LABEL_350;
          }
          v111 = 4352;
LABEL_350:
          GreSetBkColor(v177);
          GreSetTextColor(v177);
          v11 = *(_DWORD *)(v111 + _gpsi);
          goto LABEL_408;
        }
        v125 = v124 - 205;
        if ( !v125 )
        {
          v129 = a1[5];
          if ( (*(_BYTE *)(v129 + 18) & 0x40) != 0 )
            v130 = *(_WORD *)(v129 + 76) - (_WORD)v176;
          else
            v130 = (_WORD)v176 + *(_WORD *)(v129 + 68);
          v155 = ((unsigned __int16)(*(_WORD *)(v129 + 72) + HIWORD(v176)) << 16) | v130;
          goto LABEL_342;
        }
        if ( v125 != 5 )
          goto LABEL_421;
      }
      if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) != 0x40 )
        goto LABEL_421;
      v126 = a1[14];
      v127 = KeGetCurrentThread();
      v128 = W32GetThreadWin32Thread(v127);
      v171 = *(_DWORD *)(v128 + 228);
      *(_DWORD *)(v128 + 228) = &v171;
      v172 = v126;
      HMLockObject(v126);
      xxxSendTransformableMessage((void *)a1[14], (unsigned int)v177, (int)v176, 1);
      goto LABEL_337;
    }
    if ( a2 <= 0x317 )
    {
      if ( a2 == 791 )
      {
        updated = xxxDWPPrint(v176, (HDC)v160, (int)v162);
      }
      else
      {
        if ( a2 > 0x243 )
        {
          if ( a2 <= 0x244 )
            goto LABEL_421;
          if ( a2 > 0x247 )
          {
            if ( a2 <= 0x24D )
              goto LABEL_421;
            if ( a2 > 0x24F )
            {
              if ( a2 != 787
                || (*(_BYTE *)(a1[5] + 23) & 8) != 0
                || *(_DWORD *)(a1[2] + 236) != _gpqForeground && !xxxSetForegroundWindow(v160) )
              {
                goto LABEL_421;
              }
              v169 = 0;
              v72 = (_BYTE *)a1[5];
              v69 = v176;
              goto LABEL_379;
            }
          }
        }
        updated = xxxDefPointerProc((__int16)v177, 0);
      }
LABEL_134:
      v42 = updated;
      goto LABEL_154;
    }
    v139 = a2 - 793;
    if ( v139 )
    {
      v140 = v139 - 2;
      if ( v140 )
      {
        v141 = v140 - 36;
        if ( v141 )
        {
          if ( v141 == 10 && v177 )
          {
            v142 = a1[14];
            v143 = v142 ? *(_DWORD *)(v142 + 8) : 0;
            if ( v143 && *(_DWORD **)(v143 + 800) == a1 )
              xxxSetFocus(a1);
          }
          goto LABEL_421;
        }
        updated = xxxGetTitleBarInfoEx(a1, v176);
      }
      else
      {
        if ( !IsInsideUserApiHook() || (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 )
          goto LABEL_421;
        updated = xxxLoadUserApiHook();
      }
      goto LABEL_134;
    }
    if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
    {
LABEL_406:
      v144 = a1[14];
      v145 = KeGetCurrentThread();
      v146 = W32GetThreadWin32Thread(v145);
      v171 = *(_DWORD *)(v146 + 228);
      *(_DWORD *)(v146 + 228) = &v171;
      v172 = v144;
      HMLockObject(v144);
      v51 = xxxSendMessage((unsigned int)v177, v176);
      goto LABEL_407;
    }
    if ( a1 == (_DWORD *)_GetDesktopWindow(a1) )
      goto LABEL_421;
    v147 = v176;
    if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0 )
    {
      if ( xxxCallHook((int)v176, 0xAu, (int)v160, (int)v162) )
        goto LABEL_421;
    }
    BytesInMultiByteString = _gptiCurrent;
    v148 = *(_DWORD *)(_gptiCurrent + 688);
    v149 = (v148 >> 11) & 1;
    v181 = *(_DWORD *)(_gptiCurrent + 696);
    v182 = *(_DWORD **)(_gptiCurrent + 700);
    if ( (((unsigned int)&loc_3FFFD + 3) & v148) == 0
      || (v150 = BytesInMultiByteString, *(_DWORD **)(BytesInMultiByteString + 796) != a1) )
    {
      if ( !CoreWindowProp::IsComponent(a1) )
      {
LABEL_420:
        PostShellHookMessagesEx(12, (unsigned int)v147, v149 != 0 ? (unsigned int)&v181 : 0);
        goto LABEL_421;
      }
      v150 = BytesInMultiByteString;
    }
    v151 = *(_DWORD *)(v150 + 276);
    if ( v151 )
    {
      v152 = *(_DWORD **)(v151 + 16);
      if ( v152 )
      {
        if ( (v152[172] & 0x800) != 0 )
        {
          v149 = 1;
          v181 = v152[174];
          v182 = (_DWORD *)v152[175];
        }
      }
    }
    goto LABEL_420;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse((struct tagWND *)v177, (unsigned int)v176, (unsigned int)v160, (int)v162);
    goto LABEL_421;
  }
  if ( a2 > 0x33 )
  {
    if ( a2 <= 0x55 )
    {
      if ( a2 == 85 )
      {
        if ( v176 == (struct tagWND *)3 )
        {
          v62 = (*(_BYTE *)(a1[5] + 11) & 0x20) == 0;
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
          return v62 + 1;
        }
        goto LABEL_421;
      }
      if ( a2 <= 0x4D )
      {
        if ( a2 == 77 )
        {
          if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
            v43 = *((unsigned __int16 *)a1 + 46);
          else
            v43 = 0;
          ContextHelpId = GetContextHelpId(a1);
          xxxSendHelpMessage((ULONG_PTR)a1, v43, *a1, ContextHelpId);
          goto LABEL_421;
        }
        v36 = a2 - 53;
        if ( v36 )
        {
          v37 = v36 - 6;
          if ( v37 )
          {
            v38 = v37 - 11;
            if ( !v38 )
            {
              if ( (*((_DWORD *)v176 + 6) & 0x100001) == 0 )
                xxxAdjustSize((int)a1, (int *)v176 + 4, (int *)v176 + 5);
              goto LABEL_421;
            }
            v39 = v38 - 1;
            if ( !v39 )
            {
              xxxHandleWindowPosChanged((ULONG_PTR)a1);
              goto LABEL_421;
            }
            if ( v39 == 2 )
            {
              Icon = (struct tagWND *)SfnCOPYGLOBALDATA(0, 0, v177, v176, 0, 0, 0, 0);
              goto LABEL_44;
            }
            goto LABEL_421;
          }
          updated = xxxClientShutdown(a1, v177);
          goto LABEL_134;
        }
        v41 = *(unsigned __int8 *)(a1[5] + 8) >> 6;
LABEL_98:
        v42 = v41 & 1;
LABEL_154:
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
        return v42;
      }
      v45 = a2 - 79;
      if ( !v45 )
      {
        if ( !ValidateHwnd(v177) )
          goto LABEL_421;
        goto LABEL_128;
      }
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v167 = 0;
          v168 = 0;
          v169 = 0;
          v52 = (_DWORD *)BuildHwndList(a1[15], 2, 0);
          v182 = v52;
          if ( !v52 )
          {
            v11 = 0;
            goto LABEL_408;
          }
          v174 = v52 + 4;
          v53 = v52[4];
          if ( v53 != 1 )
          {
            v54 = v177;
            v55 = v176;
            do
            {
              BytesInMultiByteString = HMValidateHandleNoSecure(v53, 1);
              if ( BytesInMultiByteString )
              {
                v56 = KeGetCurrentThread();
                v57 = W32GetThreadWin32Thread(v56);
                v167 = *(_DWORD *)(v57 + 228);
                *(_DWORD *)(v57 + 228) = &v167;
                v168 = BytesInMultiByteString;
                HMLockObject(BytesInMultiByteString);
                xxxSendMessage((unsigned int)v54, v55);
                ThreadUnlock1();
              }
              v53 = *++v174;
            }
            while ( *v174 != 1 );
          }
          FreeHwndList((struct tagBWL *)v182);
          goto LABEL_421;
        }
        if ( v47 != 2 )
          goto LABEL_421;
        v48 = (_DWORD *)((*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 ? a1[14] : a1[16]);
        if ( !v48 || v48 == (_DWORD *)GetCurrentThreadDesktopWindow() )
          goto LABEL_421;
        v49 = KeGetCurrentThread();
        v50 = W32GetThreadWin32Thread(v49);
        v164 = *(_DWORD *)(v50 + 228);
        *(_DWORD *)(v50 + 228) = &v164;
        v165 = v48;
        HMLockObject(v48);
        v51 = xxxSendTransformableMessage(v48, (unsigned int)v177, (int)v176, 1);
LABEL_407:
        v11 = v51;
        ThreadUnlock1();
        goto LABEL_408;
      }
      v58 = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 60);
      v182 = v58;
      if ( !v58
        || v58 == a1
        || !(unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(_gpsi + 504) )
      {
        v153 = v176;
        ProcessWindowStation = _GetProcessWindowStation(0);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v153, 256, a1) )
          UserSetLastError(1457);
        goto LABEL_421;
      }
      v59 = KeGetCurrentThread();
      v60 = W32GetThreadWin32Thread(v59);
      v164 = *(_DWORD *)(v60 + 228);
      *(_DWORD *)(v60 + 228) = &v164;
      v165 = v58;
      HMLockObject(v58);
      xxxSendMessage((unsigned int)v177, v176);
LABEL_337:
      ThreadUnlock1();
      goto LABEL_421;
    }
    switch ( a2 )
    {
      case 0x7Bu:
        v69 = v176;
        v70 = FindNCHit(a1, v176);
        v71 = v70;
        if ( v70 == 7 || v70 == 6 )
        {
          if ( _IsDescendant(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64), a1) )
            xxxDoScrollMenu(a1, 0, v71 - 6, v69);
        }
        else
        {
          v72 = (_BYTE *)a1[5];
          if ( (v72[23] & 0xC0) == 0x40 )
          {
            v73 = a1[14];
            v74 = KeGetCurrentThread();
            v75 = W32GetThreadWin32Thread(v74);
            v171 = *(_DWORD *)(v75 + 228);
            *(_DWORD *)(v75 + 228) = &v171;
            v172 = v73;
            HMLockObject(v73);
            xxxSendTransformableMessage((void *)a1[14], *a1, (int)v69, 1);
            goto LABEL_337;
          }
          if ( a1 == *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 64) )
          {
            if ( v70 == 2 )
              goto LABEL_379;
            if ( v70 == 3 )
            {
              BytesInMultiByteString = 61536;
              goto LABEL_380;
            }
            if ( v69 == (struct tagWND *)-1 && (v72[13] & 2) == 0 )
              xxxSimulateShiftF10();
          }
        }
        goto LABEL_421;
      case 0x7Fu:
        Icon = (struct tagWND *)DWP_GetIcon(a1, v177);
        goto LABEL_44;
      case 0x80u:
        Icon = xxxDWP_SetIcon((unsigned int)v177, (int)a1, v176, (unsigned int)v160, v162);
        goto LABEL_44;
      case 0x81u:
        if ( (*(_BYTE *)(a1[5] + 22) & 0x30) != 0 && !_InitPwSB(a1) )
          goto LABEL_421;
        v64 = v176;
        if ( !v176 )
          goto LABEL_151;
        v65 = (_DWORD *)((char *)v176 + 48);
        if ( !a1[3] || v176 == (struct tagWND *)-48 || (v66 = (_WORD *)*((_DWORD *)v176 + 14)) == 0 )
        {
          *(_DWORD *)(a1[5] + 116) = 0;
LABEL_153:
          v42 = 1;
          goto LABEL_154;
        }
        ms_exc.registration.TryLevel = 0;
        v11 = 1;
        if ( *((int *)v176 + 13) >= 0 )
        {
          if ( *v65 < 2u || *v66 != 0xFFFF )
          {
LABEL_150:
            ms_exc.registration.TryLevel = -2;
LABEL_151:
            SetWF(a1, 514);
            updated = DefSetText(a1, (int *)v64 + 12);
            goto LABEL_134;
          }
        }
        else if ( !*v65 || *(_BYTE *)v66 != 0xFF )
        {
          goto LABEL_150;
        }
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
        ms_exc.registration.TryLevel = -2;
        return v11;
      case 0x83u:
        xxxCalcClientRect(0);
        goto LABEL_421;
      case 0x84u:
        updated = FindNCHit(a1, v176);
        goto LABEL_134;
      case 0x85u:
        SetWF(a1, 384);
        DCEx = _GetDCEx(a1, v177, &sub_50481);
        if ( DCEx )
        {
          v68 = (*(_BYTE *)(a1[5] + 8) & 0x40) != 0 && *(_DWORD *)(a1[2] + 236) == _gpqForeground;
          xxxDrawWindowFrame((struct tagVWPL **)a1, v68);
          _ReleaseDC(DCEx);
        }
        ClrWF(a1, 384);
        goto LABEL_421;
      case 0x86u:
        xxxDWP_DoNCActivate((struct tagVWPL **)a1, v176);
        goto LABEL_153;
      case 0x88u:
        ClrWF(a1, 640);
        xxxInternalDoSyncPaint(a1, v177);
        goto LABEL_421;
      default:
        goto LABEL_421;
    }
  }
  if ( a2 == 51 )
  {
    Icon = (struct tagWND *)DWP_GetHotKey(a1);
    goto LABEL_44;
  }
  if ( a2 > 0x18 )
  {
    if ( a2 <= 0x26 )
    {
      if ( a2 == 38 )
        goto LABEL_73;
      v30 = a2 - 25;
      if ( v30 )
      {
        v31 = v30 - 6;
        if ( !v31 )
        {
          xxxDWP_DoCancelMode(v160);
          goto LABEL_421;
        }
        v32 = v31 - 1;
        if ( !v32 )
        {
          Icon = (struct tagWND *)xxxDWP_SetCursor(
                                    (struct tagWND *)(__int16)v176,
                                    (HWND)((unsigned int)v176 >> 16),
                                    (int)v160,
                                    (unsigned int)v162);
          goto LABEL_44;
        }
        if ( v32 != 1 )
          goto LABEL_421;
        if ( (*(_BYTE *)(a1[5] + 23) & 0xC0) == 0x40 )
          v33 = (_DWORD *)a1[14];
        else
          v33 = 0;
        if ( v33 )
        {
          v34 = KeGetCurrentThread();
          v35 = W32GetThreadWin32Thread(v34);
          v164 = *(_DWORD *)(v35 + 228);
          *(_DWORD *)(v35 + 228) = &v164;
          v165 = v33;
          HMLockObject(v33);
          v11 = xxxSendMessage((unsigned int)v177, v176);
          ThreadUnlock1();
          if ( v11 )
            goto LABEL_408;
        }
        if ( v176 == (struct tagWND *)33619970 )
        {
          v11 = 3;
          goto LABEL_408;
        }
        goto LABEL_128;
      }
      goto LABEL_345;
    }
    if ( a2 == 39 )
    {
LABEL_43:
      Icon = (struct tagWND *)xxxDWP_EraseBkgnd(v177);
LABEL_44:
      v11 = (ULONG)Icon;
      goto LABEL_408;
    }
    if ( a2 == 43 )
    {
      DWP_DrawItem(v160);
      goto LABEL_421;
    }
    if ( a2 > 0x2D )
    {
      if ( a2 <= 0x2F )
      {
        v11 = -1;
        goto LABEL_408;
      }
      if ( a2 == 50 )
      {
        Icon = (struct tagWND *)DWP_SetHotKey(a1, v177);
        goto LABEL_44;
      }
    }
LABEL_421:
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
    return 0;
  }
  if ( a2 == 24 )
  {
    if ( !(_WORD)v176 )
      goto LABEL_421;
    v26 = a1[5];
    v27 = *(_BYTE *)(v26 + 23) & 0xC0;
    if ( v27 != (char)0x80 && v27 != -64 && !a1[16] )
      goto LABEL_421;
    v28 = *(_BYTE *)(v26 + 23) & 0x10;
    v29 = v177;
    if ( v177 )
    {
      if ( v28 || (*(_BYTE *)(v26 + 9) & 0x40) == 0 )
        goto LABEL_421;
    }
    else if ( !v28 )
    {
      goto LABEL_421;
    }
    ClrWF(a1, 320);
    if ( !v29 )
      SetWF(a1, 320);
    xxxShowWindow(v160, (unsigned int)v162);
    goto LABEL_421;
  }
  if ( a2 > 0xF )
  {
    if ( a2 == 16 )
    {
      xxxDestroyWindow((struct tagVWPL **)a1);
      goto LABEL_421;
    }
    if ( a2 != 17 && a2 != 19 )
    {
      if ( a2 != 20 )
        goto LABEL_421;
      goto LABEL_43;
    }
LABEL_128:
    v11 = 1;
    goto LABEL_408;
  }
  if ( a2 == 15 )
  {
LABEL_73:
    xxxDWP_Paint((int)a1);
    goto LABEL_421;
  }
  v6 = a2 - 6;
  if ( !v6 )
  {
    v21 = v177;
    if ( v177 )
      xxxSetFocus(a1);
    if ( (*(_BYTE *)(a1[5] + 146) & 0x40) == 0 )
      goto LABEL_421;
    v22 = *(_DWORD *)(a1[2] + 800);
    if ( !v22 )
      goto LABEL_421;
    v182 = 0;
    v23 = KeGetCurrentThread();
    v24 = W32GetThreadWin32Thread(v23);
    v180 = *(_DWORD *)(v24 + 228);
    *(_DWORD *)(v24 + 228) = &v180;
    v181 = v22;
    HMLockObject(v22);
    xxxSendNotifyMessage(v22, 841, v21, 0, 0);
    goto LABEL_337;
  }
  v7 = v6 - 5;
  if ( !v7 )
  {
    xxxDWP_SetRedraw(v160, (int)v162);
    goto LABEL_421;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = *(_DWORD *)(a1[5] + 116);
        if ( v10 )
        {
          BytesInMultiByteString = 0;
          if ( v176 )
          {
            RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PCWCH)a1[25], v10);
            v11 = BytesInMultiByteString;
          }
          else
          {
            v11 = v10 >> 1;
            BytesInMultiByteString = v11;
          }
          goto LABEL_408;
        }
      }
      goto LABEL_421;
    }
    if ( !v177 )
      goto LABEL_421;
    if ( SharedPointerBase<tagWND>::operator!=(a1 + 25, (int)(a1 + 25)) )
    {
      v167 = 0;
      v168 = 0;
      v169 = 0;
      StrName = (unsigned int *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                                  v13,
                                  (struct _LARGE_UNICODE_STRING *)&v167);
      DesktopVerifyHeapLargeUnicodeString(a1[3], StrName);
      v12 = v177;
    }
    v15 = *(_DWORD *)(a1[5] + 116);
    v16 = v176;
    v17 = *((_DWORD *)v176 + 1);
    if ( !v15 )
    {
      v20 = (_WORD *)*((_DWORD *)v176 + 2);
      if ( v17 >= 0 )
        *v20 = 0;
      else
        *(_BYTE *)v20 = 0;
      goto LABEL_421;
    }
    if ( v17 >= 0 )
    {
      v167 = 0;
      v168 = 0;
      v169 = 0;
      v157 = (int)v12;
      v19 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
              (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 25),
              (struct _LARGE_UNICODE_STRING *)&v167);
      v11 = TextCopy((int)v19, *((void **)v16 + 2), v157);
      v18 = 2 * v11;
    }
    else
    {
      v18 = WCSToMBEx(0, a1[25], v15 >> 1, (char *)v176 + 8, (v17 & 0x7FFFFFFF) - 1, (char *)v176 + 8);
      v11 = v18;
      *(_BYTE *)(v18 + *((_DWORD *)v16 + 2)) = 0;
    }
    *(_DWORD *)v16 = v18;
  }
  else
  {
    v11 = DefSetText(a1, (int *)v176);
    if ( v11 )
    {
      xxxRedrawTitle((struct tagVWPL **)a1, 8);
      xxxWindowEvent(32780, a1, 0, 0, 0);
    }
  }
LABEL_408:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v170);
  return v11;
}
