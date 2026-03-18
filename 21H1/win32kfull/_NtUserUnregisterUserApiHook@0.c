/*
 * XREFs of _NtUserUnregisterUserApiHook@0 @ 0x16ACDB
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __UnregisterUserApiHook@0 @ 0xD49EC (__UnregisterUserApiHook@0.c)
 */

int __stdcall NtUserUnregisterUserApiHook()
{
  int v0; // esi
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  v0 = _UnregisterUserApiHook();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
  UserSessionSwitchLeaveCrit();
  return v0;
}
