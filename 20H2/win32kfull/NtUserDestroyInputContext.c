/*
 * XREFs of NtUserDestroyInputContext @ 0x1C014D060
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     DestroyInputContext @ 0x1C014D0DC (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
