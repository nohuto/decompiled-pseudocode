/*
 * XREFs of ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x180206098
 * Callers:
 *     ??_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z @ 0x1802062F0 (--_GSearchAppDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1801E228C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180208788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044DDCC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

void __fastcall SearchAppDesktopExperienceView::~SearchAppDesktopExperienceView(
        SearchAppDesktopExperienceView *this,
        __int64 a2)
{
  HWND v3; // rcx
  HWND v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  TwinUI::Lighting::AssistantLightManager *v8; // rsi
  volatile int *v9; // rdx
  __int64 v10; // rcx

  std::_Func_class<void,>::~_Func_class<void,>((__int64)this + 248, a2);
  v3 = (HWND)*((_QWORD *)this + 30);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (HWND)*((_QWORD *)this + 29);
  if ( v4 )
    DestroyWindow(v4);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 13);
  v7 = (_QWORD *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v7 )
  {
    v8 = (TwinUI::Lighting::AssistantLightManager *)v7[1];
    v7[1] = 0LL;
    if ( v8 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v8);
      operator delete(v8, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v7, (const struct std::nothrow_t *)0x10);
  }
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    (char *)this + 88,
    0LL);
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>(
    (__int64)this,
    v9);
}
