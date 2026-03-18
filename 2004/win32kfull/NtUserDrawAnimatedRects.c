/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01F8AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxDrawAnimatedRects @ 0x1C023FE44 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rdi
  __int64 v6; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( a1 )
  {
    v5 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v12 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
  *((_QWORD *)&v12 + 1) = v5;
  if ( v5 )
    HMLockObject(v5);
  v2 = xxxDrawAnimatedRects(v5);
  ThreadUnlock1(v9, v8, v10);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v3, v6);
  return v2;
}
