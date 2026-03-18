/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C003B6EC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     NtUserShowWindow @ 0x1C00AFBD0 (NtUserShowWindow.c)
 *     xxxShowScrollBar @ 0x1C010B104 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C0110D38 (xxxSetWindowPlacement.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0114140 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C012A234 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C021F2EC (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     xxxSendSizeMessage @ 0x1C00251C0 (xxxSendSizeMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0056EA4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C005A958 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C008A640 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00AE030 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00AE6F8 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     _FChildVisible @ 0x1C00AFCEC (_FChildVisible.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01087D4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023FFD0 (xxxMinimizeHungWindow.c)
 */

__int64 __fastcall xxxShowWindowEx(struct tagWND *a1, unsigned __int8 a2, int a3)
{
  int v3; // r14d
  _BYTE *v5; // rdx
  int v6; // esi
  int v8; // r8d
  unsigned int v9; // ebp
  __int64 v10; // r10
  char v11; // dl
  unsigned __int8 ShellShowWindowAction; // al
  __int64 v13; // r8
  unsigned int v14; // r14d
  int v15; // r10d
  int v16; // ecx
  unsigned __int64 v17; // rdx
  int v18; // esi
  int v19; // eax
  unsigned __int64 v20; // rdi
  struct tagWND *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // esi
  __int64 v26; // rax
  char v27; // cl
  int v28; // r8d
  char v29; // cl
  int v30; // edx
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // r8
  int v34; // edx
  char v35; // di
  char v36; // di
  int v37; // [rsp+50h] [rbp-58h] BYREF
  __int128 v38; // [rsp+58h] [rbp-50h] BYREF

  v3 = a2;
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 3;
  v8 = 0;
  v37 = 0;
  v9 = v5[31] & 0x10 | v5[25] & 8;
  v10 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(v10 + 808) & 1) != 0 && (v5[31] & 0xC0) != 0x40 && (v5[30] & 0xC0) == 0xC0 && !*((_QWORD *)a1 + 15) )
  {
    v8 = 1;
    if ( v3 == 1 || v3 == 5 )
      LOBYTE(v3) = 10;
  }
  if ( (_BYTE)v3 == 10 )
  {
    if ( (*(_DWORD *)(v10 + 808) & 1) != 0 )
    {
      LOBYTE(v3) = *(_BYTE *)(v10 + 812);
      v8 = 1;
      if ( (_BYTE)v3 != 10 )
        goto LABEL_62;
    }
    LOBYTE(v3) = 1;
  }
  if ( v8 )
  {
LABEL_62:
    *(_DWORD *)(v10 + 808) &= 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a1);
    v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  }
  v11 = v5[23] & 7;
  if ( v11 && *((_QWORD *)a1 + 3) == grpdeskRitInput && (((_BYTE)v3 - 1) & 0xF5) == 0 && (_BYTE)v3 != 11 )
  {
    LOBYTE(v3) = 2;
    if ( v11 == 4 )
    {
      SetOrClrWF(0, (__int64)a1, 0x707u, 1);
      SetOrClrWF(1, (__int64)a1, 0x701u, 1);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0);
  }
  ShellShowWindowAction = xxxGetShellShowWindowAction(a1, v3, &v37);
  v14 = ShellShowWindowAction;
  if ( ShellShowWindowAction != 0xFF )
  {
    v15 = 128;
    if ( v37
      && ShellWindowManagement::BehaviorEnabled(*((ShellWindowManagement **)a1 + 3), (const struct tagDESKTOP *)0x10) )
    {
      a3 |= v15;
      v6 = 2097155;
    }
    v16 = v6;
    v17 = v14;
    if ( v14 == 8 )
    {
      v18 = v6 | 0x50;
      goto LABEL_16;
    }
    if ( v14 <= 8 )
    {
      if ( !(_BYTE)v14 )
      {
        if ( !v9 )
          return v9;
        v25 = 148;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
          v25 = v15;
        v18 = v16 | v25;
        goto LABEL_16;
      }
      if ( v14 != 1 )
      {
        if ( v14 <= 3 )
        {
LABEL_55:
          LOBYTE(v28) = a3;
          goto LABEL_56;
        }
        if ( v14 != 4 )
        {
          if ( v14 == 5 )
          {
            if ( v9 )
              return v9;
            v18 = v6 | 0x40;
LABEL_16:
            if ( (_BYTE)v14 )
            {
              v19 = 1;
              v20 = 1LL;
            }
            else
            {
              v19 = 0;
              v20 = 0LL;
            }
            if ( v19 != v9 )
            {
              xxxSendMessage((unsigned __int64)a1, 0x18u, v20, 0LL);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
                xxxSendMessage((unsigned __int64)a1, 9u, v20, 0LL);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 9LL) & 8) == 0
                || (((_BYTE)v14 - 1) & 0xFB) != 0 )
              {
                goto LABEL_23;
              }
              xxxActivateWindow(a1);
            }
            v18 |= 0x14u;
LABEL_23:
            if ( (unsigned int)FChildVisible(a1, v17, v13) )
            {
              xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v18);
              if ( (v18 & 0x200000) != 0 )
              {
                LOBYTE(v21) = 1;
                NotifyShell::TrackedWindowPosChanged(a1, v21, v22);
              }
            }
            else
            {
              SetVisible(a1, (_BYTE)v14 != 0);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
            {
              SetOrClrWF(0, (__int64)a1, 0x10u, 1);
              v29 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
              if ( (v29 & 0x20) != 0 )
                v30 = 1;
              else
                v30 = 2 * (v29 & 1);
              xxxSendSizeMessage((__int64)a1, v30);
              v31 = *((_QWORD *)a1 + 13);
              v38 = *(_OWORD *)(*(_QWORD *)(v31 + 40) + 104LL);
              TransformRectBetweenCoordinateSpaces(&v38, &v38, a1, v31);
              if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
                v34 = *(unsigned __int16 *)(v33 + 104) | (v32 << 16);
              else
                v34 = (unsigned __int16)(*(_WORD *)(v33 + 104) - v38) | ((unsigned __int16)(v32 - WORD2(v38)) << 16);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(
                (unsigned __int64)a1,
                3u,
                0LL,
                (struct _LARGE_STRING *)v34,
                0,
                0,
                0LL,
                1,
                0);
            }
            if ( !(_BYTE)v14 )
            {
              if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 120LL) )
                xxxActivateWindowWithOptions((__int64)a1, 2LL, 61LL, 1);
              else
                xxxMoveFocusAway(a1, (__int64)v21, v22, v23);
            }
            return v9;
          }
          goto LABEL_55;
        }
      }
