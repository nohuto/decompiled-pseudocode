/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023571C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00F4F60 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxHandleMenuPainting(struct tagWND *a1, __int64 **a2)
{
  __int64 *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+20h] [rbp-88h] BYREF
  HDC v12[10]; // [rsp+40h] [rbp-68h] BYREF

  v11[2] = 0LL;
  memset(v12, 0, 0x48uLL);
  v4 = a2[2];
  if ( !v4 )
    v4 = (__int64 *)**a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxBeginPaint(a1, (__int64)v12);
  v6 = (__int64)a2[2];
  if ( !v6 )
    v6 = **a2;
  xxxMenuDraw(v12[0], v6, (__int64)a1);
  xxxEndPaint(a1, v12);
  return ThreadUnlock1(v8, v7, v9);
}
