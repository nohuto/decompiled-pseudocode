/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0098820
 * Callers:
 *     _ReplyMessage @ 0x1C0002510 (_ReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x1C008E428 (ClearSendMessages.c)
 *     xxxReceiveMessage @ 0x1C0097200 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C009A2E0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiverDied @ 0x1C00BC0A8 (xxxReceiverDied.c)
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsThreadHung @ 0x1C0037D80 (IsThreadHung.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0096AE0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0099FE0 (TransformMessageBetweenCoordinateSpaces.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C009B5D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C0112A5C (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ProcessSuspendedSendMessage @ 0x1C01200EC (ProcessSuspendedSendMessage.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01590D0 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C01590F8 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E249C (MakeUpKeyboardCorrectionCalloutContents.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C025F2E8 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, unsigned int a2, ...)
{
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
  _QWORD *v15; // r10
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
  _QWORD *v39; // rbx
  unsigned __int64 v40; // rcx
  int v41; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  _QWORD *v51; // r12
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  unsigned int v54; // eax
  size_t v55; // r15
  int v56; // r12d
  unsigned __int8 v57; // cf
  int v58; // r13d
  int v59; // r12d
  unsigned int v60; // ebx
  _QWORD *v61; // r9
  _QWORD *v62; // rdx
  __int64 v63; // r13
  char v64; // r15
  _BOOL8 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rsi
  __int64 v71; // rbx
  int v72; // eax
  int v73; // ecx
  _QWORD *v74; // rbx
  _WORD *v75; // rdx
  unsigned int v76; // eax
  __int16 v77; // cx
  int v78; // eax
  int v79; // eax
  int v80; // edx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rcx
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // rcx
  int v87; // edx
  int v88; // r8d
  int v89; // eax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int128 *v96; // rax
  __int128 v97; // xmm0
  __int64 v98; // rcx
  __int64 v99; // rdx
  _QWORD *v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v105; // rcx
  __int64 CurrentThreadProcess; // rax
  bool v107; // zf
  __int64 v108; // rax
  _BOOL8 v109; // rcx
  BOOL v110; // eax
  unsigned int Size; // [rsp+44h] [rbp-124h]
  size_t Size_4; // [rsp+48h] [rbp-120h]
  _OWORD *Src; // [rsp+50h] [rbp-118h]
  int Srca; // [rsp+50h] [rbp-118h]
  int v115; // [rsp+58h] [rbp-110h]
  void *v116[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v117; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v118; // [rsp+78h] [rbp-F0h]
  unsigned __int16 *v119; // [rsp+80h] [rbp-E8h]
  void *v120; // [rsp+88h] [rbp-E0h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-D0h] BYREF
  _OWORD *v123; // [rsp+A0h] [rbp-C8h]
  __int64 v124; // [rsp+A8h] [rbp-C0h]
  _QWORD *v125; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v126; // [rsp+B8h] [rbp-B0h]
  __int64 v127; // [rsp+C0h] [rbp-A8h]
  __int64 v128; // [rsp+C8h] [rbp-A0h]
  void *v129; // [rsp+D0h] [rbp-98h]
  _WORD *v130; // [rsp+D8h] [rbp-90h]
  size_t v131; // [rsp+E0h] [rbp-88h]
  __int128 v132; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v133; // [rsp+F8h] [rbp-70h]
  _QWORD v134[4]; // [rsp+100h] [rbp-68h] BYREF
  _BYTE v135[72]; // [rsp+120h] [rbp-48h] BYREF
  unsigned __int64 v137; // [rsp+180h] [rbp+18h] BYREF
  va_list va; // [rsp+180h] [rbp+18h]
  __int64 v139; // [rsp+188h] [rbp+20h] BYREF
  va_list va1; // [rsp+188h] [rbp+20h]
  __int64 v141; // [rsp+190h] [rbp+28h]
  _QWORD *v142; // [rsp+198h] [rbp+30h]
  __int64 v143; // [rsp+1A0h] [rbp+38h]
  __int64 v144; // [rsp+1A8h] [rbp+40h]
  __int64 v145; // [rsp+1B0h] [rbp+48h]
  va_list va2; // [rsp+1B8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v137 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v139 = va_arg(va2, _QWORD);
  v141 = va_arg(va2, _QWORD);
  v142 = va_arg(va2, _QWORD *);
  v143 = va_arg(va2, _QWORD);
  v144 = va_arg(va2, _QWORD);
  v145 = va_arg(va2, _QWORD);
  v126 = 0LL;
  v123 = 0LL;
  v119 = 0LL;
  *(_OWORD *)v116 = 0LL;
  v120 = 0LL;
  v115 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = gptiCurrent;
  v124 = gptiCurrent;
  if ( !(_DWORD)v141 )
    v5 = 0LL;
  Size_4 = v5;
  v131 = v5;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v5 && (*(_DWORD *)(v5 + 480) & 1) != 0 )
    return 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1
    || (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL), v8 == CurrentProcessWin32Process)
    || a2 >= 0xE && a2 < 0x4E )
  {
LABEL_10:
    if ( (_DWORD)v144 )
      goto LABEL_195;
    v9 = 0LL;
    if ( a1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL);
    }
    else if ( v142 )
    {
      v9 = v142[52];
    }
    if ( v9 == CurrentProcessWin32Process )
    {
LABEL_195:
      v10 = (unsigned __int16 *)v139;
    }
    else
    {
      if ( a2 == 717 )
        return 0LL;
      v10 = (unsigned __int16 *)v139;
      v11 = v137;
      v12 = IsMessageAllowedAcrossILByReceiver(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              (void *const **)v9,
              (struct tagWND *)a1,
              a2,
              v137,
              v139,
              1);
      if ( !v12 )
      {
        v12 = IsMessageAlwaysAllowedAcrossIL(a2);
        if ( v12 )
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            a2,
            v11,
            (unsigned __int64)v10,
            1,
            2);
      }
      if ( !v12 )
      {
        if ( a2 != 274 || ((v11 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || v11 == 61792 )
        {
          if ( *(_QWORD *)v9 == gpepCSRSS )
            v117 = 0x2000LL;
          else
            v117 = *(_QWORD *)(v9 + 880);
          v13 = CheckAccess(CurrentProcessWin32Process + 880, &v117);
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
              a2,
              v137,
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
          && a2 == 793
          && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1384) == a1)
          && *(_QWORD *)(v6 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          v12 = 1;
        }
        else
        {
          EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a2, v137, v10);
          UserSetLastError(5LL, v94, v95);
          MSGSQMAddMessage(
            (struct tagPROCESSINFO *)CurrentProcessWin32Process,
            (struct tagPROCESSINFO *)v9,
            a2,
            v137,
            (unsigned __int64)v10,
            1,
            0);
        }
        if ( !v12 )
          return 0LL;
      }
    }
    if ( a2 == 576 )
    {
      if ( !HMValidateHandle((unsigned __int64)v10, 0x14u) )
        return 0LL;
    }
    else if ( a2 == 281 && !HMValidateHandle((unsigned __int64)v10, 0x15u) )
    {
      return 0LL;
    }
    v15 = v142;
    if ( (v142[153] & 0x20) == 0 )
    {
      v16 = Size_4;
      goto LABEL_31;
    }
    v86 = v143;
    if ( v143 )
    {
      if ( (*(_DWORD *)(v143 + 32) & 0x40) != 0 )
        goto LABEL_309;
      if ( *(_DWORD *)v143 == 2 && *(_DWORD *)(v143 + 36) )
        return 0LL;
    }
    v16 = Size_4;
    if ( !Size_4 )
    {
LABEL_280:
      if ( !v86 )
      {
        if ( !(unsigned int)ProcessSuspendedSendMessage(v15, a1, a2, v137, v10) )
          return 0LL;
        v15 = v142;
      }
      if ( !v16 && *((_DWORD *)v15 + 132) > 0x2710u )
        return 0LL;
LABEL_31:
      v17 = Win32AllocateFromPagedLookasideList(SMSLookaside);
      v18 = v17;
      v128 = v17;
      v127 = v17;
      if ( !v17 )
        return 0LL;
      *(_QWORD *)(v17 + 120) = 0LL;
      Size = 0;
      v19 = 0;
      Src = v10;
      v20 = v124;
      *(_DWORD *)(v17 + 128) = *(_DWORD *)(v124 + 1404);
      if ( v143 && *(_DWORD *)v143 == 33 )
      {
LABEL_132:
        *(_QWORD *)(v18 + 112) = 0LL;
        v38 = (_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 16) = 0LL;
        v134[0] = v18 + 112;
        v134[1] = a1;
        HMAssignmentLock(v134);
        *(_DWORD *)(v18 + 104) = a2;
        *(_QWORD *)(v18 + 88) = v137;
        *(_QWORD *)(v18 + 96) = v10;
        *(_DWORD *)(v18 + 84) = 0;
        *(_QWORD *)(v18 + 72) = 0LL;
        if ( a2 == 576 || a2 == 281 )
        {
          v102 = _HMObjectFromHandle(v10);
          v39 = v142;
          if ( v102 )
            HMChangeOwnerThread(v102, v142);
        }
        else
        {
          v39 = v142;
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
                CurrentThreadProcess = PsGetCurrentThreadProcess(v105),
                v107 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
                v41 = 18,
                v107) )
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
              v49 = PsGetCurrentProcessWin32Process(v48);
              if ( v49 )
                v41 = *(_DWORD *)(v49 + 280);
            }
            if ( (*(_DWORD *)(v43 + 328) & 4) != 0 && (v41 & 0xF) == 2 && (v41 & 0xF0) == 0x20 )
              v41 |= 0x20000000u;
          }
          *(_DWORD *)(v18 + 132) = v41;
          *(_QWORD *)(v18 + 64) = 0LL;
          v50 = v143;
          if ( v143 && (*(_DWORD *)v143 & 1) != 0 )
          {
            if ( (*(_DWORD *)v143 & 0x100) != 0 )
              v84 = 1024;
            else
              v84 = 2048;
            v85 = *(_DWORD *)(v18 + 84) | v84;
            *(_DWORD *)(v18 + 84) = v85;
            *(_QWORD *)(v18 + 48) = *(_QWORD *)(v50 + 8);
            *(_QWORD *)(v18 + 56) = *(_QWORD *)(v50 + 16);
            if ( (*(_DWORD *)v50 & 0x20) != 0 )
            {
              *(_DWORD *)(v18 + 84) = v85 | 0x200;
              *(_QWORD *)(v18 + 72) = *(_QWORD *)(v50 + 24);
            }
            else
            {
              *(_DWORD *)(v18 + 84) = v85 | 0x100;
              *(_QWORD *)(v18 + 64) = v124;
            }
          }
          if ( (_DWORD)v145 )
            *(_DWORD *)(v18 + 84) |= 0x10000u;
          v51 = v142;
          v52 = v142 + 64;
          v53 = (_QWORD *)v142[65];
          if ( (_QWORD *)*v53 == v142 + 64 )
          {
            *v38 = v52;
            *(_QWORD *)(v18 + 24) = v53;
            *v53 = v38;
            v52[1] = v38;
            v54 = *((_DWORD *)v51 + 132) + 1;
            *((_DWORD *)v51 + 132) = v54;
            if ( v54 > LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
              LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = v54;
            v55 = Size_4;
            if ( Size_4 )
            {
              v126 = *(_QWORD *)(Size_4 + 496);
              *(_QWORD *)(Size_4 + 496) = v18;
            }
            else
            {
              *(_DWORD *)(v18 + 84) |= 8u;
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( a2 - 577 <= 0x16 && (v56 = 8122367, v57 = _bittest(&v56, a2 - 577), v51 = v142, v57)
                || a2 == 528 && (_WORD)v137 == 582 )
              {
                CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, v139, 6LL, v18);
              }
            }
            EtwTraceBeginSendMessage(v18, Size_4, v50);
            if ( !Size_4 )
            {
              SetWakeBit((__int64)v51, 0x40u);
              EtwTraceEndSendMessage(v18);
              return 1LL;
            }
            v58 = 0;
            v59 = 0;
            v60 = 512;
            Srca = 0;
            v61 = v142;
            if ( (v142[60] & 1) == 0 )
            {
              *(_WORD *)(v142[55] + 6LL) |= 0x40u;
              *(_WORD *)(v61[55] + 4LL) |= 0x40u;
              if ( (*(_BYTE *)(v61[55] + 10LL) & 0x40) != 0 )
                KeSetEvent((PRKEVENT)v61[91], 2, 0);
            }
            if ( v143 )
            {
              v59 = *(_DWORD *)(v143 + 36);
              v60 = ((*(_DWORD *)(v143 + 32) & 1) << 15) + 512;
            }
            CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
            v62 = v142;
            if ( *(_QWORD *)(Size_4 + 424) == v142[53] )
            {
              v93 = *(_DWORD *)(Size_4 + 480);
              if ( (v93 & 0x10000) == 0 )
              {
                *(_DWORD *)(Size_4 + 480) = v93 | 0x10000;
                Srca = 1;
              }
            }
            if ( (*(_DWORD *)(v18 + 84) & 1) == 0 )
            {
              while ( 1 )
              {
                if ( v58 )
                {
LABEL_172:
                  v55 = Size_4;
                  break;
                }
                v63 = 0LL;
                v132 = 0LL;
                v133 = 0LL;
                v64 = 0;
                *(_WORD *)(*(_QWORD *)(Size_4 + 440) + 4LL) &= ~0x200u;
                if ( a2 == 788 )
                {
                  if ( v139 )
                  {
                    if ( *((_DWORD *)v62 + 156) <= 0x501u )
                    {
                      if ( *((_DWORD *)v62 + 160) )
                      {
                        v63 = *(_QWORD *)v139;
                        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v139 + 48LL) - 13) <= 1 )
                        {
                          v108 = W32GetThreadWin32Thread(KeGetCurrentThread());
                          *(_QWORD *)&v132 = *(_QWORD *)(v108 + 408);
                          *(_QWORD *)(v108 + 408) = &v132;
                          *((_QWORD *)&v132 + 1) = v63;
                          HMLockObject(v63);
                          v64 = 1;
                        }
                      }
                    }
                  }
                }
                v65 = (unsigned int)xxxRealSleepThread(v60, v59, 0, 0, 0LL) == 0;
                LODWORD(v141) = v65;
                if ( v64 )
                {
                  v109 = (v65 << 7) | *(_DWORD *)(v63 + 88) & 0xFFFFFF7F;
                  *(_DWORD *)(v63 + 88) = v109;
                  if ( v65 )
                  {
                    v110 = v109 ^ (v109 ^ (v109 + 1)) & 0x7F;
                    *(_DWORD *)(v63 + 88) = v110;
                    if ( (v110 & 0x7Fu) > 0xA )
                      *(_DWORD *)(v63 + 64) |= 0x10u;
                  }
                  ThreadUnlock1(v109, v65, v66);
                }
                v58 = v141;
                if ( (_DWORD)v141 && v143 )
                {
                  v87 = *(_DWORD *)(v143 + 32);
                  v88 = *(_DWORD *)(v18 + 84);
                  if ( ((v88 & 0x20) != 0 || (v87 & 0x10) != 0) && (v88 & 0x10) != 0 )
                  {
                    v59 = 0;
                    v58 = 0;
                  }
                  if ( (v87 & 8) != 0 && !(unsigned int)IsThreadHung(v142, 0) )
                  {
                    v58 = 0;
LABEL_255:
                    EtwTraceConvertTimeOutToBlocking();
                    goto LABEL_171;
                  }
                  if ( !v58 )
                    goto LABEL_255;
                }
LABEL_171:
                v62 = v142;
                if ( (*(_DWORD *)(v18 + 84) & 1) != 0 )
                  goto LABEL_172;
              }
            }
            LODWORD(v141) = v58;
            CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v135);
            if ( Srca )
            {
              *(_DWORD *)(v55 + 480) &= ~0x10000u;
              MergeDeferredMessagesOfThreadOnQueue(v55);
            }
            if ( (*(_DWORD *)(v55 + 480) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v55 + 440) + 6LL) |= 0x200u;
              *(_WORD *)(*(_QWORD *)(v55 + 440) + 4LL) |= 0x200u;
              if ( (*(_WORD *)(*(_QWORD *)(v55 + 440) + 10LL) & 0x200) != 0 )
                KeSetEvent(*(PRKEVENT *)(v55 + 728), 2, 0);
            }
            if ( !v58 )
            {
              if ( Size )
              {
                v74 = v120;
                v125 = v120;
                if ( a2 == 131 )
                {
                  if ( (_DWORD)v145 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
                  {
                    TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)&v125, 0LL, a1);
                    v74 = v125;
                  }
                  v96 = *(__int128 **)(v18 + 120);
                  v97 = *v96;
                  if ( v137 )
                  {
                    v98 = v74[6];
                    *(_OWORD *)v74 = v97;
                    *((_OWORD *)v74 + 1) = v96[1];
                    *((_OWORD *)v74 + 2) = v96[2];
                    v74[6] = v98;
                    v99 = *((_QWORD *)v96 + 6);
                    if ( v99 )
                    {
                      *(_OWORD *)v98 = *(_OWORD *)v99;
                      *(_OWORD *)(v98 + 16) = *(_OWORD *)(v99 + 16);
                      *(_QWORD *)(v98 + 32) = *(_QWORD *)(v99 + 32);
                    }
                  }
                  else
                  {
                    *(_OWORD *)v74 = v97;
                  }
                }
                else
                {
                  v75 = *(_WORD **)(v18 + 120);
                  if ( v115 )
                  {
                    if ( v115 == 1 )
                    {
                      strncpycch(v120, v75, Size);
                    }
                    else
                    {
                      v76 = Size >> 1;
                      v118 = Size >> 1;
                      v130 = v75;
                      v129 = v120;
                      while ( v76 )
                      {
                        v77 = *v75;
                        *(_WORD *)v74 = *v75;
                        v74 = (_QWORD *)((char *)v74 + 2);
                        v129 = v74;
                        v130 = ++v75;
                        if ( !v77 )
                          break;
                        v118 = --v76;
                      }
                    }
                  }
                  else
                  {
                    memmove(v120, v75, Size);
                  }
                }
              }
              else if ( a2 == 831 && (_DWORD)v145 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
              }
            }
            EtwTraceEndSendMessage(v18);
            *(_QWORD *)(v55 + 496) = v126;
            v70 = v143;
            if ( v143 )
            {
              **(_QWORD **)(v143 + 40) = *(_QWORD *)(v127 + 72);
              v71 = 0LL;
              if ( (*(_DWORD *)(v18 + 84) & 0x8000) != 0 && (*(_BYTE *)(v70 + 32) & 0x20) != 0 )
                UserSetLastError(1400LL, v67, v68);
              else
                LOBYTE(v71) = v58 == 0;
            }
            else
            {
              v71 = *(_QWORD *)(v127 + 72);
            }
            if ( v70 || v58 )
            {
              v72 = *(_DWORD *)(v18 + 84);
              if ( (v72 & 1) == 0 )
              {
                v89 = v72 | 1;
                *(_DWORD *)(v18 + 84) = v89;
                if ( (v89 & 0x4000) != 0 )
                {
                  *(_DWORD *)(v18 + 84) = v89 | 8;
                }
                else
                {
                  --*((_DWORD *)v142 + 132);
                  v90 = (_QWORD *)(v18 + 16);
                  v91 = *(_QWORD *)(v18 + 16);
                  v92 = *(_QWORD **)(v18 + 24);
                  if ( *(_QWORD *)(v91 + 8) != v18 + 16 || (_QWORD *)*v92 != v90 )
                    goto LABEL_337;
                  *v92 = v91;
                  *(_QWORD *)(v91 + 8) = v92;
                  *v90 = 0LL;
                  *(_DWORD *)(v18 + 84) |= 0x10u;
                }
              }
            }
            v73 = *(_DWORD *)(v18 + 84);
            if ( (v73 & 0x4010) != 0x10 )
            {
              v73 |= 8u;
              *(_DWORD *)(v18 + 84) = v73;
            }
            if ( (v73 & 0x8008) == 8 )
              return v71;
            v78 = *(_DWORD *)(v18 + 104);
            if ( v78 == 576 )
            {
              FreeTouchInputInfo(*(_QWORD *)(v18 + 96), 0LL, v68, v69);
            }
            else if ( v78 == 281 )
            {
              FreeGestureInfo(*(_QWORD *)(v18 + 96), 0LL, v68, v69);
            }
            if ( (*(_DWORD *)(v18 + 84) & 0x200) == 0 )
            {
              if ( (v79 = *(_DWORD *)(v18 + 104), (unsigned int)(v79 - 577) <= 0x16)
                && (v80 = 8122367, _bittest(&v80, v79 - 577))
                || v79 == 528 && *(_WORD *)(v18 + 88) == 582 )
              {
                CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *(_QWORD *)(v18 + 96), 6LL, v18);
              }
            }
            v81 = *(_QWORD *)v18;
            v82 = *(_QWORD **)(v18 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == v18 && *v82 == v18 )
            {
              *v82 = v81;
              *(_QWORD *)(v81 + 8) = v82;
              HMAssignmentUnlock(v18 + 112);
              v83 = *(_QWORD *)(v18 + 120);
              if ( v83 )
                Win32FreePool(v83);
              Win32FreeToPagedLookasideList(SMSLookaside, v18);
              return v71;
            }
          }
        }
