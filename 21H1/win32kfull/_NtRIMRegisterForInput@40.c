/*
 * XREFs of _NtRIMRegisterForInput@40 @ 0xEA7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtRIMRegisterForInput(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int CurrentProcess; // eax
  int v11; // esi

  EnterCrit(0, 1);
  CurrentProcess = PsGetCurrentProcess();
  if ( IsProcessDwm(CurrentProcess) )
    v11 = RIMRegisterForInputWithCallbacks(
            a1,
            a2,
            a3,
            a4,
            _gpWin32kDriverObject,
            a5,
            a6,
            0,
            0,
            a8,
            &Win32kRIMDevChangeCallback,
            a9,
            1,
            a10);
  else
    v11 = -1073741790;
  UserSessionSwitchLeaveCrit();
  return v11;
}
