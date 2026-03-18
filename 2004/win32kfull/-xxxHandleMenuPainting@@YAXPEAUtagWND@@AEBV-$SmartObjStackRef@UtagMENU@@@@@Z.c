/*
 * XREFs of ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02365AC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxEndPaint @ 0x1C005D6C0 (xxxEndPaint.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
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
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
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
