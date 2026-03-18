/*
 * XREFs of ?GetWindowCompositedDpiContext@@YGKPBUtagWND@@@Z @ 0x335EE
 * Callers:
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _GetMonitorMenuRectForWindow@8 @ 0x1B722C (_GetMonitorMenuRectForWindow@8.c)
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 * Callees:
 *     <none>
 */

int __thiscall GetWindowCompositedDpiContext(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = 18;
  v2 = *(_DWORD *)(this[2] + 248);
  if ( v2 && (*(_BYTE *)(**(_DWORD **)(v2 + 4) + 32) & 1) != 0 )
    return *(_DWORD *)(this[5] + 184);
  return v1;
}
