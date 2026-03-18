/*
 * XREFs of _EditionSetProcessWindowStationEntryPoint@4 @ 0xF1C74
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSetProcessWindowStation@12 @ 0x98412 (_xxxSetProcessWindowStation@12.c)
 */

int __stdcall EditionSetProcessWindowStationEntryPoint(HANDLE Handle)
{
  int v1; // esi
  int v2; // ebx
  int CurrentProcessWin32Process; // eax

  v1 = 1;
  EnterCrit(0, 1);
  v2 = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 360);
  if ( xxxSetProcessWindowStation(Handle, 1, 0) < 0 )
  {
    v1 = 0;
  }
  else if ( v2 != *(_DWORD *)(PsGetCurrentProcessWin32Process() + 360) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 464) |= 0x4000000u;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
