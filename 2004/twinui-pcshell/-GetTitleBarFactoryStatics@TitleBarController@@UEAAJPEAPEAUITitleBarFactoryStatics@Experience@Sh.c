/*
 * XREFs of ?GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Shell@Internal@Windows@@@Z @ 0x180287780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1802871C8 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 */

__int64 __fastcall TitleBarController::GetTitleBarFactoryStatics(
        TitleBarController *this,
        struct Windows::Internal::Shell::Experience::ITitleBarFactoryStatics **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct Windows::Internal::Shell::Experience::ITitleBarFactoryStatics *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = TitleBarController::EnsureTitleBarFactoryStatics((TitleBarController *)((char *)this - 8));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (struct Windows::Internal::Shell::Experience::ITitleBarFactoryStatics *)*((_QWORD *)this + 13);
    if ( v7 )
    {
      *a2 = v7;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::ITitleBarFactoryStatics *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      *a2 = 0LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
