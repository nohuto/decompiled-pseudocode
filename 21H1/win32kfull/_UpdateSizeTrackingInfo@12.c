/*
 * XREFs of _UpdateSizeTrackingInfo@12 @ 0x1764E7
 * Callers:
 *     _NtUserUpdateWindowTrackingInfo@12 @ 0x16AF00 (_NtUserUpdateWindowTrackingInfo@12.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2 (-IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z.c)
 */

int __fastcall UpdateSizeTrackingInfo(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // eax
  int *MonitorWorkRectForWindow; // eax
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // esi
  _DWORD v12[4]; // [esp+Ch] [ebp-28h] BYREF
  int v13; // [esp+1Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-14h]
  _DWORD v15[2]; // [esp+24h] [ebp-10h] BYREF
  _DWORD *v16; // [esp+2Ch] [ebp-8h]
  _DWORD *v17; // [esp+30h] [ebp-4h]

  v3 = *(_DWORD **)(a1[2] + 368);
  v16 = a2;
  v17 = a1;
  v4 = v3[51];
  if ( v3[49] != v4 )
    return 0;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v4, a1, v12);
  v13 = *MonitorWorkRectForWindow;
  v14 = MonitorWorkRectForWindow[1];
  v15[0] = MonitorWorkRectForWindow[2];
  v6 = 0;
  v7 = v15[0] - v13;
  v15[0] = 0;
  v15[1] = 0;
  if ( IsLeftOrRightArranged(v17) && GetWindowExtendedMargin(v8, (int)v15) )
    v7 += SHIWORD(v15[0]) + SLOWORD(v15[0]);
  v9 = v7 - *a3;
  if ( v9 <= 0 )
    return 0;
  v10 = v7 - *v16;
  if ( v10 > 0 && v10 > v3[24] )
    v6 = 1;
  if ( v9 < v3[25] )
    v3[25] = v9;
  if ( v6 )
    v3[23] = v10;
  return 1;
}
