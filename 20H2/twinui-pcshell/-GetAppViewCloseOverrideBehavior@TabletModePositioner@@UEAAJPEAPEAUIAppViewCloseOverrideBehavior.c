/*
 * XREFs of ?GetAppViewCloseOverrideBehavior@TabletModePositioner@@UEAAJPEAPEAUIAppViewCloseOverrideBehavior@@@Z @ 0x1803F7100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::GetAppViewCloseOverrideBehavior(
        TabletModePositioner *this,
        struct IAppViewCloseOverrideBehavior **a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, struct IAppViewCloseOverrideBehavior **); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAppViewCloseOverrideBehavior **))*((_QWORD *)this + 24);
  if ( !v2 )
    return 2147500037LL;
  v4 = (**v2)(v2, &GUID_859cc9da_cb27_4a90_b8fa_749bb1944473, a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
