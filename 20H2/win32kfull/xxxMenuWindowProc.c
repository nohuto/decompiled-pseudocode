/*
 * XREFs of xxxMenuWindowProc @ 0x1C023B6E0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E3560 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C000F768 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C0012418 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     xxxDWP_DoNCActivate @ 0x1C00792C4 (xxxDWP_DoNCActivate.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00D3FCC (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00FB170 (xxxSendUAHMenuMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GreSetWindowOrg @ 0x1C0104A3C (GreSetWindowOrg.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106F84 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0115900 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C011AFC8 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C015B3B8 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxValidateClassAndSize @ 0x1C015BB84 (xxxValidateClassAndSize.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF7D4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E7F24 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E7F8C (zzzStartFade.c)
 *     _SetTimer @ 0x1C01EABE8 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C02213A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C0221504 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C022158C (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0221D60 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C02335F8 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0233850 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235090 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023550C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235568 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023571C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235818 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0235CF0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C023659C (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C0236620 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C02366E8 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C0236740 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236BD0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C0236DBC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0236EBC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02373E4 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238210 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023923C (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023AFB4 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C024A110 (FindBestPos.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     MNDrawEdge @ 0x1C024C278 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C024C35C (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024C4A4 (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1C0250278 (MNFindNextValidItem.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int64 i; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  HDC FadeInternal; // r8
  _QWORD *v13; // r10
  unsigned __int64 v14; // rcx
  __int64 v15; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 **v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  int v32; // ecx
  bool v33; // al
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // esi
  unsigned int v38; // ebx
  __int64 TopWindow; // rax
  unsigned int v40; // eax
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct tagWND **v45; // rax
  struct tagWND **v46; // rbx
  struct tagWND *v47; // r14
  struct tagWND *v48; // r15
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  struct tagWND *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  bool v56; // zf
  unsigned int v57; // edx
  unsigned int v58; // r8d
  unsigned int v59; // ecx
  int v60; // eax
  int v61; // eax
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  void *v65; // rax
  bool v66; // zf
  __int64 v67; // rax
  int v68; // r12d
  HDC v69; // rdx
  __int64 v70; // r8
  struct tagWND *v71; // rcx
  __int64 DCEx; // rbx
  __int64 v73; // rdi
  int v74; // ebx
  __int64 v75; // rbx
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  unsigned int ValidItem; // eax
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  _QWORD *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  struct tagMONITOR *v95; // rax
  int v96; // ebx
  __int64 v97; // r13
  int v98; // esi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r9
  int v104; // r15d
  __int64 v105; // rax
  int v106; // edx
  int BestPos; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  __int64 v113; // rax
  struct _LARGE_STRING **v114; // r14
  __int64 v115; // rbx
  __int64 v116; // rax
  struct _LARGE_STRING *v117; // r9
  unsigned __int64 v118; // r8
  unsigned __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r8
  __int64 v123; // rcx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  unsigned int v129; // r12d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 DPIMetrics; // rax
  int v135; // [rsp+58h] [rbp-B0h]
  __int64 v136[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagMENUWND *v137; // [rsp+70h] [rbp-98h]
  unsigned __int64 v138; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v139; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v140; // [rsp+84h] [rbp-84h] BYREF
  __int64 v141; // [rsp+88h] [rbp-80h] BYREF
  __int128 v142; // [rsp+90h] [rbp-78h] BYREF
  __int64 v143; // [rsp+A0h] [rbp-68h]
  __int64 v144; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMENUSTATE *v145; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v146; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-40h]
  __int128 v148; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v149; // [rsp+E0h] [rbp-28h]
  _QWORD v150[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v151[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v152[3]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v153[3]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v154[3]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v155[3]; // [rsp+150h] [rbp+48h] BYREF
  __int64 **v156[3]; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v157[3]; // [rsp+180h] [rbp+78h] BYREF
  int **v158[2]; // [rsp+198h] [rbp+90h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v136, 0LL);
  i = 0LL;
  v147 = 0LL;
  v143 = 0LL;
  v135 = 0;
  v138 = 0LL;
  v141 = 0LL;
  v146 = 0LL;
  v142 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, (unsigned __int64)a3, a4, 668, 129, &v141) )
  {
    v9 = v141;
    goto LABEL_293;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v9 = xxxSendTransformableMessageTimeout(
           (unsigned __int64)a1,
           a2,
           (unsigned __int64)a3,
           (struct _LARGE_STRING *)a4,
           0,
           0,
           0LL,
           1,
           1);
    goto LABEL_293;
  }
  v10 = *((_QWORD *)a1 + 35);
  v137 = (struct tagMENUWND *)v10;
  v11 = *(_QWORD *)(v10 + 8);
  *(_QWORD *)v10 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v136, v11);
  if ( *(_QWORD *)v136[0] )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 608LL); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v10 + 8) + 64LL) )
        break;
    }
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v145,
    (struct tagMENUSTATE *)i);
  v14 = v136[0];
  if ( *(_QWORD **)v136[0] == v13 )
  {
    v15 = (__int64)v13;
  }
  else
  {
    v14 = *(_QWORD *)v136[0];
    v15 = *(_QWORD *)(*(_QWORD *)v136[0] + 40LL);
  }
  v9 = 1LL;
  if ( i && v15 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v146 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v146;
    *((_QWORD *)&v146 + 1) = v15;
    HMLockObject(v15);
    v13 = 0LL;
    v18 = 1LL;
    v135 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v136[0] + 64LL)
      || (FadeInternal = *(HDC *)v136[0],
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v137 + 16LL) + 608LL),
          v19 = 1,
          *(_QWORD *)v17 == *(_QWORD *)(*(_QWORD *)v136[0] + 64LL)) )
    {
      v19 = 0;
    }
    v14 = *(unsigned int *)(i + 8);
    if ( (v14 & 0x100) != 0 && (v14 & 0x200) == 0 )
    {
      if ( v19 )
      {
        if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
          goto LABEL_288;
      }
      else
      {
        v20 = xxxCallHandleMenuMessages(i, (__int64 *)a1, a2, (__int64)a3, a4);
        v13 = 0LL;
        if ( v20 )
        {
LABEL_174:
          ThreadUnlock1(v14, v17, FadeInternal);
LABEL_273:
          v13 = 0LL;
          goto LABEL_196;
        }
        v18 = 1LL;
      }
    }
    goto LABEL_26;
  }
  switch ( a2 )
  {
    case 0x1E0u:
      if ( *(_QWORD **)v136[0] == v13 )
        goto LABEL_196;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v18 = (unsigned int)v13;
LABEL_26:
      v17 = (__int64)v137;
      goto LABEL_27;
    default:
      goto LABEL_289;
  }
  v17 = (__int64)v137;
  v14 = *(_QWORD *)(*(_QWORD *)v137 + 40LL);
  if ( *(char *)(v14 + 19) < (char)v13 )
    goto LABEL_196;
  v18 = (unsigned int)v13;
LABEL_27:
  if ( a2 > 0x1E1 )
  {
    if ( a2 <= 0x2A3 )
    {
      if ( a2 == 675 )
      {
        *(_DWORD *)(i + 8) ^= ((unsigned __int16)*(_DWORD *)(i + 8) ^ (unsigned __int16)~(unsigned __int16)(*(_DWORD *)(i + 8) >> 1)) & 0x4000;
        **(_DWORD **)v136[0] &= ~0x100000u;
        MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
        v17 = *(_QWORD *)v136[0];
        v14 = *(_QWORD *)(*(_QWORD *)i + 56LL);
        if ( *(_QWORD *)(*(_QWORD *)v136[0] + 16LL) == v14 )
          xxxMNSelectItem((__int64 **)v136, i, -1);
        goto LABEL_306;
      }
      if ( a2 <= 0x1ED )
      {
        switch ( a2 )
        {
          case 0x1EDu:
            v14 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 44LL);
            if ( (unsigned __int64)a3 < v14 || (unsigned __int64)a3 >= 0xFFFFFFFC )
              xxxMNButtonDown(v136, i, (unsigned int)a3, 1);
            goto LABEL_306;
          case 0x1E2u:
            if ( *(_QWORD **)(*(_QWORD *)v136[0] + 8LL) != v13 )
            {
              v90 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
              v91 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v142 = *(_QWORD *)(v91 + 416);
              *(_QWORD *)(v91 + 416) = &v142;
              *((_QWORD *)&v142 + 1) = v90;
              HMLockObject(v90);
              SmartObjStackRefBase<tagMENU>::Init(v156, v15);
              v156[2] = 0LL;
              xxxMNCompute(v156, *(_QWORD *)(*(_QWORD *)v136[0] + 8LL), (__int64)a1, 0LL, 0, 0, 0LL);
              SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v156);
              ThreadUnlock1(v93, v92, v94);
            }
            v95 = _MonitorFromWindowInternal(a1, 1LL, 0LL, v18);
            v96 = *(_DWORD *)(v15 + 64);
            v97 = (__int64)v95;
            SmartObjStackRefBase<tagMENU>::Init(v157, v15);
            v157[2] = 0LL;
            v98 = MNCheckScroll((__int64 **)v136, v157, v97);
            SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v157);
            if ( a3 )
            {
              v102 = 0LL;
              v103 = 0LL;
              v104 = (8 * (_BYTE)a3) & 0x20 | 0x214;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
              {
                *(_OWORD *)v151 = 0LL;
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v158, *(_QWORD *)v136[0]);
                MNGetPopupBoundsRect(v158, v97, v151, 1);
                v105 = *((_QWORD *)a1 + 5);
                v106 = *(_DWORD *)(v105 + 92);
                LODWORD(v141) = *(_DWORD *)(v105 + 88);
                HIDWORD(v141) = v106;
                BestPos = FindBestPos(v141, v106, v96, v98, (__int64)v151, 0, (__int64)v136, v97, v141);
                v102 = (unsigned int)(__int16)BestPos;
                v103 = (unsigned int)SHIWORD(BestPos);
              }
              else
              {
                v104 |= 2u;
              }
              xxxSetWindowPos(a1, 0LL, v102, v103, v96 + 6, v98 + 6, v104);
            }
            if ( v135 )
              ThreadUnlock1(v100, v99, v101);
            v9 = (unsigned __int16)v96 | ((unsigned __int16)v98 << 16);
            goto LABEL_291;
          case 0x1E3u:
            v9 = xxxMNOpenHierarchy((__int64 **)v136, i);
            v89 = 0LL;
            if ( v135 )
            {
              ThreadUnlock1(v87, v86, v88);
              v89 = 0LL;
            }
            if ( v9 == -1 || !v9 )
              goto LABEL_290;
            break;
          case 0x1E4u:
LABEL_164:
            xxxMNCloseHierarchy(*(_QWORD *)v136[0], i);
            goto LABEL_306;
          case 0x1E5u:
            v14 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 44LL);
            if ( (unsigned __int64)a3 < v14 || (unsigned __int64)a3 >= 0xFFFFFFFC )
            {
              v85 = (_QWORD *)xxxMNSelectItem((__int64 **)v136, i, (int)a3);
              if ( v85 )
              {
                if ( v135 )
                  ThreadUnlock1(v14, v17, FadeInternal);
                v9 = *(unsigned __int16 *)(*v85 + 4LL) | (unsigned __int64)(v85[2] != 0LL ? 0x10 : 0);
                goto LABEL_291;
              }
            }
            goto LABEL_306;
          case 0x1E6u:
            xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)a4, 0LL);
            goto LABEL_306;
          case 0x1E7u:
            ValidItem = MNFindNextValidItem(v15, 0xFFFFFFFFLL, 1LL, 1LL);
            v81 = (int)ValidItem;
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1E5u, ValidItem, 0LL, 0, 0, 0LL, 1, 1);
            if ( v135 )
              ThreadUnlock1(v83, v82, v84);
            v9 = v81;
            goto LABEL_291;
          case 0x1EBu:
            v9 = xxxMNFindWindowFromPoint((__int64 **)v136, a3, a4);
            if ( v135 )
              ThreadUnlock1(v78, v77, v79);
            if ( !IsMFMWFPWindow(v9) )
              goto LABEL_291;
            if ( !v9 )
              goto LABEL_196;
            break;
          case 0x1ECu:
            xxxPlayEventSound(5LL);
            xxxShowWindowEx(a1, BYTE1(*(_DWORD *)(i + 8)) & 1 | 4, 0);
            goto LABEL_306;
          default:
            goto LABEL_287;
        }
        v9 = *(_QWORD *)v9;
        goto LABEL_291;
      }
      switch ( a2 )
      {
        case 0x1EEu:
          xxxMNMouseMove((__int64 **)v136, i, a4);
          goto LABEL_306;
        case 0x1EFu:
          v14 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 44LL);
          if ( (unsigned __int64)a3 < v14 || (unsigned __int64)a3 >= 0xFFFFFFFC )
            xxxMNButtonUp(v136, i, (int)a3);
          goto LABEL_306;
        case 0x1F0u:
          if ( (_DWORD)v18 )
            ThreadUnlock1(v14, v17, FadeInternal);
          v9 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v136);
          goto LABEL_291;
        case 0x1F1u:
          xxxMNDoubleClick(i, (__int64)v136, (int)a3);
          goto LABEL_306;
        case 0x1F2u:
          xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0LL, 0LL, 1LL);
          goto LABEL_306;
      }
      if ( a2 != 499 )
      {
        if ( a2 != 500 )
          goto LABEL_287;
        if ( (_DWORD)v18 )
        {
          ThreadUnlock1(v14, v17, FadeInternal);
          v13 = 0LL;
        }
        v68 = (int)v13;
        if ( (*(_DWORD *)(i + 8) & 0x80u) == 0 )
          goto LABEL_196;
        if ( *(_QWORD **)(*(_QWORD *)v136[0] + 8LL) == v13 )
          goto LABEL_196;
        if ( !IsMFMWFPWindow(*(_QWORD *)(i + 64)) )
          goto LABEL_196;
        v112 = safe_cast_fnid_to_PMENUWND(v109, v108, v110, v111);
        v13 = 0LL;
        if ( !v112 )
          goto LABEL_196;
        v113 = *(_QWORD *)(v112 + 8);
        if ( !v113 )
          goto LABEL_196;
        v114 = *(struct _LARGE_STRING ***)(v113 + 40);
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
        ++*(_DWORD *)(i + 40);
        v115 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
        v116 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v142 = *(_QWORD *)(v116 + 416);
        *(_QWORD *)(v116 + 416) = &v142;
        *((_QWORD *)&v142 + 1) = v115;
        HMLockObject(v115);
        *(_DWORD *)(i + 8) |= 0x8000u;
        v117 = 0LL;
        if ( v114 )
          v117 = *v114;
        v118 = *(unsigned int *)(i + 72);
        v119 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
        _InterlockedAdd(&glSendMessage, 1u);
        v120 = xxxSendTransformableMessageTimeout(v119, 0x123u, v118, v117, 0, 0, 0LL, 1, 1);
        v123 = *(unsigned int *)(i + 8);
        LODWORD(v123) = v123 & 0xFFFF7FFF;
        *(_DWORD *)(i + 8) = v123;
        if ( v120 != 1 )
        {
          *(_DWORD *)(i + 8) = v123 | 0x2000;
          MNCheckButtonDownState(i);
          if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
            xxxMNSetCapture((__int64)v136, i);
          ThreadUnlock1(v126, v125, v127);
          xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
          goto LABEL_273;
        }
        ThreadUnlock1(v123, v121, v122);
        v124 = xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
        v13 = 0LL;
        if ( v124 )
          goto LABEL_196;
        goto LABEL_170;
      }
LABEL_169:
      v68 = v135;
LABEL_170:
      xxxEndMenuLoop(i, *(_QWORD *)i);
      if ( (*(_DWORD *)(i + 8) & 0x100) != 0 )
        xxxMNEndMenuState(i);
      v13 = 0LL;
      v56 = v68 == 0;
      goto LABEL_173;
    }
    if ( a2 != 791 )
    {
      if ( a2 != 792 )
        goto LABEL_287;
      xxxMenuDraw(a3, v15, (__int64)a1);
      goto LABEL_306;
    }
    if ( (a4 & 2) == 0 || (*(_DWORD *)(v15 + 124) & 3) == 0 )
    {
      v9 = xxxDefWindowProc(a1, 0x317u, (unsigned __int64)a3, a4);
      if ( !(unsigned int)MNIsUAHMenu(v15)
        || !*(_QWORD *)(*(_QWORD *)v136[0] + 16LL)
        || !(unsigned int)xxxSendUAHMenuMessage(
                            *(_QWORD *)(*(_QWORD *)v136[0] + 16LL),
                            149LL,
                            (__int64 *)v15,
                            (__int64)a3) )
      {
        v22 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
        if ( (_DWORD)v22 == -2147352576 )
          MNDrawEdge(v15, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
      }
      goto LABEL_314;
    }
    if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
    {
      if ( (GreGetLayout(a3) & 1) == 0 )
      {
        v129 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
LABEL_303:
        xxxMNDrawFullNC(a1);
        if ( (_DWORD)v9 )
          GreSetLayout(
            a3,
            (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
            v129);
        GreGetDCPoint(a3, 8LL, &v138);
        DPIMetrics = GetDPIMetrics(v131, v130, v132, v133);
        GreSetWindowOrg(a3, v138 - 3, HIDWORD(v138) - *(_DWORD *)(DPIMetrics + 28) - 3);
        xxxDefWindowProc(a1, 0x317u, (unsigned __int64)a3, a4 & 0xFFFFFFFFFFFFFFFDuLL);
        GreSetWindowOrg(a3, v138, SHIDWORD(v138));
        goto LABEL_306;
      }
      LODWORD(v13) = 0;
    }
    LODWORD(v9) = (_DWORD)v13;
    v129 = (unsigned int)v13;
    goto LABEL_303;
  }
  if ( a2 == 481 )
  {
    if ( (_DWORD)v18 )
    {
      v15 = ThreadUnlock1(v14, v17, FadeInternal);
      v13 = 0LL;
    }
    if ( v15 )
    {
      v9 = *(_QWORD *)v15;
      goto LABEL_291;
    }
    goto LABEL_196;
  }
  if ( a2 > 0x81 )
  {
    v17 = 131LL;
    switch ( a2 )
    {
      case 0x83u:
        xxxDefWindowProc(a1, 0x83u, (unsigned __int64)a3, a4);
        if ( (*(_DWORD *)(v15 + 124) & 3) != 0 )
        {
          v14 = *(unsigned int *)(GetDPIMetrics(v14, v17, (__int64)FadeInternal, v76) + 28);
          *(_DWORD *)(a4 + 4) += v14;
          *(_DWORD *)(a4 + 12) -= v14;
        }
        goto LABEL_306;
      case 0x84u:
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
          goto LABEL_287;
        LODWORD(v138) = (__int16)a4;
        HIDWORD(v138) = SWORD1(a4);
        if ( (_DWORD)v18 )
          ThreadUnlock1(v14, 131LL, FadeInternal);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v138) )
          goto LABEL_291;
        goto LABEL_196;
      case 0x85u:
        if ( (**(_DWORD **)v136[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
          goto LABEL_306;
        }
        if ( (*(_DWORD *)(v15 + 124) & 3) != 0 )
        {
          if ( (unsigned int)MNIsUAHMenu(v15) )
          {
            v69 = 0LL;
            v70 = 65537LL;
            v71 = *(struct tagWND **)(*(_QWORD *)v136[0] + 16LL);
          }
          else
          {
            v70 = 328833LL;
            v69 = a3;
            v71 = a1;
          }
          DCEx = _GetDCEx(v71, v69, v70);
          xxxMNDrawFullNC(a1);
        }
        else
        {
          if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
          {
            v9 = xxxDefWindowProc(a1, 0x85u, (unsigned __int64)a3, a4);
            if ( (unsigned int)MNIsUAHMenu(v15) )
            {
              v22 = *(_QWORD *)v136[0];
              if ( *(_QWORD *)(*(_QWORD *)v136[0] + 16LL) )
              {
                v75 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0LL, 65537LL);
                xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 149LL, (__int64 *)v15, v75);
                _ReleaseDC(v75);
              }
            }
            goto LABEL_314;
          }
          if ( (unsigned int)MNIsUAHMenu(v15) )
          {
            v73 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0LL, 65537LL);
            v74 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 149LL, (__int64 *)v15, v73);
            _ReleaseDC(v73);
            if ( v74 )
              goto LABEL_306;
          }
          DCEx = _GetDCEx(a1, a3, 328833LL);
          MNDrawEdge(v15, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        _ReleaseDC(DCEx);
        goto LABEL_306;
    }
    if ( a2 != 256 )
    {
      v14 = 2LL;
      if ( a2 == 258 )
        goto LABEL_175;
      if ( a2 != 260 )
      {
        if ( a2 != 262 )
        {
          if ( a2 != 275 )
          {
            if ( a2 != 480 )
              goto LABEL_287;
            if ( a3 )
            {
              v67 = ValidateHmenu(a3);
              if ( v67 )
              {
                SmartObjStackRefBase<tagMENU>::Init(v155, v67);
                v155[2] = 0LL;
                LockPopupMenu((__int64)v136, (__int64 *)(*(_QWORD *)v136[0] + 40LL), (__int64)v155);
                v24 = (__int64 **)v155;
                goto LABEL_49;
              }
            }
LABEL_306:
            if ( v135 )
              ThreadUnlock1(v14, v17, FadeInternal);
            v9 = 0LL;
            goto LABEL_291;
          }
          v17 = 65529LL;
          if ( a3 != (HDC)65529 )
          {
            if ( a3 == (HDC)65531 )
            {
              if ( *(_QWORD **)(i + 96) != v13 )
                MNAnimate(i, 1LL);
              goto LABEL_306;
            }
            if ( a3 == (HDC)65534 )
            {
              **(_DWORD **)v136[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v136, i);
              goto LABEL_306;
            }
            if ( a3 != (HDC)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( (*(_DWORD *)(i + 8) & 8) != 0 )
                  xxxMNDoScroll((__int64)v136, (unsigned int)a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, v13);
              }
              goto LABEL_306;
            }
            **(_DWORD **)v136[0] &= ~0x80u;
            goto LABEL_164;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, v13);
          if ( (*(_DWORD *)(i + 8) & 0x1000) == 0 )
            goto LABEL_306;
          goto LABEL_169;
        }
LABEL_175:
        xxxMNChar((__int64 **)v136, i, (unsigned int)a3);
        goto LABEL_306;
      }
    }
    xxxMNKeyDown((__int64 **)v136, i, (unsigned int)a3);
    goto LABEL_306;
  }
  if ( a2 == 129 )
  {
    if ( *(_QWORD **)(v17 + 8) == v13 && *(_QWORD **)(v17 + 16) == v13 )
    {
      v65 = MNAllocPopup(1, (void *)v17);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v136, (__int64)v65);
      v13 = 0LL;
      if ( *(_QWORD *)v136[0] )
      {
        *((_QWORD *)v137 + 1) = *(_QWORD *)v136[0];
        **(_DWORD **)v136[0] |= 0x40000000u;
        *(_DWORD *)(*(_QWORD *)v136[0] + 80LL) = -1;
        v150[1] = a1;
        v150[0] = *(_QWORD *)v136[0] + 16LL;
        HMAssignmentLock(v150);
        v66 = v135 == 0;
        goto LABEL_315;
      }
LABEL_102:
      v56 = v135 == 0;
      goto LABEL_173;
    }
    v56 = (_DWORD)v18 == 0;
LABEL_173:
    if ( !v56 )
      goto LABEL_174;
LABEL_196:
    v9 = (__int64)v13;
    goto LABEL_291;
  }
  if ( a2 > 0x18 )
  {
    switch ( a2 )
    {
      case 0x1Cu:
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
          goto LABEL_306;
        if ( a3 )
        {
          PostMessage((int)a1, 498, 0, 0);
          v17 = *(_QWORD *)(gptiCurrent + 432LL) - gpqForeground;
          *(_DWORD *)(i + 8) = *(_DWORD *)(i + 8) & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 432LL) != gpqForeground
                                                                ? 0x10000
                                                                : 0);
          v13 = 0LL;
        }
        v14 = *(_QWORD *)v136[0];
        if ( *(_QWORD **)(*(_QWORD *)v136[0] + 8LL) == v13 )
          goto LABEL_306;
        v62 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
        v63 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v142 = *(_QWORD *)(v63 + 416);
        *(_QWORD *)(v63 + 416) = &v142;
        *((_QWORD *)&v142 + 1) = v62;
        HMLockObject(v62);
        if ( !a3 || (v64 = 1LL, (*(_DWORD *)(i + 8) & 0x10000) != 0) )
          v64 = 2LL;
        xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v136[0] + 8LL), v64, 1LL);
        goto LABEL_137;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_287;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v136[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 4
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
          && (GetAppCompatFlags2(0x400u) & 1) == 0 )
        {
          v57 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
          *(_DWORD *)(i + 116) = v57;
          v58 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
          *(_DWORD *)(i + 120) = v58;
          if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
          {
            if ( !(unsigned int)MNCreateAnimationBitmap(i, v57, v58) )
              break;
            *(_QWORD *)(i + 96) = _GetDCEx(a1, 1LL, 65665LL);
            v59 = (**(_DWORD **)v136[0] >> 4) & 0xF80000 | *(_DWORD *)(i + 8) & 0xFF07FFFF;
            v60 = 0;
            *(_DWORD *)(i + 8) = v59;
            if ( (v59 & 0x180000) == 0 )
              v60 = *(_DWORD *)(i + 116);
            *(_DWORD *)(i + 108) = v60;
            v61 = 0;
            if ( (v59 & 0x600000) == 0 )
              v61 = *(_DWORD *)(i + 120);
            FadeInternal = *(HDC *)(i + 136);
            *(_DWORD *)(i + 112) = v61;
          }
          else
          {
            FadeInternal = CreateFadeInternal(a1, 0LL, 175, 17, 0);
            if ( !FadeInternal )
              break;
          }
          *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) |= 8u;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)a1,
            0x317u,
            (unsigned __int64)FadeInternal,
            (struct _LARGE_STRING *)0xE,
            0,
            0,
            0LL,
            1,
            1);
          *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) &= ~8u;
          v14 = gfade[12];
          if ( (v14 & 0x10) != 0 )
            zzzShowFade();
          goto LABEL_287;
        }
        break;
      case 0x47u:
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_287;
        v14 = *(_QWORD *)v136[0];
        if ( (**(_DWORD **)v136[0] & 0x8000000) == 0 )
          goto LABEL_287;
        if ( (gfade[12] & 0x10) != 0 )
        {
          zzzStartFade();
        }
        else
        {
          *(_DWORD *)(i + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          SetTimer((unsigned __int64)a1, 65531LL, 10LL, 0LL, (int)v13);
        }
        break;
      case 0x70u:
        if ( i && (*(_DWORD *)(i + 8) & 0x400) != 0 )
        {
          v144 = *(_QWORD *)a1;
          xxxUserModeCallback(0x65u, (__int64)&v144, 8u, v18);
        }
        xxxMNDestroyHandler(v137);
        v13 = 0LL;
        goto LABEL_102;
      default:
        goto LABEL_287;
    }
    v14 = *(_QWORD *)v136[0];
    **(_DWORD **)v136[0] &= ~0x8000000u;
    goto LABEL_287;
  }
  switch ( a2 )
  {
    case 0x18u:
      if ( !a3 )
        xxxMNCancel(i, 0, 0, 0LL);
      goto LABEL_287;
    case 3u:
    case 5u:
      v14 = *(_QWORD *)v136[0];
      if ( *(_QWORD **)(*(_QWORD *)v136[0] + 24LL) == v13 )
        goto LABEL_306;
      v41 = (__int64 *)MNGetpItem((__int64)v136, *(_DWORD *)(*(_QWORD *)v136[0] + 84LL));
      v45 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v136[0] + 24LL), v42, v43, v44);
      v46 = v45;
      if ( !v41 )
        goto LABEL_306;
      if ( !v45 )
        goto LABEL_306;
      v47 = v45[1];
      if ( !v47 )
        goto LABEL_306;
      v48 = *v45;
      if ( !*v45 )
        goto LABEL_306;
      v49 = *((_QWORD *)v47 + 5);
      v154[2] = 0LL;
      v153[2] = 0LL;
      v140 = 0;
      v139 = 0;
      v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v153[0] = *(_QWORD *)(v50 + 416);
      *(_QWORD *)(v50 + 416) = v153;
      v153[1] = v48;
      HMLockObject(v48);
      v51 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v154[0] = *(_QWORD *)(v51 + 416);
      *(_QWORD *)(v51 + 416) = v154;
      v154[1] = v49;
      HMLockObject(v49);
      if ( !*(_DWORD *)(v49 + 64) )
      {
        v52 = *v46;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((unsigned __int64)v52, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      }
      if ( *(_QWORD *)(*(_QWORD *)v136[0] + 40LL)
        && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v136[0] + 40LL), (__int64)v41) != -1 )
      {
        xxxMNPositionHierarchy(
          (__int64 **)v136,
          v41,
          *(_DWORD *)(v49 + 64) + 6,
          *(_DWORD *)(v49 + 68) + 6,
          (int *)&v140,
          (LONG *)&v139,
          0LL);
      }
      xxxSetWindowPos(*v46, 0LL, v140, v139, 0, 0, 1029);
      ThreadUnlock1(v54, v53, v55);
      goto LABEL_137;
    case 6u:
      v25 = *(_DWORD *)(i + 8);
      if ( (v25 & 0x100) != 0 )
      {
        if ( (_WORD)a3 )
          goto LABEL_287;
        if ( (v25 & 0x200) != 0 )
          goto LABEL_287;
        if ( (**(_DWORD **)i & 0x80000) != 0 )
          goto LABEL_287;
        a4 = HMValidateHandleNoSecure(a4, 1);
        v29 = safe_cast_fnid_to_PMENUWND(a4, v26, v27, v28);
        if ( !a4 )
          goto LABEL_287;
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 8);
          if ( v30 )
          {
            if ( *(_QWORD *)i == *(_QWORD *)(v30 + 64) )
              goto LABEL_287;
          }
        }
        v31 = *(_DWORD *)(i + 8);
        if ( (v31 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          *(_DWORD *)(i + 8) = v31 & 0xFFFEFFFF;
          PostMessage((int)a1, 498, 0, 0);
          goto LABEL_287;
        }
LABEL_61:
        v32 = (int)a1;
LABEL_62:
        PostMessage(v32, 499, 0, 0);
        goto LABEL_306;
      }
      if ( !(_WORD)a3 )
        goto LABEL_306;
      v149 = 0LL;
      v148 = 0LL;
      if ( *(_WORD *)(gptiCurrent + 632LL) >= 0x500u )
        goto LABEL_61;
      if ( gpqForegroundPrev
        && (v33 = IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL)), LODWORD(v13) = 0, v33)
        && (v17 = *(_QWORD *)(gpqForegroundPrev + 128LL),
            v14 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x2FFF,
            (_DWORD)v14 != 668) )
      {
LABEL_68:
        a1 = (struct tagWND *)v17;
      }
      else
      {
        v37 = (int)a1;
        v38 = (unsigned int)v13;
        do
        {
          TopWindow = FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
          a1 = (struct tagWND *)TopWindow;
          if ( !TopWindow )
            break;
          if ( IsWindowActivateable(*(const struct tagWND **)(TopWindow + 200)) )
          {
            v17 = *((_QWORD *)a1 + 25);
            v14 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x2FFF;
            if ( (_DWORD)v14 != 668 )
              goto LABEL_68;
          }
          v40 = v38++;
        }
        while ( v40 < 0xFF );
        if ( v38 )
        {
          v32 = v37;
          goto LABEL_62;
        }
      }
      if ( !a1 )
        goto LABEL_306;
      *(_QWORD *)&v148 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v148;
      *((_QWORD *)&v148 + 1) = a1;
      HMLockObject(a1);
      v36 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v36 )
      {
        xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1LL);
      }
      else if ( gpqForeground == v36 )
      {
        xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0LL, 0LL);
      }
LABEL_137:
      ThreadUnlock1(v36, v34, v35);
      goto LABEL_306;
    case 0xFu:
      SmartObjStackRefBase<tagMENU>::Init(v152, v15);
      v152[2] = 0LL;
      xxxHandleMenuPainting(a1, v152);
      v24 = v152;
LABEL_49:
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v24);
      goto LABEL_306;
  }
  if ( a2 == 20 && *(_QWORD **)(*(_QWORD *)(v15 + 40) + 24LL) != v13 )
  {
    MNEraseBackground(
      a3,
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
LABEL_314:
    v66 = v135 == 0;
LABEL_315:
    if ( !v66 )
      ThreadUnlock1(v22, v21, v23);
    goto LABEL_291;
  }
LABEL_287:
  if ( v135 )
LABEL_288:
    ThreadUnlock1(v14, v17, FadeInternal);
LABEL_289:
  v89 = xxxDefWindowProc(a1, a2, (unsigned __int64)a3, a4);
LABEL_290:
  v9 = v89;
LABEL_291:
  if ( v145 )
    xxxUnlockMenuStateInternal(v145, 0);
LABEL_293:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v136);
  return v9;
}
