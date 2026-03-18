/*
 * XREFs of _xxxMinMaximizeEx@24 @ 0xB3AD2
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 *     ?xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z @ 0xB3A8C (-xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z.c)
 *     _xxxMinMaximize@12 @ 0xB3AB6 (_xxxMinMaximize@12.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z @ 0x141BD2 (-xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z.c)
 *     _NtUserMinMaximize@12 @ 0x166FF9 (_NtUserMinMaximize@12.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE (-xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _ClrFTrueVis@4 @ 0x1CDFA (_ClrFTrueVis@4.c)
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _IsThreadDesktopComposed@4 @ 0x303CC (_IsThreadDesktopComposed@4.c)
 *     _InternalBeginDeferWindowPos@4 @ 0x32DC2 (_InternalBeginDeferWindowPos@4.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 *     _SetMinimize@8 @ 0xB4ABE (_SetMinimize@8.c)
 *     _xxxShowOwnedWindows@12 @ 0xB4B0A (_xxxShowOwnedWindows@12.c)
 *     ?CalcMinZOrder@@YGPAUtagWND@@PAU1@@Z @ 0xB4C0A (-CalcMinZOrder@@YGPAUtagWND@@PAU1@@Z.c)
 *     _ParkIcon@8 @ 0xB4C44 (_ParkIcon@8.c)
 *     _DwmSyncNotifyMinimizing@8 @ 0xB4E30 (_DwmSyncNotifyMinimizing@8.c)
 *     _DwmAsyncNotifyAnimationChange@12 @ 0xB5164 (_DwmAsyncNotifyAnimationChange@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     _xxxFlushPalette@4 @ 0x1962C9 (_xxxFlushPalette@4.c)
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 */

