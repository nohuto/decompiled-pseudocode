/*
 * XREFs of ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18005BC88
 * Callers:
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1800883AC (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@W4ShellExperienceViewFocusOptions@4567@@Z @ 0x1800A4C70 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180012D30 (-EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::RegisterGlobalBackButton(SearchAppDesktopExperienceView *this)
{
  int v2; // ebp
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD)this + 224;
  if ( *((_DWORD *)this + 56) )
    return 0LL;
  v3 = SearchAppDesktopExperienceView::EnsureImmersiveShell(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FF,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3,
      v10);
  }
  else
  {
    v12 = 0LL;
    v5 = *((_QWORD *)this + 13);
    v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    v7 = v6(v5, &SID_ShellTargetingTracker, &GUID_c59a546b_412b_40f3_b151_9b3202e2835f, &v12);
    v4 = v7;
    if ( v7 < 0 )
    {
      v9 = 1282LL;
    }
    else
    {
      v10 = v2;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v12 + 24LL))(
             v12,
             3LL,
             1LL,
             (char *)this + 40);
      v4 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        return 0LL;
      }
      v9 = 1284LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v7,
      v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return v4;
}
