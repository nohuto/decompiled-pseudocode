/*
 * XREFs of _NtUserIsTopLevelWindow@4 @ 0x91F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserIsTopLevelWindow(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // eax

  v1 = 0;
  EnterSharedCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 56);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v2 + 12);
      v5 = 0;
      if ( v4 )
      {
        v6 = *(_DWORD *)(v4 + 4);
        if ( v6 )
          v5 = *(_DWORD *)(v6 + 12);
      }
      if ( v3 == v5 )
        v1 = 1;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
