/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009D468
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009D3B0 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@XZ @ 0x18009D81C (-TryGetLastInteractionTimePoint@ShellFeedsExperienceHelpers@@YA-AV-$time_point@Usystem_clock@chr.c)
 *     ?_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009DC98 (-_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18009E19C (-_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F034 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@34@@Details@WRL@Microsoft@@YAJPEAPEAVIShellFeedsDesktopExperienceView@ShellFeeds@TwinUI@@AEAPEAUIServiceProvider@@AEAPEAVIShellFeedsExperienceManagerNotification@45@@Z @ 0x1800A5114 (--$MakeAndInitialize@VShellFeedsDesktopExperienceView@@VIShellFeedsDesktopExperienceView@ShellFe.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ @ 0x1800A9388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsCore@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::RuntimeClassInitialize(
        ShellFeedsExperienceManagerImpl *this,
        struct IServiceProvider *a2,
        __int64 (__fastcall ***a3)(struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *, GUID *, char *))
{
  __int64 (__fastcall *v6)(struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *, GUID *, char *); // rdi
  int ShellExperienceView; // ebx
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *v15; // [rsp+50h] [rbp+8h] BYREF
  struct IServiceProvider *v16; // [rsp+60h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a2);
  v6 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  ShellExperienceView = v6(
                          (struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *)a3,
                          &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e,
                          (char *)this + 80);
  if ( ShellExperienceView < 0 )
  {
    v8 = 254LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    return (unsigned int)ShellExperienceView;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  v15 = (struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *)a3;
  v16 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetImpl'::`2'::impl) )
  {
    v10 = Microsoft::WRL::Details::MakeAndInitialize<ShellFeedsDesktopExperienceView,TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView,IServiceProvider * &,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification * &>(
            (char *)this + 72,
            &v16,
            &v15);
    ShellExperienceView = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
  }
  else
  {
    ShellExperienceView = -2147467259;
  }
  if ( ShellExperienceView < 0 )
  {
    v8 = 256LL;
    goto LABEL_3;
  }
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 9);
  v12 = **v11;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  ShellExperienceView = v12(v11, &GUID_10e014a2_a194_445e_9cb0_667ae070d5d9, (char *)this + 88);
  if ( ShellExperienceView < 0 )
  {
    v8 = 257LL;
    goto LABEL_3;
  }
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 259LL;
    goto LABEL_3;
  }
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 260LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  ShellExperienceView = ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
                          this,
                          (const struct _GUID *)&SID_IImmersiveMonitorService,
                          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                          (void **)this + 7);
  if ( ShellExperienceView < 0 )
  {
    v8 = 262LL;
    goto LABEL_3;
  }
  ShellExperienceView = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 7) + 24LL))(
                          *((_QWORD *)this + 7),
                          (char *)this + 16,
                          (char *)this + 64);
  if ( ShellExperienceView < 0 )
  {
    v8 = 263LL;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)ShellFeedsExperienceHelpers::TryGetLastInteractionTimePoint(&v15);
  result = 0LL;
  *((_QWORD *)this + 25) = v13;
  return result;
}
