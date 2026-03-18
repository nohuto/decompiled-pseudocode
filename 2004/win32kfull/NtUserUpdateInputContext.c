/*
 * XREFs of NtUserUpdateInputContext @ 0x1C010BDE0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     UpdateInputContext @ 0x1C010BE7C (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int updated; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return updated;
}
