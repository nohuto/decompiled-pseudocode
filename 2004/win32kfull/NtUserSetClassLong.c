/*
 * XREFs of NtUserSetClassLong @ 0x1C0153A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C0153AEC (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    *((_QWORD *)&v20 + 1) = v8;
    HMLockObject(v8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13LL, v14, v15);
    else
      v12 = xxxSetClassLong(v13, a2, a3, a4);
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v12;
}
