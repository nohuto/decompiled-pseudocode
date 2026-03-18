/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0022ADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00245BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006DE98 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     _FChildVisible @ 0x1C00AFCEC (_FChildVisible.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C0104724 (IsWindowBroadcastingDpiToChildrenX.c)
 *     GetAppCompatFlags @ 0x1C0108250 (GetAppCompatFlags.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C010B938 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011A2E8 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D079C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E6868 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r13
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rdi
  int v18; // ebx
  __int64 v19; // r8
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // r10d
  int v23; // r11d
  int v24; // ebx
  LONG v25; // edx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r12
  LONG v30; // ecx
  int v31; // edx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // r15
  NotifyShell *v35; // rsi
  struct _KTHREAD *v36; // r12
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rax
  int v42; // ebx
  __int64 v43; // r13
  int v44; // r12d
  int v45; // r14d
  int v46; // ebx
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // edx
  int v53; // r14d
  int v54; // r9d
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // r15d
  int v58; // edx
  _DWORD *v59; // rcx
  int v60; // r8d
  int v61; // ebx
  int v62; // edx
  int v63; // r12d
  int v64; // edx
  LONG *v65; // r13
  __int64 v66; // rdx
  int v67; // ecx
  unsigned int v68; // ebx
  __int64 v69; // r15
  int v70; // r14d
  unsigned int v71; // r9d
  __int64 result; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  int v77; // eax
  __int64 v78; // rcx
  __int128 v79; // xmm1
  __int64 v80; // xmm0_8
  int v81; // r14d
  int v82; // r12d
  int v83; // ebx
  int v84; // r13d
  unsigned int v85; // r15d
  __int64 v86; // rdx
  int v87; // eax
  unsigned int v88; // eax
  __int64 v89; // r14
  int v90; // edx
  int v91; // r11d
  int v92; // r9d
  int v93; // r8d
  int v94; // r10d
  int v95; // ebx
  char v96; // r14
  int v97; // eax
  int v98; // eax
  int v99; // r9d
  int v100; // r10d
  __int64 v101; // rax
  __int64 v102; // rbx
  __int16 v103; // r14
  LONG v104; // edx
  int v105; // ecx
  __int64 NewMonitor; // rax
  __int64 Prop; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v110; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v112; // rax
  int v113; // ebx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 AppCompatFlags; // rax
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  int v123; // [rsp+50h] [rbp-B0h]
  int v124; // [rsp+54h] [rbp-ACh]
  int v125; // [rsp+58h] [rbp-A8h]
  int v126; // [rsp+5Ch] [rbp-A4h]
  int v127; // [rsp+60h] [rbp-A0h]
  int v128; // [rsp+64h] [rbp-9Ch]
  unsigned int v129; // [rsp+68h] [rbp-98h]
  int v130; // [rsp+6Ch] [rbp-94h]
  int v131; // [rsp+70h] [rbp-90h]
  __int64 v132; // [rsp+78h] [rbp-88h]
  __int128 v133; // [rsp+80h] [rbp-80h] BYREF
  int v134; // [rsp+90h] [rbp-70h]
  HWND v135; // [rsp+98h] [rbp-68h]
  struct tagRECT v136; // [rsp+A0h] [rbp-60h] BYREF
  __int64 LowLimit; // [rsp+B0h] [rbp-50h] BYREF
  HWND *v138; // [rsp+B8h] [rbp-48h]
  __int128 v139; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v140; // [rsp+D0h] [rbp-30h]
  __int128 v141; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v142; // [rsp+E8h] [rbp-18h]
  __int64 v143; // [rsp+F8h] [rbp-8h]
  _QWORD v144[3]; // [rsp+100h] [rbp+0h] BYREF
  int v145[4]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v146; // [rsp+128h] [rbp+28h] BYREF
  __int128 v147; // [rsp+138h] [rbp+38h] BYREF
  __int128 *v148; // [rsp+148h] [rbp+48h]

  v138 = a2;
  v135 = 0LL;
  v144[2] = 0LL;
  v2 = 0LL;
  v148 = 0LL;
  *(_OWORD *)v145 = 0LL;
  v140 = 0LL;
  v146 = 0LL;
  v127 = 0;
  v147 = 0LL;
  v123 = 0;
  v139 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = _HMObjectFromHandle(*(_QWORD *)ValidWindowPos);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 104);
  v132 = v8;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v110),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v144[0] = *(_QWORD *)(v7 + 408);
  *(_QWORD *)(v7 + 408) = v144;
  v144[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  v17 = (__int64 *)*((_QWORD *)a1 + 5);
  v18 = *((_DWORD *)a1 + 7);
  v126 = 1;
  while ( 1 )
  {
    v130 = --v18;
    if ( v18 < 0 )
    {
      ThreadUnlock1(v15, v14, v16);
      result = 1LL;
      *v138 = v2;
      return result;
    }
    v34 = *v17;
    if ( *v17 )
      break;
LABEL_27:
    v17 += 21;
  }
  LOBYTE(v14) = 1;
  v35 = (NotifyShell *)HMValidateHandleNoSecure(*v17, v14);
  if ( !v35
    || (v15 = v17[1], v15 > 1) && v15 <= 0xFFFFFFFFFFFFFFFDuLL && (LOBYTE(v14) = 1, !HMValidateHandleNoSecure(v15, v14)) )
  {
    *v17 = 0LL;
    *((_DWORD *)v17 + 8) = 6159;
    goto LABEL_27;
  }
  v36 = KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v112 = PsGetCurrentProcess(v39, v38, v40),
        v113 = PsGetProcessSessionIdEx(v112),
        v115 = PsGetCurrentThreadProcess(v114),
        v113 == (unsigned int)PsGetProcessSessionIdEx(v115)) )
  {
    v41 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v41 )
      v37 = *v41;
  }
  *(_QWORD *)&v139 = *(_QWORD *)(v37 + 408);
  *(_QWORD *)(v37 + 408) = &v139;
  *((_QWORD *)&v139 + 1) = v35;
  HMLockObject(v35);
  v124 = 0;
  if ( !v2 && (v17[4] & 0x10) == 0 )
    v135 = *(HWND *)v35;
  v42 = *((_DWORD *)v17 + 8);
  if ( (v42 & 0x400) == 0 )
  {
    v43 = v17[1];
    v44 = v17[4] & 4;
    v45 = v42 & 0x750000;
    v46 = v17[4] & 0x40;
    if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0 || gptiCurrent == *((_QWORD *)v35 + 2) )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((int)v35, 70, 0, (int)v17, 0, 0, 0LL, 1, 0);
    }
    else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) != 1 )
    {
      LowLimit = 0LL;
      xxxSendTransformableMessageTimeout((int)v35, 70, 0, (int)v17, 2, 50, (unsigned __int64)&LowLimit, 1, 0);
    }
    v47 = v45 | *((_DWORD *)v17 + 8);
    *((_DWORD *)v17 + 8) = v47;
    v48 = v47;
    if ( v46 && (v47 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v35, (struct tagWND *)v47);
      v48 = *((unsigned int *)v17 + 8);
    }
    v49 = *((_DWORD *)v17 + 39);
    if ( (v48 & 3) != 3 && (v49 & 0x20) == 0 )
    {
      v17[16] = *(_QWORD *)(*((_QWORD *)v35 + 5) + 256LL);
      *((_DWORD *)v17 + 39) = v49 | 0x20;
    }
    *v17 = v34;
    if ( (v48 & 4) == 0 && (v44 || *((_WORD *)v17 + 4) != (_WORD)v43) )
    {
      if ( !IsStillWindowC(v17[1], v48) )
        goto LABEL_189;
      if ( *((_WORD *)v17 + 4) != (_WORD)v43 || (unsigned __int64)v17[1] >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v77 = CheckTopmost((struct tagWINDOWPOS *)v17);
        if ( v77 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v35 + 5) + 236LL) == 1 )
            SetTopmostEnum(v35, v77 == 1, (*((_DWORD *)v17 + 8) >> 9) & 1);
        }
      }
    }
  }
  v133 = *(_OWORD *)(*(_QWORD *)(v132 + 40) + 104LL);
  if ( (unsigned int)IsChildWindowDpiBoundary(v35) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel((struct tagWND *)v132, (int *)&v133, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v35, (int *)&v133, 0LL);
  }
  v50 = *((_QWORD *)v35 + 5);
  v51 = 0LL;
  v52 = *(_DWORD *)(v50 + 88);
  v53 = v52;
  v54 = *(_DWORD *)(v50 + 92);
  *((_DWORD *)v17 + 20) = v52;
  *((_DWORD *)v17 + 21) = v54;
  v55 = *((_QWORD *)v35 + 3);
  v128 = v52;
  v125 = v54;
  if ( v55 )
  {
    v56 = *(_QWORD *)(v55 + 8);
    if ( v56 )
      v51 = *(_QWORD *)(v56 + 24);
  }
  v57 = DWORD2(v133);
  v134 = DWORD1(v133);
  v131 = v133;
  if ( v132 != v51 )
  {
    v58 = v52 - v133;
    v54 -= DWORD1(v133);
    v128 = v58;
    v125 = v54;
    if ( (*(_BYTE *)(*(_QWORD *)(v132 + 40) + 26LL) & 0x40) != 0
      && (v116 = *((_QWORD *)v35 + 5), (*(_BYTE *)(v116 + 31) & 0xC0) == 0x40) )
    {
      v123 = 1;
      v53 = DWORD2(v133) - *(_DWORD *)(v116 + 96);
    }
    else
    {
      v123 = 0;
      v53 = v58;
    }
  }
  v59 = (_DWORD *)*((_QWORD *)v35 + 5);
  v60 = *((_DWORD *)v17 + 8) | 0x1800;
  v61 = v60;
  v62 = v59[24] - v59[22];
  v63 = v59[25] - v59[23];
  *((_DWORD *)v17 + 8) = v60;
  v129 = v62;
  v64 = v60;
  if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 233LL) & 3) != 0 && (v60 & 0x100000) != 0 )
  {
    ExtendArrangedRectangleByFrameMargin(v35, (struct tagSIZERECT *)(v17 + 2));
    v64 = *((_DWORD *)v17 + 8);
    v61 = v64;
    v54 = v125;
  }
  v65 = (LONG *)(v17 + 2);
  if ( (v64 & 2) != 0 )
  {
    *((_DWORD *)v17 + 39) |= 0x100u;
    *v65 = v53;
    *((_DWORD *)v17 + 5) = v54;
  }
  else
  {
    if ( *v65 == v53 && *((_DWORD *)v17 + 5) == v54 )
    {
      v73 = v127;
      *((_DWORD *)v17 + 8) = v64 | 2;
      if ( v123 )
        v73 = 1;
      v127 = v73;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow(v35) )
    {
      *v65 = -32000;
      *((_DWORD *)v17 + 5) = -32000;
    }
    v64 = *((_DWORD *)v17 + 8);
    v61 = v64;
  }
  if ( (v64 & 1) != 0 )
  {
    v66 = v129;
    *((_DWORD *)v17 + 6) = v129;
    *((_DWORD *)v17 + 7) = v63;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 31LL) & 0x20) != 0
      && (Prop = GetProp((__int64)v35, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL),
          v61 = *((_DWORD *)v17 + 8),
          Prop) )
    {
      v66 = *(unsigned int *)(gpsi + 2124LL);
      *((_DWORD *)v17 + 6) = v66;
      v67 = *(_DWORD *)(gpsi + 2128LL);
      *((_DWORD *)v17 + 7) = v67;
    }
    else
    {
      v66 = *((unsigned int *)v17 + 6);
      if ( (int)v66 < 0 )
      {
        *((_DWORD *)v17 + 6) = 0;
        v66 = 0LL;
      }
      v67 = *((_DWORD *)v17 + 7);
      if ( v67 < 0 )
      {
        *((_DWORD *)v17 + 7) = 0;
        v67 = 0;
      }
    }
    if ( (_DWORD)v66 == v129 && v67 == v63 )
    {
      v61 = *((_DWORD *)v17 + 8) | 1;
      *((_DWORD *)v17 + 8) = v61;
      if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 21LL) & 1) == 0 )
        v124 = 1;
    }
  }
  if ( v123 )
    *v65 = v57 - *v65 - v66 - v131;
  if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 31LL) & 0x10) != 0 )
  {
    v68 = v61 & 0xFFFFFFBF;
LABEL_73:
    *((_DWORD *)v17 + 8) = v68;
  }
  else
  {
    v68 = v61 & 0xFFFFFF7F;
    *((_DWORD *)v17 + 8) = v68;
    if ( (v68 & 0x40) == 0 )
    {
      v68 |= 8u;
      goto LABEL_73;
    }
  }
  v69 = *((_QWORD *)v35 + 5);
  v70 = v68;
  if ( (*(_BYTE *)(v69 + 27) & 2) == 0 && GetStyleWindow(v35, 2818LL) )
  {
    v70 = v68 | 0x100;
    *((_DWORD *)v17 + 8) = v68 | 0x100;
    v69 = *((_QWORD *)v35 + 5);
  }
  if ( (*(_BYTE *)(v69 + 20) & 0x20) != 0 )
  {
    v70 &= ~4u;
    v17[1] = 1LL;
    *((_DWORD *)v17 + 8) = v70;
  }
  if ( v126 )
  {
    if ( (v70 & 4) == 0 )
    {
      v126 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v17) )
        {
          *((_DWORD *)v17 + 8) |= 4u;
          v126 = 1;
        }
      }
    }
  }
  v71 = *((_DWORD *)v17 + 8);
  v19 = v71;
  if ( (v71 & 8) == 0 && ((v17[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v35, v66, v71)) )
  {
    v19 = v71 | 8;
    *((_DWORD *)v17 + 8) = v19;
  }
  if ( (v19 & 2) != 0 || (*(_BYTE *)(*((_QWORD *)v35 + 5) + 21LL) & 1) != 0 )
  {
    v20 = v124;
  }
  else
  {
    AppCompatFlags = GetAppCompatFlags(0LL, v66);
    v20 = v124;
    if ( (AppCompatFlags & 0x20000) != 0 )
      v20 = 1;
  }
  if ( (*((_DWORD *)v17 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v35) )
  {
    v101 = ValidateHmonitor(v17[16]);
    v102 = v101;
    v103 = v101 ? *(_WORD *)(*(_QWORD *)(v101 + 40) + 64LL) : 0;
    v104 = *((_DWORD *)v17 + 5);
    v136.left = *v65;
    v136.right = *((_DWORD *)v17 + 6) + v136.left;
    v105 = *((_DWORD *)v17 + 7);
    v136.top = v104;
    v136.bottom = v104 + v105;
    NewMonitor = GetNewMonitor(v35, &v136, 0LL);
    if ( NewMonitor )
    {
      if ( v102 != NewMonitor )
      {
        v118 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
        if ( v103 != (_WORD)v118 )
          *((_DWORD *)v17 + 39) ^= (*((_DWORD *)v17 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                             v35,
                                                                             v118,
                                                                             &v136,
                                                                             v17 + 17) << 7)) & 0x80;
      }
    }
  }
  v21 = *((unsigned int *)v17 + 8);
  if ( (v17[4] & 0x21) == 1 && !v20 )
  {
    v22 = v131;
    v23 = v128;
    v24 = v134;
    goto LABEL_16;
  }
  *((_DWORD *)v17 + 39) |= 4u;
  v78 = *((_QWORD *)v35 + 5);
  v141 = 0LL;
  v143 = 0LL;
  v142 = 0LL;
  if ( (*(_BYTE *)(v78 + 31) & 0x40) == 0 && *(char *)(v78 + 24) >= 0 )
    xxxCheckFullScreen(v35, (struct tagSIZERECT *)(v17 + 2));
  v79 = *((_OWORD *)v17 + 1);
  v141 = *(_OWORD *)v17;
  v80 = v17[4];
  v148 = &v141;
  v145[0] = *v65;
  v145[2] = *((_DWORD *)v17 + 6) + v145[0];
  v145[1] = *((_DWORD *)v17 + 5);
  v145[3] = *((_DWORD *)v17 + 7) + v145[1];
  v142 = v79;
  v143 = v80;
  GetRect((__int64)v35, (__int64)&v146, 66);
  GetRect((__int64)v35, (__int64)&v147, 65);
  v81 = v147;
  v82 = DWORD2(v147) - v147;
  v83 = DWORD1(v147);
  v84 = HIDWORD(v147) - DWORD1(v147);
  _InterlockedAdd(&glSendMessage, 1u);
  v85 = xxxSendTransformableMessageTimeout((int)v35, 131, 1, (int)v145, 0, 0, 0LL, 1, 0);
  if ( IsStillWindowC(v17[1], v86) )
  {
    if ( v85 - 16 > 0x3F0 )
    {
      v85 = 48;
      v146 = *(_OWORD *)v145;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 26LL) & 0x40) != 0 )
      v87 = DWORD2(v146) - DWORD2(v147);
    else
      v87 = v146 - v147;
    *((_DWORD *)v17 + 18) = v87;
    *((_DWORD *)v17 + 19) = DWORD1(v146) - DWORD1(v147);
    *((_DWORD *)v17 + 10) = v145[0];
    *((_DWORD *)v17 + 11) = v145[1];
    v32 = (unsigned int)(v145[2] - v145[0]);
    *((_DWORD *)v17 + 12) = v32;
    v19 = (unsigned int)(v145[3] - v145[1]);
    *((_DWORD *)v17 + 13) = v19;
    if ( v81 != v145[0] || v83 != v145[1] )
      *((_DWORD *)v17 + 8) &= ~0x1000u;
    v21 = *((unsigned int *)v17 + 8);
    v88 = *((_DWORD *)v17 + 8);
    if ( v82 != (_DWORD)v32 || v84 != (_DWORD)v19 )
    {
      v21 = v88;
      LODWORD(v21) = v88 & 0xFFFFF7FF;
      *((_DWORD *)v17 + 8) = v88 & 0xFFFFF7FF;
    }
    if ( (v21 & 0x100) == 0 && !v127 )
    {
      v89 = *((_QWORD *)v35 + 5);
      if ( (*(_BYTE *)(v89 + 24) & 0x20) == 0 )
      {
        if ( (v21 & 0x821) == 0x801 )
        {
          v23 = v128;
          if ( *((_DWORD *)v17 + 18) == *((_DWORD *)v17 + 4) - v128
            && *((_DWORD *)v17 + 19) == *((_DWORD *)v17 + 5) - v125 )
          {
            v24 = DWORD1(v133);
            v65 = (LONG *)(v17 + 2);
            v22 = v133;
LABEL_16:
            if ( (v21 & 0x100) != 0 )
            {
              v29 = v132;
              *(_OWORD *)(v17 + 7) = 0LL;
              v25 = *v65;
            }
            else
            {
              v25 = *v65;
              v26 = 0LL;
              v19 = *((unsigned int *)v17 + 5);
              *((_DWORD *)v17 + 14) = *v65;
              *((_DWORD *)v17 + 15) = v19;
              v27 = *((_QWORD *)v35 + 3);
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 8);
                if ( v28 )
                  v26 = *(_QWORD *)(v28 + 24);
              }
              v29 = v132;
              v30 = v25;
              if ( v132 != v26 )
              {
                v30 = v25 + v22;
                v19 = (unsigned int)(v24 + v19);
                *((_DWORD *)v17 + 14) = v25 + v22;
                *((_DWORD *)v17 + 15) = v19;
              }
              *((_DWORD *)v17 + 16) = *((_DWORD *)v17 + 6) + v30;
              v21 = (unsigned int)(v19 + *((_DWORD *)v17 + 7));
              *((_DWORD *)v17 + 17) = v21;
            }
            if ( (*(_BYTE *)(*((_QWORD *)v35 + 5) + 26LL) & 0x40) != 0 )
              v31 = *((_DWORD *)v17 + 6) + v25 - v129 - v23;
            else
              v31 = v25 - v23;
            *((_DWORD *)v17 + 18) = v31;
            v32 = (unsigned int)(*((_DWORD *)v17 + 5) - v125);
            v33 = *((_DWORD *)v17 + 8);
            *((_DWORD *)v17 + 19) = v32;
            if ( (v33 & 2) == 0 )
            {
              *((_DWORD *)v17 + 8) = v33 & 0xFFFFEFFF;
              *((_DWORD *)v17 + 10) = *((_DWORD *)v17 + 18) + *(_DWORD *)(*((_QWORD *)v35 + 5) + 104LL);
              *((_DWORD *)v17 + 11) = v32 + *(_DWORD *)(*((_QWORD *)v35 + 5) + 108LL);
              if ( v29 != GetDesktopWindow((__int64)v35) )
              {
                v19 = (unsigned int)(v19 - v100);
                *((_DWORD *)v17 + 10) = v19;
                *((_DWORD *)v17 + 11) = v99 - v24;
              }
              *((_DWORD *)v17 + 12) = *(_DWORD *)(*((_QWORD *)v35 + 5) + 112LL)
                                    - *(_DWORD *)(*((_QWORD *)v35 + 5) + 104LL);
              v32 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v35 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v35 + 5) + 108LL));
              *((_DWORD *)v17 + 13) = v32;
            }