LABEL_38:
      v26 = *((_QWORD *)a1 + 5);
      v27 = *(_BYTE *)(v26 + 233) & 3;
      if ( (*(_BYTE *)(v26 + 31) & 0x21) == 0 && !v27 )
      {
        if ( v9 )
          return v9;
        v18 = v6 | 0x40;
        if ( (_BYTE)v14 == 4 )
          v18 |= 0x14u;
        goto LABEL_16;
      }
      v28 = a3 | (v27 != 0 ? 4 : 0);
LABEL_56:
      xxxShowWindowViaMinMax(a1, v17, v28);
      return v9;
    }
    switch ( v14 )
    {
      case 9u:
        goto LABEL_38;
      case 0xBu:
        xxxMinimizeHungWindow(a1);
        return v9;
      case 0x11u:
        v36 = a3 | 0xC0;
        break;
      case 0x12u:
        v35 = a3 | 0xC0;
LABEL_84:
        LOBYTE(v28) = v35;
        v17 = 9LL;
        goto LABEL_56;
      case 0x13u:
        v36 = a3 | 0xC0;
        break;
      case 0x14u:
        v35 = a3 | 0xC0;
        goto LABEL_84;
      default:
        UserSetLastError(1449LL, v14, v13);
        return v9;
    }
    LOBYTE(v28) = v36;
    v17 = 3LL;
    goto LABEL_56;
  }
  return v9;
}