int __fastcall xxxMinMaximizeEx(struct tagQ *a1, struct tagWND *a2, unsigned int a3, int a4, unsigned int *a5, int a6)
{
  unsigned __int8 v7; // cl
  int v8; // eax
  int v9; // edx
  unsigned int *Prop; // ecx
  int v11; // edx
  unsigned int *v12; // esi
  int *v13; // esi
  int *v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  int v17; // ecx
  unsigned int *v18; // eax
  int v19; // ecx
  int v20; // edx
  char v21; // al
  void *v22; // esi
  unsigned int v23; // eax
  int v24; // esi
  int i; // ecx
  bool v26; // zf
  int v27; // edx
  unsigned int v28; // eax
  char v29; // cl
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  int v33; // edi
  char v34; // cl
  _DWORD *j; // esi
  int v36; // ecx
  int v37; // esi
  _DWORD *v38; // esi
  int *v39; // ecx
  _DWORD *v40; // esi
  int v41; // edx
  unsigned __int8 v42; // cl
  _DWORD *v44; // ecx
  char v45; // al
  unsigned int v46; // ecx
  int v47; // esi
  int v48; // eax
  char v49; // al
  int v50; // eax
  int v51; // eax
  int v52; // esi
  char v53; // cl
  int v54; // eax
  int v55; // ecx
  int v56; // edx
  void *v57; // eax
  void *v58; // eax
  int v59; // eax
  unsigned __int8 v60; // dl
  struct tagMONITOR *v61; // ecx
  int v62; // eax
  unsigned int *MonitorWorkRectForWindow; // eax
  int v64; // eax
  int v65; // edx
  int v66; // eax
  int v67; // edx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // eax
  int v72; // eax
  int v73; // ecx
  int v74; // eax
  int v75; // ecx
  int *v76; // eax
  int v77; // edi
  int v78; // [esp-4h] [ebp-ECh]
  int v79; // [esp-4h] [ebp-ECh]
  int v80; // [esp-4h] [ebp-ECh]
  struct tagWND *v81; // [esp+0h] [ebp-E8h]
  int v82; // [esp+4h] [ebp-E4h]
  int v83; // [esp+Ch] [ebp-DCh]
  int v84; // [esp+10h] [ebp-D8h]
  char v85; // [esp+16h] [ebp-D2h]
  _BYTE v86[5]; // [esp+17h] [ebp-D1h]
  unsigned int *v87; // [esp+1Ch] [ebp-CCh]
  BOOL v88; // [esp+20h] [ebp-C8h]
  unsigned int v89; // [esp+24h] [ebp-C4h] BYREF
  int v90; // [esp+28h] [ebp-C0h]
  int v91; // [esp+2Ch] [ebp-BCh]
  int v92; // [esp+30h] [ebp-B8h]
  int v93; // [esp+34h] [ebp-B4h]
  int v94; // [esp+38h] [ebp-B0h]
  int v95; // [esp+3Ch] [ebp-ACh]
  int v96; // [esp+40h] [ebp-A8h]
  int v97; // [esp+44h] [ebp-A4h]
  unsigned int v98; // [esp+48h] [ebp-A0h]
  unsigned int *v99; // [esp+4Ch] [ebp-9Ch]
  int v100; // [esp+50h] [ebp-98h]
  int v101; // [esp+54h] [ebp-94h]
  int v102; // [esp+58h] [ebp-90h]
  int v103; // [esp+5Ch] [ebp-8Ch]
  int v104; // [esp+60h] [ebp-88h]
  int v105; // [esp+64h] [ebp-84h]
  int v106; // [esp+68h] [ebp-80h]
  int v107; // [esp+6Ch] [ebp-7Ch]
  int v108; // [esp+70h] [ebp-78h] BYREF
  int v109; // [esp+74h] [ebp-74h]
  int v110; // [esp+78h] [ebp-70h]
  int v111; // [esp+7Ch] [ebp-6Ch]
  int v112; // [esp+84h] [ebp-64h] BYREF
  int v113; // [esp+88h] [ebp-60h]
  int v114; // [esp+8Ch] [ebp-5Ch]
  int v115; // [esp+90h] [ebp-58h] BYREF
  int v116; // [esp+94h] [ebp-54h]
  int v117; // [esp+98h] [ebp-50h]
  int v118; // [esp+9Ch] [ebp-4Ch] BYREF
  int v119; // [esp+A0h] [ebp-48h]
  int v120; // [esp+A4h] [ebp-44h]
  int v121; // [esp+A8h] [ebp-40h]
  int v122; // [esp+ACh] [ebp-3Ch] BYREF
  int v123; // [esp+B0h] [ebp-38h]
  int v124; // [esp+B4h] [ebp-34h]
  int v125; // [esp+B8h] [ebp-30h]
  _DWORD v126[10]; // [esp+BCh] [ebp-2Ch] BYREF

  v95 = a4;
  v97 = a6;
  v96 = 0;
  v89 = 0;
  v86[4] = 0;
  v102 = 0;
  v90 = 0;
  v101 = 0;
  v103 = 0;
  v94 = 0;
  v91 = 0;
  v93 = 0;
  v104 = 0;
  v88 = 0;
  v92 = 0;
  v84 = (int)a2;
  v122 = 0;
  v99 = a5;
  v123 = 0;
  v105 = 1;
  v124 = 0;
  v125 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v98 = 0;
  memset(v126, 0, sizeof(v126));
  v106 = *((_DWORD *)a1 + 14);
  v100 = a3 & 0x20;
  v7 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
  *(_DWORD *)v86 = v7 & 1;
  v107 = (v7 >> 5) & 1;
  if ( ((unsigned int)&loc_20000 & a3) != 0 )
  {
    PostEventMessage((struct tagTHREADINFO *)0x17, a1, 0, a2, a3 & 0xFFFDFFFF, (unsigned int)v81, v82);
    return 0;
  }
  v8 = (a3 & 0x80) << 14;
  v83 = v8;
  if ( (a3 & 0x40) != 0 )
  {
    v8 |= 0x10u;
    v83 = v8;
  }
  if ( (a3 & 0x100) != 0 )
  {
    v8 |= 4u;
    v83 = v8;
  }
  if ( (a3 & 0x200) != 0 )
    v83 = (unsigned int)&loc_80000 | v8;
  if ( IsThreadDesktopComposed(_gptiCurrent) )
  {
    a3 = v9 & 0xFFFEFFFF;
    v105 = v9 & 0x10000;
    if ( (v9 & 0x10000) == 0 )
    {
      if ( IsToplevelWindowDesktopComposed(a1) )
      {
        v78 = *(_DWORD *)a1;
        v57 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyAnimationChange(v57, v78);
      }
    }
  }
  GetRect((int)a1, &v122, 66);
  if ( (a3 & 4) != 0 )
    Prop = (unsigned int *)_GetProp((int)a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  else
    Prop = (unsigned int *)CkptRestore(a1, &v122);
  v87 = Prop;
  if ( !Prop )
    goto LABEL_89;
  if ( a5 && (a3 & 8) != 0 )
  {
    *Prop = *a5;
    Prop[1] = a5[1];
    Prop[2] = a5[2];
    Prop[3] = a5[3];
  }
  v11 = *(_DWORD *)(v106 + 20);
  if ( (*(_BYTE *)(v11 + 18) & 0x40) != 0 && (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0x40) == 0 )
  {
    v65 = *(_DWORD *)(v11 + 60);
    v66 = v65 - v124;
    v67 = v65 - v122;
    v122 = v66;
    v124 = v67;
    v96 = 1;
  }
  v108 = *Prop;
  v109 = Prop[1];
  v110 = Prop[2];
  v111 = Prop[3];
  v12 = v99;
  if ( !v100 )
    v12 = Prop + 4;
  v118 = *v12;
  v13 = (int *)(v12 + 1);
  v119 = *v13++;
  v14 = *(int **)(_gptiCurrent + 252);
  v120 = *v13;
  v15 = *v14;
  v121 = v13[1];
  if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(v15 + 8)) & 0x40) != 0 )
  {
    if ( xxxCallHook(*(struct tagHOOK **)a1, 1, (unsigned int *)v84, 5u, (int)v81, v82) )
      goto LABEL_89;
  }
  v16 = v84;
  v17 = v83;
  if ( v84 == 204 )
  {
    v17 = v83 | 0x14;
    v83 |= 0x14u;
    v16 = ((v87[12] & 4) != 0) + 1;
    v84 = v16;
  }
  switch ( v16 )
  {
    case 1u:
      goto LABEL_104;
    case 4u:
      if ( _gpqForeground && *(_DWORD *)(_gpqForeground + 64) )
        v83 = v17 | 0x10;
      goto LABEL_97;
    case 3u:
      goto LABEL_104;
    case 2u:
      v19 = v83;
      goto LABEL_32;
  }
  if ( v16 <= 5 )
  {
LABEL_57:
    v36 = v83;
LABEL_58:
    v20 = *(_DWORD *)&v86[1];
    goto LABEL_59;
  }
  if ( v16 > 7 )
  {
    if ( v16 == 9 )
    {
LABEL_97:
      v45 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
      if ( (v45 & 0x20) == 0 && ((v45 & 1) == 0 || !v100) )
      {
        v84 = 1;
        SetOrClrWF(0, (int)a1, 0x8901u, 1);
        SetOrClrWF(0, (int)a1, 0x8902u, 1);
        SetOrClrWF(0, (int)a1, 0x8A80u, 1);
        goto LABEL_103;
      }
      v46 = v87[12];
      if ( (v46 & 2) != 0 )
      {
        v80 = 3;
      }
      else if ( (v46 & 0x18) == 0x18 )
      {
        v80 = 12;
      }
      else if ( (v46 & 8) != 0 )
      {
        v80 = 14;
      }
      else
      {
        if ( (v46 & 0x10) == 0 )
        {
          v84 = 1;
          SetOrClrWF(0, (int)a1, 0x8901u, 1);
          SetOrClrWF(0, (int)a1, 0x8902u, 1);
LABEL_103:
          v16 = 1;
          goto LABEL_104;
        }
        v80 = 13;
      }
      v16 = v80;
      v84 = v80;
LABEL_104:
      v47 = v83;
      v48 = *((_DWORD *)a1 + 5);
      if ( v16 == 3 )
      {
        v59 = ValidateHmonitorNoRip(*(_DWORD *)(v48 + 164));
        v60 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
        v61 = (struct tagMONITOR *)v95;
        if ( (v60 & 1) != 0 && (!v95 || v59 == v95) )
        {
          if ( (((a3 & 2) == 0) & (v60 >> 4)) != 0 )
            goto LABEL_89;
          v61 = (struct tagMONITOR *)v95;
        }
        v83 |= 0x8000u;
        v94 = 1;
        if ( (a3 & 1) != 0 )
          v83 = v47 | 0x8010;
        if ( (v60 & 0x20) != 0 )
          v87[12] |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1, (int)v126, v61, 0);
      }
      else
      {
        v49 = *(_BYTE *)(v48 + 23);
        if ( (v49 & 0x21) != 0 )
          v83 |= 0x8000u;
        if ( (v49 & 1) != 0 )
          v94 = 1;
      }
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 0, 0) )
          goto LABEL_89;
        v93 = 1;
        v101 = 1;
        if ( (v83 & 0x10) == 0 )
        {
          v50 = *((_DWORD *)a1 + 5);
          v102 = 1;
          if ( (*(_BYTE *)(v50 + 23) & 0x40) == 0 )
            v103 = 1;
        }
        v83 |= 0x100u;
      }
      else
      {
        v93 = 3;
      }
      switch ( v84 )
      {
        case 3:
          v91 = v126[4] + v126[2];
          v89 = v126[4];
          v90 = v126[5];
          v92 = v126[5] + v126[3];
          SetOrClrWF(1, (int)a1, 0xF01u, 1);
          SetOrClrWF(0, (int)a1, 0x8901u, 1);
          SetOrClrWF(0, (int)a1, 0x8902u, 1);
          SetOrClrWF(0, (int)a1, 0x8A80u, 1);
          if ( (a3 & 0x10) == 0 && _gSqmIsOptedIn )
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533, 1);
LABEL_120:
          v51 = *((_DWORD *)a1 + 5);
          if ( (*(_BYTE *)(v51 + 23) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v51 + 13) & 2) != 0 )
              v52 = 0;
            else
              v52 = IsTrayWindow(a1);
            SetMinimize(a1, 0);
            v98 = 23;
            if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 13) & 2) == 0
              && v52 != IsTrayWindow(a1)
              && (*(_BYTE *)(_gpsi + 1720) & 8) != 0 )
            {
              if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0 )
                xxxCallHook(*(struct tagHOOK **)a1, 2, 0, 0xAu, (int)v81, v82);
              if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 4) + 96) )
                PostShellHookMessages();
            }
            v53 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
            if ( (v53 & 0xC0) != 0x40 && (v53 & 0x10) != 0 )
            {
              v54 = *((_DWORD *)a1 + 2);
              v55 = v83;
              if ( *(_DWORD *)(v54 + 508) != 1 )
                goto LABEL_131;
              v56 = *(_DWORD *)(v54 + 236);
              if ( v56 == _gpqForeground || (v83 & 0x10) != 0 && *(struct tagQ **)(v56 + 64) != a1 )
                goto LABEL_131;
              xxxSetForegroundWindowWithOptions((unsigned int *)a1, 6, 4097, 0);
            }
          }
          v55 = v83;
