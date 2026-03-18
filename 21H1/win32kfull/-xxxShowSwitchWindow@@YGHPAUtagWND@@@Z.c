/*
 * XREFs of ?xxxShowSwitchWindow@@YGHPAUtagWND@@@Z @ 0x15CF04
 * Callers:
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z @ 0x7D436 (-xxxInternalUpdateWindow@@YGXPAUtagWND@@K@Z.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     ?Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z @ 0x15C2D1 (-Getpswi@@YGPAUtagSwitchWndInfo@@PAUtagWND@@@Z.c)
 */

int __stdcall xxxShowSwitchWindow()
{
  struct tagEVENTHOOK *v0; // ebx
  void *v1; // edi
  struct tagSwitchWndInfo *v2; // eax
  struct tagSwitchWndInfo *v3; // esi
  int *MonitorWorkRect; // eax
  struct tagSwitchWndInfo *v5; // eax
  struct tagSwitchWndInfo *v6; // eax
  struct tagWND *v8; // [esp+0h] [ebp-38h]
  unsigned int v9; // [esp+4h] [ebp-34h]
  _DWORD v10[5]; // [esp+10h] [ebp-28h] BYREF
  int v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  int v13; // [esp+2Ch] [ebp-Ch]
  int v14; // [esp+30h] [ebp-8h]

  v0 = (struct tagEVENTHOOK *)gspwndAltTab;
  v1 = *(void **)(GetDispInfo() + 52);
  v2 = Getpswi(v0);
  v3 = v2;
  if ( !v2 )
    return 0;
  if ( !*((_DWORD *)v2 + 22) )
    goto LABEL_5;
  if ( (_GetKeyState(18) & 0x8000u) == 0 )
    return 0;
  if ( !*((_DWORD *)v3 + 22) )
  {
LABEL_5:
    if ( (_GetAsyncKeyState(18) & 0x8000u) == 0 )
      return 0;
  }
  MonitorWorkRect = GetMonitorWorkRect(v1, v10);
  v11 = *MonitorWorkRect;
  v12 = MonitorWorkRect[1];
  v13 = MonitorWorkRect[2];
  v14 = MonitorWorkRect[3];
  xxxSetWindowPos((int)v0, -1, 0, 0, 0, 0, 27);
  if ( (*(_BYTE *)(*((_DWORD *)v0 + 5) + 23) & 0x10) == 0 )
  {
    v5 = Getpswi(v0);
    if ( !v5 )
      return 0;
    xxxSetWindowPos(
      (int)v0,
      -1,
      (v11 + v13 - *((_DWORD *)v5 + 14)) / 2,
      (v12 + v14 - *((_DWORD *)v5 + 15)) / 2,
      *((_DWORD *)v5 + 14),
      *((_DWORD *)v5 + 15),
      80);
  }
  xxxInternalUpdateWindow(v8, v9);
  xxxWindowEvent(0x14u, v0, 0xFFFFFFFC, 0, 1);
  v6 = Getpswi(v0);
  if ( v6 )
  {
    xxxWindowEvent(
      0x8005u,
      v0,
      0xFFFFFFFC,
      (struct tagWND *)(*((_DWORD *)v6 + 9) * *((_DWORD *)v6 + 13) + 1 + *((_DWORD *)v6 + 12)),
      1);
    return 1;
  }
  return 0;
}
