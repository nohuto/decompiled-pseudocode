/*
 * XREFs of xxxWindowEvent @ 0x1C0087C00
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0021EFC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0022188 (zzzSetWindowCompositionCloak.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C002ADB0 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxCreateCaret @ 0x1C005DC34 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C005FE40 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00600AC (zzzInternalShowCaret.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0087670 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C0087B70 (NtUserNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAD98 (xxxDCETrackCaptionButton.c)
 *     xxxSetScrollBar @ 0x1C00F0C18 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F12F4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     zzzSetCaretPos @ 0x1C0112850 (zzzSetCaretPos.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F3BAC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4440 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0236A7C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023B4CC (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023BE44 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023C2C4 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0245840 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0245A1C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245DE4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02466C4 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0248A20 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02496A4 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C025247C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006748 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C00068E4 (xxxProcessTSFEvent.c)
 *     CategoryMaskFromEvent @ 0x1C008849C (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0091238 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C00FCBC8 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01217C0 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  tagDomLock *v31; // rbx
  int v32; // eax
  unsigned int v33; // edi
  PETHREAD *v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  struct _KTHREAD *v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  int v43; // edi
  struct tagWND *v44; // r13
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdi
  HANDLE v48; // rbx
  __int64 v49; // rsi
  struct _KTHREAD *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // eax
  HANDLE v59; // rax
  int v60; // eax
  struct tagNOTIFY *Notify; // rax
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v68; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  bool v73; // zf
  __int64 v74; // rax
  int v75; // edi
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // [rsp+20h] [rbp-E8h]
  char v79; // [rsp+20h] [rbp-E8h]
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  unsigned int v81; // [rsp+40h] [rbp-C8h]
  __int64 v82; // [rsp+48h] [rbp-C0h]
  struct tagTHREADINFO *v83; // [rsp+50h] [rbp-B8h]
  __int128 v84; // [rsp+58h] [rbp-B0h] BYREF
  void (*v85)(void); // [rsp+68h] [rbp-A0h]
  __int64 v86; // [rsp+70h] [rbp-98h]
  tagDomLock *DomainLockRef; // [rsp+78h] [rbp-90h]
  HANDLE ThreadProcessId; // [rsp+80h] [rbp-88h]
  __int64 v89; // [rsp+88h] [rbp-80h]
  HANDLE ThreadId; // [rsp+90h] [rbp-78h]
  tagDomLock *v91; // [rsp+98h] [rbp-70h]
  tagObjLock *v92; // [rsp+A0h] [rbp-68h]
  __int128 v93; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v94; // [rsp+B8h] [rbp-50h]
  unsigned int v95; // [rsp+110h] [rbp+8h]
  struct tagWND *v96; // [rsp+118h] [rbp+10h]

  v96 = a2;
  v5 = 0LL;
  v94 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v8 = 2;
  v93 = 0LL;
  v84 = 0LL;
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
      || (v62 = PsGetCurrentProcess(v14, v13, v15),
          v63 = PsGetProcessSessionIdEx(v62),
          v65 = PsGetCurrentThreadProcess(v64),
          v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v18 = KeGetCurrentThread();
          v82 = 0LL;
          if ( (!(unsigned __int8)KeIsAttachedProcess(v17)
             || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
                 ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                 CurrentThreadProcess = PsGetCurrentThreadProcess(v68),
                 ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
            && (v22 = (__int64 *)PsGetThreadWin32Thread(v18)) != 0LL )
          {
            v23 = *v22;
            v82 = *v22;
          }
          else
          {
            v23 = 0LL;
          }
          v92 = (tagObjLock *)(v23 + 384);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          if ( v23 + 384 == gObjDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          v27 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v27);
          tagDomLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v23 + 384));
          v28 = DLT_WINEVENT::getDLT();
          v31 = (tagDomLock *)GetDomainLockRef(v28);
          v91 = v31;
          if ( v31 == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29);
          tagDomLock::LockExclusive(v31);
          if ( (a5 & 0x11) == 0x11 || !v96 || *(char *)(*((_QWORD *)v96 + 5) + 19LL) >= 0 )
          {
            v32 = *(_DWORD *)(v23 + 480);
            v33 = a5 | 2;
            if ( (v32 & 0x10000001) == 0 )
              v33 = a5;
            v95 = v33;
            if ( (v33 & 1) != 0 && v96 )
            {
              v34 = (PETHREAD *)*((_QWORD *)v96 + 2);
              if ( (v33 & 0x10) == 0 )
                v5 = a2;
              v35 = v82;
              v96 = v5;
            }
            else
            {
              v35 = v82;
              v5 = v96;
              v34 = (PETHREAD *)v82;
            }
            v83 = (struct tagTHREADINFO *)v34;
            ThreadId = PsGetThreadId(*v34);
            v89 = *((_QWORD *)v83 + 52);
            ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v83);
            if ( (v33 & 0x20) != 0 )
            {
              v81 = _InterlockedIncrement(&gcWinEvents);
            }
            else
            {
              v36 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v81 = v36;
            }
            *(_QWORD *)&v93 = *(_QWORD *)(v35 + 408);
            *(_QWORD *)(v35 + 408) = &v93;
            *((_QWORD *)&v93 + 1) = v5;
            if ( v5 )
              HMLockObject(v5);
            v37 = KeGetCurrentThread();
            v38 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(v36)
              || (v70 = PsGetCurrentProcess(v40, v39, v41),
                  v33 = PsGetProcessSessionIdEx(v70),
                  v72 = PsGetCurrentThreadProcess(v71),
                  v73 = v33 == (unsigned int)PsGetProcessSessionIdEx(v72),
                  LOBYTE(v33) = v95,
                  v73) )
            {
              v42 = (__int64 *)PsGetThreadWin32Thread(v37);
              if ( v42 )
                v38 = *v42;
            }
            *(_QWORD *)&v84 = *(_QWORD *)(v38 + 16);
            *(_QWORD *)(v38 + 16) = &v84;
            *((_QWORD *)&v84 + 1) = v83;
            v85 = (void (*)(void))DereferenceW32Thread;
            ObfReferenceObject(*(PVOID *)v83);
            _InterlockedIncrement((volatile signed __int32 *)v83 + 2);
            if ( (v33 & 2) == 0 )
            {
              PsGetCurrentThreadId();
              LOBYTE(v33) = v95;
            }
            if ( v11 && (*(_DWORD *)(*((_QWORD *)v83 + 52) + 820LL) & 0x1000000) != 0 )
            {
              v80 = v10;
              v44 = v96;
              v79 = v33;
              v43 = a4;
              xxxDoLocalTSFWork(a1, v96, a3, a4, v79, v80, v83, v81);
            }
            else
            {
              v43 = a4;
              v44 = v96;
            }
            if ( v9 )
              DoGlobalTSFWork(a1, v44, a3, v43, v78, v9, v83, v81);
            v45 = CategoryMaskFromEvent(a1);
            v46 = gpsi;
            if ( (v45 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v47 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                v48 = ThreadProcessId;
                while ( 1 )
                {
                  v46 = *(unsigned int *)(v47 + 40);
                  v49 = *(_QWORD *)(v47 + 24);
                  if ( (v46 & 1) == 0 && *(_DWORD *)(v47 + 32) <= a1 && a1 <= *(_DWORD *)(v47 + 36) )
                  {
                    v59 = *(HANDLE *)(v47 + 48);
                    if ( (!v59 || v59 == v48) && ((v46 & 4) == 0 || v89 != *(_QWORD *)(*(_QWORD *)(v47 + 16) + 416LL)) )
                    {
                      v60 = *(_DWORD *)(v47 + 56);
                      if ( (!v60 || v60 == (_DWORD)ThreadId)
                        && ((v46 & 2) == 0 || v83 != *(struct tagTHREADINFO **)(v47 + 16)) )
                      {
                        v46 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 448LL);
                        if ( v46 == *(_QWORD *)(v82 + 448)
                          || a1 == 32
                          || v46 == *((_QWORD *)v83 + 56) && a1 + 2147483646 <= 1 )
                        {
                          if ( (*(_BYTE *)(_HMPheFromObject(v47) + 25) & 1) != 0
                            || (Notify = CreateNotify((struct tagEVENTHOOK *)v47, a1, v44, a3, a4, v83, v81, 0)) == 0LL )
                          {
LABEL_61:
                            v31 = v91;
                            break;
                          }
                          v46 = v95 | *((_DWORD *)Notify + 14);
                          *((_DWORD *)Notify + 14) = v46;
                          if ( (v46 & 4) != 0 )
                          {
                            v46 = (unsigned int)v46 & 0xFFFFFFFD;
                            *((_DWORD *)Notify + 14) = v46;
                          }
                          if ( (v46 & 2) == 0 )
                            v49 = xxxProcessNotifyWinEvent((__int64)Notify);
                        }
                      }
                    }
                  }
                  v47 = v49;
                  if ( !v49 )
                    goto LABEL_61;
                }
              }
              v50 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v46)
                || (v74 = PsGetCurrentProcess(v52, v51, v53),
                    v75 = PsGetProcessSessionIdEx(v74),
                    v77 = PsGetCurrentThreadProcess(v76),
                    v75 == (unsigned int)PsGetProcessSessionIdEx(v77)) )
              {
                v54 = (__int64 *)PsGetThreadWin32Thread(v50);
                if ( v54 )
                  v86 = *v54;
              }
              *(_QWORD *)(v86 + 16) = v84;
              v57 = *((_QWORD *)&v84 + 1);
              if ( *((_QWORD *)&v84 + 1) )
                v85();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v84);
            }
            ThreadUnlock1(v57, v55, v56);
          }
          tagDomLock::UnLockExclusive(v31);
          v58 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v58);
          tagObjLock::UnLockExclusive(v92);
          tagDomLock::UnLockShared(DomainLockRef);
        }
      }
    }
  }
}
