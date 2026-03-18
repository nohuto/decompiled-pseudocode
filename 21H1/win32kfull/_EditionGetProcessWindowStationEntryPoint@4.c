/*
 * XREFs of _EditionGetProcessWindowStationEntryPoint@4 @ 0xF1C40
 * Callers:
 *     <none>
 * Callees:
 *     __GetProcessWindowStation@4 @ 0xA1FCA (__GetProcessWindowStation@4.c)
 */

int __stdcall EditionGetProcessWindowStationEntryPoint(_DWORD *a1)
{
  EnterSharedCrit(0, 1);
  _GetProcessWindowStation(a1);
  return UserSessionSwitchLeaveCrit();
}
