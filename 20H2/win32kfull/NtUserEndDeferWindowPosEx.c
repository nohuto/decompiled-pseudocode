/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C0092950
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  struct tagSMWP *v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 4;
  v5 = HMValidateHandle(a1, v4);
  v7 = 0;
  v8 = (struct tagSMWP *)v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v14;
      *((_QWORD *)&v14 + 1) = v8;
      HMLockObject(v8);
      v7 = xxxEndDeferWindowPosEx(v8, a2);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
