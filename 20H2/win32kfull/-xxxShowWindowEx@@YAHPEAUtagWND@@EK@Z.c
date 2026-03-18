/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0012D20 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0091398 (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserShowWindow @ 0x1C00932E0 (NtUserShowWindow.c)
 *     xxxShowScrollBar @ 0x1C010D0A4 (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C012C2C4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 *     xxxbFullscreenSwitch @ 0x1C021E45C (xxxbFullscreenSwitch.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0017D1C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0018E60 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002B5A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSendSizeMessage @ 0x1C003C4E4 (xxxSendSizeMessage.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     _FChildVisible @ 0x1C00932A8 (_FChildVisible.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00942E4 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00CEE10 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D268 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
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
  unsigned int v13; // r8d
  unsigned int v14; // r14d
  int v15; // r10d
  int v16; // ecx
  unsigned __int64 v17; // rdx
  int v18; // esi
  int v19; // eax
  unsigned __int64 v20; // rdi
  int v22; // esi
  struct tagWND *v23; // rdx
  bool v24; // r8
  __int64 v25; // rax
  char v26; // cl
  int v27; // r8d
  char v28; // cl
  int v29; // edx
  __int64 v30; // r9
  int v31; // edx
  __int64 v32; // r8
  int v33; // edx
  char v34; // di
  char v35; // di
  int v36; // [rsp+50h] [rbp-58h] BYREF
  __int128 v37; // [rsp+58h] [rbp-50h] BYREF

  v3 = a2;
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  v6 = 3;
  v8 = 0;
  v36 = 0;
  v9 = v5[31] & 0x10 | v5[25] & 8;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
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
      SetOrClrWF(0LL, a1, 1799LL, 1LL);
      SetOrClrWF(1LL, a1, 1793LL, 1LL);
    }
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 120LL) == a1 )
      xxxMakeWindowForegroundWithState(0LL, 0LL);
  }
  ShellShowWindowAction = xxxGetShellShowWindowAction(a1, v3, &v36);
  v14 = ShellShowWindowAction;
  if ( ShellShowWindowAction != 0xFF )
  {
    v15 = 128;
    if ( v36
      && ShellWindowManagement::BehaviorEnabled(
           *((ShellWindowManagement **)a1 + 3),
           (const struct tagDESKTOP *)0x10,
           v13) )
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
        v22 = 148;
        if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
          v22 = v15;
        v18 = v16 | v22;
        goto LABEL_16;
      }
      if ( v14 != 1 )
      {
        if ( v14 <= 3 )
        {
LABEL_55:
          LOBYTE(v27) = a3;
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
            if ( (unsigned int)FChildVisible((__int64)a1) )
            {
              xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v18);
              if ( (v18 & 0x200000) != 0 )
              {
                LOBYTE(v23) = 1;
                NotifyShell::TrackedWindowPosChanged(a1, v23, v24);
              }
            }
            else
            {
              SetVisible(a1, (_BYTE)v14 != 0);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x10) != 0 )
            {
              SetOrClrWF(0LL, a1, 16LL, 1LL);
              v28 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
              if ( (v28 & 0x20) != 0 )
                v29 = 1;
              else
                v29 = 2 * (v28 & 1);
              xxxSendSizeMessage((__int64)a1, v29);
              v30 = *((_QWORD *)a1 + 13);
              v37 = *(_OWORD *)(*(_QWORD *)(v30 + 40) + 104LL);
              TransformRectBetweenCoordinateSpaces(&v37, &v37, a1, v30);
              if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
                v33 = *(unsigned __int16 *)(v32 + 104) | (v31 << 16);
              else
                v33 = (unsigned __int16)(*(_WORD *)(v32 + 104) - v37) | ((unsigned __int16)(v31 - WORD2(v37)) << 16);
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(
                (unsigned __int64)a1,
                3u,
                0LL,
                (struct _LARGE_STRING *)v33,
                0,
                0,
                0LL,
                1,
                0);
            }
            if ( !(_BYTE)v14 )
            {
              if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground && a1 == *(struct tagWND **)(gpqForeground + 120LL) )
                xxxActivateWindowWithOptions((__int64)a1, 2LL, 61LL, 1LL);
              else
                xxxMoveFocusAway(a1);
            }
            return v9;
          }
          goto LABEL_55;
        }
      }
LABEL_38:
      v25 = *((_QWORD *)a1 + 5);
      v26 = *(_BYTE *)(v25 + 233) & 3;
      if ( (*(_BYTE *)(v25 + 31) & 0x21) == 0 && !v26 )
      {
        if ( v9 )
          return v9;
        v18 = v6 | 0x40;
        if ( (_BYTE)v14 == 4 )
          v18 |= 0x14u;
        goto LABEL_16;
      }
      v27 = a3 | (v26 != 0 ? 4 : 0);
LABEL_56:
      xxxShowWindowViaMinMax(a1, v17, v27);
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
        v35 = a3 | 0xC0;
        break;
      case 0x12u:
        v34 = a3 | 0xC0;
LABEL_84:
        LOBYTE(v27) = v34;
        v17 = 9LL;
        goto LABEL_56;
      case 0x13u:
        v35 = a3 | 0xC0;
        break;
      case 0x14u:
        v34 = a3 | 0xC0;
        goto LABEL_84;
      default:
        UserSetLastError(1449LL);
        return v9;
    }
    LOBYTE(v27) = v35;
    v17 = 3LL;
    goto LABEL_56;
  }
  return v9;
}
