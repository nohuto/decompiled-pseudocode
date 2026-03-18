/*
 * XREFs of ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E
 * Callers:
 *     ?xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z @ 0xF5096 (-xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _xxxSendTransformableMessage@20 @ 0x2D496 (_xxxSendTransformableMessage@20.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?xxxMoveFocusAway@@YGXPBUtagWND@@@Z @ 0x72D9A (-xxxMoveFocusAway@@YGXPBUtagWND@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 *     __FChildVisible@4 @ 0x9DDDE (__FChildVisible@4.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YGXQAUtagWND@@@Z @ 0xB1F0C (-TraceLoggingShowWindowDPIAwarenessEvent@@YGXQAUtagWND@@@Z.c)
 *     _xxxSendSizeMessage@8 @ 0xB2C46 (_xxxSendSizeMessage@8.c)
 *     ?xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z @ 0xB3A8C (-xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 */

int __userpurge xxxShowWindowEx@<eax>(
        char a1@<dl>,
        struct tagQ *a2@<ecx>,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  char v6; // cl
  int v7; // edi
  int v8; // esi
  int v9; // eax
  bool v10; // zf
  _BYTE *v11; // ecx
  char v12; // dl
  unsigned int v13; // edx
  int v14; // edx
  bool v15; // cl
  unsigned __int8 v16; // al
  int v17; // esi
  int v18; // esi
  int v19; // edx
  unsigned int v20; // ecx
  char v21; // al
  unsigned int v22; // edx
  int *v23; // esi
  int v24; // edi
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // edx
  int v31; // [esp-8h] [ebp-50h]
  struct tagWND *v32; // [esp-4h] [ebp-4Ch]
  int v33; // [esp-4h] [ebp-4Ch]
  unsigned __int8 v34; // [esp+0h] [ebp-48h]
  NotifyShell *v35; // [esp+0h] [ebp-48h]
  int *v36; // [esp+4h] [ebp-44h]
  struct tagWND *v37; // [esp+4h] [ebp-44h]
  bool v38; // [esp+8h] [ebp-40h]
  char v39; // [esp+13h] [ebp-35h]
  unsigned __int8 ShellShowWindowAction; // [esp+13h] [ebp-35h]
  unsigned int HighLimit; // [esp+14h] [ebp-34h]
  unsigned int HighLimita; // [esp+14h] [ebp-34h]
  _BYTE *v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+20h] [ebp-28h]
  int v45; // [esp+24h] [ebp-24h]
  int v46; // [esp+28h] [ebp-20h] BYREF
  int v47; // [esp+2Ch] [ebp-1Ch]
  int v48; // [esp+30h] [ebp-18h]
  int v49; // [esp+34h] [ebp-14h] BYREF
  int v50; // [esp+38h] [ebp-10h]
  int v51; // [esp+3Ch] [ebp-Ch]
  int v52; // [esp+40h] [ebp-8h]

  v45 = 0;
  v46 = 0;
  v43 = (_BYTE *)*((_DWORD *)a2 + 5);
  v39 = a1;
  v6 = v43[23];
  v7 = v6 & 0x10 | v43[17] & 8;
  v8 = 3;
  v48 = v7;
  v47 = _gptiCurrent;
  v44 = *(_DWORD *)(_gptiCurrent + 232);
  HighLimit = *(_DWORD *)(v44 + 452);
  v9 = HighLimit & 1;
  if ( (HighLimit & 1) != 0 )
  {
    v10 = (v6 & 0xC0) == 64;
    v11 = v43;
    if ( !v10 )
    {
      if ( (v43[22] & 0xC0) == 0xC0 && !*((_DWORD *)a2 + 16) )
      {
        v45 = 1;
        if ( a1 == 1 || a1 == 5 )
        {
          a1 = 10;
          v39 = 10;
        }
      }
      v9 = HighLimit & 1;
    }
  }
  else
  {
    v11 = v43;
  }
  if ( a1 == 10 )
  {
    if ( v9 )
    {
      v45 = 1;
      v39 = *(_BYTE *)(v44 + 456);
      if ( v39 != 10 )
        goto LABEL_14;
    }
    v39 = 1;
  }
  if ( v45 )
  {
LABEL_14:
    *(_DWORD *)(v44 + 452) = HighLimit & 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent(a2);
    v11 = (_BYTE *)*((_DWORD *)a2 + 5);
  }
  v12 = v39;
  if ( (v11[15] & 7) != 0 && *((_DWORD *)a2 + 3) == _grpdeskRitInput && (v39 == 1 || v39 == 9 || v39 == 3) )
  {
    if ( (v11[15] & 7) == 4 )
    {
      SetOrClrWF(0, (int)a2, 0x707u, 1);
      SetOrClrWF(1, (int)a2, 0x701u, 1);
    }
    if ( _gpqForeground && *(struct tagQ **)(_gpqForeground + 64) == a2 )
      xxxMakeWindowForegroundWithState(0, 0);
    v12 = 2;
  }
  ShellShowWindowAction = xxxGetShellShowWindowAction(v12, (int)a2, (struct tagWND *)&v46, v34, v36);
  if ( ShellShowWindowAction != 0xFF )
  {
    if ( v46 && ShellWindowManagement::BehaviorEnabled(*((_DWORD *)a2 + 3), 0x10u) )
    {
      v8 = (int)&loc_200003;
      v13 = a3 | 0x80;
    }
    else
    {
      v13 = a3;
    }
    switch ( ShellShowWindowAction )
    {
      case 0u:
        if ( v7 )
        {
          v17 = v8 | 0x80;
          if ( a2 != *(struct tagQ **)(*(_DWORD *)(v47 + 236) + 64) )
            v17 |= 0x14u;
          goto LABEL_49;
        }
        return v7;
      case 1u:
      case 4u:
      case 9u:
        v15 = IsSemiMaximized(a2);
        if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 23) & 0x21) != 0 || v15 )
        {
          v18 = v14 | (4 * v15);
          v19 = ShellShowWindowAction;
          v32 = (struct tagWND *)v18;
          goto LABEL_39;
        }
        if ( !v7 )
        {
          v16 = ShellShowWindowAction;
          v17 = v8 | 0x40;
          if ( ShellShowWindowAction == 4 )
            v17 |= 0x14u;
          goto LABEL_50;
        }
        return v7;
      case 2u:
      case 3u:
      case 6u:
      case 7u:
        xxxShowWindowViaMinMax(
          (struct tagWND *)ShellShowWindowAction,
          a2,
          (struct tagWND *)v13,
          (unsigned int)v35,
          (unsigned int)v37);
        return v7;
      case 5u:
        if ( !v7 )
        {
          v17 = v8 | 0x40;
          goto LABEL_49;
        }
        return v7;
      case 8u:
        v17 = v8 | 0x50;
