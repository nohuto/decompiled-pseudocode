/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C001B654
 * Callers:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C001B5B4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)a1 + 9);
  if ( (_DWORD)v1 )
  {
    *((_DWORD *)a1 + 9) = 0;
    FindTimer(*(_QWORD *)a1, v1, 2u, 1, 0LL);
  }
}
