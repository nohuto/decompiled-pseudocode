/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180190988
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x180191910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180022120 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___ @ 0x180190A50 (CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___--CAsyncCallbackWithLambda__.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18019141C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v3; // rax
  struct IAsyncCallback *v4; // rbx
  void *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAsyncCallback *v13; // [rsp+48h] [rbp+10h] BYREF

  v11[0] = 0LL;
  if ( v11 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v11[0] = v3;
  }
  v4 = 0LL;
  v11[1] = a2[1];
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (struct IAsyncCallback *)CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___(
                                    v5,
                                    v11);
  v13 = v4;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v11);
  if ( v4 )
  {
    v9 = NotificationDispatcher::AddTask(this, v4);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      goto LABEL_11;
    }
    v8 = (unsigned int)v9;
    v7 = 29LL;
  }
  else
  {
    v6 = -2147024882;
    v7 = 28LL;
    v8 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
    (const char *)v8);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v6;
}
