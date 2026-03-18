/*
 * XREFs of ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C020C984
 * Callers:
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z @ 0x1C020BC4C (-HandleSizingAwayFromDockTarget@@YAXPEAU_MOVESIZEDATA@@QEBUtagCHECKPOINT@@PEAK@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D1528 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z @ 0x1C020B990 (-GetOverlapCoordinatesForArrangement@@YAKQEBUtagRECT@@0H@Z.c)
 *     ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C020BA1C (-GetShellArrangedWindowType@@YA-AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z.c)
 */

_BOOL8 __fastcall PreserveShellArrangementDuringTopBottomSize(const struct _MOVESIZEDATA *a1)
{
  int v2; // ecx
  struct tagRECT *MonitorWorkRectForWindow; // rax
  __int64 v4; // rcx
  struct tagRECT v5; // xmm0
  __int64 v6; // rax
  char OverlapCoordinatesForArrangement; // al
  unsigned int ShellArrangedWindowType; // eax
  int v9; // ecx
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 70) & 2) == 0 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 44);
  if ( (unsigned int)(v2 - 6) > 2 && (unsigned int)(v2 - 3) > 2 )
    return 0LL;
  MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(
                                                 &v12,
                                                 *((_QWORD *)a1 + 27),
                                                 *((const struct tagWND **)a1 + 2));
  v4 = *((_QWORD *)a1 + 2);
  v5 = *MonitorWorkRectForWindow;
  v6 = *(_QWORD *)(v4 + 40);
  v12 = v5;
  v11 = *(struct tagRECT *)(v6 + 88);
  ReduceArrangedRectangleByFrameMargin(v4, &v12, &v11.left);
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(&v12, &v11, 0);
  ShellArrangedWindowType = GetShellArrangedWindowType((__int64)a1, OverlapCoordinatesForArrangement);
  if ( ShellArrangedWindowType >= 6 )
    return 0LL;
  v9 = dword_1C02F5720[ShellArrangedWindowType];
  return !_bittest(&v9, (unsigned __int8)(*((_DWORD *)a1 + 44) - 3));
}
