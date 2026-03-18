/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C002FF90
 * Callers:
 *     <none>
 * Callees:
 *     _GetKeyboardLayoutList @ 0x1C0030024 (_GetKeyboardLayoutList.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v7; // rcx

  EnterSharedCrit(0LL, 1LL);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
    ProbeForWrite(a2, 8LL * a1, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    a1 = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList(a1, a2);
  UserSessionSwitchLeaveCrit(v7);
  return KeyboardLayoutList;
}
