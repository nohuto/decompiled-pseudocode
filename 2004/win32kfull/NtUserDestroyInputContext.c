/*
 * XREFs of NtUserDestroyInputContext @ 0x1C014A830
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DestroyInputContext @ 0x1C014A8AC (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = HMValidateHandle(a1, 0x11u);
    v4 = 0;
    if ( v3 )
      v4 = DestroyInputContext(v3);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2);
    v4 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
