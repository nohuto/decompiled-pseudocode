/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C011D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterDManipHook @ 0x1C011D224 (_RegisterDManipHook.c)
 */

__int64 NtUserRegisterDManipHook()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  v0 = (int)RegisterDManipHook();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
