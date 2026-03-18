/*
 * XREFs of DeleteMonitorsAndWindowsSnapShot @ 0x1C01D7CD0
 * Callers:
 *     <none>
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D7C44 (CleanMonitorsAndWindowsSnapshot.c)
 */

__int64 __fastcall DeleteMonitorsAndWindowsSnapShot(__int64 a1)
{
  CleanMonitorsAndWindowsSnapshot(a1);
  return Win32FreePool(a1);
}
