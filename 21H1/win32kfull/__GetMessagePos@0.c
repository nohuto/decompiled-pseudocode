/*
 * XREFs of __GetMessagePos@0 @ 0xA9662
 * Callers:
 *     _NtUserCallHwndParamLockSafe@12 @ 0x189A0 (_NtUserCallHwndParamLockSafe@12.c)
 *     _NtUserCallNoParam@4 @ 0x6E940 (_NtUserCallNoParam@4.c)
 *     _NtUserCallHwndLockSafe@8 @ 0x92856 (_NtUserCallHwndLockSafe@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxContScroll@@YGXPAUtagWND@@IIJ@Z @ 0x1A2DA3 (-xxxContScroll@@YGXPAUtagWND@@IIJ@Z.c)
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxSendHelpMessage@20 @ 0x1ACB94 (_xxxSendHelpMessage@20.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 */

int __stdcall _GetMessagePos()
{
  unsigned __int16 v0; // si
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // edx
  unsigned __int16 v6; // ax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  v0 = 0;
  v8 = *(_DWORD *)(_gptiCurrent + 416);
  v9 = *(_DWORD *)(_gptiCurrent + 420);
  if ( *(_DWORD *)(_gptiCurrent + 424) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v2 = *(_DWORD *)(_gptiCurrent + 424);
    v3 = CurrentThreadDpiAwarenessContext;
    if ( (((CurrentThreadDpiAwarenessContext >> 8) ^ (v2 >> 8)) & 0x1FF) != 0 )
      goto LABEL_13;
    v4 = 1;
    if ( (v2 & 0xF) != 2 || (v5 = 1, (v2 & 0x20000000) == 0) )
      v5 = 0;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
      v4 = 0;
    if ( v5 != v4 )
    {
LABEL_13:
      LogicalToPhysicalDPIPoint(&v8, &v8, v2, 0);
      PhysicalToLogicalDPIPoint(&v8, &v8, v3, 0);
    }
    v0 = v8;
    v6 = v9;
  }
  else
  {
    v6 = 0;
  }
  return v0 | (v6 << 16);
}
