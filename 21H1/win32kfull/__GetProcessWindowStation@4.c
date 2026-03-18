/*
 * XREFs of __GetProcessWindowStation@4 @ 0xA1FCA
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _EditionGetProcessWindowStationEntryPoint@4 @ 0xF1C40 (_EditionGetProcessWindowStationEntryPoint@4.c)
 *     _EditionOpenInputDesktopEntryPoint@12 @ 0xF2960 (_EditionOpenInputDesktopEntryPoint@12.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetProcessWindowStation(_DWORD *a1)
{
  int CurrentProcessWin32Process; // eax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( a1 )
    *a1 = *(_DWORD *)(CurrentProcessWin32Process + 360);
  return *(_DWORD *)(CurrentProcessWin32Process + 356);
}
