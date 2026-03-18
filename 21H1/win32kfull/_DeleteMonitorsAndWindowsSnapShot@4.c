/*
 * XREFs of _DeleteMonitorsAndWindowsSnapShot@4 @ 0x145BBD
 * Callers:
 *     <none>
 * Callees:
 *     _CleanMonitorsAndWindowsSnapshot@4 @ 0x145B75 (_CleanMonitorsAndWindowsSnapshot@4.c)
 */

int __stdcall DeleteMonitorsAndWindowsSnapShot(_DWORD *a1)
{
  CleanMonitorsAndWindowsSnapshot(a1);
  return Win32FreePool(a1);
}
