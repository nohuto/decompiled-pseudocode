/*
 * XREFs of _EditionComputeInjectorUIPI@4 @ 0xACF4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionComputeInjectorUIPI(_DWORD *a1)
{
  int CurrentProcessWin32Process; // eax

  EnterCrit(0, 1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  *a1 = *(_DWORD *)(CurrentProcessWin32Process + 496);
  a1[1] = *(_DWORD *)(CurrentProcessWin32Process + 500);
  a1[2] = *(_DWORD *)(PsGetCurrentProcessWin32Process() + 8) >> 31;
  return UserSessionSwitchLeaveCrit();
}
