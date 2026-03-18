/*
 * XREFs of _NtUserRegisterDManipHook@0 @ 0xE4372
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 */

int __stdcall NtUserRegisterDManipHook()
{
  int v0; // esi
  _BYTE v2[8]; // [esp+4h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  v0 = _RegisterDManipHook();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
  UserSessionSwitchLeaveCrit();
  return v0;
}