LABEL_131:
          v36 = v55 | 0x20;
          v88 = 0;
          v83 = v36;
          goto LABEL_58;
        case 12:
          v89 = v118;
          v90 = v119;
          v91 = v120;
          v92 = v121;
          SetOrClrWF(0, (int)a1, 0xF01u, 1);
          v69 = 1;
          break;
        case 14:
          v89 = v118;
          v90 = v119;
          v91 = v120;
          v92 = v121;
          SetOrClrWF(0, (int)a1, 0xF01u, 1);
          SetOrClrWF(1, (int)a1, 0x8901u, 1);
          v70 = 0;
LABEL_199:
          SetOrClrWF(v70, (int)a1, 0x8902u, 1);
          v83 |= 0x100000u;
          goto LABEL_120;
        case 13:
          v89 = v118;
          v90 = v119;
          v91 = v120;
          v92 = v121;
          SetOrClrWF(0, (int)a1, 0xF01u, 1);
          v69 = 0;
          break;
        default:
          v89 = v108;
          v90 = v109;
          v91 = v110;
          v92 = v111;
          SetOrClrWF(0, (int)a1, 0xF01u, 1);
          goto LABEL_120;
      }
      SetOrClrWF(v69, (int)a1, 0x8901u, 1);
      v70 = 1;
      goto LABEL_199;
    }
    goto LABEL_57;
  }
  if ( _gpqForeground && *(_DWORD *)(_gpqForeground + 64) )
    v83 = v17 | 0x10;
  v18 = (unsigned int *)CalcMinZOrder(v81);
  v19 = v83;
  if ( v18 )
  {
    if ( !v97 )
      v97 = *v18;
  }
  else
  {
    v19 = v83 | 4;
    v83 |= 4u;
  }
