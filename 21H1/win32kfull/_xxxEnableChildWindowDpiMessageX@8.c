/*
 * XREFs of _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806
 * Callers:
 *     _NtUserEnableChildWindowDpiMessage@8 @ 0xA9796 (_NtUserEnableChildWindowDpiMessage@8.c)
 *     ?xxxShowGhostWindow@@YGXPAUtagWND@@0@Z @ 0xC22F2 (-xxxShowGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     _xxxNotifyMonitorChanged@16 @ 0x26F18 (_xxxNotifyMonitorChanged@16.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

int __fastcall xxxEnableChildWindowDpiMessageX(_DWORD *a1, struct tagWND *a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  struct tagRECT *v8; // ebx
  struct tagWND *v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = a2;
  v3 = 0;
  if ( !a1 )
    return 0;
  v4 = a1[5];
  if ( (*(_DWORD *)(v4 + 184) & 0xF) != 2 || !_IsTopLevelWindow(a1) )
    return 0;
  v5 = *(_DWORD *)(v4 + 144);
  if ( v10 )
  {
    *(_DWORD *)(v4 + 144) = v5 | 0x10000000;
    *(_DWORD *)(a1[5] + 144) |= 0x20000000u;
    v6 = ValidateHmonitorNoRip(*(_DWORD *)(a1[5] + 164));
  }
  else
  {
    *(_DWORD *)(v4 + 144) = v5 & 0xEFFFFFFF;
    *(_DWORD *)(a1[5] + 144) &= ~0x20000000u;
    v6 = *(_DWORD *)(_gpDispInfo + 52);
  }
  if ( v6 )
  {
    v7 = a1[5];
    v10 = 0;
    v8 = (struct tagRECT *)*(unsigned __int16 *)(v7 + 180);
    if ( UpdateMonitorForWindowAndChildren((int)a1, v6, (int *)&v10, 1) )
    {
      xxxNotifyMonitorChanged(a1, 0, v10, v8);
      return 1;
    }
  }
  return v3;
}
