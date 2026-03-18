/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047B3C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00482A4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     _FChildVisible @ 0x1C00932A8 (_FChildVisible.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00C8EC4 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00C9C2C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01053E4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     GetAppCompatFlags @ 0x1C01090E0 (GetAppCompatFlags.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0113A04 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011B378 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF98C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8 (xxxAppAdjustDpiCandidateRect.c)
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
  unsigned __int64 *v17; // rdi
  int v18; // r14d
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
  unsigned __int64 v34; // r15
  struct _KTHREAD *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  NotifyShell **v40; // rsi
  NotifyShell *v41; // rsi
  struct _KTHREAD *v42; // r12
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  int v50; // r12d
  int v51; // r14d
  int v52; // ebx
  unsigned int v53; // eax
  int v54; // edx
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // edx
  int v59; // r14d
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r15d
  int v64; // edx
  _DWORD *v65; // rcx
  int v66; // r8d
  int v67; // ebx
  int v68; // edx
  int v69; // r12d
  int v70; // edx
  LONG *v71; // r13
  __int64 v72; // rdx
  int v73; // ecx
  unsigned int v74; // ebx
  __int64 v75; // r15
  int v76; // r14d
  unsigned int v77; // r9d
  __int64 result; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // rcx
  __int128 v85; // xmm1
  unsigned __int64 v86; // xmm0_8
  int v87; // r14d
  int v88; // r12d
  int v89; // ebx
  int v90; // r13d
  unsigned int v91; // r15d
  int v92; // eax
  __int64 v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // r14
  int v96; // edx
  int v97; // r11d
  int v98; // r9d
  int v99; // r8d
  int v100; // r10d
  int v101; // ebx
  char v102; // r14
  int v103; // eax
  int v104; // eax
  int v105; // r9d
  int v106; // r10d
  __int64 v107; // rax
  __int64 v108; // rbx
  __int16 v109; // r14
  LONG v110; // edx
  int v111; // ecx
  __int64 NewMonitor; // rax
  __int64 Prop; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v116; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v118; // rax
  int v119; // ebx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // ebx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 AppCompatFlags; // rax
  __int64 v128; // rdx
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  int v133; // [rsp+50h] [rbp-B0h]
  int v134; // [rsp+54h] [rbp-ACh]
  int v135; // [rsp+58h] [rbp-A8h]
  int v136; // [rsp+5Ch] [rbp-A4h]
  int v137; // [rsp+60h] [rbp-A0h]
  int v138; // [rsp+64h] [rbp-9Ch]
  unsigned int v139; // [rsp+68h] [rbp-98h]
  int v140; // [rsp+6Ch] [rbp-94h]
  int v141; // [rsp+70h] [rbp-90h]
  __int64 v142; // [rsp+78h] [rbp-88h]
  __int128 v143; // [rsp+80h] [rbp-80h] BYREF
  int v144; // [rsp+90h] [rbp-70h]
  HWND v145; // [rsp+98h] [rbp-68h]
  struct tagRECT v146; // [rsp+A0h] [rbp-60h] BYREF
  __int64 LowLimit; // [rsp+B0h] [rbp-50h] BYREF
  HWND *v148; // [rsp+B8h] [rbp-48h]
  __int128 v149; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v150; // [rsp+D0h] [rbp-30h]
  __int128 v151; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v152; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v153; // [rsp+F8h] [rbp-8h]
  _QWORD v154[3]; // [rsp+100h] [rbp+0h] BYREF
  int v155[4]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v156; // [rsp+128h] [rbp+28h] BYREF
  __int128 v157; // [rsp+138h] [rbp+38h] BYREF
  __int128 *v158; // [rsp+148h] [rbp+48h]

  v148 = a2;
  v145 = 0LL;
  v154[2] = 0LL;
  v2 = 0LL;
  v158 = 0LL;
  *(_OWORD *)v155 = 0LL;
  v150 = 0LL;
  v156 = 0LL;
  v137 = 0;
  v157 = 0LL;
  v133 = 0;
  v149 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = _HMObjectFromHandle(*(_QWORD *)ValidWindowPos);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 104);
  v142 = v8;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v116),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v154[0] = *(_QWORD *)(v7 + 416);
  *(_QWORD *)(v7 + 416) = v154;
  v154[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  v17 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v18 = *((_DWORD *)a1 + 7);
  v136 = 1;
  while ( 1 )
  {
    v140 = --v18;
    if ( v18 < 0 )
    {
      ThreadUnlock1(v15, v14, v16);
      result = 1LL;
      *v148 = v2;
      return result;
    }
    v34 = *v17;
    if ( *v17 )
      break;
LABEL_28:
    v17 += 21;
  }
  v35 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v118 = PsGetCurrentProcess(v37, v36, v38),
        v119 = PsGetProcessSessionIdEx(v118),
        v121 = PsGetCurrentThreadProcess(v120),
        v119 == (unsigned int)PsGetProcessSessionIdEx(v121)) )
  {
    PsGetThreadWin32Thread(v35);
  }
  v14 = (unsigned __int16)v34;
  v15 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)v34 >= *(_QWORD *)(gpsi + 8LL)
    || (v39 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v34 * LODWORD(gSharedInfo[2]),
        v40 = (NotifyShell **)HMPkheFromPhe(v39),
        v15 = v34 >> 16,
        WORD1(v34) != *(_WORD *)(v39 + 26))
    && WORD1(v34) != 0xFFFF
    && (WORD1(v34) || !PsGetCurrentProcessWow64Process(v15))
    || (*(_BYTE *)(v39 + 25) & 1) != 0
    || *(_BYTE *)(v39 + 24) != 1
    || (v41 = *v40) == 0LL
    || (v15 = v17[1], v15 > 1) && v15 <= 0xFFFFFFFFFFFFFFFDuLL && (LOBYTE(v14) = 1, !HMValidateHandleNoSecure(v15, v14)) )
  {
    *v17 = 0LL;
    *((_DWORD *)v17 + 8) = 6159;
    goto LABEL_28;
  }
  v42 = KeGetCurrentThread();
  v43 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v15)
    || (v122 = PsGetCurrentProcess(v45, v44, v46),
        v123 = PsGetProcessSessionIdEx(v122),
        v125 = PsGetCurrentThreadProcess(v124),
        v123 == (unsigned int)PsGetProcessSessionIdEx(v125)) )
  {
    v47 = (__int64 *)PsGetThreadWin32Thread(v42);
    if ( v47 )
      v43 = *v47;
  }
  *(_QWORD *)&v149 = *(_QWORD *)(v43 + 416);
  *(_QWORD *)(v43 + 416) = &v149;
  *((_QWORD *)&v149 + 1) = v41;
  HMLockObject(v41);
  v134 = 0;
  if ( !v2 && (v17[4] & 0x10) == 0 )
    v145 = *(HWND *)v41;
  v48 = *((_DWORD *)v17 + 8);
  if ( (v48 & 0x400) == 0 )
  {
    v49 = v17[1];
    v50 = v17[4] & 4;
    v51 = v48 & 0x750000;
    v52 = v17[4] & 0x40;
    if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0 || gptiCurrent == *((_QWORD *)v41 + 2) )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((int)v41, 70, 0, (int)v17, 0, 0, 0LL, 1, 0);
    }
    else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
    {
      LowLimit = 0LL;
      xxxSendTransformableMessageTimeout((int)v41, 70, 0, (int)v17, 2, 50, (unsigned __int64)&LowLimit, 1, 0);
    }
    v53 = v51 | *((_DWORD *)v17 + 8);
    *((_DWORD *)v17 + 8) = v53;
    LOBYTE(v54) = v53;
    if ( v52 && (v53 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v41, (struct tagWND *)v53);
      v54 = *((_DWORD *)v17 + 8);
    }
    v55 = *((_DWORD *)v17 + 39);
    if ( (v54 & 3) != 3 && (v55 & 0x20) == 0 )
    {
      v17[16] = *(_QWORD *)(*((_QWORD *)v41 + 5) + 256LL);
      *((_DWORD *)v17 + 39) = v55 | 0x20;
    }
    *v17 = v34;
    if ( (v54 & 4) == 0 && (v50 || *((_WORD *)v17 + 4) != (_WORD)v49) )
    {
      if ( !(unsigned int)IsStillWindowC((HWND)v17[1]) )
        goto LABEL_205;
      if ( *((_WORD *)v17 + 4) != (_WORD)v49 || v17[1] >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v83 = CheckTopmost((struct tagWINDOWPOS *)v17);
        if ( v83 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v41 + 5) + 236LL) == 1 )
            SetTopmostEnum(v41, v83 == 1, (*((_DWORD *)v17 + 8) >> 9) & 1);
        }
      }
    }
  }
  v143 = *(_OWORD *)(*(_QWORD *)(v142 + 40) + 104LL);
  if ( (unsigned int)IsChildWindowDpiBoundary(v41) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(v142, &v143, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v41, &v143, 0LL);
  }
  v56 = *((_QWORD *)v41 + 5);
  v57 = 0LL;
  v58 = *(_DWORD *)(v56 + 88);
  v59 = v58;
  v60 = *(_DWORD *)(v56 + 92);
  *((_DWORD *)v17 + 20) = v58;
  *((_DWORD *)v17 + 21) = v60;
  v61 = *((_QWORD *)v41 + 3);
  v138 = v58;
  v135 = v60;
  if ( v61 )
  {
    v62 = *(_QWORD *)(v61 + 8);
    if ( v62 )
      v57 = *(_QWORD *)(v62 + 24);
  }
  v63 = DWORD2(v143);
  v144 = DWORD1(v143);
  v141 = v143;
  if ( v142 != v57 )
  {
    v64 = v58 - v143;
    v60 -= DWORD1(v143);
    v138 = v64;
    v135 = v60;
    if ( (*(_BYTE *)(*(_QWORD *)(v142 + 40) + 26LL) & 0x40) != 0
      && (v126 = *((_QWORD *)v41 + 5), (*(_BYTE *)(v126 + 31) & 0xC0) == 0x40) )
    {
      v133 = 1;
      v59 = DWORD2(v143) - *(_DWORD *)(v126 + 96);
    }
    else
    {
      v133 = 0;
      v59 = v64;
    }
  }
  v65 = (_DWORD *)*((_QWORD *)v41 + 5);
  v66 = *((_DWORD *)v17 + 8) | 0x1800;
  v67 = v66;
  v68 = v65[24] - v65[22];
  v69 = v65[25] - v65[23];
  *((_DWORD *)v17 + 8) = v66;
  v139 = v68;
  v70 = v66;
  if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 233LL) & 3) != 0 && (v66 & 0x100000) != 0 )
  {
    ExtendArrangedRectangleByFrameMargin(v41, (struct tagSIZERECT *)(v17 + 2));
    v70 = *((_DWORD *)v17 + 8);
    v60 = v135;
    v67 = v70;
  }
  v71 = (LONG *)(v17 + 2);
  if ( (v70 & 2) != 0 )
  {
    *((_DWORD *)v17 + 39) |= 0x100u;
    *v71 = v59;
    *((_DWORD *)v17 + 5) = v60;
  }
  else
  {
    if ( *v71 == v59 && *((_DWORD *)v17 + 5) == v60 )
    {
      v79 = v137;
      *((_DWORD *)v17 + 8) = v70 | 2;
      if ( v133 )
        v79 = 1;
      v137 = v79;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow(v41) )
    {
      *v71 = -32000;
      *((_DWORD *)v17 + 5) = -32000;
    }
    v70 = *((_DWORD *)v17 + 8);
    v67 = v70;
  }
  if ( (v70 & 1) != 0 )
  {
    v72 = v139;
    *((_DWORD *)v17 + 6) = v139;
    *((_DWORD *)v17 + 7) = v69;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x20) != 0
      && (Prop = GetProp(v41, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL), v67 = *((_DWORD *)v17 + 8), Prop) )
    {
      v72 = *(unsigned int *)(gpsi + 2124LL);
      *((_DWORD *)v17 + 6) = v72;
      v73 = *(_DWORD *)(gpsi + 2128LL);
      *((_DWORD *)v17 + 7) = v73;
    }
    else
    {
      v72 = *((unsigned int *)v17 + 6);
      if ( (int)v72 < 0 )
      {
        *((_DWORD *)v17 + 6) = 0;
        v72 = 0LL;
      }
      v73 = *((_DWORD *)v17 + 7);
      if ( v73 < 0 )
      {
        *((_DWORD *)v17 + 7) = 0;
        v73 = 0;
      }
    }
    if ( (_DWORD)v72 == v139 && v73 == v69 )
    {
      v67 = *((_DWORD *)v17 + 8) | 1;
      *((_DWORD *)v17 + 8) = v67;
      if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 21LL) & 1) == 0 )
        v134 = 1;
    }
  }
  if ( v133 )
    *v71 = v63 - v72 - v141 - *v71;
  if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x10) != 0 )
  {
    v74 = v67 & 0xFFFFFFBF;
LABEL_80:
    *((_DWORD *)v17 + 8) = v74;
  }
  else
  {
    v74 = v67 & 0xFFFFFF7F;
    *((_DWORD *)v17 + 8) = v74;
    if ( (v74 & 0x40) == 0 )
    {
      v74 |= 8u;
      goto LABEL_80;
    }
  }
  v75 = *((_QWORD *)v41 + 5);
  v76 = v74;
  if ( (*(_BYTE *)(v75 + 27) & 2) == 0 && GetStyleWindow((__int64)v41, 2818) )
  {
    v76 = v74 | 0x100;
    *((_DWORD *)v17 + 8) = v74 | 0x100;
    v75 = *((_QWORD *)v41 + 5);
  }
  if ( (*(_BYTE *)(v75 + 20) & 0x20) != 0 )
  {
    v76 &= ~4u;
    v17[1] = 1LL;
    *((_DWORD *)v17 + 8) = v76;
  }
  if ( v136 )
  {
    if ( (v76 & 4) == 0 )
    {
      v136 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v17) )
        {
          *((_DWORD *)v17 + 8) |= 4u;
          v136 = 1;
        }
      }
    }
  }
  v77 = *((_DWORD *)v17 + 8);
  v19 = v77;
  if ( (v77 & 8) == 0 && ((v17[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v41, v72, v77)) )
  {
    v19 = v77 | 8;
    *((_DWORD *)v17 + 8) = v19;
  }
  if ( (v19 & 2) != 0 || (*(_BYTE *)(*((_QWORD *)v41 + 5) + 21LL) & 1) != 0 )
  {
    v20 = v134;
  }
  else
  {
    AppCompatFlags = GetAppCompatFlags(0LL);
    v20 = v134;
    if ( (AppCompatFlags & 0x20000) != 0 )
      v20 = 1;
  }
  if ( (*((_DWORD *)v17 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v41) )
  {
    v107 = ValidateHmonitor(v17[16]);
    v108 = v107;
    v109 = v107 ? *(_WORD *)(*(_QWORD *)(v107 + 40) + 64LL) : 0;
    v110 = *((_DWORD *)v17 + 5);
    v146.left = *v71;
    v146.right = *((_DWORD *)v17 + 6) + v146.left;
    v111 = *((_DWORD *)v17 + 7);
    v146.top = v110;
    v146.bottom = v110 + v111;
    NewMonitor = GetNewMonitor(v41, &v146);
    if ( NewMonitor )
    {
      if ( v108 != NewMonitor )
      {
        v128 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
        if ( v109 != (_WORD)v128 )
          *((_DWORD *)v17 + 39) ^= (*((_DWORD *)v17 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                             v41,
                                                                             v128,
                                                                             &v146,
                                                                             v17 + 17) << 7)) & 0x80;
      }
    }
  }
  v21 = *((unsigned int *)v17 + 8);
  if ( (v17[4] & 0x21) == 1 && !v20 )
  {
    v22 = v141;
    v23 = v138;
    v24 = v144;
    goto LABEL_16;
  }
  *((_DWORD *)v17 + 39) |= 4u;
  v84 = *((_QWORD *)v41 + 5);
  v151 = 0LL;
  v153 = 0LL;
  v152 = 0LL;
  if ( (*(_BYTE *)(v84 + 31) & 0x40) == 0 && *(char *)(v84 + 24) >= 0 )
    xxxCheckFullScreen(v41, (struct tagSIZERECT *)(v17 + 2));
  v85 = *((_OWORD *)v17 + 1);
  v151 = *(_OWORD *)v17;
  v86 = v17[4];
  v158 = &v151;
  v155[0] = *v71;
  v155[2] = *((_DWORD *)v17 + 6) + v155[0];
  v155[1] = *((_DWORD *)v17 + 5);
  v155[3] = *((_DWORD *)v17 + 7) + v155[1];
  v152 = v85;
  v153 = v86;
  GetRect(v41, &v156, 66LL);
  GetRect(v41, &v157, 65LL);
  v87 = v157;
  v88 = DWORD2(v157) - v157;
  v89 = DWORD1(v157);
  v90 = HIDWORD(v157) - DWORD1(v157);
  _InterlockedAdd(&glSendMessage, 1u);
  v91 = xxxSendTransformableMessageTimeout((int)v41, 131, 1, (int)v155, 0, 0, 0LL, 1, 0);
  if ( (unsigned int)IsStillWindowC((HWND)v17[1]) )
  {
    if ( v91 - 16 > 0x3F0 )
    {
      v91 = 48;
      v156 = *(_OWORD *)v155;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 26LL) & 0x40) != 0 )
      v92 = DWORD2(v156) - DWORD2(v157);
    else
      v92 = v156 - v157;
    *((_DWORD *)v17 + 18) = v92;
    *((_DWORD *)v17 + 19) = DWORD1(v156) - DWORD1(v157);
    *((_DWORD *)v17 + 10) = v155[0];
    *((_DWORD *)v17 + 11) = v155[1];
    v93 = (unsigned int)(v155[2] - v155[0]);
    *((_DWORD *)v17 + 12) = v93;
    v19 = (unsigned int)(v155[3] - v155[1]);
    *((_DWORD *)v17 + 13) = v19;
    if ( v87 != v155[0] || v89 != v155[1] )
      *((_DWORD *)v17 + 8) &= ~0x1000u;
    v21 = *((unsigned int *)v17 + 8);
    v94 = *((_DWORD *)v17 + 8);
    if ( v88 != (_DWORD)v93 || v90 != (_DWORD)v19 )
    {
      v21 = v94;
      LODWORD(v21) = v94 & 0xFFFFF7FF;
      *((_DWORD *)v17 + 8) = v94 & 0xFFFFF7FF;
    }
    if ( (v21 & 0x100) == 0 && !v137 )
    {
      v95 = *((_QWORD *)v41 + 5);
      if ( (*(_BYTE *)(v95 + 24) & 0x20) == 0 )
      {
        if ( (v21 & 0x821) == 0x801 )
        {
          v23 = v138;
          if ( *((_DWORD *)v17 + 18) == *((_DWORD *)v17 + 4) - v138
            && *((_DWORD *)v17 + 19) == *((_DWORD *)v17 + 5) - v135 )
          {
            v24 = DWORD1(v143);
            v71 = (LONG *)(v17 + 2);
            v22 = v143;
LABEL_16:
            if ( (v21 & 0x100) != 0 )
            {
              v29 = v142;
              *(_OWORD *)(v17 + 7) = 0LL;
              v25 = *v71;
            }
            else
            {
              v25 = *v71;
              v26 = 0LL;
              v19 = *((unsigned int *)v17 + 5);
              *((_DWORD *)v17 + 14) = *v71;
              *((_DWORD *)v17 + 15) = v19;
              v27 = *((_QWORD *)v41 + 3);
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 8);
                if ( v28 )
                  v26 = *(_QWORD *)(v28 + 24);
              }
              v29 = v142;
              v30 = v25;
              if ( v142 != v26 )
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
            if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 26LL) & 0x40) != 0 )
              v31 = *((_DWORD *)v17 + 6) + v25 - v139 - v23;
            else
              v31 = v25 - v23;
            *((_DWORD *)v17 + 18) = v31;
            v32 = (unsigned int)(*((_DWORD *)v17 + 5) - v135);
            v33 = *((_DWORD *)v17 + 8);
            *((_DWORD *)v17 + 19) = v32;
            if ( (v33 & 2) == 0 )
            {
              *((_DWORD *)v17 + 8) = v33 & 0xFFFFEFFF;
              *((_DWORD *)v17 + 10) = *((_DWORD *)v17 + 18) + *(_DWORD *)(*((_QWORD *)v41 + 5) + 104LL);
              *((_DWORD *)v17 + 11) = v32 + *(_DWORD *)(*((_QWORD *)v41 + 5) + 108LL);
              if ( v29 != GetDesktopWindow(v41) )
              {
                v19 = (unsigned int)(v19 - v106);
                *((_DWORD *)v17 + 10) = v19;
                *((_DWORD *)v17 + 11) = v105 - v24;
              }
              *((_DWORD *)v17 + 12) = *(_DWORD *)(*((_QWORD *)v41 + 5) + 112LL)
                                    - *(_DWORD *)(*((_QWORD *)v41 + 5) + 104LL);
              v32 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v41 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)v41 + 5) + 108LL));
              *((_DWORD *)v17 + 13) = v32;
            }
