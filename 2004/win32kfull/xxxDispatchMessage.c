/*
 * XREFs of xxxDispatchMessage @ 0x1C00A54AC
 * Callers:
 *     NtUserDispatchMessage @ 0x1C00A3800 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAD98 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00BD330 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00BD5C0 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BDFE8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245DE4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     SfnDWORD @ 0x1C00A3480 (SfnDWORD.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0122AD0 (RtlWCSMessageWParamCharToMB.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ValidateTimerCallback @ 0x1C01E29E0 (ValidateTimerCallback.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025EAD4 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rdx
  struct _KTHREAD *v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 (__fastcall *i)(int, int, int, int, __int64, __int64, char); // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax
  int v24; // r12d
  int v25; // ebp
  int v26; // r13d
  _DWORD *v27; // rax
  int v28; // r9d
  int v29; // r8d
  int v30; // ebx
  char v31; // r9
  __int64 v32; // rbp
  unsigned int v33; // r10d
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbp
  struct _KTHREAD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 *v41; // rax
  __int64 v42; // rcx
  char *v44; // rbx
  __int64 (__fastcall *v45)(__int64 *, int, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 v49; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v52; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // edx
  unsigned int v60; // ebp
  __int64 v61; // rcx
  void *v62; // rax
  __int64 v63; // rax
  int v64; // ebx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int128 v67; // [rsp+50h] [rbp-48h] BYREF
  __int64 v68; // [rsp+60h] [rbp-38h]
  unsigned int v69; // [rsp+A0h] [rbp+8h]

  v67 = 0LL;
  v68 = 0LL;
  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v69 = *(_DWORD *)(a1 + 8);
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v52),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  LOBYTE(v9) = *(_BYTE *)(v4 + 1240);
  EtwTraceBeginDispatchMessage(v9, v69);
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v11 = (__int64 *)ValidateHwnd(v10);
    if ( !v11 )
      goto LABEL_68;
  }
  v12 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v12 < 0x400
    && ((v10 = 512LL, (MessageTable[v12] & 0x200) != 0) || (_DWORD)v12 == 537 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0)
    || (_DWORD)v12 == 536 && (*(_DWORD *)(a1 + 16) & 0x8000LL) != 0 )
  {
    UserSetLastError(1159LL, v12, 0x8000LL);
LABEL_68:
    v36 = 0LL;
    goto LABEL_34;
  }
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v54 = PsGetCurrentProcess(v16, v15, v17),
        v55 = PsGetProcessSessionIdEx(v54),
        v57 = PsGetCurrentThreadProcess(v56),
        v55 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v18 )
      v14 = *v18;
  }
  *(_QWORD *)&v67 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v67;
  *((_QWORD *)&v67 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  v22 = *(_DWORD *)(a1 + 8);
  if ( v22 == 280 || v22 == 275 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( v19 )
    {
      if ( v22 == 280 )
      {
        v19 = gtmrListHead[0];
        v36 = 0LL;
        for ( i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead[0];
              i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead[0];
              i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))i )
        {
          v44 = (char *)i - 72;
          if ( (*((_DWORD *)i - 6) & 2) != 0
            && *(_QWORD *)(a1 + 16) == *((_QWORD *)v44 + 12)
            && v11 == *((__int64 **)v44 + 11) )
          {
            goto LABEL_47;
          }
        }
        v44 = 0LL;
LABEL_47:
        if ( v44 )
        {
          if ( *((_QWORD *)v44 + 4)
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(i, gtmrListHead[0]), *((_QWORD *)v44 + 4)) )
          {
            (*((void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))v44 + 4))(
              v11,
              280LL,
              *(unsigned int *)(a1 + 16),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          }
        }
        goto LABEL_33;
      }
      i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
      {
        v47 = SfnDWORD(
                v11,
                275,
                *(_QWORD *)(a1 + 16),
                (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
                *(_QWORD *)(a1 + 24),
                *(_QWORD *)(gpsi + 752LL));
        goto LABEL_55;
      }
LABEL_60:
      v36 = 0LL;
      goto LABEL_33;
    }
  }
  if ( !v11 )
    goto LABEL_60;
  if ( v22 == 15 )
  {
    v23 = v11[5];
    v24 = *(_DWORD *)(v23 + 28);
    v25 = *(_DWORD *)(v23 + 24);
    v26 = *(_DWORD *)(v23 + 232);
    *(_BYTE *)(v23 + 18) |= 0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(v11) )
    {
      v27 = (_DWORD *)v11[5];
      v28 = v27[7];
      v29 = v27[6];
      v30 = v27[58];
      if ( v24 != v28 )
        goto LABEL_79;
      if ( v25 == v29 && v26 == v30 )
        goto LABEL_23;
      if ( v24 == v28 )
      {
        if ( v25 == v29 )
        {
          if ( ((v26 ^ v30) & 0x2E00300) == 0 )
            goto LABEL_23;
          v59 = 1;
          v60 = -268435456;
        }
        else
        {
          v58 = (v25 ^ v29) & 0x4E27A9;
          v59 = v58 != 0;
          v60 = -v59 & 0xFFFFFFEC;
          v30 = v29 & -v59;
        }
      }
      else
      {
LABEL_79:
        v59 = ((v24 ^ v28) & 0xB1CF0000) != 0;
        v60 = -v59 & 0xFFFFFFF0;
        v30 = v28 & -v59;
      }
      if ( v59 )
      {
        DirtyVisRgnTrackers((struct tagWND *)v11);
        v62 = (void *)ReferenceDwmApiPort(v61);
        DwmAsyncChildStyleChange(v62, *v11, v60, v30);
      }
    }
  }
LABEL_23:
  v19 = v11[5];
  v31 = *(_BYTE *)(v19 + 18);
  if ( (v31 & 4) == 0 )
  {
    v32 = *(_QWORD *)(v19 + 120);
    v33 = *(_DWORD *)(a1 + 8);
    if ( (v31 & 8) != 0 )
    {
      v48 = (__int64 *)(a1 + 16);
      RtlWCSMessageWParamCharToMB(v33, a1 + 16);
      v33 = *(_DWORD *)(a1 + 8);
      if ( v33 != 576 && v33 != 281 )
      {
        v34 = *v48;
        goto LABEL_28;
      }
      v49 = *v48;
    }
    else
    {
      if ( v33 != 576 && v33 != 281 )
      {
        v34 = *(_QWORD *)(a1 + 16);
LABEL_28:
        v35 = SfnDWORD(v11, v33, v34, *(_QWORD *)(a1 + 24), v32, *(_QWORD *)(gpsi + 752LL));
LABEL_29:
        v36 = v35;
        if ( *(_DWORD *)(a1 + 8) == 15
          && HMValidateHandleNoSecure(*(_QWORD *)a1, 1)
          && (*(_BYTE *)(v11[5] + 18) & 0x40) != 0 )
        {
          SetOrClrWF(0, (__int64)v11, 0x401u, 1);
          xxxSimpleDoSyncPaint((struct tagWND *)v11);
        }
        goto LABEL_33;
      }
      v49 = *(_QWORD *)(a1 + 16);
    }
    v35 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v33]])(
            v11,
            v33,
            v49,
            *(_QWORD *)(a1 + 24),
            v32,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
    goto LABEL_29;
  }
  v21 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v21 >= 0x400 )
    v45 = SfnDWORD;
  else
    v45 = (__int64 (__fastcall *)(__int64 *, int, __int64, __int64, __int64, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[v21]];
  i = SfnINWPARAMCHAR;
  if ( (char *)v45 == (char *)SfnINWPARAMCHAR && (v31 & 8) != 0 )
  {
    RtlMBMessageWParamCharToWCS((unsigned int)v21, a1 + 16);
    v19 = v11[5];
  }
  v46 = *(_QWORD *)(v19 + 120);
  if ( v46 >= 7 )
    goto LABEL_60;
  v47 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v46])(
          v11,
          *(unsigned int *)(a1 + 8),
          *(_QWORD *)(a1 + 16),
          *(_QWORD *)(a1 + 24));
LABEL_55:
  v36 = v47;
LABEL_33:
  ThreadUnlock1(i, v19, v21);
LABEL_34:
  v37 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v63 = PsGetCurrentProcess(v39, v38, v40),
        v64 = PsGetProcessSessionIdEx(v63),
        v66 = PsGetCurrentThreadProcess(v65),
        v64 == (unsigned int)PsGetProcessSessionIdEx(v66)) )
  {
    v41 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v41 )
      v1 = *v41;
  }
  LOBYTE(v42) = *(_BYTE *)(v1 + 1240);
  EtwTraceEndDispatchMessage(v42, v69);
  return v36;
}
