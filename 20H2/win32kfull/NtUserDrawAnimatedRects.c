/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C01F7C40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+58h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v10 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v10;
  *((_QWORD *)&v10 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v2 = xxxDrawAnimatedRects(v4);
  ThreadUnlock1(v7, v6, v8);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
