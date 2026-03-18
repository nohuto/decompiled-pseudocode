/*
 * XREFs of _GetMonitorWorkRectForDpi@8 @ 0x71FAA
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _GetMonitorWorkRectForDpiContext@8 @ 0x71F62 (_GetMonitorWorkRectForDpiContext@8.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YGXPAUtagMONITOR_MARGIN@@@Z @ 0xA5700 (-UpdateDesktopMonitorNavigationOrder@@YGXPAUtagMONITOR_MARGIN@@@Z.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _ExpandMonitorSpaceVertex@16 @ 0x15678 (_ExpandMonitorSpaceVertex@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int *__fastcall GetMonitorWorkRectForDpi(int a1, unsigned __int16 a2, int *a3)
{
  int *v3; // esi
  int v5; // eax
  INT v6; // eax
  int v7; // edx
  INT a; // [esp+Ch] [ebp-1Ch]
  INT v9; // [esp+10h] [ebp-18h]

  v3 = (int *)(*(_DWORD *)(a1 + 20) + 32);
  *a3 = *v3++;
  a3[1] = *v3++;
  a3[2] = *v3;
  a3[3] = v3[1];
  if ( a2 )
  {
    v5 = *(_DWORD *)(a1 + 20);
    a = *(_DWORD *)(v5 + 16);
    v9 = *(_DWORD *)(v5 + 20);
    v6 = ExpandMonitorSpaceVertex(a2, *(_WORD *)(v5 + 54), a, v9);
    ScaleDPIRect(a3, a3, a2, *(_WORD *)(*(_DWORD *)(a1 + 20) + 52), v6, v7, a, v9);
  }
  return a3;
}
