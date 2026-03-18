/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4440
 * Callers:
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C002A6F0 (GetMonitorWorkRect.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F357C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  __int64 v3; // rsi
  struct tagSwitchWndInfo *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagSwitchWndInfo *v7; // rdi
  struct tagSwitchWndInfo *v8; // rax
  struct tagSwitchWndInfo *v9; // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v2 = gspwndAltTab;
  v3 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v4 = Getpswi(v2);
  v7 = v4;
  if ( !v4
    || *((_DWORD *)v4 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v7 + 27) && (_GetAsyncKeyState(18LL, v5, v6) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v11 = *GetMonitorWorkRect(&v11, v3);
  xxxSetWindowPos(v2, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL) & 0x10) == 0 )
  {
    v8 = Getpswi(v2);
    if ( !v8 )
      return 0LL;
    xxxSetWindowPos(
      v2,
      -1LL,
      (unsigned int)(((int)v11 + DWORD2(v11) - *((_DWORD *)v8 + 19)) / 2),
      (unsigned int)((DWORD1(v11) + HIDWORD(v11) - *((_DWORD *)v8 + 20)) / 2),
      *((_DWORD *)v8 + 19),
      *((_DWORD *)v8 + 20),
      80);
  }
  xxxInternalUpdateWindow(v2, 1u);
  xxxWindowEvent(0x14u, v2, -4, 0, 1u);
  v9 = Getpswi(v2);
  if ( v9 )
  {
    xxxWindowEvent(0x8005u, v2, -4, *((_DWORD *)v9 + 17) + 1 + *((_DWORD *)v9 + 14) * *((_DWORD *)v9 + 18), 1u);
    return 1LL;
  }
  return 0LL;
}
