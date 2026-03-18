/*
 * XREFs of _NtUserUnhookWindowsHookEx@4 @ 0x127C8
 * Callers:
 *     <none>
 * Callees:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 */

int __stdcall NtUserUnhookWindowsHookEx(int a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  v1 = 0;
  EnterCrit(0, 1);
  LOBYTE(v2) = 5;
  v3 = HMValidateHandle(a1, v2);
  if ( v3 )
    v1 = zzzUnhookWindowsHookEx(v3);
  UserSessionSwitchLeaveCrit();
  return v1;
}
