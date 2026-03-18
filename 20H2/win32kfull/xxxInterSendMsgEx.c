/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0054500
 * Callers:
 *     _ReplyMessage @ 0x1C00023B0 (_ReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C0052EE0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiverDied @ 0x1C007F3DC (xxxReceiverDied.c)
 *     ClearSendMessages @ 0x1C00D37C8 (ClearSendMessages.c)
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C001A3EC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00527B0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0055CC0 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C00F69FC (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C012151C (ProcessSuspendedSendMessage.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015CAA8 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015CAD0 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E17DC (MakeUpKeyboardCorrectionCalloutContents.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C025DCD4 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, __int64 a2, ...)
{
  unsigned int v2; // esi
  __int64 CurrentProcessWin32Process; // r15
  size_t v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int16 *v10; // r12
  unsigned __int64 v11; // r13
  int v12; // ebx
  unsigned __int8 v13; // al
  __int16 v14; // ax
  __int64 v15; // r10
  size_t v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // r10
  int v25; // edx
  size_t v26; // r8
  _OWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r13
  const void *v32; // rdx
  size_t v33; // r8
  unsigned __int16 *v34; // r13
  __int64 v35; // rbx
  void *v36; // rbx
  size_t v37; // r8
  _QWORD *v38; // r13
  __int64 v39; // rbx
  unsigned __int64 v40; // rcx
  int v41; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r12
  __int64 v54; // rax
  _QWORD *v55; // rcx
  unsigned int v56; // eax
  size_t v57; // r15
  int v58; // r12d
  unsigned __int8 v59; // cf
  int v60; // r13d
  int v61; // r12d
  unsigned int v62; // ebx
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r13
  char v66; // r15
  _BOOL8 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rsi
  __int64 v72; // rbx
  int v73; // eax
  int v74; // ecx
  _QWORD *v75; // rbx
  _WORD *v76; // rdx
  unsigned int v77; // eax
  __int16 v78; // cx
  int v79; // eax
  int v80; // eax
  int v81; // edx
  __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rcx
  int v85; // ecx
  int v86; // ecx
  __int64 v87; // rcx
  int v88; // edx
  int v89; // r8d
  int v90; // eax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // rcx
  int v94; // eax
  __int128 *v95; // rax
  __int128 v96; // xmm0
  __int64 v97; // rcx
  __int64 v98; // rdx
  _QWORD *v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v104; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v106; // zf
  __int64 v107; // rax
  _BOOL8 v108; // rcx
  BOOL v109; // eax
  unsigned int Size; // [rsp+44h] [rbp-124h]
  size_t Size_4; // [rsp+48h] [rbp-120h]
  _OWORD *Src; // [rsp+50h] [rbp-118h]
  int Srca; // [rsp+50h] [rbp-118h]
  int v114; // [rsp+58h] [rbp-110h]
  void *v115[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v116; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v117; // [rsp+78h] [rbp-F0h]
  unsigned __int16 *v118; // [rsp+80h] [rbp-E8h]
  void *v119; // [rsp+88h] [rbp-E0h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-D0h] BYREF
  _OWORD *v122; // [rsp+A0h] [rbp-C8h]
  __int64 v123; // [rsp+A8h] [rbp-C0h]
  _QWORD *v124; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-B0h]
  __int64 v126; // [rsp+C0h] [rbp-A8h]
  __int64 v127; // [rsp+C8h] [rbp-A0h]
  void *v128; // [rsp+D0h] [rbp-98h]
  _WORD *v129; // [rsp+D8h] [rbp-90h]
  size_t v130; // [rsp+E0h] [rbp-88h]
  __int128 v131; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-70h]
  _QWORD v133[4]; // [rsp+100h] [rbp-68h] BYREF
  _BYTE v134[72]; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v136; // [rsp+180h] [rbp+18h] BYREF
  va_list va; // [rsp+180h] [rbp+18h]
  __int64 v138; // [rsp+188h] [rbp+20h] BYREF
  va_list va1; // [rsp+188h] [rbp+20h]
  __int64 v140; // [rsp+190h] [rbp+28h]
  __int64 v141; // [rsp+198h] [rbp+30h]
  __int64 v142; // [rsp+1A0h] [rbp+38h]
  __int64 v143; // [rsp+1A8h] [rbp+40h]
  __int64 v144; // [rsp+1B0h] [rbp+48h]
  va_list va2; // [rsp+1B8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v136 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v138 = va_arg(va2, _QWORD);
  v140 = va_arg(va2, _QWORD);
  v141 = va_arg(va2, _QWORD);
  v142 = va_arg(va2, _QWORD);
  v143 = va_arg(va2, _QWORD);
  v144 = va_arg(va2, _QWORD);
  v2 = a2;
  v125 = 0LL;
  v122 = 0LL;
  v118 = 0LL;
  *(_OWORD *)v115 = 0LL;
  v119 = 0LL;
  v114 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, v136);
  v5 = gptiCurrent;
  v123 = gptiCurrent;
  if ( !(_DWORD)v140 )
    v5 = 0LL;
  Size_4 = v5;
  v130 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 488) & 1) != 0 )
    return 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1
    || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL), v8 == CurrentProcessWin32Process)
    || v2 >= 0xE && v2 < 0x4E )
  {
LABEL_10:
    if ( (_DWORD)v143 )
      goto LABEL_195;
    v9 = 0LL;
    if ( a1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    }
    else if ( v141 )
    {
      v9 = *(_QWORD *)(v141 + 424);
    }
    if ( v9 == CurrentProcessWin32Process )
    {
LABEL_195:
      v10 = (unsigned __int16 *)v138;
    }
    else
    {
      if ( v2 == 717 )
        return 0LL;
      v10 = (unsigned __int16 *)v138;
      v11 = v136;
      v12 = IsMessageAllowedAcrossILByReceiver(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (void *const **)v9,
              (struct tagWND *)a1,
              v2,
              v136,
              v138,
              1);
      if ( !v12 )
      {
        v12 = IsMessageAlwaysAllowedAcrossIL(v2);
        if ( v12 )
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            v2,
            v11,
            (unsigned __int64)v10,
            1,
            2);
      }
      if ( !v12 )
      {
        if ( v2 != 274 || ((v11 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || v11 == 61792 )
        {
          if ( *(_QWORD *)v9 == gpepCSRSS )
            v116 = 0x2000LL;
          else
            v116 = *(_QWORD *)(v9 + 880);
          v13 = CheckAccess(CurrentProcessWin32Process + 880, &v116);
          v12 = v13;
          if ( v13 )
          {
            if ( (unsigned __int8)Enforced() )
              v14 = 5;
            else
              v14 = 1;
            MSGSQMAddMessage(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (struct tagPROCESSINFO *)v9,
              v2,
              v136,
              (unsigned __int64)v10,
              1,
              v14);
          }
        }
        else
        {
          v12 = 1;
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            0x112u,
            v11,
            (unsigned __int64)v10,
            1,
            2);
        }
      }
      if ( !v12 )
      {
        if ( a1
          && v2 == 793
          && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1392) == a1)
          && *(_QWORD *)(v6 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          v12 = 1;
        }
        else
        {
          EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, v2, v136, v10);
          UserSetLastError(5LL);
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            v2,
            v136,
            (unsigned __int64)v10,
            1,
            0);
        }
        if ( !v12 )
          return 0LL;
      }
    }
    if ( v2 == 576 )
    {
      LOBYTE(v6) = 20;
      if ( !HMValidateHandle(v10, v6) )
        return 0LL;
    }
    else if ( v2 == 281 )
    {
      LOBYTE(v6) = 21;
      if ( !HMValidateHandle(v10, v6) )
        return 0LL;
    }
    v15 = v141;
    if ( (*(_DWORD *)(v141 + 1232) & 0x20) == 0 )
    {
      v16 = Size_4;
      goto LABEL_31;
    }
    v87 = v142;
    if ( v142 )
    {
      if ( (*(_DWORD *)(v142 + 32) & 0x40) != 0 )
        goto LABEL_309;
      if ( *(_DWORD *)v142 == 2 && *(_DWORD *)(v142 + 36) )
        return 0LL;
    }
    v16 = Size_4;
    if ( !Size_4 )
    {
LABEL_280:
      if ( !v87 )
      {
        if ( !(unsigned int)ProcessSuspendedSendMessage(v15, a1, v2, v136, v10) )
          return 0LL;
        v15 = v141;
      }
      if ( !v16 && *(_DWORD *)(v15 + 536) > 0x2710u )
        return 0LL;
LABEL_31:
      v17 = Win32AllocateFromPagedLookasideList(SMSLookaside);
      v18 = v17;
      v127 = v17;
      v126 = v17;
      if ( !v17 )
        return 0LL;
      *(_QWORD *)(v17 + 120) = 0LL;
      Size = 0;
      v19 = 0;
      Src = v10;
      v20 = v123;
      *(_DWORD *)(v17 + 128) = *(_DWORD *)(v123 + 1412);
      if ( v142 && *(_DWORD *)v142 == 33 )
      {
LABEL_132:
        *(_QWORD *)(v18 + 112) = 0LL;
        v38 = (_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 16) = 0LL;
        v133[0] = v18 + 112;
        v133[1] = a1;
        HMAssignmentLock(v133);
        *(_DWORD *)(v18 + 104) = v2;
        *(_QWORD *)(v18 + 88) = v136;
        *(_QWORD *)(v18 + 96) = v10;
        *(_DWORD *)(v18 + 84) = 0;
        *(_QWORD *)(v18 + 72) = 0LL;
        if ( v2 == 576 || v2 == 281 )
        {
          v101 = _HMObjectFromHandle(v10);
          v39 = v141;
          if ( v101 )
            HMChangeOwnerThread(v101, v141);
        }
        else
        {
          v39 = v141;
        }
        if ( *(_QWORD *)(gsmsList + 8LL) == gsmsList )
        {
          *(_QWORD *)v18 = gsmsList;
          *(_QWORD *)(v18 + 8) = gsmsList;
          *(_QWORD *)(gsmsList + 8LL) = v18;
          gsmsList = v18;
          v40 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_DWORD *)(v18 + 80) = v40;
          *(_QWORD *)(v18 + 40) = v39;
          *(_QWORD *)(v18 + 32) = Size_4;
          v41 = 18;
          CurrentThread = KeGetCurrentThread();
          v43 = 0LL;
          if ( !(unsigned __int8)KeIsAttachedProcess(v40)
            || (CurrentProcess = PsGetCurrentProcess(v45, v44, v46),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v104),
                v106 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                v41 = 18,
                v106) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v43 = *ThreadWin32Thread;
          }
          if ( v43 )
          {
            if ( *(_QWORD *)(v43 + 360) )
              CaptureAndValidateUserModeDpiAwarenessContext(v43);
            if ( *(_DWORD *)(v43 + 340) )
            {
              v41 = *(_DWORD *)(v43 + 340);
            }
            else
            {
              v51 = PsGetCurrentProcessWin32Process(v49, v48, v50);
              if ( v51 )
                v41 = *(_DWORD *)(v51 + 280);
            }
            if ( (*(_DWORD *)(v43 + 328) & 4) != 0 && (v41 & 0xF) == 2 && (v41 & 0xF0) == 0x20 )
              v41 |= 0x20000000u;
          }
          *(_DWORD *)(v18 + 132) = v41;
          *(_QWORD *)(v18 + 64) = 0LL;
          v52 = v142;
          if ( v142 && (*(_DWORD *)v142 & 1) != 0 )
          {
            if ( (*(_DWORD *)v142 & 0x100) != 0 )
              v85 = 1024;
            else
              v85 = 2048;
            v86 = *(_DWORD *)(v18 + 84) | v85;
            *(_DWORD *)(v18 + 84) = v86;
            *(_QWORD *)(v18 + 48) = *(_QWORD *)(v52 + 8);
            *(_QWORD *)(v18 + 56) = *(_QWORD *)(v52 + 16);
            if ( (*(_DWORD *)v52 & 0x20) != 0 )
            {
              *(_DWORD *)(v18 + 84) = v86 | 0x200;
              *(_QWORD *)(v18 + 72) = *(_QWORD *)(v52 + 24);
            }
            else
            {
              *(_DWORD *)(v18 + 84) = v86 | 0x100;
              *(_QWORD *)(v18 + 64) = v123;
            }
          }
          if ( (_DWORD)v144 )
            *(_DWORD *)(v18 + 84) |= 0x10000u;
          v53 = v141;
          v54 = v141 + 520;
          v55 = *(_QWORD **)(v141 + 528);
          if ( *v55 == v141 + 520 )
          {
            *v38 = v54;
            *(_QWORD *)(v18 + 24) = v55;
            *v55 = v38;
            *(_QWORD *)(v54 + 8) = v38;
            v56 = *(_DWORD *)(v53 + 536) + 1;
            *(_DWORD *)(v53 + 536) = v56;
            if ( v56 > LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
              LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = v56;
            v57 = Size_4;
            if ( Size_4 )
            {
              v125 = *(_QWORD *)(Size_4 + 504);
              *(_QWORD *)(Size_4 + 504) = v18;
            }
            else
            {
              *(_DWORD *)(v18 + 84) |= 8u;
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( v2 - 577 <= 0x16 && (v58 = 8122367, v59 = _bittest(&v58, v2 - 577), v53 = v141, v59)
                || v2 == 528 && (_WORD)v136 == 582 )
              {
                CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v138, 6LL, v18);
              }
            }
            EtwTraceBeginSendMessage(v18, Size_4, v52);
            if ( !Size_4 )
            {
              SetWakeBit(v53, 64LL);
              EtwTraceEndSendMessage(v18);
              return 1LL;
            }
            v60 = 0;
            v61 = 0;
            v62 = 512;
            Srca = 0;
            v63 = v141;
            if ( (*(_DWORD *)(v141 + 488) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v141 + 448) + 6LL) |= 0x40u;
              *(_WORD *)(*(_QWORD *)(v63 + 448) + 4LL) |= 0x40u;
              if ( (*(_BYTE *)(*(_QWORD *)(v63 + 448) + 10LL) & 0x40) != 0 )
                KeSetEvent(*(PRKEVENT *)(v63 + 736), 2, 0);
            }
            if ( v142 )
            {
              v61 = *(_DWORD *)(v142 + 36);
              v62 = ((*(_DWORD *)(v142 + 32) & 1) << 15) + 512;
            }
            CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v134);
            v64 = v141;
            if ( *(_QWORD *)(Size_4 + 432) == *(_QWORD *)(v141 + 432) )
            {
              v94 = *(_DWORD *)(Size_4 + 488);
              if ( (v94 & 0x10000) == 0 )
              {
                *(_DWORD *)(Size_4 + 488) = v94 | 0x10000;
                Srca = 1;
              }
            }
            if ( (*(_DWORD *)(v18 + 84) & 1) == 0 )
            {
              while ( 1 )
              {
                if ( v60 )
                {
LABEL_172:
                  v57 = Size_4;
                  break;
                }
                v65 = 0LL;
                v131 = 0LL;
                v132 = 0LL;
                v66 = 0;
                *(_WORD *)(*(_QWORD *)(Size_4 + 448) + 4LL) &= ~0x200u;
                if ( v2 == 788 )
                {
                  if ( v138 )
                  {
                    if ( *(_DWORD *)(v64 + 632) <= 0x501u )
                    {
                      if ( *(_DWORD *)(v64 + 648) )
                      {
                        v65 = *(_QWORD *)v138;
                        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v138 + 48LL) - 13) <= 1 )
                        {
                          v107 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          *(_QWORD *)&v131 = *(_QWORD *)(v107 + 416);
                          *(_QWORD *)(v107 + 416) = &v131;
                          *((_QWORD *)&v131 + 1) = v65;
                          HMLockObject(v65);
                          v66 = 1;
                        }
                      }
                    }
                  }
                }
                v67 = (unsigned int)xxxRealSleepThread(v62, v61, 0, 0LL, 0LL) == 0;
                LODWORD(v140) = v67;
                if ( v66 )
                {
                  v108 = (v67 << 7) | *(_DWORD *)(v65 + 88) & 0xFFFFFF7F;
                  *(_DWORD *)(v65 + 88) = v108;
                  if ( v67 )
                  {
                    v109 = v108 ^ (v108 ^ (v108 + 1)) & 0x7F;
                    *(_DWORD *)(v65 + 88) = v109;
                    if ( (v109 & 0x7Fu) > 0xA )
                      *(_DWORD *)(v65 + 64) |= 0x10u;
                  }
                  ThreadUnlock1(v108, v67, v68);
                }
                v60 = v140;
                if ( (_DWORD)v140 && v142 )
                {
                  v88 = *(_DWORD *)(v142 + 32);
                  v89 = *(_DWORD *)(v18 + 84);
                  if ( ((v89 & 0x20) != 0 || (v88 & 0x10) != 0) && (v89 & 0x10) != 0 )
                  {
                    v61 = 0;
                    v60 = 0;
                  }
                  if ( (v88 & 8) != 0 && !(unsigned int)IsThreadHung(v141, 0LL) )
                  {
                    v60 = 0;
LABEL_255:
                    EtwTraceConvertTimeOutToBlocking();
                    goto LABEL_171;
                  }
                  if ( !v60 )
                    goto LABEL_255;
                }
