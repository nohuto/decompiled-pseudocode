/*
 * XREFs of NtUserRegisterUserApiHook @ 0x1C01262C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterUserApiHook @ 0x1C0126348 (_RegisterUserApiHook.c)
 */

__int64 __fastcall NtUserRegisterUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v8 = (int)RegisterUserApiHook(a1, a2, a3, a4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v8;
}
