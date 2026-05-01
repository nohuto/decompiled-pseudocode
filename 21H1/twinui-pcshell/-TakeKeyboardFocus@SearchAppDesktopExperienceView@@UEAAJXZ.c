/*
 * XREFs of ?TakeKeyboardFocus@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180089520
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x18009B6B0 (--B-$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBool.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::TakeKeyboardFocus(SearchAppDesktopExperienceView *this)
{
  _QWORD *v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::operator int Microsoft::WRL::Details::BoolStruct::*((char *)this + 128) == -1 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 112LL))(*v1);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x296,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
