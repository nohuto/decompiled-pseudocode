/*
 * XREFs of _SetupClassAtoms@0 @ 0xE6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall SetupClassAtoms()
{
  unsigned int v0; // esi
  wchar_t **v1; // ebx
  __int16 v2; // ax
  int v3; // eax
  int v4; // esi
  int v5; // esi
  char v6; // si
  char v7; // si
  char v8; // si
  unsigned __int8 v9; // si
  int v10; // esi
  unsigned __int16 v11; // bx
  int v12; // eax
  BOOL v13; // ebx
  int v14; // ebx
  __int16 v15; // ax
  int v16; // ebx
  __int16 v17; // ax
  BOOL v18; // ebx
  int v19; // ebx
  BOOL v20; // ebx
  int v21; // ebx
  int v23; // [esp+Ch] [ebp-8h]
  bool v24; // [esp+Ch] [ebp-8h]
  bool v25; // [esp+Ch] [ebp-8h]
  bool v26; // [esp+Ch] [ebp-8h]
  bool v27; // [esp+Ch] [ebp-8h]
  int v28; // [esp+Ch] [ebp-8h]
  char v29; // [esp+10h] [ebp-4h]
  int v30; // [esp+10h] [ebp-4h]
  int v31; // [esp+10h] [ebp-4h]
  BOOL v32; // [esp+10h] [ebp-4h]
  int v33; // [esp+10h] [ebp-4h]
  BOOL v34; // [esp+10h] [ebp-4h]
  int v35; // [esp+10h] [ebp-4h]
  __int16 v36; // [esp+12h] [ebp-2h]

  v0 = 468;
  v29 = 1;
  v1 = off_24D260;
  do
  {
    v2 = UserAddAtomEx(*v1++, 1, 2);
    *(_WORD *)(v0 + _gpsi) = v2;
    v3 = -(*(_WORD *)(v0 + _gpsi) != 0);
    v0 += 2;
    v29 &= v3;
  }
  while ( v0 < 0x1F6 );
  *(_WORD *)(_gpsi + 504) = -32766;
  *(_WORD *)(_gpsi + 510) = -32764;
  *(_WORD *)(_gpsi + 512) = -32762;
  *(_WORD *)(_gpsi + 502) = -32767;
  *(_WORD *)(_gpsi + 508) = -32765;
  *(_WORD *)(_gpsi + 506) = 0x8000;
  *(_DWORD *)(_gpsi + 528) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1, 2);
  v23 = (unsigned __int8)v29 & (*(_DWORD *)(_gpsi + 528) != 0);
  *(_WORD *)(_gpsi + 978) = UserAddAtomEx(L"SysFrostedWindow", 1, 2);
  v4 = *(unsigned __int16 *)(_gpsi + 978);
  LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = UserAddAtomEx(L"SysCP", 1, 2);
  if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    v5 = v4 != 0 ? v23 : 0;
  else
    LOBYTE(v5) = 0;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1, 2);
  v24 = atomDDETrack != 0;
  atomQOS = UserAddAtomEx(L"SysQOS", 1, 2);
  if ( atomQOS )
    v6 = v24 & v5;
  else
    v6 = 0;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1, 2);
  v25 = atomDDEImp != 0;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1, 2);
  if ( atomWndObj )
    v7 = v25 & v6;
  else
    v7 = 0;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1, 2);
  v26 = atomImeLevel != 0;
  atomLayer = UserAddAtomEx(L"SysLayer", 1, 2);
  if ( atomLayer )
    v8 = v26 & v7;
  else
    v8 = 0;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1, 2);
  v27 = atomDispAffinity != 0;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1, 2);
  if ( atomDWMProp )
    v9 = v27 & v8;
  else
    v9 = 0;
  LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = UserAddAtomEx(L"SysSwapChain", 1, 2);
  v10 = (LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) != 0) & v9;
  v11 = UserAddAtomEx(L"SysDCompHwndTargets", 1, 2);
  CHwndTargetProp::s_atom = v11;
  LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = UserAddAtomEx(L"SysVisRgnTracker", 1, 2);
  if ( LOWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) )
  {
    v12 = v11 != 0 ? v10 : 0;
    LOBYTE(v10) = 0;
    v28 = v12;
  }
  else
  {
    LOBYTE(v10) = 0;
    v28 = 0;
  }
  CInputQueueProp::s_atom = UserAddAtomEx(_szCOMPOSITIONINPUTQUEUE_NAME, 1, 2);
  v13 = CInputQueueProp::s_atom != 0;
  v30 = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1, 2);
  _guiActivateShellWindow = v30;
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1, 2);
  v31 = guiOtherWindowCreated != 0 && v30 != 0 && v28 & v13;
  v14 = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1, 2);
  guiOtherWindowDestroyed = v14;
  v15 = UserAddAtomEx(L"Message", 1, 2);
  gatomMessage = v15;
  *(_WORD *)(_gpsi + 516) = v15;
  if ( v15 )
    v16 = v14 != 0 ? v31 : 0;
  else
    v16 = 0;
  v17 = UserAddAtomEx(L"SysShadow", 1, 2);
  gatomShadow = v17;
  *(_WORD *)(_gpsi + 514) = v17;
  v32 = v17 != 0;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1, 2);
  if ( gaOleMainThreadWndClass )
    v33 = v16 & v32;
  else
    v33 = 0;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1, 2);
  v18 = gaFlashWState != 0;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1, 2);
  if ( gatomTouchFlags )
    v19 = v33 & v18;
  else
    v19 = 0;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1, 2);
  v34 = gatomPtrTargetFlags != 0;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1);
  if ( gatomFeedbackSettings )
    v35 = v19 & v34;
  else
    v35 = 0;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1, 2);
  v20 = gatomShutdownBlockingReason != 0;
  WPP_MAIN_CB.DeviceQueue.Type = UserAddAtomEx(L"BrokeredForeground", 1, 2);
  if ( WPP_MAIN_CB.DeviceQueue.Type )
    v21 = v35 & v20;
  else
    v21 = 0;
  v36 = UserAddAtomEx(_szMIPFLAGS, 1, 2);
  _gatomMiPFlags = v36;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1, 2);
  if ( CoreWindowProp::s_atom )
    v10 = v36 != 0 ? v21 : 0;
  gatomMonitorInheritance = UserAddAtomEx(L"MonitorInheritance", 1, 2);
  _gatomLastPinned = gatomMonitorInheritance;
  return (unsigned __int8)v10 & (gatomMonitorInheritance != 0);
}
