/*
 * XREFs of _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668
 * Callers:
 *     _xxxDesktopsRecalcAndBroadcastDisplayChange@16 @ 0xB0710 (_xxxDesktopsRecalcAndBroadcastDisplayChange@16.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _xxxBroadcastModernAppRedraw@0 @ 0x181592 (_xxxBroadcastModernAppRedraw@0.c)
 * Callees:
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     _GetPrimaryMonitorRect@0 @ 0xB3136 (_GetPrimaryMonitorRect@0.c)
 */

__int16 __stdcall xxxBroadcastDisplaySettingsChange(int a1, int a2, union tagBROADCASTMSG *a3)
{
  _DWORD *PrimaryMonitorRect; // eax
  int v4; // edi
  int v5; // ecx
  __int16 result; // ax
  __int16 v7; // cx

  EtwTraceChangeDisplayModeBroadcast(0);
  PrimaryMonitorRect = (_DWORD *)GetPrimaryMonitorRect();
  v4 = a1;
  xxxBroadcastMessageEx(
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12),
    0x7Eu,
    (struct tagWND *)*(unsigned __int16 *)(_gpsi + 6240),
    (unsigned __int16)(PrimaryMonitorRect[2] - *PrimaryMonitorRect) | ((unsigned __int16)(PrimaryMonitorRect[3]
                                                                                        - PrimaryMonitorRect[1]) << 16),
    1u,
    0,
    1u,
    a3);
  if ( (dword_2738B4 & 1) == 0 )
  {
    dword_2738B4 |= 1u;
    word_2738B8 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(GetDispInfo() + 52) + 20) + 52);
  }
  v5 = *(_DWORD *)(*(_DWORD *)(GetDispInfo() + 52) + 20);
  result = word_2738B8;
  if ( word_2738B8 != *(_WORD *)(v5 + 52) )
  {
    word_2738B8 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(GetDispInfo() + 52) + 20) + 52);
    v7 = *(_WORD *)(_gpsi + 6242);
    result = word_2738B8 == v7;
    a1 = word_2738B8 == v7;
    if ( word_2738B8 != v7 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &a1, 4, 0, _gSessionId, 0, 0);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12), 0x1Au, 0, 0, 1u, 0, 1u, a3);
    return xxxBroadcastMessageEx(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 12), 0x15u, 0, 0, 1u, 0, 1u, a3);
  }
  return result;
}
