/*
 * XREFs of _xxxNotifyMonitorChanged@16 @ 0x26F18
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxInheritWindowMonitor@12 @ 0x26E0E (_xxxInheritWindowMonitor@12.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 *     _xxxRestoreWindowFromDeferredStateIfNeeded@8 @ 0xB4A52 (_xxxRestoreWindowFromDeferredStateIfNeeded@8.c)
 *     _NtUserUpdateLayeredWindow@40 @ 0xBA93E (_NtUserUpdateLayeredWindow@40.c)
 *     _xxxForceWindowToDpiForTest@8 @ 0x15258A (_xxxForceWindowToDpiForTest@8.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z @ 0x25BC6 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YGXQAUtagWND@@H@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z @ 0x26CC0 (-xxxSendDpiChangedMsgs@@YGHPAUtagWND@@PAUtagRECT@@PAUtagBWL@@G@Z.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _PostIAMShellHookMessageEx@12 @ 0x9ABEE (_PostIAMShellHookMessageEx@12.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z @ 0x150504 (-xxxSendGDIScaledDpiChangedMsgs@@YGHPAUtagWND@@PAUtagBWL@@@Z.c)
 */

int __fastcall xxxNotifyMonitorChanged(_DWORD *a1, int *a2, struct tagWND *a3, struct tagRECT *a4)
{
  int IsTopLevelWindow; // eax
  int v7; // ecx
  int result; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v10; // eax
  PKTHREAD v11; // eax
  int v12; // esi
  __int16 ScaledLogPixels; // si
  struct tagWND *v14; // [esp+0h] [ebp-10h]
  struct tagBWL *v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-4h]

  IsTopLevelWindow = _IsTopLevelWindow(a1);
  v7 = a1[5];
  v16 = IsTopLevelWindow;
  if ( (*(_DWORD *)(v7 + 184) & 0xF) == 2 && IsTopLevelWindow )
  {
    _SetDeferredDpiStateForWindowAndChildren((int)a1, 0, 0);
    v7 = a1[5];
  }
  if ( (*(_DWORD *)(v7 + 184) & 0xF) != 2 || (*(_DWORD *)(a1[2] + 352) & 0x2000000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    result = W32GetThreadWin32Thread(CurrentThread);
    if ( result )
    {
      v10 = KeGetCurrentThread();
      result = W32GetThreadWin32Thread(v10);
      if ( *(_DWORD *)(result + 248) )
      {
        v11 = KeGetCurrentThread();
        result = **(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 248) + 4);
        if ( (*(_BYTE *)(result + 32) & 1) != 0 )
        {
          v12 = a1[5];
          result = *(_DWORD *)(v12 + 184);
          if ( (result & 0xF) == 0 && (result & 0x40000000) != 0 )
          {
            result = _IsTopLevelWindow(a1);
            if ( result )
            {
              if ( !(_WORD)a4
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v12 + 180)),
                    result = GreGetScaledLogPixels(a4),
                    (_WORD)result != ScaledLogPixels) )
              {
                result = xxxSendGDIScaledDpiChangedMsgs(v14, v15);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    result = xxxSendDpiChangedMsgs(a2, (int)a1, a3, a4, v14, (unsigned __int16)v15);
  }
  if ( v16 )
  {
    TraceLoggingProcessMonitorInfoUpdateHelper((int)a1, 1);
    if ( a1[16] )
    {
      result = PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 24, *a1);
    }
    else
    {
      result = IsTrayWindow(a1);
      if ( result )
      {
        PostShellHookMessages();
        PostIAMShellHookMessageEx(*(_DWORD *)(_gptiCurrent + 248), 20, *a1);
        result = xxxCallHook(0, 0xAu, (int)v14, (int)v15);
      }
    }
  }
  if ( a3 )
    return FreeHwndList(a3);
  return result;
}
