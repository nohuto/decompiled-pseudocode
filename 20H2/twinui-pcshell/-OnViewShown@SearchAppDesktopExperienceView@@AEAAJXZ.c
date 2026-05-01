/*
 * XREFs of ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800883AC
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18000FF20 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180012698 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18005BC88 (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewShown(SearchAppDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64, float *); // rax
  struct tagRECT v7; // [rsp+20h] [rbp-20h] BYREF
  float v8[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v2 = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = *((_QWORD *)this + 10);
    v8[0] = (float)v7.left;
    v8[1] = (float)v7.top;
    v8[2] = (float)(v7.right - v7.left);
    v5 = *(void (__fastcall **)(__int64, float *))(*(_QWORD *)v4 + 96LL);
    v8[3] = (float)(v7.bottom - v7.top);
    v5(v4, v8);
    if ( !*((_BYTE *)this + 205) )
      SearchAppDesktopExperienceView::RegisterGlobalBackButton(this);
    return 0LL;
  }
}