LABEL_32:
  v20 = 1;
  *(_DWORD *)&v86[1] = 1;
  v21 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
  if ( (v21 & 0x20) != 0 )
  {
    if ( (v21 & 0x10) == 0 )
    {
      v36 = v19 | 0x17;
      v83 = v36;
LABEL_59:
      if ( (a3 & 1) == 0 )
      {
        v37 = *((_DWORD *)a1 + 5);
        v85 = *(_BYTE *)(v37 + 23);
        if ( (v85 & 0x10) != 0 )
        {
          if ( v20 )
            v83 = v36 | 0x40;
          if ( !IsVisible(a1) || (a3 & 0x10000) == 0 || !v93 || (v85 & 0x40) != 0 && (*(_BYTE *)(v37 + 15) & 0x10) != 0 )
            goto LABEL_65;
          v108 = 0;
          v109 = 0;
          v110 = 0;
          v111 = 0;
          if ( v96 )
          {
            v71 = *((_DWORD *)a1 + 14);
            v108 = v89;
            v72 = *(_DWORD *)(v71 + 20);
            v109 = v90;
            v73 = *(_DWORD *)(v72 + 60);
            v74 = v73 - v91;
            v75 = v73 - v89;
            v110 = v91;
            v111 = v92;
            v89 = v74;
            v91 = v75;
          }
          if ( v93 == 3 || !IsTrayWindow(a1) )
          {
            v76 = (int *)&v89;
          }
          else
          {
            v118 = 0;
            v119 = 0;
            v120 = 0;
            v121 = 0;
            xxxSendMinRectMessages(a1, (unsigned int *)&v118);
            if ( ERECTL::bWrapped((ERECTL *)&v118) )
              goto LABEL_222;
            if ( v93 != 2 )
            {
              xxxDrawAnimatedRects(&v118, &v89);
              goto LABEL_222;
            }
            v76 = &v118;
          }
          xxxDrawAnimatedRects(&v122, v76);
LABEL_222:
          if ( v96 )
          {
            v89 = v108;
            v90 = v109;
            v91 = v110;
            v92 = v111;
          }
          goto LABEL_65;
        }
        v83 = v36 | 0x40;
      }
LABEL_65:
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 13) & 2) == 0 && v88 && (*(_BYTE *)(_gpsi + 1720) & 8) != 0 )
      {
        if ( ((*(_DWORD *)(_gptiCurrent + 372) | *(_DWORD *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x800) != 0 )
          xxxCallHook(*(struct tagHOOK **)a1, 1, 0, 0xAu, (int)v81, v82);
        if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 4) + 96) )
          PostShellHookMessages();
      }
      v38 = (_DWORD *)InternalBeginDeferWindowPos(1);
      if ( v38 )
      {
        v39 = v97 ? (int *)HMValidateHandleNoSecure(v97, 1) : 0;
        v40 = _DeferWindowPos(v38, a1, v39, v89, v90, v91 - v89, v92 - v90, v83, 0);
        if ( v40 )
        {
          if ( v94 && *(_DWORD *)*_gpDispInfo > 1u )
          {
            v77 = *((_DWORD *)a1 + 5);
            if ( (*(_BYTE *)(v77 + 23) & 1) != 0 && *((_DWORD *)a1 + 14) == _GetDesktopWindow(a1) )
            {
              *(_DWORD *)(v40[6] + 88) = 2;
            }
            else if ( (*(_BYTE *)(v77 + 13) & 8) != 0 )
            {
              *(_DWORD *)(v40[6] + 88) = 1;
            }
          }
          xxxEndDeferWindowPosEx((int)v40, 0);
          if ( _IsTopLevelWindow(a1) )
            xxxRestoreWindowFromDeferredStateIfNeeded(a1, 0);
        }
      }
      if ( v98 )
        xxxWindowEvent(v98, a1, 0, 0, 1);
      *(_DWORD *)(*((_DWORD *)a1 + 5) + 144) &= ~0x40000000u;
      v41 = *((_DWORD *)a1 + 5);
      if ( (*(_BYTE *)(v41 + 23) & 1) != 0 )
      {
        v62 = ValidateHmonitorNoRip(*(_DWORD *)(v41 + 164));
        MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v62, a1, &v108);
        v41 = *((_DWORD *)a1 + 5);
        v118 = *MonitorWorkRectForWindow;
        v119 = MonitorWorkRectForWindow[1];
        v120 = MonitorWorkRectForWindow[2];
        v121 = MonitorWorkRectForWindow[3];
        v122 = *(_DWORD *)(v41 + 52);
        v123 = *(_DWORD *)(v41 + 56);
        v124 = *(_DWORD *)(v41 + 60);
        v125 = *(_DWORD *)(v41 + 64);
        if ( v124 - v122 < v120 - v118 && v125 - v123 < v121 - v119 )
        {
          *(_DWORD *)(v41 + 144) |= 0x40000000u;
          v41 = *((_DWORD *)a1 + 5);
        }
      }
      if ( v84 == 2
        && (*(_BYTE *)(v41 + 13) & 2) == 0
        && (*(_BYTE *)(v41 + 23) & 0x10) != 0
        && (*(_BYTE *)(v41 + 22) & 0x40) != 0 )
      {
        if ( *(_DWORD *)(*((_DWORD *)a1 + 19) + 48) )
          _PostMessage((int)a1, 38, 1, 0);
        else
          _PostMessage((int)a1, 15, 0, 0);
      }
      if ( v101 )
        xxxShowOwnedWindows(0);
      if ( v84 == 6 && *((_DWORD *)a1 + 14) == _GetDesktopWindow(a1) && !xxxActivateOnMinimize(v44) )
        xxxActivateWindowWithOptions((int *)a1, 2, 57, 1);
      if ( v102 )
        xxxSetFocus((int *)a1);
      if ( v103 )
        xxxSendMessage(a1, 1u, 0);
      if ( v104 )
        xxxFlushPalette(a1);
      v42 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 23);
      if ( v86[0] != (v42 & 1) || v107 != ((v42 >> 5) & 1) )
        PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 40, *(_DWORD *)a1);
    }
  }
  else
  {
    if ( IsToplevelWindowDesktopComposed(a1) )
    {
      v22 = (void *)ReferenceDwmApiPort();
      if ( v22 )
      {
        if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
        UserSessionSwitchLeaveCrit();
        DwmSyncNotifyMinimizing(v22);
        EnterCrit(0, 1);
      }
    }
    v23 = v87[12];
    v93 = 2;
    if ( (v23 & 1) == 0 )
    {
      v23 &= ~0x20u;
      v87[12] = v23;
    }
    if ( (v23 & 0x20) == 0 )
    {
      ParkIcon(a1, v87 + 8);
      v87[12] |= 0x20u;
    }
    v24 = v87[9];
    v89 = v87[8];
    v90 = v24;
    v91 = v89 + *(_DWORD *)(_gpsi + 1724);
    v92 = v24 + *(_DWORD *)(_gpsi + 1728);
    xxxShowOwnedWindows(0);
    for ( i = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 60); i; i = *(_DWORD *)(i + 56) )
    {
      if ( (struct tagQ *)i == a1 )
      {
        v112 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v112;
        v113 = i;
        HMLockObject(i);
        if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0xC0) == 0x40 )
        {
          v68 = *((_DWORD *)a1 + 14);
          v115 = *(_DWORD *)(_gptiCurrent + 228);
          *(_DWORD *)(_gptiCurrent + 228) = &v115;
          v116 = v68;
          if ( v68 )
            HMLockObject(v68);
          xxxSetFocus(*((int **)a1 + 14));
          ThreadUnlock1();
        }
        else
        {
          xxxSetFocus(0);
        }
        ThreadUnlock1();
        break;
      }
    }
    if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 1) != 0 )
    {
      v64 = v87[12] | 2;
      v94 = 1;
      v31 = v64 & 0xFFFFFFE7;
    }
    else
    {
      v26 = !IsVerticallyMaximized(v81);
      v28 = v87[12];
      if ( v26 )
      {
        v29 = *(_BYTE *)(v27 + 145);
        v30 = v28 & 0xFFFFFFFD;
        if ( (v29 & 1) != 0 )
        {
          v31 = v30 & 0xFFFFFFE7 | 8;
        }
        else if ( (v29 & 2) != 0 )
        {
          v31 = v30 & 0xFFFFFFE7 | 0x10;
        }
        else
        {
          v31 = v30 & 0xFFFFFFE7;
        }
      }
      else
      {
        v31 = v28 & 0xFFFFFFE5 | 0x18;
      }
    }
    v87[12] = v31;
    v32 = *((_DWORD *)a1 + 5);
    if ( (*(_BYTE *)(v32 + 13) & 2) != 0 )
    {
      v33 = 0;
    }
    else
    {
      v33 = IsTrayWindow(a1);
      v32 = *((_DWORD *)a1 + 5);
      v88 = v33;
    }
    v34 = *(_BYTE *)(v32 + 23);
    if ( (v34 & 0x20) == 0 )
    {
      SetMinimize(a1, 1);
      SetOrClrWF(0, (int)a1, 0xF01u, 1);
      v98 = 22;
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 13) & 2) == 0 )
        v88 = v33 != IsTrayWindow(a1);
      for ( j = (_DWORD *)*((_DWORD *)a1 + 15); j; j = (_DWORD *)j[12] )
        ClrFTrueVis(j);
      v83 |= 0x8120u;
      if ( *((_DWORD *)a1 + 14) == _GetDesktopWindow(a1) )
        v104 = *(_BYTE *)(*((_DWORD *)a1 + 5) + 10) & 0x20;
      goto LABEL_57;
    }
    if ( (v34 & 0x10) == 0 )
    {
      v36 = v83 | 0x17;
      v89 = 0;
      v83 |= 0x17u;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      goto LABEL_58;
    }
  }
LABEL_89:
  if ( !v105 && IsToplevelWindowDesktopComposed(a1) )
  {
    v79 = *(_DWORD *)a1;
    v58 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v58, v79);
  }
  return 0;
}