LABEL_26:
            ThreadUnlock1(v21, v32, v19);
LABEL_27:
            v2 = v145;
            v18 = v140;
            goto LABEL_28;
          }
        }
        if ( v88 == (_DWORD)v93
          || (v91 & 0x100) == 0 && (v21 = *(_QWORD *)(*((_QWORD *)v41 + 17) + 8LL), (*(_BYTE *)(v21 + 8) & 2) == 0) )
        {
          if ( v90 == (_DWORD)v19
            || (v91 & 0x200) == 0 && (v21 = 1LL, (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v41 + 17) + 8LL) + 8LL) & 1) == 0) )
          {
            v96 = DWORD2(v157) - v157;
            v97 = HIDWORD(v157) - DWORD1(v157);
            v98 = v156;
            v99 = DWORD2(v156) - v156;
            v100 = DWORD1(v156);
            v101 = HIDWORD(v156) - DWORD1(v156);
            v102 = *(_BYTE *)(v95 + 26) & 0x40;
            if ( (v102 != 0) != ((v91 >> 7) & 1) )
            {
              if ( v102 && v96 > v99 )
                v129 = v96 - v99;
              else
                v129 = v99 - v96;
              v98 = v129 + v156;
              LODWORD(v156) = v129 + v156;
            }
            if ( (v91 & 0x40) != 0 )
            {
              v100 = HIDWORD(v156) - v97;
              DWORD1(v156) = HIDWORD(v156) - v97;
            }
            if ( v96 < v99 )
              DWORD2(v156) = v98 + v96;
            if ( v97 < v101 )
              HIDWORD(v156) = v100 + v97;
            *(_OWORD *)(v17 + 7) = v156;
            if ( v142 != GetDesktopWindow(v41) )
            {
              v103 = v143;
              *((_DWORD *)v17 + 14) += v143;
              *((_DWORD *)v17 + 16) += v103;
              v104 = DWORD1(v143);
              *((_DWORD *)v17 + 17) += DWORD1(v143);
              *((_DWORD *)v17 + 15) += v104;
            }
            goto LABEL_26;
          }
        }
      }
    }
    *(_OWORD *)(v17 + 7) = 0LL;
    ThreadUnlock1(v21, v93, v19);
    goto LABEL_27;
  }
LABEL_205:
  ThreadUnlock1(v81, v80, v82);
  ThreadUnlock1(v131, v130, v132);
  return 0LL;
}
