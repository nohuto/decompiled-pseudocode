/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A8CF0
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800A8C58 (-RuntimeClassInitialize@ShellFeedsDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800A582C (--4-$ComPtr@VIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@WRL@Microsoft@@QEAAAEA.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A60E0 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802061B8 (--4-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Cortan.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x180208788 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellFeedsDesktopExperienceView::RuntimeClassInitialize(
        ShellFeedsDesktopExperienceView *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v8)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int LastError; // ebx
  __int64 v11; // rdx
  UINT v12; // eax
  const char *v13; // r9
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, a2);
  Microsoft::WRL::ComPtr<TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification>::operator=(
    (__int64 *)this + 9,
    a3);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::operator=(
    (char *)this + 80,
    a4);
  *((_DWORD *)this + 32) = 1135214592;
  *((_DWORD *)this + 33) = 1142947840;
  v17 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v9 = v8(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v17);
  LastError = v9;
  if ( v9 < 0 )
  {
    v11 = 253LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)v17 + 24LL))(
         v17,
         26LL,
         (char *)this + 32,
         (char *)this + 164);
  LastError = v9;
  if ( v9 < 0 )
  {
    v11 = 254LL;
    goto LABEL_5;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)v17 + 24LL))(
         v17,
         1025LL,
         (char *)this + 32,
         (char *)this + 168);
  LastError = v9;
  if ( v9 < 0 )
  {
    v11 = 255LL;
    goto LABEL_5;
  }
  v12 = RegisterWindowMessageW(L"TaskbarHeadlines");
  *((_DWORD *)this + 40) = v12;
  if ( !v12 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x103,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
                  v13);
    goto LABEL_17;
  }
  v9 = (***((__int64 (__fastcall ****)(_QWORD, char *, _QWORD))this + 10))(
         *((_QWORD *)this + 10),
         (char *)this + 48,
         0LL);
  LastError = v9;
  if ( v9 < 0 )
  {
    v11 = 262LL;
    goto LABEL_5;
  }
  v9 = ShellFeedsDesktopExperienceView::EnsureInputHostManager(this);
  LastError = v9;
  if ( v9 < 0 )
  {
    v11 = 265LL;
    goto LABEL_5;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 12) + 24LL))(
          *((_QWORD *)this + 12),
          (char *)this + 40,
          (char *)this + 172);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
  LastError = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return LastError;
}
