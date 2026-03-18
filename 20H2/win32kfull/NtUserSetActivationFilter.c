/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0008410
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C00084D0 (_SetActivationFilter.c)
 *     IsIAMThread @ 0x1C002CEEC (IsIAMThread.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v9 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16), v6, v5) )
  {
    v9 = 87LL;
LABEL_8:
    UserSetLastError(v9);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v7, a2);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit();
  return v4;
}