LABEL_337:
        __fastfail(3u);
      }
      if ( a2 >= 0x39 && a2 < 0x46 )
        goto LABEL_36;
      if ( a2 != 13 )
      {
        if ( a2 <= 0x143 )
        {
          if ( a2 == 323 )
          {
LABEL_106:
            if ( *(_DWORD *)(v20 + 1404) != 1 )
            {
LABEL_82:
              *(_OWORD *)v116 = *(_OWORD *)v10;
              if ( _mm_srli_si128(*(__m128i *)v116, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v16 )
              {
                v19 = LODWORD(v116[0]) + 18;
                if ( (unsigned int)(LODWORD(v116[0]) + 18) < LODWORD(v116[0]) )
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
            switch ( a2 )
            {
              case 1u:
              case 0x81u:
                UserSetLastError(5LL, 0x1C0000000LL, v20);
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
                v21 = v137;
                v19 = v137;
                goto LABEL_37;
              case 0x4Au:
                v123 = v10;
                if ( !*((_QWORD *)v10 + 2) )
                {
                  v19 = 24;
                  v21 = v137;
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
                v21 = v137;
                if ( v137 )
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
        if ( a2 <= 0x283 )
        {
          if ( a2 == 643 )
          {
            v21 = v137;
            if ( v137 == 24 )
              v19 = (*(_DWORD *)v10 << 9) + 4;
          }
          else
          {
            switch ( a2 )
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
                if ( *(_DWORD *)(v20 + 1404) == 1 )
                  goto LABEL_36;
                goto LABEL_82;
              case 0x191u:
              case 0x192u:
LABEL_111:
                v21 = v137;
                v19 = 4 * v137;
                break;
              case 0x218u:
                v21 = v137;
                if ( !v10 || (v137 & 0x8000) == 0 || v10 >= MmSystemRangeStart && v16 )
                  break;
                v19 = *((_DWORD *)v10 + 4) + 20;
                if ( *((_DWORD *)v10 + 4) < 0xFFFFFFEC )
                  break;
                goto LABEL_84;
              case 0x219u:
                if ( !v10 )
                  goto LABEL_36;
                v21 = v137;
                if ( (v137 & 0x8000) != 0 && (v10 < MmSystemRangeStart || !v16) )
                  v19 = *(_DWORD *)v10;
                break;
              case 0x220u:
                v119 = v10;
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
        if ( a2 != 780 )
        {
          switch ( a2 )
          {
            case 0x32Cu:
              v19 = 328;
              v21 = v137;
LABEL_38:
              v22 = Win32AllocPoolWithQuota(v19, 1668510549LL);
              *(_QWORD *)(v18 + 120) = v22;
              if ( v22 )
              {
                v120 = v10;
                v23 = (void *)v22;
                if ( a2 != 13 )
                {
                  if ( a2 <= 0x83 )
                  {
                    if ( a2 == 131 )
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
                      v139 = (__int64)v10;
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( a2 )
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
                          v139 = v22;
                          v28 = v123;
                          *(_OWORD *)v22 = *v123;
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
                  if ( a2 <= 0x220 )
                  {
                    if ( a2 == 544 )
                    {
                      v31 = v119;
                      v32 = (const void *)*((_QWORD *)v119 + 10);
                      if ( v32 )
                      {
                        v33 = *((unsigned int *)v119 + 19);
                        LODWORD(v33) = v33 & 0x7FFFFFFF;
                        memmove((void *)v22, v32, v33);
                        *v31 = *(_QWORD *)(v18 + 120);
                      }
                      v34 = v119;
                      if ( *((_DWORD *)v119 + 14) )
                      {
                        v35 = *((unsigned int *)v119 + 19);
                        LODWORD(v35) = v35 & 0x7FFFFFFF;
                        v36 = (void *)(*(_QWORD *)(v18 + 120) + v35);
                        v37 = *((unsigned int *)v119 + 15);
                        LODWORD(v37) = v37 & 0x7FFFFFFF;
                        memmove(v36, *((const void **)v119 + 8), v37);
                        *((_QWORD *)v34 + 1) = v36;
                      }
                    }
                    else
                    {
                      v24 = (void *)v22;
                      switch ( a2 )
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
                          v139 = v22;
                          v25 = HIDWORD(v116[0]) ^ (HIDWORD(v116[0]) ^ *(_DWORD *)(v22 + 4)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v25;
                          *(_DWORD *)v22 = v116[0];
                          *(_QWORD *)(v22 + 8) = v22 + 16;
                          v26 = v25 ^ (v25 ^ (v19 - 16)) & 0x7FFFFFFF;
                          *(_DWORD *)(v22 + 4) = v26;
                          LODWORD(v26) = v26 & 0x7FFFFFFF;
                          memmove((void *)(v22 + 16), v116[1], v26);
                          break;
                        case 0xC4u:
                          *(_WORD *)v22 = *(_WORD *)v116[1];
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
                          v139 = (__int64)v10;
                          break;
                        default:
                          goto LABEL_71;
                      }
                    }
                    goto LABEL_126;
                  }
                  v24 = (void *)v22;
                  if ( a2 != 780 )
                  {
                    if ( a2 == 812 )
                    {
                      MakeUpKeyboardCorrectionCalloutContents(v10, v21, v22);
                      v137 = 0LL;
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v139 = (__int64)v10;
                    }
                    else
                    {
LABEL_71:
                      memmove(v24, Src, v19);
                      v10 = *(unsigned __int16 **)(v18 + 120);
                      v139 = (__int64)v10;
                    }
                    goto LABEL_126;
                  }
                }
LABEL_40:
                Size = v19;
                v120 = v116[1];
                v116[1] = v23;
              }
LABEL_126:
              if ( v19 && !*(_QWORD *)(v18 + 120) )
              {
                Win32FreeToPagedLookasideList(SMSLookaside, v18);
                return 0LL;
              }
              if ( (_DWORD)v145
                && a1
                && (unsigned int)IsWindowDesktopComposed(a1)
                && (a2 <= 0x240 || a2 >= 0x258 || a2 == 589) )
              {
                TransformMessageBetweenCoordinateSpaces(a2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
                v10 = (unsigned __int16 *)v139;
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
      *(_OWORD *)v116 = *(_OWORD *)v10;
      if ( SHIDWORD(v116[0]) < 0 )
        v115 = 1;
      else
        v115 = 2;
      v10 = (unsigned __int16 *)v116;
      v139 = (__int64)v116;
      if ( v116[1] < MmSystemRangeStart || !v16 )
        v19 = HIDWORD(v116[0]) & 0x7FFFFFFF;
LABEL_36:
      v21 = v137;
      goto LABEL_37;
    }
    v100 = (_QWORD *)v142[52];
    v101 = PsGetCurrentProcess(v143, v6, v7);
    if ( !PsGetProcessCommonJob(v101, *v100) )
      return 0LL;
    v86 = v143;
    v15 = v142;
LABEL_309:
    v16 = Size_4;
    if ( Size_4 )
      goto LABEL_31;
    goto LABEL_280;
  }
  if ( a2 > 0xD0 )
  {
    if ( a2 == 272 )
      goto LABEL_290;
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
      goto LABEL_10;
  }
  else if ( a2 != 208 )
  {
    switch ( a2 )
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
        UserSetLastError(5LL, v6, v7);
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
  UserSetLastError(5LL, v6, v7);
  return 0LL;
}
