/*
 * XREFs of _GetPrimaryMonitorRectForWindow@4 @ 0xA8E18
 * Callers:
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 * Callees:
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 */

_DWORD *__stdcall GetPrimaryMonitorRectForWindow(_DWORD *a1)
{
  _DWORD *MonitorRectForWindow; // esi
  _DWORD *result; // eax
  _DWORD v3[4]; // [esp+8h] [ebp-10h] BYREF

  GetDispInfo();
  MonitorRectForWindow = GetMonitorRectForWindow(v3);
  result = a1;
  *a1 = *MonitorRectForWindow++;
  a1[1] = *MonitorRectForWindow++;
  a1[2] = *MonitorRectForWindow;
  a1[3] = MonitorRectForWindow[1];
  return result;
}