LABEL_171:
                v64 = v141;
                if ( (*(_DWORD *)(v18 + 84) & 1) != 0 )
                  goto LABEL_172;
              }
            }
            LODWORD(v140) = v60;
            CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v134);
            if ( Srca )
            {
              *(_DWORD *)(v57 + 488) &= ~0x10000u;
              MergeDeferredMessagesOfThreadOnQueue(v57);
            }
            if ( (*(_DWORD *)(v57 + 488) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v57 + 448) + 6LL) |= 0x200u;
              *(_WORD *)(*(_QWORD *)(v57 + 448) + 4LL) |= 0x200u;
              if ( (*(_WORD *)(*(_QWORD *)(v57 + 448) + 10LL) & 0x200) != 0 )
                KeSetEvent(*(PRKEVENT *)(v57 + 736), 2, 0);
            }
            if ( !v60 )
            {
              if ( Size )
              {
                v75 = v119;
                v124 = v119;
                if ( v2 == 131 )
                {
                  if ( (_DWORD)v144 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
                  {
                    TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v124, 0LL, a1);
                    v75 = v124;
                  }
                  v95 = *(__int128 **)(v18 + 120);
                  v96 = *v95;
                  if ( v136 )
                  {
                    v97 = v75[6];
                    *(_OWORD *)v75 = v96;
                    *((_OWORD *)v75 + 1) = v95[1];
                    *((_OWORD *)v75 + 2) = v95[2];
                    v75[6] = v97;
                    v98 = *((_QWORD *)v95 + 6);
                    if ( v98 )
                    {
                      *(_OWORD *)v97 = *(_OWORD *)v98;
                      *(_OWORD *)(v97 + 16) = *(_OWORD *)(v98 + 16);
                      *(_QWORD *)(v97 + 32) = *(_QWORD *)(v98 + 32);
                    }
                  }
                  else
                  {
                    *(_OWORD *)v75 = v96;
                  }
                }
                else
                {
                  v76 = *(_WORD **)(v18 + 120);
                  if ( v114 )
                  {
                    if ( v114 == 1 )
                    {
                      strncpycch(v119, v76, Size);
                    }
                    else
                    {
                      v77 = Size >> 1;
                      v117 = Size >> 1;
                      v129 = v76;
                      v128 = v119;
                      while ( v77 )
                      {
                        v78 = *v76;
                        *(_WORD *)v75 = *v76;
                        v75 = (_QWORD *)((char *)v75 + 2);
                        v128 = v75;
                        v129 = ++v76;
                        if ( !v78 )
                          break;
                        v117 = --v77;
                      }
                    }
                  }
                  else
                  {
                    memmove(v119, v76, Size);
                  }
                }
              }
              else if ( v2 == 831 && (_DWORD)v144 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
              }
            }
            EtwTraceEndSendMessage(v18);
            *(_QWORD *)(v57 + 504) = v125;
            v71 = v142;
            if ( v142 )
            {
              **(_QWORD **)(v142 + 40) = *(_QWORD *)(v126 + 72);
              v72 = 0LL;
              if ( (*(_DWORD *)(v18 + 84) & 0x8000) != 0 && (*(_BYTE *)(v71 + 32) & 0x20) != 0 )
                UserSetLastError(1400LL);
              else
                LOBYTE(v72) = v60 == 0;
            }
            else
            {
              v72 = *(_QWORD *)(v126 + 72);
            }
            if ( v71 || v60 )
            {
              v73 = *(_DWORD *)(v18 + 84);
              if ( (v73 & 1) == 0 )
              {
                v90 = v73 | 1;
                *(_DWORD *)(v18 + 84) = v90;
                if ( (v90 & 0x4000) != 0 )
                {
                  *(_DWORD *)(v18 + 84) = v90 | 8;
                }
                else
                {
                  --*(_DWORD *)(v141 + 536);
                  v91 = (_QWORD *)(v18 + 16);
                  v92 = *(_QWORD *)(v18 + 16);
                  v93 = *(_QWORD **)(v18 + 24);
                  if ( *(_QWORD *)(v92 + 8) != v18 + 16 || (_QWORD *)*v93 != v91 )
                    goto LABEL_337;
                  *v93 = v92;
                  *(_QWORD *)(v92 + 8) = v93;
                  *v91 = 0LL;
                  *(_DWORD *)(v18 + 84) |= 0x10u;
                }
              }
            }
            v74 = *(_DWORD *)(v18 + 84);
            if ( (v74 & 0x4010) != 0x10 )
            {
              v74 |= 8u;
              *(_DWORD *)(v18 + 84) = v74;
            }
            if ( (v74 & 0x8008) == 8 )
              return v72;
            v79 = *(_DWORD *)(v18 + 104);
            if ( v79 == 576 )
            {
              FreeTouchInputInfo(*(_QWORD *)(v18 + 96), 0LL);
            }
            else if ( v79 == 281 )
            {
              FreeGestureInfo(*(_QWORD *)(v18 + 96), 0LL, v69, v70);
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( (v80 = *(_DWORD *)(v18 + 104), (unsigned int)(v80 - 577) <= 0x16)
                && (v81 = 8122367, _bittest(&v81, v80 - 577))
                || v80 == 528 && *(_WORD *)(v18 + 88) == 582 )
              {
                CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v18 + 96), 6LL, v18);
              }
            }
            v82 = *(_QWORD *)v18;
            v83 = *(_QWORD **)(v18 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == v18 && *v83 == v18 )
            {
              *v83 = v82;
              *(_QWORD *)(v82 + 8) = v83;
              HMAssignmentUnlock(v18 + 112);
              v84 = *(_QWORD *)(v18 + 120);
              if ( v84 )
                Win32FreePool(v84);
              Win32FreeToPagedLookasideList(SMSLookaside, v18);
              return v72;
            }
          }
        }
