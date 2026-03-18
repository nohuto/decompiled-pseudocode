/*
 * XREFs of _GetMonitorMaxArea@8 @ 0x7307A
 * Callers:
 *     _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46 (_xxxInitSendValidateMinMaxInfoEx@16.c)
 *     _CkptUpdate@12 @ 0xB48F4 (_CkptUpdate@12.c)
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     __HungWindowFromGhostWindow@4 @ 0x72334 (__HungWindowFromGhostWindow@4.c)
 */

_DWORD *__fastcall GetMonitorMaxArea(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *MonitorWorkRectForWindow; // eax
  _DWORD *v8; // esi
  _DWORD *result; // eax
  _DWORD v10[5]; // [esp+8h] [ebp-14h] BYREF

  v5 = _HungWindowFromGhostWindow((int)a1, a2);
  if ( !v5 )
    v5 = a1;
  v6 = v5[5];
  if ( (*(_BYTE *)(v6 + 22) & 1) != 0 && (*(_BYTE *)(v6 + 8) & 8) != 0 && !*(_WORD *)(_gpDispInfo + 88) )
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(a2, a1, v10);
  else
    MonitorWorkRectForWindow = GetMonitorRectForWindow(v10);
  v8 = MonitorWorkRectForWindow;
  result = a3;
  *a3 = *v8++;
  a3[1] = *v8++;
  a3[2] = *v8;
  a3[3] = v8[1];
  return result;
}
