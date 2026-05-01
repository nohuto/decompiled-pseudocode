/*
 * XREFs of ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x1800A578C
 * Callers:
 *     ??_EShellFeedsDesktopExperienceView@@UEAAPEAXI@Z @ 0x1800A58D0 (--_EShellFeedsDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180208788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180475D00 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall ShellFeedsDesktopExperienceView::~ShellFeedsDesktopExperienceView(
        ShellFeedsDesktopExperienceView *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  volatile int *v4; // rdx
  __int64 v5; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((ShellFeedsDesktopExperienceView *)((char *)this + 208));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((ShellFeedsDesktopExperienceView *)((char *)this + 176));
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (char *)this + 80,
    0LL);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,TwinUI::ShellFeeds::IShellFeedsDesktopNotifications,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IImmersiveWindowMessageNotification,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>(
    (__int64)this,
    v4);
}
