/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168
 * Callers:
 *     _xxxSwitchToThisWindow@8 @ 0x11FBE (_xxxSwitchToThisWindow@8.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     ?xxxStubSetForegroundWindow@@YGHPAUtagWND@@@Z @ 0x7D800 (-xxxStubSetForegroundWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _NtUserSetForegroundWindowForApplication@4 @ 0xC57D2 (_NtUserSetForegroundWindowForApplication@4.c)
 *     ?xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z @ 0x141923 (-xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?ForceForeground@CWindow@@QAE_NXZ @ 0x19F061 (-ForceForeground@CWindow@@QAE_NXZ.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _WPP_RECORDER_SF_s@24 @ 0x195D4 (_WPP_RECORDER_SF_s@24.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x197E0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _WPP_RECORDER_SF_qqq@32 @ 0x350A8 (_WPP_RECORDER_SF_qqq@32.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     _IsImmersiveBandOrShellManaged@4 @ 0xADBB0 (_IsImmersiveBandOrShellManaged@4.c)
 *     _DSW_GetTopLevelCreatorWindow@4 @ 0xAEF2E (_DSW_GetTopLevelCreatorWindow@4.c)
 *     _xxxFlashWindow@12 @ 0xCA4EE (_xxxFlashWindow@12.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(unsigned int *a1, int a2, __int16 a3, char a4)
{
  char v4; // bl
  unsigned int *v5; // esi
  int v6; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  const char *v9; // eax
  const char *v10; // eax
  int v11; // ecx
  int NonChildAncestor; // eax
  _DWORD *TopLevelCreatorWindow; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int *v16; // ecx
  _DWORD *v17; // ecx
  PKTHREAD v18; // eax
  int v19; // eax
  char v20; // al
  bool v21; // cl
  int v23; // [esp+0h] [ebp-40h]
  struct tagINPUT_MESSAGE_SOURCE *v24; // [esp+4h] [ebp-3Ch]
  bool v25; // [esp+Ch] [ebp-34h]
  bool v26; // [esp+Dh] [ebp-33h]
  bool v27; // [esp+Eh] [ebp-32h]
  char v28; // [esp+Fh] [ebp-31h]
  int BugCheckParameter2; // [esp+10h] [ebp-30h]
  int v30; // [esp+1Ch] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-24h]
  int CanSetForegroundWindow; // [esp+20h] [ebp-20h]
  unsigned int v34; // [esp+20h] [ebp-20h]
  int v35; // [esp+28h] [ebp-18h] BYREF
  int v36; // [esp+2Ch] [ebp-14h]
  int v37; // [esp+30h] [ebp-10h]
  _DWORD v38[3]; // [esp+34h] [ebp-Ch] BYREF

  v27 = 0;
  v25 = 0;
  v4 = 1;
  v5 = a1;
  v28 = 1;
  v30 = *(_DWORD *)(a1[2] + 236);
  v26 = v30 == _gpqForeground;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v6 = _GhostWindowFromHungWindow(a1);
  if ( v6 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v35 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v35;
    v36 = v6;
    HMLockObject(v6);
    v5 = (unsigned int *)v6;
  }
  if ( v30 == _gpqForeground )
  {
    v31 = *(_DWORD *)(_gptiCurrent + 236);
    v27 = _gpqForeground == v31;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(2, 39, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = "Synchronously";
        if ( _gpqForeground != v31 )
          v9 = "Async";
        WPP_RECORDER_SF_s(2, 40, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v9);
      }
    }
LABEL_40:
    v20 = v26;
    v21 = v27;
    goto LABEL_43;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v5, a2);
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = "Removed";
      if ( (a3 & 0x1000) != 0 )
        v10 = "Preserved";
      WPP_RECORDER_SF_s(2, 41, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v10);
    }
    if ( (a3 & 0x1000) == 0 )
      anonymous_namespace_::RemoveForegroundActivate();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 42, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    if ( xxxSetForegroundWindow2((int)v5, _gptiCurrent, a3 & 0x7F) )
    {
      v25 = 1;
    }
    else
    {
      v25 = 0;
      if ( *(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput )
      {
        v34 = v5[5];
        if ( *(char *)(v34 + 11) >= 0
          && !IAMThreadAccessGranted(_gptiCurrent)
          && *(_DWORD *)(v34 + 148) != 15
          && IsImmersiveBandOrShellManaged(v5) )
        {
          NonChildAncestor = GetNonChildAncestor(v11);
          TopLevelCreatorWindow = (_DWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 34, *TopLevelCreatorWindow);
        }
      }
    }
    goto LABEL_40;
  }
  v28 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v5 )
      v14 = v5[2];
    else
      LOBYTE(v14) = 0;
    WPP_RECORDER_SF_qqq(2, 43, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, _gptiCurrent, (char)v5, v14);
  }
  if ( (a4 & 1) != 0 )
  {
    v15 = GetNonChildAncestor(v5);
    BugCheckParameter2 = DSW_GetTopLevelCreatorWindow(v15);
    if ( IsTrayWindow(BugCheckParameter2) )
    {
      v16 = (unsigned int *)BugCheckParameter2;
    }
    else
    {
      v16 = v5;
      BugCheckParameter2 = (int)v5;
    }
    if ( *(_DWORD *)(v16[5] + 148) != 15 )
    {
      if ( IsImmersiveBandOrShellManaged(v16) )
      {
        PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 34, *v17);
      }
      else
      {
        v38[2] = 0;
        v18 = KeGetCurrentThread();
        v19 = W32GetThreadWin32Thread(v18);
        v38[0] = *(_DWORD *)(v19 + 228);
        *(_DWORD *)(v19 + 228) = v38;
        v38[1] = BugCheckParameter2;
        HMLockObject(BugCheckParameter2);
        UPDWORDPointer(8196);
        xxxFlashWindow(BugCheckParameter2, 0);
        ThreadUnlock1();
      }
    }
  }
  if ( CanSetForegroundWindow == 1 )
    goto LABEL_40;
  if ( *(_DWORD *)(_gptiCurrent + 236) == *(_DWORD *)(v5[2] + 236) )
    goto LABEL_48;
  v21 = 0;
  v20 = 1;
LABEL_43:
  if ( !v20 )
    goto LABEL_51;
  if ( !v21 )
  {
    v25 = v5 == *(unsigned int **)(*(_DWORD *)(v5[2] + 236) + 64)
       || PostEventMessageEx((struct tagTHREADINFO *)6, 0, 0, 0, *v5, 0, v23, v24) != 0;
    goto LABEL_51;
  }
LABEL_48:
  if ( (*(_BYTE *)(v5[5] + 23) & 0xC0) == 0x40
    || (v25 = 1, !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(128)) )
  {
    v25 = 0;
  }
LABEL_51:
  if ( v6 )
    ThreadUnlock1();
  if ( !v28 || !v25 )
    return 0;
  return v4;
}
