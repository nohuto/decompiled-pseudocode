/*
 * XREFs of NtUserGetKeyNameText @ 0x1C0115AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyNameText(unsigned int a1, volatile void *a2, unsigned int a3)
{
  unsigned int KeyNameText; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a2, 2LL * a3, 2u);
  KeyNameText = _GetKeyNameText(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return KeyNameText;
}
