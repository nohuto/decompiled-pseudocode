/*
 * XREFs of _xxxWindowEvent@20 @ 0x426C2
 * Callers:
 *     _zzzInputFocusLostWindowEvent@8 @ 0x1768E (_zzzInputFocusLostWindowEvent@8.c)
 *     _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE (_zzzInputFocusReceivedWindowEvent@4.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YGHPAU_CONSOLE_CARET_INFO@@@Z @ 0x1B6CC (-xxxSetConsoleCaretInfo@@YGHPAU_CONSOLE_CARET_INFO@@@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 *     _zzzInternalHideCaret@0 @ 0x7DB46 (_zzzInternalHideCaret@0.c)
 *     _zzzSetCaretPos@8 @ 0x820C0 (_zzzSetCaretPos@8.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 *     ?xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z @ 0x8E114 (-xxxEnableWndSBArrows@@YGHPAUtagWND@@II@Z.c)
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _NtUserNotifyWinEvent@16 @ 0xA478E (_NtUserNotifyWinEvent@16.c)
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _zzzInternalShowCaret@0 @ 0xBA734 (_zzzInternalShowCaret@0.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     ?xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z @ 0x15C854 (-xxxMoveSwitchWndHilite@@YGPAUHWND__@@PAUtagWND@@PAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04 (-xxxShowSwitchWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxCancelCoolSwitch@0 @ 0x15D2FA (_xxxCancelCoolSwitch@0.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E (-xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 *     _xxxSendMenuSelect@20 @ 0x1AD617 (_xxxSendMenuSelect@20.c)
 * Callees:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _CategoryMaskFromEvent@4 @ 0x42BB2 (_CategoryMaskFromEvent@4.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _xxxFlushDeferredWindowEvents@0 @ 0x458CC (_xxxFlushDeferredWindowEvents@0.c)
 *     ?CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z @ 0x9D858 (-CreateNotify@@YGPAUtagNOTIFY@@PAUtagEVENTHOOK@@KPAUtagWND@@JJPAUtagTHREADINFO@@KE@Z.c)
 *     ?DoGlobalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0xADA8C (-DoGlobalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z @ 0x15572D (-xxxDoLocalTSFWork@@YGXKPAUtagWND@@JJKKPAUtagTHREADINFO@@K@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

void __stdcall xxxWindowEvent(unsigned int a1, struct tagEVENTHOOK *a2, unsigned int a3, struct tagWND *a4, int a5)
{
  unsigned int v5; // edi
  int v6; // esi
  int v7; // edx
  PKTHREAD CurrentThread; // esi
  _DWORD *ThreadWin32Thread; // eax
  PKTHREAD v10; // esi
  PETHREAD **v11; // eax
  PETHREAD *v12; // eax
  int DLT; // eax
  tagDomLock *DomainLockRef; // esi
  char v15; // cl
  PETHREAD *v16; // ecx
  unsigned int v17; // ebx
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // edx
  int *v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // edx
  _DWORD *v25; // ebx
  int v26; // ecx
  int v27; // edx
  HANDLE v28; // eax
  HANDLE v29; // eax
  struct _KTHREAD *v30; // eax
  struct tagNOTIFY *Notify; // eax
  int v32; // ecx
  PKTHREAD v33; // eax
  int v34; // eax
  int v35; // eax
  struct tagTHREADINFO *v36; // [esp+0h] [ebp-60h]
  unsigned int v37; // [esp+4h] [ebp-5Ch]
  unsigned int v38; // [esp+Ch] [ebp-54h]
  PETHREAD *v39; // [esp+10h] [ebp-50h]
  int v40; // [esp+14h] [ebp-4Ch]
  int v41; // [esp+18h] [ebp-48h]
  tagDomLock *v42; // [esp+1Ch] [ebp-44h]
  int v43; // [esp+24h] [ebp-3Ch]
  int v44; // [esp+28h] [ebp-38h]
  PKTHREAD v45; // [esp+2Ch] [ebp-34h]
  int v46; // [esp+30h] [ebp-30h]
  int v47; // [esp+30h] [ebp-30h]
  HANDLE ThreadProcessId; // [esp+34h] [ebp-2Ch]
  int v49; // [esp+38h] [ebp-28h]
  HANDLE ThreadId; // [esp+3Ch] [ebp-24h]
  int v51; // [esp+48h] [ebp-18h] BYREF
  unsigned int v52; // [esp+4Ch] [ebp-14h]
  int (__stdcall *v53)(int); // [esp+50h] [ebp-10h]
  PETHREAD v54; // [esp+54h] [ebp-Ch] BYREF
  struct tagEVENTHOOK *v55; // [esp+58h] [ebp-8h]
  int v56; // [esp+5Ch] [ebp-4h]

  v54 = 0;
  v55 = 0;
  v56 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v5 = a1;
  if ( a1 == 2147483408 )
    v44 = 1;
  else
    v44 = a1 - 2147483409 > 1 ? 0 : 2;
  if ( a1 > 0x80000003 )
  {
    if ( a1 <= 0x80000005 )
    {
      v40 = 4096;
      goto LABEL_14;
    }
  }
  else
  {
    if ( a1 >= 0x80000002 )
    {
      v40 = 512;
      goto LABEL_14;
    }
    if ( a1 >= 0x7FFFFF00 )
    {
      if ( a1 <= 0x7FFFFF01 )
      {
        v40 = 1024;
        goto LABEL_14;
      }
      if ( a1 + 0x80000000 <= 1 )
      {
        v40 = 256;
LABEL_14:
        v6 = 1;
        v43 = 1;
        goto LABEL_16;
      }
    }
  }
  v40 = 0;
  v6 = 0;
  v43 = 0;
LABEL_16:
  v46 = CategoryMaskFromEvent(a1);
  if ( (v46 & *(_DWORD *)(_gpsi + 1492)) != 0 || v7 || v6 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (_DWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v39 = 0;
          v10 = KeGetCurrentThread();
          if ( IsThreadCrossSessionAttached() || (v11 = (PETHREAD **)PsGetThreadWin32Thread(v10)) == 0 )
          {
            v12 = 0;
          }
          else
          {
            v12 = *v11;
            v39 = v12;
          }
          CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v12 + 54);
          DLT = DLT_WINEVENT::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          v42 = DomainLockRef;
          if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          tagDomLock::LockExclusive(DomainLockRef);
          v15 = a5;
          if ( (a5 & 0x11) == 0x11 || !a2 || *(char *)(*((_DWORD *)a2 + 5) + 11) >= 0 )
          {
            if ( ((unsigned int)v39[66] & 0x10000001) != 0 )
            {
              v15 = a5 | 2;
              a5 |= 2u;
            }
            if ( (v15 & 1) != 0 && a2 )
            {
              v16 = (PETHREAD *)*((_DWORD *)a2 + 2);
              v38 = (unsigned int)v16;
              a2 = (a5 & 0x10) == 0 ? a2 : 0;
            }
            else
            {
              v16 = v39;
              v38 = (unsigned int)v39;
            }
            ThreadId = PsGetThreadId(*v16);
            v49 = *(_DWORD *)(v38 + 232);
            ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v38);
            if ( (a5 & 0x20) != 0 )
            {
              v17 = _InterlockedIncrement(&gcWinEvents);
            }
            else
            {
              v18 = MEMORY[0xFFDF0004];
              if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
              {
                v19 = MEMORY[0xFFDF0324];
                v20 = MEMORY[0xFFDF0320];
                if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
                {
                  do
                  {
                    _mm_pause();
                    v19 = MEMORY[0xFFDF0324];
                    v20 = MEMORY[0xFFDF0320];
                  }
                  while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                  v5 = a1;
                  v18 = MEMORY[0xFFDF0004];
                }
                v17 = v18 * (v19 << 8) + (((unsigned int)v18 * (unsigned __int64)v20) >> 24);
              }
              else
              {
                v17 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
              }
              DomainLockRef = v42;
            }
            v41 = v17;
            v54 = v39[57];
            v39[57] = (PETHREAD)&v54;
            v55 = a2;
            if ( a2 )
              HMLockObject(a2);
            v45 = KeGetCurrentThread();
            if ( IsThreadCrossSessionAttached() || (v21 = (int *)PsGetThreadWin32Thread(v45)) == 0 )
              v22 = 0;
            else
              v22 = *v21;
            v51 = *(_DWORD *)(v22 + 8);
            *(_DWORD *)(v22 + 8) = &v51;
            v52 = v38;
            v53 = DereferenceW32Thread;
            ObfReferenceObject(*(PVOID *)v38);
            v23 = v38;
            _InterlockedIncrement((volatile signed __int32 *)(v38 + 4));
            v24 = a5;
            if ( (a5 & 2) == 0 )
            {
              xxxFlushDeferredWindowEvents();
              v23 = v38;
              v24 = a5;
            }
            if ( v43 && (*(_DWORD *)(*(_DWORD *)(v23 + 232) + 464) & 0x1000000) != 0 )
              xxxDoLocalTSFWork(a3, a4, v24, v40, v23, v17, v36, v37);
            if ( v44 )
              DoGlobalTSFWork(a3, a4, v23, v44, v38, v17, v36, v37);
            if ( (v46 & *(_DWORD *)(_gpsi + 1492)) != 0 )
            {
              v25 = (_DWORD *)_gpWinEventHooks;
              if ( _gpWinEventHooks )
              {
                while ( 1 )
                {
                  v26 = v25[6];
                  v27 = v25[3];
                  v47 = v27;
                  if ( (v26 & 1) == 0 && v25[4] <= v5 && v5 <= v25[5] )
                  {
                    v28 = (HANDLE)v25[7];
                    if ( !v28 || v28 == ThreadProcessId )
                    {
                      if ( (v26 & 4) == 0 || (v5 = a1, v49 != *(_DWORD *)(v25[2] + 232)) )
                      {
                        v29 = (HANDLE)v25[8];
                        if ( (!v29 || v29 == ThreadId) && ((v26 & 2) == 0 || v38 != v25[2]) )
                        {
                          v30 = *(struct _KTHREAD **)(v25[2] + 248);
                          v5 = a1;
                          if ( v30 == v39[62]
                            || a1 == 32
                            || v30 == *(struct _KTHREAD **)(v38 + 248) && (a1 == -2147483646 || a1 == -2147483645) )
                          {
                            if ( (*(_BYTE *)(_HMPheFromObject(v25) + 13) & 1) != 0
                              || (Notify = CreateNotify(a2, a3, a4, v38, v41, 0, (unsigned int)v36, v37)) == 0 )
                            {
LABEL_86:
                              DomainLockRef = v42;
                              break;
                            }
                            v32 = a5 | *((_DWORD *)Notify + 10);
                            *((_DWORD *)Notify + 10) = v32;
                            if ( (v32 & 4) != 0 )
                            {
                              v32 &= ~2u;
                              *((_DWORD *)Notify + 10) = v32;
                            }
                            if ( (v32 & 2) != 0 )
                              v27 = v47;
                            else
                              v27 = xxxProcessNotifyWinEvent(Notify);
                          }
                        }
                      }
                    }
                  }
                  v25 = (_DWORD *)v27;
                  if ( !v27 )
                    goto LABEL_86;
                }
              }
              v33 = KeGetCurrentThread();
              v34 = W32GetThreadWin32Thread(v33);
              *(_DWORD *)(v34 + 8) = v51;
              if ( v52 )
                v53(v52);
            }
            else
            {
              PopAndFreeW32ThreadLock((int)&v51);
            }
            ThreadUnlock1();
          }
          tagDomLock::UnLockExclusive(DomainLockRef);
          v35 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v35);
          tagObjLock::UnLockExclusive();
          tagDomLock::UnLockShared();
        }
      }
    }
  }
}
