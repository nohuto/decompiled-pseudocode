/*
 * XREFs of _EditionCloseWindowStationEntryPoint@4 @ 0xF1C04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionCloseWindowStationEntryPoint(int a1)
{
  int v1; // esi

  EnterCrit(0, 1);
  v1 = _CloseWindowStation(a1, 1);
  UserSessionSwitchLeaveCrit();
  return v1;
}
