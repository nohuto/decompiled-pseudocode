/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C003D170
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterHotKey @ 0x1C003D200 (_UnregisterHotKey.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v10; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = UnregisterHotKey(v5, a2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}
