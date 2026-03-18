/*
 * XREFs of NtUserSetCursorContents @ 0x1C0202570
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EB8E0 (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 */

__int64 __fastcall NtUserSetCursorContents(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  struct tagCURSOR *v6; // rdi
  struct tagCURSOR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v4 = HMValidateHandle(a1, 3u);
  v5 = 0LL;
  v6 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v7 = (struct tagCURSOR *)HMValidateHandle(a2, 3u);
    if ( v7 )
      v5 = (unsigned __int8)_SetCursorContents(v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v5;
}
