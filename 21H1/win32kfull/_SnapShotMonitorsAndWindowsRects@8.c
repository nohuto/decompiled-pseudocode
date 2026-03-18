/*
 * XREFs of _SnapShotMonitorsAndWindowsRects@8 @ 0x145CF1
 * Callers:
 *     _SnapShotDesktopsMonitorsAndWindowsRects@8 @ 0x145C7D (_SnapShotDesktopsMonitorsAndWindowsRects@8.c)
 * Callees:
 *     _CleanMonitorsAndWindowsSnapshot@4 @ 0x145B75 (_CleanMonitorsAndWindowsSnapshot@4.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 */

int __fastcall SnapShotMonitorsAndWindowsRects(int a1, _DWORD *a2)
{
  int v4; // eax
  int v6; // eax

  if ( a2[2] || a2[3] )
    CleanMonitorsAndWindowsSnapshot(a2);
  v4 = SnapshotMonitorRects();
  a2[2] = v4;
  if ( !v4 )
    return -1073741801;
  v6 = SnapshotWindowRects(a1, a2 + 4);
  a2[3] = v6;
  if ( !v6 )
  {
    CleanMonitorsAndWindowsSnapshot(a2);
    return -1073741801;
  }
  a2[5] = a1;
  return 0;
}