LABEL_49:
        v16 = ShellShowWindowAction;
LABEL_50:
        v20 = v16 != 0;
        HighLimita = v20;
        if ( v20 != v7 )
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout((int)a2, 0x18u, v20, 0, 0, 0, 0, 1u, 1);
          if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 13) & 1) == 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((int)a2, 9u, HighLimita, 0, 0, 0, 0, 1u, 1);
          }
        }
        if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 23) & 0xC0) == 0x40 )
          goto LABEL_58;
        if ( (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)a2 + 19) + 4) + 9) & 8) != 0
          && (ShellShowWindowAction == 5 || ShellShowWindowAction == 1) )
        {
          xxxActivateWindowWithOptions((int *)a2, 0, 0, 1);
LABEL_58:
          v17 |= 0x14u;
        }
        if ( _FChildVisible((int)a2) )
        {
          xxxSetWindowPos((int)a2, 0, 0, 0, 0, 0, v17);
          if ( (((unsigned int)&loc_1FFFFC + 4) & v17) != 0 )
            NotifyShell::TrackedWindowPosChanged(v35, v37, v38);
        }
        else
        {
          SetVisible(a2, ShellShowWindowAction != 0);
        }
        if ( (*(_BYTE *)(*((_DWORD *)a2 + 5) + 8) & 0x10) != 0 )
        {
          SetOrClrWF(0, (int)a2, 0x10u, 1);
          v21 = *(_BYTE *)(*((_DWORD *)a2 + 5) + 23);
          if ( (v21 & 0x20) != 0 )
            v22 = 1;
          else
            v22 = 2 * (v21 & 1);
          xxxSendSizeMessage((int)a2, v22);
          v33 = *((_DWORD *)a2 + 14);
          v23 = (int *)(*(_DWORD *)(v33 + 20) + 68);
          v49 = *v23++;
          v50 = *v23++;
          v51 = *v23;
          v52 = v23[1];
          TransformRectBetweenCoordinateSpaces(&v49, &v49, a2, v33);
          v24 = *((_DWORD *)a2 + 5);
          v25 = *(unsigned __int16 *)(v24 + 72);
          if ( *((_DWORD *)a2 + 14) == _GetDesktopWindow(a2) )
          {
            v26 = *(unsigned __int16 *)(v24 + 68);
            v27 = v25;
          }
          else
          {
            v27 = (unsigned __int16)(v25 - v50);
            v26 = (unsigned __int16)(*(_WORD *)(v24 + 68) - v49);
          }
          xxxSendTransformableMessage(a2, 0, v26 | (v27 << 16), 0);
          v7 = v48;
        }
        if ( !ShellShowWindowAction )
        {
          if ( *(_DWORD *)(v47 + 236) == _gpqForeground && a2 == *(struct tagQ **)(_gpqForeground + 64) )
            xxxActivateWindowWithOptions((int *)a2, 2, 61, 1);
          else
            xxxMoveFocusAway(a2);
        }
        break;
      case 0xBu:
        xxxMinimizeHungWindow(a2);
        return v7;
      case 0x11u:
        v28 = v13 | 0xC0;
        goto LABEL_77;
      case 0x12u:
        v29 = v13 | 0xC0;
        goto LABEL_80;
      case 0x13u:
        v28 = v13 | 0x1C0;
LABEL_77:
        v32 = (struct tagWND *)v28;
        v31 = 3;
        goto LABEL_78;
      case 0x14u:
        v29 = v13 | 0x1C0;
LABEL_80:
        v32 = (struct tagWND *)v29;
        v31 = 9;
LABEL_78:
        v19 = v31;
LABEL_39:
        xxxShowWindowViaMinMax((struct tagWND *)v19, a2, v32, (unsigned int)v35, (unsigned int)v37);
        break;
      default:
        UserSetLastError((struct _NT_TIB *)0x5A9);
        break;
    }
  }
  return v7;
}
