/*
 * XREFs of _CleanMonitorsAndWindowsSnapshot@4 @ 0x145B75
 * Callers:
 *     _CleanupDesktopsMonitorsAndWindowsSnapShot@4 @ 0xD4AAA (_CleanupDesktopsMonitorsAndWindowsSnapShot@4.c)
 *     _DeleteMonitorsAndWindowsSnapShot@4 @ 0x145BBD (_DeleteMonitorsAndWindowsSnapShot@4.c)
 *     _SnapShotMonitorsAndWindowsRects@8 @ 0x145CF1 (_SnapShotMonitorsAndWindowsRects@8.c)
 * Callees:
 *     <none>
 */

int __thiscall CleanMonitorsAndWindowsSnapshot(_DWORD *this)
{
  int result; // eax
  int v3; // ebx

  result = this[2];
  v3 = this[3];
  if ( result )
  {
    result = Win32FreePool(this[2]);
    this[2] = 0;
  }
  if ( v3 )
  {
    result = Win32FreePool(this[3]);
    this[3] = 0;
  }
  this[4] = 0;
  this[5] = 0;
  return result;
}
