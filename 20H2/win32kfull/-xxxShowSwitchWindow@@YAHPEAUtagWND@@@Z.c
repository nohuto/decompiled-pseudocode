/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F37D4
 * Callers:
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C001AED0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F290C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagSwitchWndInfo *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagSwitchWndInfo *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagSwitchWndInfo *v20; // rax
  __int128 v22; // [rsp+40h] [rbp-18h] BYREF

  v4 = gspwndAltTab;
  v5 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v9 = Getpswi(v4, v6, v7, v8);
  v12 = v9;
  if ( !v9
    || *((_DWORD *)v9 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v12 + 27) && (_GetAsyncKeyState(18LL, v10, v11) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v22 = *GetMonitorWorkRect(&v22, v5);
  xxxSetWindowPos(v4, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x10) == 0 )
  {
    v16 = Getpswi(v4, v13, v14, v15);
    if ( !v16 )
      return 0LL;
    xxxSetWindowPos(
      v4,
      -1LL,
      (unsigned int)(((int)v22 + DWORD2(v22) - *((_DWORD *)v16 + 19)) / 2),
      (unsigned int)((DWORD1(v22) + HIDWORD(v22) - *((_DWORD *)v16 + 20)) / 2),
      *((_DWORD *)v16 + 19),
      *((_DWORD *)v16 + 20),
      80);
  }
  xxxInternalUpdateWindow(v4, 1u);
  xxxWindowEvent(0x14u, v4, -4, 0, 1u);
  v20 = Getpswi(v4, v17, v18, v19);
  if ( v20 )
  {
    xxxWindowEvent(0x8005u, v4, -4, *((_DWORD *)v20 + 17) + 1 + *((_DWORD *)v20 + 14) * *((_DWORD *)v20 + 18), 1u);
    return 1LL;
  }
  return 0LL;
}
