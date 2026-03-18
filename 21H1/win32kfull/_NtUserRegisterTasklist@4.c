/*
 * XREFs of _NtUserRegisterTasklist@4 @ 0x168209
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserRegisterTasklist(int a1)
{
  int v1; // esi
  int *v2; // eax

  v1 = 0;
  EnterCrit(0, 1);
  v2 = (int *)ValidateHwnd(a1);
  if ( v2 )
  {
    _gptiTasklist = v2[2];
    ghwndSwitch = *v2;
    *(_DWORD *)(v2[2] + 264) |= 0x40u;
    v1 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
