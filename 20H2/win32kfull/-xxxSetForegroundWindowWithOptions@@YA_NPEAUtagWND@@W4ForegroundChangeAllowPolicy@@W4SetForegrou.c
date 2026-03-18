/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0007E00 (xxxSwitchToThisWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C011D6E0 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01216D0 (NtUserSetForegroundWindowForApplication.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023FFC8 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     xxxFlashWindow @ 0x1C0019218 (xxxFlashWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002BACC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C002BDA8 (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002CB24 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _GhostWindowFromHungWindow @ 0x1C0038DE0 (_GhostWindowFromHungWindow.c)
 *     WPP_RECORDER_SF_s @ 0x1C003AD34 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D899C (WPP_RECORDER_SF_qqq.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01293A8 (DSW_GetTopLevelCreatorWindow.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bp
  char v5; // di
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rsi
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  const char *v14; // rax
  bool v15; // al
  int v17; // r14d
  int v18; // r9d
  int v19; // r15d
  const char *v20; // rax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 ThreadWin32Thread; // rax
  char v32; // [rsp+40h] [rbp-88h]
  int v33; // [rsp+44h] [rbp-84h]
  int CanSetForegroundWindow; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  __int128 v36; // [rsp+58h] [rbp-70h] BYREF
  __int64 v37; // [rsp+68h] [rbp-60h]
  _QWORD v38[11]; // [rsp+70h] [rbp-58h] BYREF
  bool v39; // [rsp+D0h] [rbp+8h]
  char v40; // [rsp+E0h] [rbp+18h]
  char v41; // [rsp+E8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v39 = 0;
  v4 = 0;
  v5 = 1;
  v6 = a2;
  v32 = 1;
  v7 = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
  v36 = 0LL;
  v9 = v8 == gpqForeground;
  v33 = a3 & 0x1000;
  v37 = 0LL;
  v35 = GhostWindowFromHungWindow(a1, a2, a3, a4);
  if ( v35 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7 = v35;
    *(_QWORD *)&v36 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v36;
    *((_QWORD *)&v36 + 1) = v35;
    HMLockObject(v35);
  }
  if ( v8 == gpqForeground )
  {
    v13 = *(_QWORD *)(gptiCurrent + 432LL);
    v39 = gpqForeground == v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 2, 39, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = "Synchronously";
        if ( gpqForeground != v13 )
          v14 = "Async";
        WPP_RECORDER_SF_s(
          (unsigned int)"Async",
          v10,
          2,
          40,
          (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
          (__int64)v14);
      }
    }
LABEL_9:
    v15 = v39;
    goto LABEL_10;
  }
  v17 = 2;
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, (_WORD *)v6, v12);
  v19 = CanSetForegroundWindow;
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = "Removed";
      if ( v33 )
        v20 = "Preserved";
      WPP_RECORDER_SF_s(
        (unsigned int)"Preserved",
        v10,
        2,
        41,
        (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
        (__int64)v20);
    }
    if ( !v33 )
      anonymous_namespace_::RemoveForegroundActivate(v11, v10, v12, v18);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 2, 42, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    if ( (unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, v40 & 0x7F) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      v10 = grpdeskRitInput;
      if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
      {
        v12 = *(_QWORD *)(v7 + 40);
        if ( *(char *)(v12 + 19) >= 0
          && !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
          && *(_DWORD *)(v12 + 236) != 15
          && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
        {
          NonChildAncestor = GetNonChildAncestor(v7);
          TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x22u, *TopLevelCreatorWindow);
        }
      }
    }
    goto LABEL_9;
  }
  v32 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v7 )
      v23 = *(_QWORD *)(v7 + 16);
    else
      LOBYTE(v23) = 0;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqq(
      v11,
      v10,
      2,
      43,
      (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      gptiCurrent,
      v7,
      v23);
    v19 = CanSetForegroundWindow;
  }
  if ( (v41 & 1) != 0 )
  {
    v24 = GetNonChildAncestor(v7);
    v25 = (__int64 *)DSW_GetTopLevelCreatorWindow(v24);
    if ( !(unsigned int)IsTrayWindow(v25) )
    {
      v25 = (__int64 *)v7;
      v17 = 3;
    }
    if ( *(_DWORD *)(v25[5] + 236) != 15 )
    {
      if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)v25) )
      {
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x22u, *v25);
      }
      else
      {
        v38[2] = 0LL;
        v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v38[0] = *(_QWORD *)(v26 + 416);
        *(_QWORD *)(v26 + 416) = v38;
        v38[1] = v25;
        HMLockObject(v25);
        v27 = (_DWORD *)UPDWORDPointer(8196LL);
        xxxFlashWindow((__int64)v25, v17 | ((unsigned __int16)*v27 << 16) | 0xC, 0);
        ThreadUnlock1(v29, v28, v30);
      }
    }
  }
  if ( v19 == 1 )
  {
    v15 = 0;
  }
  else
  {
    v9 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL);
    if ( *(_QWORD *)(gptiCurrent + 432LL) == v11 )
    {
LABEL_32:
      LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0;
      if ( (_BYTE)v11 != 64 && (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7) )
        goto LABEL_13;
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
  v11 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)(v11 + 432);
  if ( v7 == *(_QWORD *)(v10 + 120) )
  {
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v4 = (unsigned int)PostEventMessageEx(
                       (struct tagTHREADINFO *)v11,
                       (struct tagQ *)v10,
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_14:
  if ( v35 )
    ThreadUnlock1(v11, v10, v12);
  if ( !v32 || !v4 )
    return 0;
  return v5;
}
