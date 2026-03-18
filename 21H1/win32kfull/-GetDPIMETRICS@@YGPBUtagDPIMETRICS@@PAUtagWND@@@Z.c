/*
 * XREFs of ?GetDPIMETRICS@@YGPBUtagDPIMETRICS@@PAUtagWND@@@Z @ 0xB68B6
 * Callers:
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     __ServerFixupMenuDC@16 @ 0xB932A (__ServerFixupMenuDC@16.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 */

const struct tagDPIMETRICS *__thiscall GetDPIMETRICS(_DWORD *this)
{
  int CurrentProcessWin32Process; // eax
  int v2; // esi
  int v3; // edx
  int WindowDpiLastNotify; // eax
  int v6; // eax

  if ( !this )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
LABEL_13:
      WindowDpiLastNotify = *(unsigned __int16 *)(CurrentProcessWin32Process + 160);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi((void *)WindowDpiLastNotify);
    }
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi((void *)0x60);
  }
  v2 = this[5];
  v3 = *(_DWORD *)(v2 + 184) & 0xF;
  if ( v3 == 3 )
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi((void *)((*(_DWORD *)(v2 + 184) >> 8) & 0x1FF));
  if ( (*(_DWORD *)(v2 + 144) & 0x8000000) == 0 )
  {
    if ( v3 || (v6 = *(_DWORD *)(this[2] + 248)) == 0 || (*(_BYTE *)(**(_DWORD **)(v6 + 4) + 32) & 1) == 0 )
    {
      CurrentProcessWin32Process = *(_DWORD *)(this[2] + 232);
      goto LABEL_13;
    }
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi((void *)0x60);
  }
  WindowDpiLastNotify = GetWindowDpiLastNotify(this);
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi((void *)WindowDpiLastNotify);
}
