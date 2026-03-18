/*
 * XREFs of _NtUserRegisterUserApiHook@16 @ 0xEABB6
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __RegisterUserApiHook@16 @ 0xEABF4 (__RegisterUserApiHook@16.c)
 */

int __stdcall NtUserRegisterUserApiHook(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  _BYTE v7[8]; // [esp+4h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
  v5 = _RegisterUserApiHook(v4, v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return v5;
}
