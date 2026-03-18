/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YGHPBU_MOVESIZEDATA@@@Z @ 0x171F4C
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z @ 0x1713DE (-HandleSizingAwayFromDockTarget@@YGXPAU_MOVESIZEDATA@@QBUtagCHECKPOINT@@PAK@Z.c)
 * Callees:
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _ReduceArrangedRectangleByFrameMargin@12 @ 0x140128 (_ReduceArrangedRectangleByFrameMargin@12.c)
 *     ?GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z @ 0x171195 (-GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YG?AW4SHELL_ARRANGEMENT_TYPE@@QBU_MOVESIZEDATA@@K@Z @ 0x171205 (-GetShellArrangedWindowType@@YG-AW4SHELL_ARRANGEMENT_TYPE@@QBU_MOVESIZEDATA@@K@Z.c)
 *     ?IsSizingBOTTOM@@YGEH@Z @ 0x171927 (-IsSizingBOTTOM@@YGEH@Z.c)
 *     ?IsSizingTOP@@YGEH@Z @ 0x171965 (-IsSizingTOP@@YGEH@Z.c)
 */

BOOL __thiscall PreserveShellArrangementDuringTopBottomSize(int this)
{
  void *v2; // ecx
  _DWORD *MonitorWorkRectForWindow; // eax
  int v4; // ecx
  int *v5; // esi
  int v6; // esi
  char OverlapCoordinatesForArrangement; // al
  unsigned int ShellArrangedWindowType; // eax
  const struct tagRECT *v10; // [esp+0h] [ebp-30h]
  int v11; // [esp+4h] [ebp-2Ch]
  _DWORD v12[4]; // [esp+10h] [ebp-20h] BYREF
  int v13[4]; // [esp+20h] [ebp-10h] BYREF

  if ( (*(_BYTE *)(this + 248) & 2) == 0 || !IsSizingBOTTOM(*(void **)(this + 164)) && !IsSizingTOP(v2) )
    return 0;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(*(_DWORD *)(this + 196), *(_DWORD **)(this + 8), v13);
  v4 = *(_DWORD *)(this + 8);
  v12[0] = *MonitorWorkRectForWindow;
  v12[1] = MonitorWorkRectForWindow[1];
  v12[2] = MonitorWorkRectForWindow[2];
  v12[3] = MonitorWorkRectForWindow[3];
  v5 = (int *)(*(_DWORD *)(v4 + 20) + 52);
  v13[0] = *v5++;
  v13[1] = *v5++;
  v13[2] = *v5;
  v13[3] = v5[1];
  ReduceArrangedRectangleByFrameMargin(v4, v12, v13);
  v6 = 0;
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(v13, v12, 0, v10, v11);
  ShellArrangedWindowType = GetShellArrangedWindowType(this, OverlapCoordinatesForArrangement);
  if ( ShellArrangedWindowType < 6 )
    return (dword_258738[ShellArrangedWindowType] & (1 << (*(_BYTE *)(this + 164) - 3))) == 0;
  return v6;
}
