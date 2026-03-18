/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C010032C
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C005F4B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     GetInheritedMonitor @ 0x1C006AB48 (GetInheritedMonitor.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxInsertMenuItem @ 0x1C00A2D8C (xxxInsertMenuItem.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0158D44 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@AEBV0@@Z @ 0x1C0159260 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0159284 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2090 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C0222500 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02229B0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0222BF0 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C022347C (xxxMNStartMenuState.c)
 *     xxxEndMenuLoop @ 0x1C02346E0 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0234958 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235D50 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235F20 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02366A8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0237114 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02377D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237A60 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02386F0 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0238AB4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C023A0CC (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023B54C (xxxMNSelectItem.c)
 *     xxxHiliteMenuItem @ 0x1C024A0E4 (xxxHiliteMenuItem.c)
 *     xxxMNDragOver @ 0x1C024AC44 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C024AEB4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024B1A0 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C024B45C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024F7A4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::Init(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v10 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 88) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1464);
  *v10 = result;
  *(_QWORD *)(v5 + 1464) = v10;
  return result;
}
