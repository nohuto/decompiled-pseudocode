/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0057110
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0056670 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 * Callees:
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 9);
  if ( v1 )
  {
    *((_DWORD *)a1 + 9) = 0;
    FindTimer(*(_QWORD *)a1, v1, 2, 1, 0LL);
  }
}
