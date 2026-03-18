/*
 * XREFs of NtUserUpdateInputContext @ 0x1C010D980
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     UpdateInputContext @ 0x1C010DA1C (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int updated; // ebx
  __int64 v10; // rcx
  char v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( (*gpsi & 4) != 0 )
  {
    v8 = HMValidateHandle(a1, 0x11u);
    updated = 0;
    if ( v8 )
      updated = UpdateInputContext(v8, a2, a3);
  }
  else
  {
    UserSetLastError(120LL, v6, v7);
    updated = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return updated;
}
