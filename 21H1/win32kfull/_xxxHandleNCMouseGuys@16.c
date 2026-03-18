/*
 * XREFs of _xxxHandleNCMouseGuys@16 @ 0x18587E
 * Callers:
 *     ?xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z @ 0x1A1C90 (-xxxDWP_NCMouse@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _GetNonChildAncestor@4 @ 0x1C9AA (_GetNonChildAncestor@4.c)
 *     _xxxGetSysMenuPtr@4 @ 0x31E72 (_xxxGetSysMenuPtr@4.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     __GetMenuState@12 @ 0xBFC42 (__GetMenuState@12.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z @ 0x1856D5 (-DragOperationFromMaximizedAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1 (-MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z @ 0x185784 (-SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleNCMouseGuys(_DWORD *BugCheckParameter2, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  bool v7; // zf
  int v8; // edx
  int v9; // ecx
  int *NonChildAncestor; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v13; // ecx
  int SysMenuPtr; // eax
  int v15; // eax
  int v16; // [esp-4h] [ebp-24h]
  struct tagWND *v17; // [esp+0h] [ebp-20h]
  int v18; // [esp+Ch] [ebp-14h] BYREF
  int *v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v22 = 0;
  v21 = 24;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v5 = 0xFFFF;
  if ( a3 == 2 )
  {
    v8 = a2 - 161;
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2[5] + 23) & 0x21) != 0
          || MoveWithArrangementAllowed(v17) && IsSemiMaximized(BugCheckParameter2) )
        {
          v5 = 61728;
        }
        else if ( (*(_BYTE *)(BugCheckParameter2[5] + 22) & 1) != 0 )
        {
          v5 = 61488;
        }
        v22 = 1;
      }
    }
    else
    {
      v9 = BugCheckParameter2[5];
      if ( (*(_BYTE *)(v9 + 23) & 0xC0) != 0x40 || (*(_BYTE *)(v9 + 145) & 0x10) == 0 )
      {
        NonChildAncestor = (int *)GetNonChildAncestor((int)BugCheckParameter2);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v18 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v18;
        v19 = NonChildAncestor;
        if ( NonChildAncestor )
          HMLockObject(NonChildAncestor);
        xxxActivateWindowWithOptions(NonChildAncestor, 0, 0, 0);
        ThreadUnlock1();
        v5 = 61456;
      }
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_15;
    if ( a3 <= 4 )
      goto LABEL_38;
    if ( a3 <= 7 )
    {
LABEL_15:
      if ( a2 != 161 && a2 != 163 )
        goto LABEL_38;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v5 = 61536;
          goto LABEL_38;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v5 = 61568;
        else
          v5 = 61552;
        goto LABEL_38;
      }
      v5 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && SizeWithSnapAllowed(v17) )
    {
      v6 = BugCheckParameter2[5];
      if ( (*(_BYTE *)(v6 + 23) & 0x21) == 0 )
      {
        v7 = (*(_BYTE *)(v6 + 145) & 3) == 0;
        v22 = 1;
        if ( v7 )
        {
          v21 = 18;
        }
        else if ( IsVerticallyMaximized(BugCheckParameter2) )
        {
          v21 = 19;
        }
      }
    }
  }
LABEL_38:
  if ( v5 != 61456 && v5 != 61488 && v5 != 61536
    || (*(_BYTE *)(BugCheckParameter2[5] + 22) & 8) == 0
    || (xxxSetSysMenu(BugCheckParameter2),
        v16 = v13,
        SysMenuPtr = xxxGetSysMenuPtr(BugCheckParameter2),
        (_GetMenuState(SysMenuPtr, v5 & 0xFFF0, v16) & 3) == 0)
    || v5 == 61456
    && (v15 = BugCheckParameter2[5], (*(_BYTE *)(v15 + 22) & 4) != 0)
    && (*(_BYTE *)(v15 + 23) & 1) != 0
    && (DragOperationFromMaximizedAllowed(v17)
     || ShellWindowManagement::WindowSubjectToBehavior((int)BugCheckParameter2, 4u)) )
  {
    if ( v22 && _gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534, 1);
    if ( v5 == 0xFFFF )
    {
      if ( v21 != 24 )
        xxxArrangeWindow(BugCheckParameter2, v21);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((int)BugCheckParameter2, 0x112u, a3 | v5, a4, 0, 0, 0, 1u, 1);
    }
  }
}
