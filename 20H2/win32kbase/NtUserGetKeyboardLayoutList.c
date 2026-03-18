/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1C00A1560
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     _GetKeyboardLayoutList @ 0x1C00A15F4 (_GetKeyboardLayoutList.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterSharedCrit(0, 1);
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
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return KeyboardLayoutList;
}
