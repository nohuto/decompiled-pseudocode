/*
 * XREFs of GetDpiForSystem @ 0x1C005DE40
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C0033394 (GetWindowNCMetrics.c)
 *     xxxDrawMenuItem @ 0x1C00338A8 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     CalcSBStuff2 @ 0x1C005DCD8 (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C005DF24 (CalcSBStuff.c)
 *     SetTiledRect @ 0x1C006143C (SetTiledRect.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C0079A1C (GetWindowBorders.c)
 *     xxxCreateWindowSmIcon @ 0x1C007A488 (xxxCreateWindowSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C007B2C8 (xxxUpdateSystemIconsFromRegistry.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00956C4 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserGetOemBitmapSize @ 0x1C00FE320 (NtUserGetOemBitmapSize.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00FE520 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     xxxCreateClassSmIcon @ 0x1C010449C (xxxCreateClassSmIcon.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014CB44 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D6B64 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     ExpandedMonitorSpace @ 0x1C01E38AC (ExpandedMonitorSpace.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2964 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E8B4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0243C78 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0244FE0 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0246D38 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B418 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C024C0AC (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E320 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetDpiForSystem(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) != 0 )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v2, v1, v3) + 284);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( !*(_QWORD *)(v6 + 456) )
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v2, v1, v3) + 284);
  v11 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (v21 = PsGetCurrentProcess(v13, v12, v14),
        v22 = PsGetProcessSessionIdEx(v21),
        v24 = PsGetCurrentThreadProcess(v23),
        v22 == (unsigned int)PsGetProcessSessionIdEx(v24)) )
  {
    v15 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v15 )
      v5 = *v15;
  }
  v2 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)(v5 + 456) + 8LL) + 64LL);
  if ( (v2 & 1) != 0 )
    return 96LL;
  else
    return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v2, v1, v3) + 284);
}
