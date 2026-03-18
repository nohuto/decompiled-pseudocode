/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C008D87C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, int a2)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int64)*a1;
  if ( !v4 )
    return 1LL;
  v6 = HMValidateHandleNoSecure(v4, 3);
  if ( v6 || !a2 )
  {
    *a1 = 0LL;
    v7[0] = a1;
    v7[1] = v6;
    HMAssignmentLock(v7);
    return 1LL;
  }
  UserSetLastError(87LL);
  return 0LL;
}
