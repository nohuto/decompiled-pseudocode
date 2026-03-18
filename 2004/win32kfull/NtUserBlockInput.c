/*
 * XREFs of NtUserBlockInput @ 0x1C01F7860
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1C01DA30C (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = BlockInput(a1, v2, v3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
