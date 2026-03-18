/*
 * XREFs of xxxWindowEvent @ 0x1C00CD660
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     zzzSetCaretPos @ 0x1C0018BC0 (zzzSetCaretPos.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003A080 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C004BFD0 (xxxCalcClientRect.c)
 *     xxxDCETrackCaptionButton @ 0x1C007C730 (xxxDCETrackCaptionButton.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00C2554 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C00CD5D0 (NtUserNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     zzzInternalShowCaret @ 0x1C00D6840 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00D68F0 (zzzInternalHideCaret.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetScrollBar @ 0x1C00EBA98 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00EC180 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C010A9B0 (zzzInternalDestroyCaret.c)
 *     xxxCancelCoolSwitch @ 0x1C011D004 (xxxCancelCoolSwitch.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F2F40 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0235BEC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0236FD4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023A63C (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C023A6BC (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023AFB4 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B434 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02445A0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0245424 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A610 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C0250E6C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00065E8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C0006784 (xxxProcessTSFEvent.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00CB468 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     CategoryMaskFromEvent @ 0x1C00CDEFC (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00D6418 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0122730 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, unsigned int a5)
{
  struct tagWND *v5; // r14
  int v8; // edx
  unsigned int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rdi
  unsigned int DLT; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  tagDomLock *v33; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // edi
  PETHREAD *v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  struct _KTHREAD *v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rax
  int v47; // edi
  struct tagWND *v48; // r13
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdi
  HANDLE v52; // rbx
  __int64 v53; // rsi
  struct _KTHREAD *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rcx
  unsigned int v62; // eax
  HANDLE v63; // rax
  int v64; // eax
  struct tagNOTIFY *Notify; // rax
  __int64 v66; // rax
  int v67; // ebx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v72; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  bool v77; // zf
  __int64 v78; // rax
  int v79; // edi
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned int v82; // [rsp+20h] [rbp-E8h]
  char v83; // [rsp+20h] [rbp-E8h]
  unsigned int v84; // [rsp+28h] [rbp-E0h]
  unsigned int v85; // [rsp+40h] [rbp-C8h]
  __int64 v86; // [rsp+48h] [rbp-C0h]
  struct tagTHREADINFO *v87; // [rsp+50h] [rbp-B8h]
  __int128 v88; // [rsp+58h] [rbp-B0h] BYREF
  void (*v89)(void); // [rsp+68h] [rbp-A0h]
  __int64 v90; // [rsp+70h] [rbp-98h]
  tagDomLock *DomainLockRef; // [rsp+78h] [rbp-90h]
  HANDLE ThreadProcessId; // [rsp+80h] [rbp-88h]
  __int64 v93; // [rsp+88h] [rbp-80h]
  HANDLE ThreadId; // [rsp+90h] [rbp-78h]
  tagDomLock *v95; // [rsp+98h] [rbp-70h]
  tagObjLock *v96; // [rsp+A0h] [rbp-68h]
  __int128 v97; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-50h]
  unsigned int v99; // [rsp+110h] [rbp+8h]
  struct tagWND *v100; // [rsp+118h] [rbp+10h]

  v100 = a2;
  v5 = 0LL;
  v98 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v8 = 2;
  v97 = 0LL;
  v88 = 0LL;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_2;
  if ( a1 == 2147483408 )
  {
    v9 = 1;
    goto LABEL_4;
  }
  if ( a1 - 2147483409 > 1 )
LABEL_2:
    v9 = 0;
  else
    v9 = 2;
  if ( a1 >= 0x7FFFFF00 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 > 0x80000005 )
        goto LABEL_4;
      v10 = 4096;
    }
    else if ( a1 < 0x80000002 )
    {
      if ( a1 > 0x7FFFFF01 )
      {
        if ( a1 > 0x7FFFFFFF )
        {
          v10 = 256;
          v11 = 1;
          goto LABEL_5;
        }
        goto LABEL_4;
      }
      v10 = 1024;
    }
    else
    {
      v10 = 512;
    }
    v11 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v10 = 0;
  v11 = 0;
LABEL_5:
  if ( a1 < 0x8005 && a1 >= 0x4008 )
    goto LABEL_7;
  if ( a1 == 32780 )
  {
    v8 = 8;
    goto LABEL_8;
  }
  if ( a1 == 32779 )
  {
    v8 = 64;
    goto LABEL_8;
  }
  if ( a1 >= 0x800F && a1 < 0x7FFFFF10 || a1 < 0x4001 && a1 >= 8 )
    goto LABEL_7;
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
      {
        v8 = 512;
        goto LABEL_8;
      }
      if ( a1 > 0x80000007 )
        goto LABEL_7;
    }
    else if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
    {
      goto LABEL_7;
    }
LABEL_95:
    v8 = 256;
    goto LABEL_8;
  }
  if ( a1 >= 0x7FFFFF10 )
    goto LABEL_95;
  if ( a1 > 0x8005 )
  {
    if ( a1 == 32778 )
    {
      v8 = 32;
      goto LABEL_8;
    }
    if ( a1 == 32782 )
    {
      v8 = 16;
      goto LABEL_8;
    }
LABEL_7:
    v8 = 0x8000;
    goto LABEL_8;
  }
  if ( a1 == 32773 )
  {
    v8 = 4;
    goto LABEL_8;
  }
  if ( a1 < 4 )
    goto LABEL_7;
  if ( a1 <= 7 )
  {
    v8 = 1;
    goto LABEL_8;
  }
  if ( a1 - 16385 > 6 )
    goto LABEL_7;
LABEL_8:
  if ( (v8 & *(_DWORD *)(gpsi + 1892LL)) != 0 || v9 || v11 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(gpsi)
      || (v66 = PsGetCurrentProcess(v14, v13, v15),
          v67 = PsGetProcessSessionIdEx(v66),
          v69 = PsGetCurrentThreadProcess(v68),
          v67 == (unsigned int)PsGetProcessSessionIdEx(v69)) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v18 = KeGetCurrentThread();
          v86 = 0LL;
          if ( (!(unsigned __int8)KeIsAttachedProcess(v17)
             || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
                 ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                 CurrentThreadProcess = PsGetCurrentThreadProcess(v72),
                 ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
            && (v22 = (__int64 *)PsGetThreadWin32Thread(v18)) != 0LL )
          {
            v23 = *v22;
            v86 = *v22;
          }
          else
          {
            v23 = 0LL;
          }
          v96 = (tagObjLock *)(v23 + 392);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          if ( v23 + 392 == gObjDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
          v29 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v29);
          tagDomLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v23 + 392));
          v30 = DLT_WINEVENT::getDLT();
          v33 = (tagDomLock *)GetDomainLockRef(v30);
          v95 = v33;
          if ( v33 == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
          tagDomLock::LockExclusive(v33);
          if ( (a5 & 0x11) == 0x11 || !v100 || *(char *)(*((_QWORD *)v100 + 5) + 19LL) >= 0 )
          {
            v36 = *(_DWORD *)(v23 + 488);
            v37 = a5 | 2;
            if ( (v36 & 0x10000001) == 0 )
              v37 = a5;
            v99 = v37;
            if ( (v37 & 1) != 0 && v100 )
            {
              v38 = (PETHREAD *)*((_QWORD *)v100 + 2);
              if ( (v37 & 0x10) == 0 )
                v5 = a2;
              v39 = v86;
              v100 = v5;
            }
            else
            {
              v39 = v86;
              v5 = v100;
              v38 = (PETHREAD *)v86;
            }
            v87 = (struct tagTHREADINFO *)v38;
            ThreadId = PsGetThreadId(*v38);
            v93 = *((_QWORD *)v87 + 53);
            ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v87);
            if ( (v37 & 0x20) != 0 )
            {
              v85 = _InterlockedIncrement(&gcWinEvents);
            }
            else
            {
              v40 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v85 = v40;
            }
            *(_QWORD *)&v97 = *(_QWORD *)(v39 + 416);
            *(_QWORD *)(v39 + 416) = &v97;
            *((_QWORD *)&v97 + 1) = v5;
            if ( v5 )
              HMLockObject(v5);
            v41 = KeGetCurrentThread();
            v42 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(v40)
              || (v74 = PsGetCurrentProcess(v44, v43, v45),
                  v37 = PsGetProcessSessionIdEx(v74),
                  v76 = PsGetCurrentThreadProcess(v75),
                  v77 = v37 == (unsigned int)PsGetProcessSessionIdEx(v76),
                  LOBYTE(v37) = v99,
                  v77) )
            {
              v46 = (__int64 *)PsGetThreadWin32Thread(v41);
              if ( v46 )
                v42 = *v46;
            }
            *(_QWORD *)&v88 = *(_QWORD *)(v42 + 16);
            *(_QWORD *)(v42 + 16) = &v88;
            *((_QWORD *)&v88 + 1) = v87;
            v89 = (void (*)(void))DereferenceW32Thread;
            ObfReferenceObject(*(PVOID *)v87);
            _InterlockedIncrement((volatile signed __int32 *)v87 + 2);
            if ( (v37 & 2) == 0 )
            {
              PsGetCurrentThreadId();
              LOBYTE(v37) = v99;
            }
            if ( v11 && (*(_DWORD *)(*((_QWORD *)v87 + 53) + 820LL) & 0x1000000) != 0 )
            {
              v84 = v10;
              v48 = v100;
              v83 = v37;
              v47 = a4;
              xxxDoLocalTSFWork(a1, v100, a3, a4, v83, v84, v87, v85);
            }
            else
            {
              v47 = a4;
              v48 = v100;
            }
            if ( v9 )
              DoGlobalTSFWork(a1, v48, a3, v47, v82, v9, v87, v85);
            v49 = CategoryMaskFromEvent(a1);
            v50 = gpsi;
            if ( (v49 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v51 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                v52 = ThreadProcessId;
                while ( 1 )
                {
                  v50 = *(unsigned int *)(v51 + 40);
                  v53 = *(_QWORD *)(v51 + 24);
                  if ( (v50 & 1) == 0 && *(_DWORD *)(v51 + 32) <= a1 && a1 <= *(_DWORD *)(v51 + 36) )
                  {
                    v63 = *(HANDLE *)(v51 + 48);
                    if ( (!v63 || v63 == v52) && ((v50 & 4) == 0 || v93 != *(_QWORD *)(*(_QWORD *)(v51 + 16) + 424LL)) )
                    {
                      v64 = *(_DWORD *)(v51 + 56);
                      if ( (!v64 || v64 == (_DWORD)ThreadId)
                        && ((v50 & 2) == 0 || v87 != *(struct tagTHREADINFO **)(v51 + 16)) )
                      {
                        v50 = *(_QWORD *)(*(_QWORD *)(v51 + 16) + 456LL);
                        if ( v50 == *(_QWORD *)(v86 + 456)
                          || a1 == 32
                          || v50 == *((_QWORD *)v87 + 57) && a1 + 2147483646 <= 1 )
                        {
                          if ( (*(_BYTE *)(_HMPheFromObject(v51) + 25) & 1) != 0
                            || (Notify = CreateNotify(
                                           (struct tagEVENTHOOK *)v51,
                                           a1,
                                           v48,
                                           a3,
                                           a4,
                                           (PETHREAD *)v87,
                                           v85,
                                           0)) == 0LL )
                          {
LABEL_61:
                            v33 = v95;
                            break;
                          }
                          v50 = v99 | *((_DWORD *)Notify + 14);
                          *((_DWORD *)Notify + 14) = v50;
                          if ( (v50 & 4) != 0 )
                          {
                            v50 = (unsigned int)v50 & 0xFFFFFFFD;
                            *((_DWORD *)Notify + 14) = v50;
                          }
                          if ( (v50 & 2) == 0 )
                            v53 = xxxProcessNotifyWinEvent((__int64)Notify);
                        }
                      }
                    }
                  }
                  v51 = v53;
                  if ( !v53 )
                    goto LABEL_61;
                }
              }
              v54 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v50)
                || (v78 = PsGetCurrentProcess(v56, v55, v57),
                    v79 = PsGetProcessSessionIdEx(v78),
                    v81 = PsGetCurrentThreadProcess(v80),
                    v79 == (unsigned int)PsGetProcessSessionIdEx(v81)) )
              {
                v58 = (__int64 *)PsGetThreadWin32Thread(v54);
                if ( v58 )
                  v90 = *v58;
              }
              *(_QWORD *)(v90 + 16) = v88;
              v61 = *((_QWORD *)&v88 + 1);
              if ( *((_QWORD *)&v88 + 1) )
                v89();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v88);
            }
            ThreadUnlock1(v61, v59, v60);
          }
          tagDomLock::UnLockExclusive(v33);
          v62 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v62);
          tagObjLock::UnLockExclusive(v96);
          tagDomLock::UnLockShared(DomainLockRef);
        }
      }
    }
  }
}
