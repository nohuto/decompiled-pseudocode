/*
 * XREFs of ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C008EA80
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C002307C (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025EA64 (GetMonitorMenuRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C025EAA0 (GetScreenRectForWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpiContext(const struct tagWND *a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 18;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 )
    return *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
  return v1;
}