LABEL_26:
            ThreadUnlock1(v21, v32, v19);
            v18 = v130;
            v2 = v135;
            goto LABEL_27;
          }
        }
        if ( v82 == (_DWORD)v32
          || (v85 & 0x100) == 0 && (v21 = *(_QWORD *)(*((_QWORD *)v35 + 17) + 8LL), (*(_BYTE *)(v21 + 8) & 2) == 0) )
        {
          if ( v84 == (_DWORD)v19
            || (v85 & 0x200) == 0 && (v21 = 1LL, (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v35 + 17) + 8LL) + 8LL) & 1) == 0) )
          {
            v90 = DWORD2(v147) - v147;
            v91 = HIDWORD(v147) - DWORD1(v147);
            v92 = v146;
            v93 = DWORD2(v146) - v146;
            v94 = DWORD1(v146);
            v95 = HIDWORD(v146) - DWORD1(v146);
            v96 = *(_BYTE *)(v89 + 26) & 0x40;
            if ( (v96 != 0) != ((v85 >> 7) & 1) )
            {
              if ( v96 && v90 > v93 )
                v119 = v90 - v93;
              else
                v119 = v93 - v90;
              v92 = v119 + v146;
              LODWORD(v146) = v119 + v146;
            }
            if ( (v85 & 0x40) != 0 )
            {
              v94 = HIDWORD(v146) - v91;
              DWORD1(v146) = HIDWORD(v146) - v91;
            }
            if ( v90 < v93 )
              DWORD2(v146) = v92 + v90;
            if ( v91 < v95 )
              HIDWORD(v146) = v94 + v91;
            *(_OWORD *)(v17 + 7) = v146;
            if ( v132 != GetDesktopWindow((__int64)v35) )
            {
              v97 = v133;
              *((_DWORD *)v17 + 14) += v133;
              *((_DWORD *)v17 + 16) += v97;
              v98 = DWORD1(v133);
              *((_DWORD *)v17 + 17) += DWORD1(v133);
              *((_DWORD *)v17 + 15) += v98;
            }
            goto LABEL_26;
          }
        }
      }
    }
    *(_OWORD *)(v17 + 7) = 0LL;
    goto LABEL_26;
  }
LABEL_189:
  ThreadUnlock1(v75, v74, v76);
  ThreadUnlock1(v121, v120, v122);
  return 0LL;
}