LABEL_337:
        __fastfail(3u);
      }
      if ( v2 >= 0x39 && v2 < 0x46 )
        goto LABEL_36;
      if ( v2 != 13 )
      {
        if ( v2 <= 0x143 )
        {
          if ( v2 == 323 )
          {
LABEL_106:
            if ( *(_DWORD *)(v20 + 1412) != 1 )
            {
LABEL_82:
              *(_OWORD *)v115 = *(_OWORD *)v10;
              if ( _mm_srli_si128(*(__m128i *)v115, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v16 )
              {
                v19 = LODWORD(v115[0]) + 18;
                if ( (unsigned int)(LODWORD(v115[0]) + 18) < LODWORD(v115[0]) )
                {
LABEL_84:
                  Win32FreeToPagedLookasideList(SMSLookaside, v17);
                  return 8LL;
                }
              }
            }
          }
          else
          {
            switch ( v2 )
            {
              case 1u:
              case 0x81u:
                UserSetLastError(5LL);
                Win32FreeToPagedLookasideList(SMSLookaside, v18);
                return 0LL;
              case 0xCu:
              case 0x1Au:
              case 0xC2u:
                if ( v10 )
                  goto LABEL_82;
                goto LABEL_36;
              case 0x1Bu:
                goto LABEL_82;
              case 0x38u:
                v19 = *v10;
                goto LABEL_36;
              case 0x46u:
              case 0x47u:
                v19 = 40;
                Size = 40;
                goto LABEL_36;
              case 0x49u:
                v21 = v136;
                v19 = v136;
                goto LABEL_37;
              case 0x4Au:
                v122 = v10;
                if ( !*((_QWORD *)v10 + 2) )
                {
                  v19 = 24;
                  v21 = v136;
                  goto LABEL_38;
                }
                v19 = *((_DWORD *)v10 + 2) + 24;
                if ( v19 < 0x18 )
                {
                  Win32FreeToPagedLookasideList(SMSLookaside, v17);
                  return 0LL;
                }
                break;
              case 0x53u:
                v19 = *(_DWORD *)v10;
                goto LABEL_36;
              case 0x83u:
                v21 = v136;
                if ( v136 )
                  v19 = 96;
                else
                  v19 = 16;
                Size = v19;
                goto LABEL_37;
              case 0xC4u:
                goto LABEL_42;
              case 0xCBu:
                goto LABEL_111;
              default:
                goto LABEL_36;
            }
          }
          goto LABEL_36;
        }
        if ( v2 <= 0x283 )
        {
          if ( v2 == 643 )
          {
            v21 = v136;
            if ( v136 == 24 )
              v19 = (*(_DWORD *)v10 << 9) + 4;
          }
          else
          {
            switch ( v2 )
            {
              case 0x145u:
              case 0x18Du:
              case 0x196u:
                goto LABEL_82;
              case 0x148u:
              case 0x189u:
                goto LABEL_42;
              case 0x14Au:
              case 0x14Cu:
              case 0x14Du:
              case 0x158u:
                goto LABEL_106;
              case 0x180u:
              case 0x181u:
              case 0x18Cu:
              case 0x18Fu:
              case 0x1A2u:
                if ( *(_DWORD *)(v20 + 1412) == 1 )
                  goto LABEL_36;
                goto LABEL_82;
              case 0x191u:
              case 0x192u:
LABEL_111:
                v21 = v136;
                v19 = 4 * v136;
                break;
              case 0x218u:
                v21 = v136;
                if ( !v10 || (v136 & 0x8000) == 0 || v10 >= MmSystemRangeStart && v16 )
                  break;
                v19 = *((_DWORD *)v10 + 4) + 20;
                if ( *((_DWORD *)v10 + 4) < 0xFFFFFFEC )
                  break;
                goto LABEL_84;
              case 0x219u:
                if ( !v10 )
                  goto LABEL_36;
                v21 = v136;
                if ( (v136 & 0x8000) != 0 && (v10 < MmSystemRangeStart || !v16) )
                  v19 = *(_DWORD *)v10;
                break;
              case 0x220u:
                v118 = v10;
                v19 = (*((_DWORD *)v10 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v10 + 19) & 0x7FFFFFFF);
                goto LABEL_36;
              default:
                goto LABEL_36;
            }
          }
LABEL_37:
          if ( !v19 )
            goto LABEL_126;
          goto LABEL_38;
        }
        if ( v2 != 780 )
        {
          switch ( v2 )
          {
            case 0x32Cu:
              v19 = 328;
              v21 = v136;
LABEL_38:
              v22 = Win32AllocPoolWithQuota(v19, 1668510549LL);
              *(_QWORD *)(v18 + 120) = v22;
              if ( v22 )
              {
                v119 = v10;
                v23 = (void *)v22;
                if ( v2 != 13 )
                {
                  if ( v2 <= 0x83 )
                  {
                    if ( v2 == 131 )
                    {
                      if ( v21 )
                      {
                        *(_OWORD *)v22 = *Src;
                        *(_OWORD *)(v22 + 16) = Src[1];
                        *(_OWORD *)(v22 + 32) = Src[2];
                        *(_QWORD *)(v22 + 48) = *((_QWORD *)Src + 6);
                        v29 = *(_QWORD *)(v18 + 120) + 56LL;
                        *(_QWORD *)(v22 + 48) = v29;
                        v30 = *((_QWORD *)Src + 6);
                        *(_OWORD *)v29 = *(_OWORD *)v30;
                        *(_OWORD *)(v29 + 16) = *(_OWORD *)(v30 + 16);
                        *(_QWORD *)(v29 + 32) = *(_QWORD *)(v30 + 32);
                      }
                      else
                      {
                        memmove((void *)v22, Src, v19);
                      }
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v138 = (__int64)v10;
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( v2 )
                      {
                        case 0xCu:
                        case 0x1Au:
                        case 0x1Bu:
                          goto LABEL_80;
                        case 0x46u:
                        case 0x47u:
                          goto LABEL_67;
                        case 0x4Au:
                          v10 = (unsigned __int16 *)v22;
                          v138 = v22;
                          v28 = v122;
                          *(_OWORD *)v22 = *v122;
                          *(_QWORD *)(v22 + 16) = *((_QWORD *)v28 + 2);
                          if ( *((_QWORD *)v28 + 2) )
                          {
                            *(_QWORD *)(v22 + 16) = v22 + 24;
                            memmove((void *)(v22 + 24), *((const void **)v28 + 2), *((unsigned int *)v28 + 2));
                          }
                          break;
                        default:
                          goto LABEL_71;
                      }
                    }
                    goto LABEL_126;
                  }
                  if ( v2 <= 0x220 )
                  {
                    if ( v2 == 544 )
                    {
                      v31 = v118;
                      v32 = (const void *)*((_QWORD *)v118 + 10);
                      if ( v32 )
                      {
                        v33 = *((unsigned int *)v118 + 19);
                        LODWORD(v33) = v33 & 0x7FFFFFFF;
                        memmove((void *)v22, v32, v33);
                        *v31 = *(_QWORD *)(v18 + 120);
                      }
                      v34 = v118;
                      if ( *((_DWORD *)v118 + 14) )
                      {
                        v35 = *((unsigned int *)v118 + 19);
                        LODWORD(v35) = v35 & 0x7FFFFFFF;
                        v36 = (void *)(*(_QWORD *)(v18 + 120) + v35);
                        v37 = *((unsigned int *)v118 + 15);
                        LODWORD(v37) = v37 & 0x7FFFFFFF;
                        memmove(v36, *((const void **)v118 + 8), v37);
                        *((_QWORD *)v34 + 1) = v36;
                      }
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( v2 )
                      {
                        case 0xC2u:
                        case 0x143u:
                        case 0x145u:
                        case 0x14Au:
                        case 0x14Cu:
                        case 0x14Du:
                        case 0x158u:
                        case 0x180u:
                        case 0x181u:
                        case 0x18Cu:
                        case 0x18Du:
                        case 0x18Fu:
                        case 0x196u:
                        case 0x1A2u:
LABEL_80:
                          v10 = (unsigned __int16 *)v22;
                          v138 = v22;
                          v25 = HIDWORD(v115[0]) ^ (HIDWORD(v115[0]) ^ *(_DWORD *)(v22 + 4)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v25;
                          *(_DWORD *)v22 = v115[0];
                          *(_QWORD *)(v22 + 8) = v22 + 16;
                          v26 = v25 ^ (v25 ^ (v19 - 16)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v26;
                          LODWORD(v26) = v26 & 0x7FFFFFFF;
                          memmove((void *)(v22 + 16), v115[1], v26);
                          break;
                        case 0xC4u:
                          *(_WORD *)v22 = *(_WORD *)v115[1];
                          v23 = *(void **)(v18 + 120);
                          goto LABEL_40;
                        case 0x148u:
                        case 0x189u:
                          goto LABEL_40;
                        case 0x191u:
                          Size = v19;
LABEL_67:
                          memmove((void *)v22, Src, v19);
                          v10 = *(unsigned __int16 **)(v18 + 120);
                          v138 = (__int64)v10;
                          break;
                        default:
                          goto LABEL_71;
                      }
                    }
                    goto LABEL_126;
                  }
                  v24 = (void *)v22;
                  if ( v2 != 780 )
                  {
                    if ( v2 == 812 )
                    {
                      MakeUpKeyboardCorrectionCalloutContents(v10, v21, v22);
                      v136 = 0LL;
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v138 = (__int64)v10;
                    }
                    else
                    {
LABEL_71:
                      memmove(v24, Src, v19);
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v138 = (__int64)v10;
                    }
                    goto LABEL_126;
                  }
                }
LABEL_40:
                Size = v19;
                v119 = v115[1];
                v115[1] = v23;
              }
LABEL_126:
              if ( v19 && !*(_QWORD *)(v18 + 120) )
              {
                Win32FreeToPagedLookasideList(SMSLookaside, v18);
                return 0LL;
              }
              if ( (_DWORD)v144
                && a1
                && (unsigned int)IsWindowDesktopComposed(a1)
                && (v2 <= 0x240 || v2 >= 0x258 || v2 == 589) )
              {
                TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
                v10 = (unsigned __int16 *)v138;
              }
              goto LABEL_132;
            case 0x341u:
              v19 = 64;
              Size = 64;
              break;
            case 0x342u:
              v19 = 56;
              break;
          }
          goto LABEL_36;
        }
      }
LABEL_42:
      *(_OWORD *)v115 = *(_OWORD *)v10;
      if ( SHIDWORD(v115[0]) < 0 )
        v114 = 1;
      else
        v114 = 2;
      v10 = (unsigned __int16 *)v115;
      v138 = (__int64)v115;
      if ( v115[1] < MmSystemRangeStart || !v16 )
        v19 = HIDWORD(v115[0]) & 0x7FFFFFFF;
LABEL_36:
      v21 = v136;
      goto LABEL_37;
    }
    v99 = *(_QWORD **)(v141 + 424);
    v100 = PsGetCurrentProcess(v142, v6, v7);
    if ( !PsGetProcessCommonJob(v100, *v99) )
      return 0LL;
    v87 = v142;
    v15 = v141;
LABEL_309:
    v16 = Size_4;
    if ( Size_4 )
      goto LABEL_31;
    goto LABEL_280;
  }
  if ( v2 > 0xD0 )
  {
    if ( v2 == 272 )
      goto LABEL_290;
    if ( v2 != 353 && v2 != 424 && v2 != 563 && v2 != 648 )
      goto LABEL_10;
  }
  else if ( v2 != 208 )
  {
    switch ( v2 )
    {
      case 0xCu:
      case 0xBCu:
        goto LABEL_219;
      case 0xDu:
      case 0xC4u:
      case 0xCCu:
        v6 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 2LL);
        if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v6 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 28LL) & 0x20) == 0 )
          goto LABEL_10;
        UserSetLastError(5LL);
        break;
      case 0x4Eu:
        goto LABEL_290;
      default:
        goto LABEL_10;
    }
    goto LABEL_290;
  }
LABEL_219:
  if ( (unsigned __int8)Enforced() && *(_QWORD *)v8 != gpepCSRSS
    || *(_DWORD *)(v8 + 780) == *(_DWORD *)(CurrentProcessWin32Process + 780)
    && *(_DWORD *)(v8 + 784) == *(_DWORD *)(CurrentProcessWin32Process + 784) )
  {
    goto LABEL_10;
  }
LABEL_290:
  UserSetLastError(5LL);
  return 0LL;
}
