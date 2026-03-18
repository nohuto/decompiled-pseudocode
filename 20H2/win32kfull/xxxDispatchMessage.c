/*
 * XREFs of xxxDispatchMessage @ 0x1C004CFF0
 * Callers:
 *     NtUserDispatchMessage @ 0x1C004CE90 (NtUserDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C007C730 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007E898 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0123DC0 (RtlWCSMessageWParamCharToMB.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ValidateTimerCallback @ 0x1C01E1D20 (ValidateTimerCallback.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025D4C0 (RtlMBMessageWParamCharToWCS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxDispatchMessage(_QWORD *a1)
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
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax
  int v25; // r12d
  int v26; // ebp
  int v27; // r13d
  _DWORD *v28; // rax
  int v29; // r9d
  int v30; // r8d
  int v31; // ebx
  char v32; // r9
  __int64 v33; // rbp
  unsigned int v34; // r10d
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rbp
  struct _KTHREAD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rcx
  char *v45; // rbx
  __int64 (__fastcall *v46)(__int64 *, int, __int64, __int64, __int64, __int64); // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 *v49; // rbx
  __int64 v50; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v53; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rax
  BOOL v59; // edx
  __int64 v60; // rcx
  void *v61; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int128 v66; // [rsp+50h] [rbp-48h] BYREF
  __int64 v67; // [rsp+60h] [rbp-38h]
  unsigned int v68; // [rsp+A0h] [rbp+8h]

  v66 = 0LL;
  v67 = 0LL;
  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v68 = *((_DWORD *)a1 + 2);
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v53),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  LOBYTE(v9) = *(_BYTE *)(v4 + 1248);
  EtwTraceBeginDispatchMessage(v9, v68);
  v10 = *a1;
  v11 = 0LL;
  if ( *a1 )
  {
    v11 = (__int64 *)ValidateHwnd(v10);
    if ( !v11 )
      goto LABEL_68;
  }
  v12 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v12 < 0x400
    && ((v10 = 512LL, (MessageTable[v12] & 0x200) != 0) || (_DWORD)v12 == 537 && (a1[2] & 0x8000LL) != 0)
    || (_DWORD)v12 == 536 && (a1[2] & 0x8000LL) != 0 )
  {
    UserSetLastError(1159LL);
LABEL_68:
    v37 = 0LL;
    goto LABEL_34;
  }
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v55 = PsGetCurrentProcess(v16, v15, v17),
        v56 = PsGetProcessSessionIdEx(v55),
        v58 = PsGetCurrentThreadProcess(v57),
        v56 == (unsigned int)PsGetProcessSessionIdEx(v58)) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v18 )
      v14 = *v18;
  }
  *(_QWORD *)&v66 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v66;
  *((_QWORD *)&v66 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  v23 = *((_DWORD *)a1 + 2);
  if ( v23 == 280 || v23 == 275 )
  {
    v19 = a1[3];
    if ( v19 )
    {
      if ( v23 == 280 )
      {
        v19 = gtmrListHead;
        v37 = 0LL;
        for ( i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
              i != (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gtmrListHead;
              i = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, char))i )
        {
          v45 = (char *)i - 72;
          if ( (*((_DWORD *)i - 6) & 2) != 0 && a1[2] == *((_QWORD *)v45 + 12) && v11 == *((__int64 **)v45 + 11) )
            goto LABEL_47;
        }
        v45 = 0LL;
LABEL_47:
        if ( v45 )
        {
          if ( *((_QWORD *)v45 + 4)
            || (MicrosoftTelemetryAssertTriggeredNoArgsKM(i, gtmrListHead, v21, v22), *((_QWORD *)v45 + 4)) )
          {
            (*((void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))v45 + 4))(
              v11,
              280LL,
              *((unsigned int *)a1 + 4),
              (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24));
          }
        }
        goto LABEL_33;
      }
      i = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, char))gptiCurrent;
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 && (unsigned int)ValidateTimerCallback() )
      {
        v48 = SfnDWORD(
                v11,
                275,
                a1[2],
                (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24),
                a1[3],
                *(_QWORD *)(gpsi + 752LL));
        goto LABEL_55;
      }
LABEL_60:
      v37 = 0LL;
      goto LABEL_33;
    }
  }
  if ( !v11 )
    goto LABEL_60;
  if ( v23 == 15 )
  {
    v24 = v11[5];
    v25 = *(_DWORD *)(v24 + 28);
    v26 = *(_DWORD *)(v24 + 24);
    v27 = *(_DWORD *)(v24 + 232);
    *(_BYTE *)(v24 + 18) |= 0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(v11) )
    {
      v28 = (_DWORD *)v11[5];
      v29 = v28[7];
      v30 = v28[6];
      v31 = v28[58];
      if ( v25 != v29 )
        goto LABEL_79;
      if ( v26 == v30 && v27 == v31 )
        goto LABEL_23;
      if ( v25 == v29 )
      {
        if ( v26 == v30 )
        {
          if ( ((v27 ^ v31) & 0x2E00300) == 0 )
            goto LABEL_23;
          v59 = 1;
        }
        else
        {
          v59 = ((v26 ^ v30) & 0x4E27A9) != 0;
        }
      }
      else
      {
LABEL_79:
        v59 = ((v25 ^ v29) & 0xB1CF0000) != 0;
      }
      if ( v59 )
      {
        DirtyVisRgnTrackers(v11);
        v61 = (void *)ReferenceDwmApiPort(v60);
        DwmAsyncChildStyleChange(v61);
      }
    }
  }
LABEL_23:
  v19 = v11[5];
  v32 = *(_BYTE *)(v19 + 18);
  if ( (v32 & 4) == 0 )
  {
    v33 = *(_QWORD *)(v19 + 120);
    v34 = *((_DWORD *)a1 + 2);
    if ( (v32 & 8) != 0 )
    {
      v49 = a1 + 2;
      RtlWCSMessageWParamCharToMB(v34, a1 + 2);
      v34 = *((_DWORD *)a1 + 2);
      if ( v34 != 576 && v34 != 281 )
      {
        v35 = *v49;
        goto LABEL_28;
      }
      v50 = *v49;
    }
    else
    {
      if ( v34 != 576 && v34 != 281 )
      {
        v35 = a1[2];
LABEL_28:
        v36 = SfnDWORD(v11, v34, v35, a1[3], v33, *(_QWORD *)(gpsi + 752LL));
LABEL_29:
        v37 = v36;
        if ( *((_DWORD *)a1 + 2) == 15 )
        {
          LOBYTE(v19) = 1;
          if ( HMValidateHandleNoSecure(*a1, v19) )
          {
            if ( (*(_BYTE *)(v11[5] + 18) & 0x40) != 0 )
            {
              SetOrClrWF(0LL, v11, 1025LL, 1LL);
              xxxSimpleDoSyncPaint((struct tagWND *)v11);
            }
          }
        }
        goto LABEL_33;
      }
      v50 = a1[2];
    }
    v36 = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v34]])(
            v11,
            v34,
            v50,
            a1[3],
            v33,
            *(_QWORD *)(gpsi + 752LL),
            1,
            0LL);
    goto LABEL_29;
  }
  v21 = *((unsigned int *)a1 + 2);
  if ( (unsigned int)v21 >= 0x400 )
    v46 = SfnDWORD;
  else
    v46 = (__int64 (__fastcall *)(__int64 *, int, __int64, __int64, __int64, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[v21]];
  i = SfnINWPARAMCHAR;
  if ( (char *)v46 == (char *)SfnINWPARAMCHAR && (v32 & 8) != 0 )
  {
    RtlMBMessageWParamCharToWCS((unsigned int)v21, a1 + 2);
    v19 = v11[5];
  }
  v47 = *(_QWORD *)(v19 + 120);
  if ( v47 >= 7 )
    goto LABEL_60;
  v48 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD))(&gServerHandlers)[v47])(
          v11,
          *((unsigned int *)a1 + 2),
          a1[2],
          a1[3]);
LABEL_55:
  v37 = v48;
LABEL_33:
  ThreadUnlock1(i, v19, v21);
LABEL_34:
  v38 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v10)
    || (v62 = PsGetCurrentProcess(v40, v39, v41),
        v63 = PsGetProcessSessionIdEx(v62),
        v65 = PsGetCurrentThreadProcess(v64),
        v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
  {
    v42 = (__int64 *)PsGetThreadWin32Thread(v38);
    if ( v42 )
      v1 = *v42;
  }
  LOBYTE(v43) = *(_BYTE *)(v1 + 1248);
  EtwTraceEndDispatchMessage(v43, v68);
  return v37;
}
