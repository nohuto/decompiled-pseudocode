/*
 * XREFs of _NtUserGetTopLevelWindow@4 @ 0x1647F7
 * Callers:
 *     <none>
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 */

int __stdcall NtUserGetTopLevelWindow(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi

  v1 = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 && _GetTopLevelWindow(v2) )
    v1 = *(_DWORD *)_GetTopLevelWindow(v3);
  UserSessionSwitchLeaveCrit();
  return v1;
}
