/*
 * XREFs of NtUserSetClassLong @ 0x1C0156330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetClassLong @ 0x1C015641C (xxxSetClassLong.c)
 */

__int64 __fastcall NtUserSetClassLong(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v8;
    HMLockObject(v8);
    if ( a2 == -26 && (a3 & 0x10000) != 0 )
      UserSetLastError(13LL, v12, v13);
    else
      v10 = xxxSetClassLong(v11, a2, a3, a4);
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
