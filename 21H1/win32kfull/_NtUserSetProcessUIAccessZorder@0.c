/*
 * XREFs of _NtUserSetProcessUIAccessZorder@0 @ 0x169C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserSetProcessUIAccessZorder()
{
  int CurrentProcessWin32Process; // eax
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  if ( (int)RtlQueryElevationFlags(&v2) >= 0 && (v2 & 1) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 464) |= 2u;
  }
  UserSessionSwitchLeaveCrit();
  return 1;
}
