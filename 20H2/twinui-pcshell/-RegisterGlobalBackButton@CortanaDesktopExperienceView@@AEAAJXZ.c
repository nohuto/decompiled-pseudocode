/*
 * XREFs of ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020FE8C
 * Callers:
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020EFDC (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180210B20 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18020B0DC (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::RegisterGlobalBackButton(CortanaDesktopExperienceView *this)
{
  char *v2; // rbp
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 268;
  if ( !*((_DWORD *)this + 67) )
  {
    v3 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    v11 = 0LL;
    v6 = *((_QWORD *)this + 15);
    v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8 = v7(v6, &SID_ShellTargetingTracker, &GUID_c59a546b_412b_40f3_b151_9b3202e2835f, &v11);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = 1720LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      return v4;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, char *))(*(_QWORD *)v11 + 24LL))(
           v11,
           3LL,
           1LL,
           (char *)this + 48,
           v2);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = 1722LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  return 0LL;
}
