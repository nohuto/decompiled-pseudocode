/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01FCDA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01DEB18 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(unsigned __int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandle(a1, 0x13u)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v4, v5);
    UserSetLastError(0LL, v6, v7);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return TouchValidationStatus;
}
