/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C0045780
 * Callers:
 *     <none>
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C00457D4 (zzzUnhookWindowsHookEx.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandle(a1, v2);
  v7 = 0;
  if ( v3 )
    v7 = zzzUnhookWindowsHookEx(v3);
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v7;
}
