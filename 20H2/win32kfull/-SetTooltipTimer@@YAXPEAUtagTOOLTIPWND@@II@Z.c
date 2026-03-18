/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C001B5B4
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0242A70 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0017B98 (_SetSystemTimer.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C001B654 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  __int64 v6; // rcx

  KillTooltipTimer(a1);
  v6 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 9) = a2;
  SetSystemTimer(v6, a2, a3, 0, 1);
}
