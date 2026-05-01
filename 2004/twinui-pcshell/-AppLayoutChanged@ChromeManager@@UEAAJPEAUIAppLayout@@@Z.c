/*
 * XREFs of ?AppLayoutChanged@ChromeManager@@UEAAJPEAUIAppLayout@@@Z @ 0x180406210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ChromeManager::AppLayoutChanged(ChromeManager *this, struct IAppLayout *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  if ( v4 < 0 )
  {
    v5 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayout *))(**((_QWORD **)this + 3) + 24LL))(
         *((_QWORD *)this + 3),
         a2);
  if ( v4 < 0 )
  {
    v5 = 65LL;
    goto LABEL_3;
  }
  return 0LL;
}
