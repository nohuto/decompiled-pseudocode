/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0007E10 (xxxSwitchToThisWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C011C670 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01203F0 (NtUserSetForegroundWindowForApplication.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C0241268 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C002A128 (WPP_RECORDER_SF_s.c)
 *     _GhostWindowFromHungWindow @ 0x1C002C5D0 (_GhostWindowFromHungWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002C684 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B440C (WPP_RECORDER_SF_qqq.c)
 *     xxxFlashWindow @ 0x1C0113948 (xxxFlashWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C0121EE4 (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0127508 (DSW_GetTopLevelCreatorWindow.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bp
  char v5; // di
  unsigned int v6; // r15d
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  bool v9; // r12
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r13
  int v13; // edx
  const char *v14; // rax
  bool v15; // al
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v19; // edx
  int v20; // ecx
  int v21; // r15d
  const char *v22; // rax
  __int64 v23; // r8
  __int64 NonChildAncestor; // rax
  _QWORD *TopLevelCreatorWindow; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rax
  __int64 ThreadWin32Thread; // rax
  char v31; // [rsp+40h] [rbp-88h]
  int v32; // [rsp+44h] [rbp-84h]
  int CanSetForegroundWindow; // [rsp+48h] [rbp-80h]
  __int64 v34; // [rsp+50h] [rbp-78h]
  __int128 v35; // [rsp+58h] [rbp-70h] BYREF
  __int64 v36; // [rsp+68h] [rbp-60h]
  _QWORD v37[11]; // [rsp+70h] [rbp-58h] BYREF
  bool v38; // [rsp+D0h] [rbp+8h]
  char v39; // [rsp+E0h] [rbp+18h]
  char v40; // [rsp+E8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v38 = 0;
  v4 = 0;
  v5 = 1;
  v6 = a2;
  v31 = 1;
  v7 = a1;
  v8 = *(_QWORD *)(a1[2] + 424LL);
  v35 = 0LL;
  v9 = v8 == gpqForeground;
  v32 = a3 & 0x1000;
  v36 = 0LL;
  v34 = GhostWindowFromHungWindow(a1, a2, a3, a4);
  if ( v34 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7 = (_QWORD *)v34;
    *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v35;
    *((_QWORD *)&v35 + 1) = v34;
    HMLockObject(v34);
  }
  if ( v8 == gpqForeground )
  {
    v12 = *(_QWORD *)(gptiCurrent + 424LL);
    v38 = gpqForeground == v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 2, 39, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = "Synchronously";
        if ( gpqForeground != v12 )
          v14 = "Async";
        WPP_RECORDER_SF_s(
          (unsigned int)"Async",
          v13,
          2,
          40,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          (__int64)v14);
      }
    }
LABEL_9:
    v15 = v38;
    goto LABEL_10;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, v6);
  v21 = CanSetForegroundWindow;
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = "Removed";
      if ( v32 )
        v22 = "Preserved";
      WPP_RECORDER_SF_s(
        (unsigned int)"Preserved",
        v19,
        2,
        41,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
        (__int64)v22);
    }
    if ( !v32 )
      anonymous_namespace_::RemoveForegroundActivate();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(v20, v19, 2, 42, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    if ( (unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, v39 & 0x7F) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
        && *(char *)(v7[5] + 19LL) >= 0
        && !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
        && *(_DWORD *)(v23 + 236) != 15
        && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
      {
        NonChildAncestor = GetNonChildAncestor(v7);
        TopLevelCreatorWindow = (_QWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 34LL, *TopLevelCreatorWindow);
      }
    }
    goto LABEL_9;
  }
  v31 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v7 )
      v26 = v7[2];
    else
      LOBYTE(v26) = 0;
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qqq(
      v20,
      v19,
      2,
      43,
      (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      gptiCurrent,
      (char)v7,
      v26);
    v21 = CanSetForegroundWindow;
  }
  if ( (v40 & 1) != 0 )
  {
    v27 = GetNonChildAncestor(v7);
    v28 = (_QWORD *)DSW_GetTopLevelCreatorWindow(v27);
    if ( !(unsigned int)IsTrayWindow(v28) )
      v28 = v7;
    if ( *(_DWORD *)(v28[5] + 236LL) != 15 )
    {
      if ( (unsigned int)IsImmersiveBandOrShellManaged(v28) )
      {
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 34LL, *v28);
      }
      else
      {
        v37[2] = 0LL;
        v29 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v37[0] = *(_QWORD *)(v29 + 408);
        *(_QWORD *)(v29 + 408) = v37;
        v37[1] = v28;
        HMLockObject(v28);
        UPDWORDPointer(8196LL);
        xxxFlashWindow((int)v28);
        ThreadUnlock1();
      }
    }
  }
  if ( v21 == 1 )
  {
    v15 = 0;
  }
  else
  {
    v9 = 1;
    if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v7[2] + 424LL) )
    {
LABEL_32:
      if ( (*(_BYTE *)(v7[5] + 31LL) & 0xC0) != 0x40
        && (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7) )
      {
        goto LABEL_13;
      }
      v4 = 0;
      goto LABEL_14;
    }
    v15 = 0;
  }
LABEL_10:
  if ( !v9 )
    goto LABEL_14;
  if ( v15 )
    goto LABEL_32;
  v16 = v7[2];
  v17 = *(_QWORD *)(v16 + 424);
  if ( v7 == *(_QWORD **)(v17 + 120) )
  {
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v4 = (unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v16, (struct tagQ *)v17, 6u, 0LL, 0, 0LL, *v7, 0LL) != 0;
LABEL_14:
  if ( v34 )
    ThreadUnlock1();
  if ( !v31 || !v4 )
    return 0;
  return v5;
}
