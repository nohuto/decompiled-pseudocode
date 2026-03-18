/*
 * XREFs of GetDpiForSystem @ 0x1C00A4C48
 * Callers:
 *     CalcSBStuff @ 0x1C0027538 (CalcSBStuff.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxCreateClassSmIcon @ 0x1C0030AF4 (xxxCreateClassSmIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C005A7AC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C005FF14 (GetWindowBorders.c)
 *     xxxDrawMenuItem @ 0x1C0060D14 (xxxDrawMenuItem.c)
 *     GetWindowNCMetrics @ 0x1C00633F4 (GetWindowNCMetrics.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0067AAC (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067B4C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     CalcSBStuff2 @ 0x1C00A2530 (CalcSBStuff2.c)
 *     NtUserGetOemBitmapSize @ 0x1C0101BB0 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     SetTiledRect @ 0x1C0102C40 (SetTiledRect.c)
 *     InternalGetRealClientRect @ 0x1C0102D7C (InternalGetRealClientRect.c)
 *     xxxCreateWindowSmIcon @ 0x1C011B988 (xxxCreateWindowSmIcon.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014A314 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D7824 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01E456C (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F35D0 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020F734 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023F7AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244F18 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0246280 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02482E8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024D6B4 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDpiForSystem(__int64 a1)
{
  __int64 v1; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v17),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( !*(_QWORD *)(v4 + 448) )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
  v9 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v1)
    || (v19 = PsGetCurrentProcess(v11, v10, v12),
        v20 = PsGetProcessSessionIdEx(v19),
        v22 = PsGetCurrentThreadProcess(v21),
        v20 == (unsigned int)PsGetProcessSessionIdEx(v22)) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(v9);
    if ( v13 )
      v3 = *v13;
  }
  v1 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v3 + 448) + 8LL) + 64LL);
  if ( (v1 & 1) != 0 )
    return 96LL;
  else
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v1) + 284);
}
