/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C0064780
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
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
  LOBYTE(v2) = 4;
  v3 = HMValidateHandle(a1, v2);
  v7 = 0;
  v8 = (struct tagSMWP *)v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v14 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
      *((_QWORD *)&v14 + 1) = v8;
      HMLockObject(v8);
      v7 = xxxEndDeferWindowPosEx(v8);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6);
  return v7;
}
