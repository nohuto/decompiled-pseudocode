/*
 * XREFs of _GetPrimaryMonitorRect@0 @ 0xB3136
 * Callers:
 *     _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668 (_xxxBroadcastDisplaySettingsChange@12.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 *     __GetWindowRect@8 @ 0x1B6E03 (__GetWindowRect@8.c)
 * Callees:
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 */

_DWORD *__stdcall GetPrimaryMonitorRect(_DWORD *a1)
{
  _DWORD *MonitorRect; // esi
  _DWORD *result; // eax
  _BYTE v3[16]; // [esp+8h] [ebp-10h] BYREF

  GetDispInfo();
  MonitorRect = (_DWORD *)GetMonitorRect(v3);
  result = a1;
  *a1 = *MonitorRect++;
  a1[1] = *MonitorRect++;
  a1[2] = *MonitorRect;
  a1[3] = MonitorRect[1];
  return result;
}
