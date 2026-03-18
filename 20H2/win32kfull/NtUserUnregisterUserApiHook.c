/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C0203C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterUserApiHook @ 0x1C012D170 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v3 = (int)UnregisterUserApiHook(v1, v0, v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v3;
}
