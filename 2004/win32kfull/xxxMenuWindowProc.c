/*
 * XREFs of xxxMenuWindowProc @ 0x1C023C570
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E4220 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     GreSetWindowOrg @ 0x1C005C138 (GreSetWindowOrg.c)
 *     xxxSendUAHMenuMessage @ 0x1C005D4CC (xxxSendUAHMenuMessage.c)
 *     xxxDWP_DoNCActivate @ 0x1C005E4B4 (xxxDWP_DoNCActivate.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C008EC2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00F5DC8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00F6128 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0106CB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0114880 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C0119E38 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0158D64 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x1C015923C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@AEBV0@@Z @ 0x1C0159260 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0159284 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E0494 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E8BE4 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E8C4C (zzzStartFade.c)
 *     ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50 (--$-B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ.c)
 *     _SetTimer @ 0x1C01EB858 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0222234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C0222394 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C022241C (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C0234488 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C02346E0 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235F20 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0236148 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C023639C (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C02363F8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02365AC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0236B80 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C023742C (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C02374B0 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C0237578 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C02375D0 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C0237C4C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0237D4C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0238274 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0238D48 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023BE44 (xxxMNSetCapture.c)
 *     FindBestPos @ 0x1C024B718 (FindBestPos.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C024D880 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C024D964 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024DAAC (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1C0251888 (MNFindNextValidItem.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, struct _LARGE_STRING *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // r13
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  struct tagMENUSTATE *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v21; // rdx
  size_t v22; // r8
  __int64 v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 i; // rsi
  unsigned __int64 v31; // rcx
  __int64 v32; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v34; // rdx
  unsigned __int64 FadeInternal; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 **v41; // rcx
  int v42; // eax
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r8d
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  int v51; // esi
  unsigned int v52; // ebx
  struct tagWND *TopWindow; // rax
  unsigned int v54; // eax
  __int64 *v55; // rsi
  struct tagWND **v56; // rax
  struct tagWND **v57; // rbx
  struct tagWND *v58; // r14
  struct tagWND *v59; // r15
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rax
  struct tagWND *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  unsigned int v70; // ecx
  int v71; // eax
  int v72; // eax
  __int64 v73; // rbx
  __int64 v74; // rax
  char v75; // dl
  struct tagMENUWND *v76; // rbx
  void *v77; // rax
  bool v78; // zf
  __int64 v79; // rax
  int v80; // r14d
  struct tagWND *v81; // rcx
  HDC v82; // rdx
  __int64 v83; // r8
  __int64 DCEx; // rbx
  int v85; // esi
  __int64 v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rbx
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned int ValidItem; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned __int64 *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  struct tagMONITOR *v110; // rsi
  int v111; // ebx
  int v112; // r13d
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // r15d
  __int64 v119; // rsi
  int ***v120; // rax
  __int64 v121; // r12
  int BestPos; // eax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rax
  struct _LARGE_STRING **v126; // r15
  __int64 v127; // rbx
  __int64 v128; // rax
  struct _LARGE_STRING *v129; // r9
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rbx
  __int64 v140; // rsi
  int v141; // r13d
  unsigned int v142; // r12d
  __int64 v143; // rcx
  __int64 DPIMetrics; // rax
  int v145; // esi
  __int64 v146; // rbx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  int v150; // [rsp+50h] [rbp-1A8h]
  __int64 v151[2]; // [rsp+58h] [rbp-1A0h] BYREF
  __int64 v152; // [rsp+68h] [rbp-190h]
  struct tagMENUSTATE *v153; // [rsp+70h] [rbp-188h] BYREF
  unsigned int v154; // [rsp+78h] [rbp-180h] BYREF
  unsigned int v155; // [rsp+7Ch] [rbp-17Ch] BYREF
  __int64 v156; // [rsp+80h] [rbp-178h]
  struct tagMENUWND *v157; // [rsp+88h] [rbp-170h]
  unsigned __int64 v158; // [rsp+90h] [rbp-168h] BYREF
  __int64 v159; // [rsp+98h] [rbp-160h] BYREF
  __int128 v160; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v161; // [rsp+B0h] [rbp-148h]
  unsigned int v162; // [rsp+B8h] [rbp-140h]
  __int128 v163; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-128h]
  __int128 v165; // [rsp+D8h] [rbp-120h] BYREF
  __int64 v166; // [rsp+E8h] [rbp-110h]
  _QWORD v167[2]; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v168[2]; // [rsp+100h] [rbp-F8h] BYREF
  _QWORD v169[3]; // [rsp+110h] [rbp-E8h] BYREF
  _QWORD v170[3]; // [rsp+128h] [rbp-D0h] BYREF
  __int64 v171; // [rsp+140h] [rbp-B8h]
  __int64 *v172[3]; // [rsp+148h] [rbp-B0h] BYREF
  _QWORD v173[3]; // [rsp+160h] [rbp-98h] BYREF
  __int64 *v174[3]; // [rsp+178h] [rbp-80h] BYREF
  __int64 *v175[3]; // [rsp+190h] [rbp-68h] BYREF
  __int64 v176; // [rsp+1A8h] [rbp-50h] BYREF

  v152 = (__int64)a4;
  SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v151);
  v163 = 0LL;
  v164 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v8 = 0LL;
  v150 = 0;
  v158 = 0LL;
  v9 = (_QWORD *)((char *)a1 + 40);
  v156 = (__int64)a1 + 40;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v10 + 232) & 0x800) != 0 )
    goto LABEL_18;
  v11 = *(_WORD *)(v10 + 42);
  if ( v11 != 668 )
  {
    if ( v11 )
    {
LABEL_18:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v151);
      return v8;
    }
    if ( a2 != 129 )
    {
      v12 = xxxDefWindowProc((__int64 *)a1, a2, (unsigned __int64)a3, (unsigned __int64)a4);
LABEL_35:
      v8 = v12;
      goto LABEL_18;
    }
    v13 = *(_DWORD *)(v10 + 252);
    v14 = *(unsigned __int16 *)(gpsi + 332LL);
    if ( v13 + 320 >= v14 )
    {
      v27 = *((_QWORD *)a1 + 35);
      if ( v27 )
      {
        v28 = 0LL;
        if ( v13 )
        {
          while ( !*(_BYTE *)((unsigned int)v28 + v27) )
          {
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v13 )
              goto LABEL_31;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v10);
          v10 = *v9;
        }
LABEL_31:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v10 + 252));
      }
    }
    else
    {
      if ( *(_DWORD *)(v10 + 200) + v13 + 320 < v14 )
        goto LABEL_18;
      v155 = v14 - 320;
      v15 = (struct tagMENUSTATE *)Win32AllocPoolZInit(v14 - 320, 1937208149LL);
      v153 = v15;
      if ( !v15 )
        goto LABEL_18;
      v16 = *((_QWORD *)a1 + 35);
      if ( v16 )
      {
        v17 = 0LL;
        v18 = *(_DWORD *)(*v9 + 252LL);
        if ( v18 )
        {
          while ( !*(_BYTE *)((unsigned int)v17 + v16) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= v18 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(*v9, v17);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
        v15 = v153;
      }
      *((_QWORD *)a1 + 35) = v15;
      *(_DWORD *)(*v9 + 252LL) = v155;
      v19 = *(_DWORD *)(*v9 + 200LL);
      v154 = v19;
      v155 = v19;
      if ( v19 )
      {
        v153 = (struct tagMENUSTATE *)xxxClientAllocWindowClassExtraBytes(v19);
        if ( !v153 )
          goto LABEL_18;
      }
      else
      {
        v153 = 0LL;
      }
      if ( tagWND::RedirectedFieldpExtraBytes::operator<bool> bool((__int64)a1 + 320) )
      {
        if ( v21 )
        {
          v23 = *v9;
          v171 = *(_QWORD *)(*v9 + 296LL);
          v162 = *(_DWORD *)(v23 + 252);
          memmove(v153, (const void *)(v171 + v162), v22);
        }
        v24 = v154;
        v25 = *((_QWORD *)a1 + 5);
        v26 = *(_QWORD *)(v25 + 296);
        *(_QWORD *)(v25 + 296) = v153;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v24;
        xxxClientFreeWindowClassExtraBytes((__int64)a1, v26);
      }
      else
      {
        *(_QWORD *)(*v9 + 296LL) = v21;
        *(_DWORD *)(*v9 + 200LL) = v22;
      }
    }
    *(_WORD *)(*v9 + 42LL) = 668;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout((unsigned __int64)a1, a2, (unsigned __int64)a3, a4, 0, 0, 0LL, 1, 1);
    goto LABEL_35;
  }
  v29 = *((_QWORD *)a1 + 35);
  v157 = (struct tagMENUWND *)v29;
  *(_QWORD *)v29 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v151, *(_QWORD *)(v29 + 8));
  if ( *(_QWORD *)v151[0] )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 16LL) + 600LL); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v29 + 8) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v153,
    (struct tagMENUSTATE *)i);
  v31 = v151[0];
  if ( *(_QWORD *)v151[0] )
  {
    v31 = *(_QWORD *)v151[0];
    v32 = *(_QWORD *)(*(_QWORD *)v151[0] + 40LL);
  }
  else
  {
    v32 = 0LL;
  }
  if ( i && v32 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v163 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v163;
    *((_QWORD *)&v163 + 1) = v32;
    HMLockObject(v32);
    v36 = 1LL;
    v150 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v151[0] + 64LL)
      || (FadeInternal = *(_QWORD *)v151[0],
          v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v157 + 16LL) + 600LL),
          v37 = 1,
          *(_QWORD *)v34 == *(_QWORD *)(*(_QWORD *)v151[0] + 64LL)) )
    {
      v37 = 0;
    }
    v31 = *(unsigned int *)(i + 8);
    if ( (v31 & 0x100) != 0 && (v31 & 0x200) == 0 )
    {
      if ( v37 )
      {
        if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
          goto LABEL_336;
      }
      else
      {
        if ( (unsigned int)xxxCallHandleMenuMessages(i, (__int64 *)a1, a2, (__int64)a3, v152) )
        {
LABEL_182:
          ThreadUnlock1(v31, v34, FadeInternal);
          goto LABEL_321;
        }
        v36 = 1LL;
      }
    }
  }
  else
  {
    FadeInternal = 480LL;
    if ( a2 == 480 )
    {
      if ( !*(_QWORD *)v151[0] )
        goto LABEL_321;
      v34 = (__int64)v157;
      v31 = *(_QWORD *)(*(_QWORD *)v157 + 40LL);
      if ( *(char *)(v31 + 19) < 0 )
        goto LABEL_321;
    }
    else
    {
      v34 = (__int64)v157;
    }
    if ( a2 == 129 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)v34 + 40LL);
      if ( *(char *)(v31 + 19) < 0 )
        goto LABEL_321;
    }
    else if ( a2 != 112 && a2 != 480 )
    {
      goto LABEL_336;
    }
    v36 = 0LL;
  }
  if ( a2 <= 0x1E1 )
  {
    if ( a2 == 481 )
    {
      if ( (_DWORD)v36 )
        v32 = ThreadUnlock1(v31, v34, FadeInternal);
      v93 = 0LL;
      if ( v32 )
        v93 = *(_QWORD *)v32;
      goto LABEL_249;
    }
    if ( a2 <= 0x81 )
    {
      if ( a2 != 129 )
      {
        if ( a2 <= 0x18 )
        {
          switch ( a2 )
          {
            case 0x18u:
              if ( !a3 )
                xxxMNCancel(i, 0, 0, 0LL);
              goto LABEL_336;
            case 3u:
            case 5u:
              v31 = *(_QWORD *)v151[0];
              if ( !*(_QWORD *)(*(_QWORD *)v151[0] + 24LL) )
                goto LABEL_353;
              v55 = (__int64 *)MNGetpItem((__int64)v151, *(_DWORD *)(*(_QWORD *)v151[0] + 84LL));
              v56 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v151[0] + 24LL));
              v57 = v56;
              if ( !v55 )
                goto LABEL_353;
              if ( !v56 )
                goto LABEL_353;
              v58 = v56[1];
              if ( !v58 )
                goto LABEL_353;
              v59 = *v56;
              if ( !*v56 )
                goto LABEL_353;
              v60 = *((_QWORD *)v58 + 5);
              v170[2] = 0LL;
              v169[2] = 0LL;
              v155 = 0;
              v154 = 0;
              v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v169[0] = *(_QWORD *)(v61 + 408);
              *(_QWORD *)(v61 + 408) = v169;
              v169[1] = v59;
              HMLockObject(v59);
              v62 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v170[0] = *(_QWORD *)(v62 + 408);
              *(_QWORD *)(v62 + 408) = v170;
              v170[1] = v60;
              HMLockObject(v60);
              if ( !*(_DWORD *)(v60 + 64) )
              {
                v63 = *v57;
                _InterlockedAdd(&glSendMessage, 1u);
                xxxSendTransformableMessageTimeout((unsigned __int64)v63, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
              }
              if ( *(_QWORD *)(*(_QWORD *)v151[0] + 40LL)
                && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v151[0] + 40LL), (__int64)v55) != -1 )
              {
                xxxMNPositionHierarchy(
                  (__int64 **)v151,
                  v55,
                  *(_DWORD *)(v60 + 64) + 6,
                  *(_DWORD *)(v60 + 68) + 6,
                  (int *)&v155,
                  (LONG *)&v154,
                  0LL);
              }
              xxxSetWindowPos(*v57, 0LL, v155, v154, 0, 0, 1029);
              ThreadUnlock1(v65, v64, v66);
              break;
            case 6u:
              v42 = *(_DWORD *)(i + 8);
              if ( (v42 & 0x100) != 0 )
              {
                if ( (_WORD)a3 || (v42 & 0x200) != 0 || (**(_DWORD **)i & 0x80000) != 0 )
                  goto LABEL_336;
                v43 = HMValidateHandleNoSecure(v152, 1);
                v44 = safe_cast_fnid_to_PMENUWND(v43);
                if ( !v31 )
                  goto LABEL_337;
                if ( v44 )
                {
                  v45 = *(_QWORD *)(v44 + 8);
                  if ( v45 )
                  {
                    if ( *(_QWORD *)i == *(_QWORD *)(v45 + 64) )
                      goto LABEL_337;
                  }
                }
                v46 = *(_DWORD *)(i + 8);
                if ( (v46 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
                {
                  *(_DWORD *)(i + 8) = v46 & 0xFFFEFFFF;
                  PostMessage((int)a1, 498, 0, 0);
LABEL_337:
                  if ( v150 )
                    ThreadUnlock1(v31, v34, FadeInternal);
                  v93 = xxxDefWindowProc((__int64 *)a1, a2, (unsigned __int64)a3, v43);
                  goto LABEL_249;
                }
                goto LABEL_98;
              }
              if ( !(_WORD)a3 )
                goto LABEL_353;
              v165 = 0LL;
              v166 = 0LL;
              if ( *(_WORD *)(gptiCurrent + 624LL) >= 0x500u )
              {
LABEL_98:
                v47 = (int)a1;
LABEL_99:
                PostMessage(v47, 499, 0, 0);
                goto LABEL_353;
              }
              if ( !gpqForegroundPrev
                || !IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL))
                || (v34 = *(_QWORD *)(gpqForegroundPrev + 128LL),
                    v31 = *(_WORD *)(*(_QWORD *)(v34 + 40) + 42LL) & 0x3FFF,
                    (_DWORD)v31 == 668) )
              {
                v51 = (int)a1;
                v52 = 0;
                while ( 1 )
                {
                  TopWindow = (struct tagWND *)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
                  a1 = TopWindow;
                  if ( TopWindow )
                  {
                    if ( IsWindowActivateable(*((const struct tagWND **)TopWindow + 25)) )
                    {
                      v34 = *((_QWORD *)a1 + 25);
                      v31 = *(_WORD *)(*(_QWORD *)(v34 + 40) + 42LL) & 0x3FFF;
                      if ( (_DWORD)v31 != 668 )
                        break;
                    }
                  }
                  if ( a1 )
                  {
                    v54 = v52++;
                    if ( v54 < 0xFF )
                      continue;
                  }
                  if ( !v52 )
                    goto LABEL_106;
                  v47 = v51;
                  goto LABEL_99;
                }
              }
              a1 = (struct tagWND *)v34;
LABEL_106:
              if ( !a1 )
                goto LABEL_353;
              *(_QWORD *)&v165 = *(_QWORD *)(gptiCurrent + 408LL);
              *(_QWORD *)(gptiCurrent + 408LL) = &v165;
              *((_QWORD *)&v165 + 1) = a1;
              HMLockObject(a1);
              v50 = *(_QWORD *)(gptiCurrent + 424LL);
              if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v50 )
              {
                xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
              }
              else if ( gpqForeground == v50 )
              {
                xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 0LL);
              }
              break;
            case 0xFu:
              SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v172, v32);
              xxxHandleMenuPainting(a1, v172);
              v41 = v172;
LABEL_86:
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v41);
              goto LABEL_353;
            default:
              if ( a2 == 20 && *(_QWORD *)(*(_QWORD *)(v32 + 40) + 24LL) )
              {
                MNEraseBackground(
                  a3,
                  *(_DWORD *)(*(_QWORD *)v156 + 112LL) - *(_DWORD *)(*(_QWORD *)v156 + 104LL),
                  *(_DWORD *)(*(_QWORD *)v156 + 116LL) - *(_DWORD *)(*(_QWORD *)v156 + 108LL));
                goto LABEL_83;
              }
LABEL_336:
              v43 = v152;
              goto LABEL_337;
          }
LABEL_174:
          ThreadUnlock1(v50, v48, v49);
          goto LABEL_353;
        }
        if ( a2 == 28 )
        {
          if ( (*(_DWORD *)(i + 8) & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
            goto LABEL_353;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            v34 = *(_QWORD *)(gptiCurrent + 424LL) - gpqForeground;
            *(_DWORD *)(i + 8) = *(_DWORD *)(i + 8) & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 424LL) != gpqForeground
                                                                  ? 0x10000
                                                                  : 0);
          }
          v31 = *(_QWORD *)v151[0];
          if ( !*(_QWORD *)(*(_QWORD *)v151[0] + 8LL) )
            goto LABEL_353;
          v73 = *(_QWORD *)(*(_QWORD *)v151[0] + 8LL);
          v74 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v160 = *(_QWORD *)(v74 + 408);
          *(_QWORD *)(v74 + 408) = &v160;
          *((_QWORD *)&v160 + 1) = v73;
          HMLockObject(v73);
          if ( !a3 || (v75 = 1, (*(_DWORD *)(i + 8) & 0x10000) != 0) )
            v75 = 2;
          xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v151[0] + 8LL), v75, 1LL);
          goto LABEL_174;
        }
        if ( a2 != 70 )
        {
          if ( a2 == 71 )
          {
            v43 = v152;
            if ( (*(_DWORD *)(v152 + 32) & 0x40) != 0 )
            {
              v31 = *(_QWORD *)v151[0];
              if ( (**(_DWORD **)v151[0] & 0x8000000) != 0 )
              {
                if ( (gfade[12] & 0x10) != 0 )
                {
                  zzzStartFade();
                }
                else
                {
                  *(_DWORD *)(i + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
                }
                v31 = *(_QWORD *)v151[0];
                **(_DWORD **)v151[0] &= ~0x8000000u;
              }
            }
            goto LABEL_337;
          }
          if ( a2 != 112 )
            goto LABEL_336;
          if ( i && (*(_DWORD *)(i + 8) & 0x400) != 0 )
          {
            v159 = *(_QWORD *)a1;
            xxxUserModeCallback(0x65u, (__int64)&v159, 8LL, v36);
          }
          xxxMNDestroyHandler(v157);
LABEL_178:
          v78 = v150 == 0;
          goto LABEL_181;
        }
        if ( (*(_DWORD *)(v152 + 32) & 0x40) == 0 )
          goto LABEL_336;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v151[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 4
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
          && (GetAppCompatFlags2(0x400u) & 1) == 0 )
        {
          v67 = v156;
          v68 = *(_DWORD *)(*(_QWORD *)v156 + 96LL) - *(_DWORD *)(*(_QWORD *)v156 + 88LL);
          *(_DWORD *)(i + 116) = v68;
          v69 = *(_DWORD *)(*(_QWORD *)v67 + 100LL) - *(_DWORD *)(*(_QWORD *)v67 + 92LL);
          *(_DWORD *)(i + 120) = v69;
          if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
          {
            if ( !(unsigned int)MNCreateAnimationBitmap(i, v68, v69) )
              goto LABEL_156;
            *(_QWORD *)(i + 96) = _GetDCEx(a1, 1LL, 65665LL);
            v70 = (**(_DWORD **)v151[0] >> 4) & 0xF80000 | *(_DWORD *)(i + 8) & 0xFF07FFFF;
            *(_DWORD *)(i + 8) = v70;
            v71 = 0;
            if ( (v70 & 0x180000) == 0 )
              v71 = *(_DWORD *)(i + 116);
            *(_DWORD *)(i + 108) = v71;
            v72 = 0;
            if ( (v70 & 0x600000) == 0 )
              v72 = *(_DWORD *)(i + 120);
            *(_DWORD *)(i + 112) = v72;
            FadeInternal = *(_QWORD *)(i + 136);
          }
          else
          {
            FadeInternal = (unsigned __int64)CreateFadeInternal(a1, 0LL, 175, 17, 0);
            if ( !FadeInternal )
              goto LABEL_156;
          }
          *(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) |= 8u;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (unsigned __int64)a1,
            0x317u,
            FadeInternal,
            (struct _LARGE_STRING *)0xE,
            0,
            0,
            0LL,
            1,
            1);
          *(_DWORD *)(*(_QWORD *)(v32 + 40) + 40LL) &= ~8u;
          v31 = gfade[12];
          if ( (v31 & 0x10) != 0 )
            zzzShowFade();
          goto LABEL_336;
        }
LABEL_156:
        v31 = *(_QWORD *)v151[0];
        **(_DWORD **)v151[0] &= ~0x8000000u;
        goto LABEL_336;
      }
      v76 = v157;
      if ( !*((_QWORD *)v157 + 1) && !*((_QWORD *)v157 + 2) )
      {
        v77 = MNAllocPopup(1, (void *)v34);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v151, (__int64)v77);
        if ( *(_QWORD *)v151[0] )
        {
          *((_QWORD *)v76 + 1) = *(_QWORD *)v151[0];
          **(_DWORD **)v151[0] |= 0x40000000u;
          *(_DWORD *)(*(_QWORD *)v151[0] + 80LL) = -1;
          v167[0] = *(_QWORD *)v151[0] + 16LL;
          v167[1] = a1;
          HMAssignmentLock(v167);
LABEL_83:
          if ( v150 )
            ThreadUnlock1(v39, v38, v40);
LABEL_240:
          if ( v153 )
            xxxUnlockMenuStateInternal(v153, 0);
          v8 = 1LL;
          goto LABEL_18;
        }
        goto LABEL_178;
      }
      v78 = (_DWORD)v36 == 0;
LABEL_181:
      if ( v78 )
        goto LABEL_321;
      goto LABEL_182;
    }
    v34 = 131LL;
    if ( a2 == 131 )
    {
      v92 = v152;
      xxxDefWindowProc((__int64 *)a1, 0x83u, (unsigned __int64)a3, v152);
      if ( (*(_DWORD *)(v32 + 124) & 3) != 0 )
      {
        v31 = *(unsigned int *)(GetDPIMetrics(v31) + 28);
        *(_DWORD *)(v92 + 4) += v31;
        *(_DWORD *)(v92 + 12) -= v31;
      }
      goto LABEL_353;
    }
    if ( a2 != 132 )
    {
      if ( a2 == 133 )
      {
        if ( (**(_DWORD **)v151[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v32 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v32) )
            {
              v81 = *(struct tagWND **)(*(_QWORD *)v151[0] + 16LL);
              v82 = 0LL;
              v83 = 65537LL;
            }
            else
            {
              v83 = 328833LL;
              v82 = a3;
              v81 = a1;
            }
            DCEx = _GetDCEx(v81, v82, v83);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            v85 = 0;
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v87 = xxxDefWindowProc((__int64 *)a1, 0x85u, (unsigned __int64)a3, v152);
              if ( (unsigned int)MNIsUAHMenu(v32) )
              {
                v89 = v151[0];
                v88 = *(_QWORD *)v151[0];
                if ( *(_QWORD *)(*(_QWORD *)v151[0] + 16LL) )
                {
                  v91 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 149LL, v32, v91);
                  _ReleaseDC(v91);
                }
              }
              if ( v150 )
                ThreadUnlock1(v89, v88, v90);
              if ( v153 )
                xxxUnlockMenuStateInternal(v153, 0);
              v8 = v87;
              goto LABEL_18;
            }
            if ( (unsigned int)MNIsUAHMenu(v32) )
            {
              v86 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 0LL, 65537LL);
              v85 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 149LL, v32, v86);
              _ReleaseDC(v86);
            }
            if ( v85 )
              goto LABEL_353;
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v32, DCEx, *(_QWORD *)v156 + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_353:
        if ( v150 )
          ThreadUnlock1(v31, v34, FadeInternal);
        if ( v153 )
          xxxUnlockMenuStateInternal(v153, 0);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v151);
        return 0LL;
      }
      if ( a2 != 256 )
      {
        v31 = 2LL;
        if ( a2 == 258 )
          goto LABEL_213;
        if ( a2 != 260 )
        {
          if ( a2 != 262 )
          {
            if ( a2 != 275 )
            {
              if ( a2 != 480 )
                goto LABEL_336;
              if ( !a3 )
                goto LABEL_353;
              v79 = ValidateHmenu(a3);
              if ( !v79 )
                goto LABEL_353;
              SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v173, v79);
              LockPopupMenu((__int64)v151, (__int64 *)(*(_QWORD *)v151[0] + 40LL), (__int64)v173);
              v41 = (__int64 **)v173;
              goto LABEL_86;
            }
            v34 = 65529LL;
            if ( a3 != (HDC)65529 )
            {
              if ( a3 == (HDC)65531 )
              {
                if ( *(_QWORD *)(i + 96) )
                  MNAnimate(i, 1LL);
                goto LABEL_353;
              }
              if ( a3 == (HDC)65534 )
              {
                **(_DWORD **)v151[0] &= ~0x80u;
                xxxMNOpenHierarchy((__int64 **)v151, i);
                goto LABEL_353;
              }
              if ( a3 != (HDC)0xFFFF )
              {
                if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
                {
                  if ( (*(_DWORD *)(i + 8) & 8) != 0 )
                    xxxMNDoScroll((__int64)v151, (unsigned int)a3, 0);
                  else
                    FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
                goto LABEL_353;
              }
              **(_DWORD **)v151[0] &= ~0x80u;
              goto LABEL_204;
            }
            FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
            if ( (*(_DWORD *)(i + 8) & 0x1000) == 0 )
              goto LABEL_353;
LABEL_209:
            v80 = v150;
LABEL_210:
            xxxEndMenuLoop(i, *(_QWORD *)i);
            if ( (*(_DWORD *)(i + 8) & 0x100) != 0 )
              xxxMNEndMenuState(i);
            v78 = v80 == 0;
            goto LABEL_181;
          }
LABEL_213:
          xxxMNChar((__int64 **)v151, i, (unsigned int)a3);
          goto LABEL_353;
        }
      }
      xxxMNKeyDown((__int64 **)v151, i, (unsigned int)a3);
      goto LABEL_353;
    }
    if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
      goto LABEL_336;
    LODWORD(v158) = (__int16)v152;
    HIDWORD(v158) = SWORD1(v152);
    if ( (_DWORD)v36 )
      ThreadUnlock1((unsigned __int64)v152 >> 16, 131LL, FadeInternal);
    if ( PtInRect((_DWORD *)(*(_QWORD *)v156 + 88LL), v158) )
      goto LABEL_240;
LABEL_321:
    if ( v153 )
      xxxUnlockMenuStateInternal(v153, 0);
    goto LABEL_18;
  }
  if ( a2 <= 0x2A3 )
  {
    if ( a2 == 675 )
    {
      *(_DWORD *)(i + 8) ^= ((unsigned __int16)*(_DWORD *)(i + 8) ^ (unsigned __int16)~(unsigned __int16)(*(_DWORD *)(i + 8) >> 1)) & 0x4000;
      **(_DWORD **)v151[0] &= ~0x100000u;
      MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
      v34 = *(_QWORD *)v151[0];
      v31 = *(_QWORD *)(*(_QWORD *)i + 56LL);
      if ( *(_QWORD *)(*(_QWORD *)v151[0] + 16LL) == v31 )
        xxxMNSelectItem((__int64 **)v151, i, -1);
      goto LABEL_353;
    }
    if ( a2 <= 0x1ED )
    {
      switch ( a2 )
      {
        case 0x1EDu:
          v31 = *(unsigned int *)(*(_QWORD *)(v32 + 40) + 44LL);
          if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
            xxxMNButtonDown(v151, i, (unsigned int)a3, 1);
          goto LABEL_353;
        case 0x1E2u:
          if ( *(_QWORD *)(*(_QWORD *)v151[0] + 8LL) )
          {
            v105 = *(_QWORD *)(*(_QWORD *)v151[0] + 8LL);
            v106 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v160 = *(_QWORD *)(v106 + 408);
            *(_QWORD *)(v106 + 408) = &v160;
            *((_QWORD *)&v160 + 1) = v105;
            HMLockObject(v105);
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v174, v32);
            xxxMNCompute(v174, *(_QWORD *)(*(_QWORD *)v151[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v174);
            ThreadUnlock1(v108, v107, v109);
          }
          v110 = _MonitorFromWindowInternal(a1, 1LL, 0);
          v159 = (__int64)v110;
          v111 = *(_DWORD *)(v32 + 64);
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v175, v32);
          v112 = MNCheckScroll((__int64 **)v151, v175, (__int64)v110);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v175);
          if ( a3 )
          {
            v116 = 0LL;
            v117 = 0LL;
            v118 = (8 * (_BYTE)a3) & 0x20 | 0x214;
            v119 = v156;
            if ( (*(_BYTE *)(*(_QWORD *)v156 + 31LL) & 0x10) != 0 )
            {
              *(_OWORD *)v168 = 0LL;
              v120 = (int ***)SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(&v176, (__int64 **)v151);
              v121 = v159;
              MNGetPopupBoundsRect(v120, v159, v168, 1);
              v156 = *(_QWORD *)(*(_QWORD *)v119 + 88LL);
              BestPos = FindBestPos(v156, SHIDWORD(v156), v111, v112, (__int64)v168, 0, (__int64)v151, v121, v156);
              v116 = (unsigned int)(__int16)BestPos;
              v117 = (unsigned int)SHIWORD(BestPos);
            }
            else
            {
              v118 |= 2u;
            }
            xxxSetWindowPos(a1, 0LL, v116, v117, v111 + 6, v112 + 6, v118);
          }
          if ( v150 )
            ThreadUnlock1(v114, v113, v115);
          v93 = (unsigned __int16)v111 | ((unsigned __int16)v112 << 16);
          goto LABEL_249;
        case 0x1E3u:
          v93 = xxxMNOpenHierarchy((__int64 **)v151, i);
          if ( v150 )
            ThreadUnlock1(v103, v102, v104);
          if ( v93 == -1 )
            goto LABEL_321;
          break;
        case 0x1E4u:
LABEL_204:
          xxxMNCloseHierarchy(*(_QWORD *)v151[0], i);
          goto LABEL_353;
        case 0x1E5u:
          v31 = *(unsigned int *)(*(_QWORD *)(v32 + 40) + 44LL);
          if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
          {
            v101 = (unsigned __int64 *)xxxMNSelectItem((__int64 **)v151, i, (int)a3);
            if ( v101 )
            {
              if ( v150 )
                ThreadUnlock1(v31, v34, FadeInternal);
              v93 = *(unsigned __int16 *)(*v101 + 4) | ((unsigned __int128)-(__int128)v101[2] >> 64) & 0x10;
              goto LABEL_249;
            }
          }
          goto LABEL_353;
        case 0x1E6u:
          xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)v152, 0LL);
          goto LABEL_353;
        case 0x1E7u:
          ValidItem = MNFindNextValidItem(v32, 0xFFFFFFFFLL, 1LL, 1LL);
          v93 = (int)ValidItem;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((unsigned __int64)a1, 0x1E5u, ValidItem, 0LL, 0, 0, 0LL, 1, 1);
          if ( v150 )
            ThreadUnlock1(v99, v98, v100);
          goto LABEL_249;
        case 0x1EBu:
          v93 = xxxMNFindWindowFromPoint((__int64 **)v151, a3, v152);
          if ( v150 )
            ThreadUnlock1(v95, v94, v96);
          if ( !IsMFMWFPWindow(v93) )
            goto LABEL_249;
          break;
        case 0x1ECu:
          xxxPlayEventSound(5LL, v34, FadeInternal);
          xxxShowWindowEx(a1, BYTE1(*(_DWORD *)(i + 8)) & 1 | 4, 0);
          goto LABEL_353;
        default:
          goto LABEL_336;
      }
      if ( v93 )
        v93 = *(_QWORD *)v93;
      else
        v93 = 0LL;
LABEL_249:
      if ( v153 )
        xxxUnlockMenuStateInternal(v153, 0);
      v8 = v93;
      goto LABEL_18;
    }
    switch ( a2 )
    {
      case 0x1EEu:
        xxxMNMouseMove((__int64 **)v151, i, v152);
        goto LABEL_353;
      case 0x1EFu:
        v31 = *(unsigned int *)(*(_QWORD *)(v32 + 40) + 44LL);
        if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
          xxxMNButtonUp(v151, i, (int)a3);
        goto LABEL_353;
      case 0x1F0u:
        if ( (_DWORD)v36 )
          ThreadUnlock1(v31, v34, FadeInternal);
        v93 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v151);
        goto LABEL_249;
      case 0x1F1u:
        xxxMNDoubleClick(i, (__int64)v151, (int)a3);
        goto LABEL_353;
      case 0x1F2u:
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 0LL, 0LL, 1);
        goto LABEL_353;
      case 0x1F3u:
        goto LABEL_209;
    }
    if ( a2 != 500 )
      goto LABEL_336;
    if ( (_DWORD)v36 )
      ThreadUnlock1(v31, v34, FadeInternal);
    v80 = 0;
    if ( (*(_DWORD *)(i + 8) & 0x80u) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)v151[0] + 8LL) )
      {
        if ( IsMFMWFPWindow(*(_QWORD *)(i + 64)) )
        {
          v124 = safe_cast_fnid_to_PMENUWND(v123);
          if ( v124 )
          {
            v125 = *(_QWORD *)(v124 + 8);
            if ( v125 )
            {
              v126 = *(struct _LARGE_STRING ***)(v125 + 40);
              if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
              ++*(_DWORD *)(i + 40);
              v127 = *(_QWORD *)(*(_QWORD *)v151[0] + 8LL);
              v128 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v160 = *(_QWORD *)(v128 + 408);
              *(_QWORD *)(v128 + 408) = &v160;
              *((_QWORD *)&v160 + 1) = v127;
              HMLockObject(v127);
              *(_DWORD *)(i + 8) |= 0x8000u;
              v129 = 0LL;
              if ( v126 )
                v129 = *v126;
              v130 = *(unsigned int *)(i + 72);
              v131 = *(_QWORD *)(*(_QWORD *)v151[0] + 8LL);
              _InterlockedAdd(&glSendMessage, 1u);
              v132 = xxxSendTransformableMessageTimeout(v131, 0x123u, v130, v129, 0, 0, 0LL, 1, 1);
              v135 = *(unsigned int *)(i + 8);
              LODWORD(v135) = v135 & 0xFFFF7FFF;
              *(_DWORD *)(i + 8) = v135;
              if ( v132 != 1 )
              {
                *(_DWORD *)(i + 8) = v135 | 0x2000;
                MNCheckButtonDownState(i);
                if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
                  xxxMNSetCapture((__int64)v151, i);
                ThreadUnlock1(v137, v136, v138);
                xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
                goto LABEL_321;
              }
              ThreadUnlock1(v135, v133, v134);
              if ( !(unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
                goto LABEL_210;
            }
          }
        }
      }
    }
    goto LABEL_321;
  }
  v31 = 791LL;
  if ( a2 != 791 )
  {
    if ( a2 != 792 )
      goto LABEL_336;
    xxxMenuDraw(a3, v32, (__int64)a1);
    goto LABEL_353;
  }
  v139 = v152;
  if ( (v152 & 2) != 0 && (*(_DWORD *)(v32 + 124) & 3) != 0 )
  {
    v140 = v156;
    if ( !a3 || (*(_BYTE *)(*(_QWORD *)v156 + 26LL) & 0x40) == 0 || (v141 = 1, (GreGetLayout(a3) & 1) != 0) )
      v141 = 0;
    if ( v141 )
      v142 = GreSetLayout(
               a3,
               (unsigned int)(*(_DWORD *)(*(_QWORD *)v140 + 96LL) - *(_DWORD *)(*(_QWORD *)v140 + 88LL)),
               1LL);
    else
      v142 = 0;
    xxxMNDrawFullNC(a1);
    if ( v141 )
      GreSetLayout(a3, (unsigned int)(*(_DWORD *)(*(_QWORD *)v140 + 96LL) - *(_DWORD *)(*(_QWORD *)v140 + 88LL)), v142);
    GreGetDCPoint(a3, 8LL, &v158);
    DPIMetrics = GetDPIMetrics(v143);
    GreSetWindowOrg(a3, v158 - 3, HIDWORD(v158) - *(_DWORD *)(DPIMetrics + 28) - 3);
    xxxDefWindowProc((__int64 *)a1, 0x317u, (unsigned __int64)a3, v139 & 0xFFFFFFFFFFFFFFFDuLL);
    GreSetWindowOrg(a3, v158, SHIDWORD(v158));
    goto LABEL_353;
  }
  v145 = 0;
  v146 = xxxDefWindowProc((__int64 *)a1, 0x317u, (unsigned __int64)a3, v152);
  if ( (unsigned int)MNIsUAHMenu(v32) )
  {
    v148 = v151[0];
    v147 = *(_QWORD *)v151[0];
    if ( *(_QWORD *)(*(_QWORD *)v151[0] + 16LL) )
      v145 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v151[0] + 16LL), 149LL, v32, (__int64)a3);
  }
  if ( !v145 )
  {
    v148 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v148 == -2147352576 )
      MNDrawEdge(v32, a3, *(_QWORD *)v156 + 88LL, 0LL);
  }
  if ( v150 )
    ThreadUnlock1(v148, v147, v149);
  if ( v153 )
    xxxUnlockMenuStateInternal(v153, 0);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v151);
  return v146;
}
