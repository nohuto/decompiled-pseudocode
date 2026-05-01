/*
 * XREFs of ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A5F78
 * Callers:
 *     ?OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800A5EA0 (-OnViewChanged@ShellFeedsDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@I.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180051A4C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_180051A4C.c)
 *     ?ReducedVisualEffects@@YA_NXZ @ 0x1800536A8 (-ReducedVisualEffects@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006ECC8 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800A45C4 (-GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800A50C4 (-GetViewWrapper@ShellFeedsDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x1800A5A58 (-NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A5B44 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A7758 (-UnhookKeyboard@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?UnhookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A77D8 (-UnhookMouse@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellFeedsDesktopExperienceView::OnViewCloaking(ShellFeedsDesktopExperienceView *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  int v5; // eax
  ShellFeedsDesktopExperienceView *v6; // rcx
  int v7; // eax
  ShellFeedsDesktopExperienceView *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int AnimationClipRect; // eax
  __int64 v16; // rdx
  int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 *ViewWrapper; // rax
  int v22; // eax
  int v24[2]; // [rsp+40h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    *(_QWORD *)v24 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_180507D11,
      0,
      v4,
      (__int64)v24);
  }
  *((_BYTE *)this + 158) = 0;
  v5 = ShellFeedsDesktopExperienceView::NotifyTrayOfFlyoutVisibility((UINT *)this, 0);
  v6 = retaddr;
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x269,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  v7 = ShellFeedsDesktopExperienceView::UnhookMouse(v6);
  v8 = retaddr;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
  v9 = ShellFeedsDesktopExperienceView::UnhookKeyboard(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
  v25 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          v28,
          &v25);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)v24 = v25;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v24);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)off_180498760,
            v12);
    AnimationClipRect = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)v24,
                          (HSTRING)v13[1].Reserved.Reserved1,
                          v14,
                          0);
    v11 = AnimationClipRect;
    if ( AnimationClipRect >= 0 )
    {
      AnimationClipRect = ShellFeedsDesktopExperienceView::NotifyView(this, L"NotifyCloakStateChanged", v25);
      v11 = AnimationClipRect;
      if ( AnimationClipRect >= 0 )
      {
        if ( !ReducedVisualEffects() )
        {
          v17 = 81;
          v18 = *((_DWORD *)this + 38);
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 == 1 )
                  v17 = 80;
              }
              else
              {
                v17 = 78;
              }
            }
            else
            {
              v17 = 79;
            }
          }
          else
          {
            v17 = 77;
          }
          AnimationClipRect = ShellFeedsDesktopExperienceView::GetAnimationClipRect(this, (LPRECT)&hstringHeader);
          v11 = AnimationClipRect;
          if ( AnimationClipRect < 0 )
          {
            v16 = 658LL;
            goto LABEL_27;
          }
          ViewWrapper = ShellFeedsDesktopExperienceView::GetViewWrapper((__int64)this, &v26);
          v22 = CExperienceManagerAnimationHelper::Begin(
                  (__int64)this + 208,
                  (ExperienceManagerUtils *)*ViewWrapper,
                  v17 | 0x20000000u,
                  0LL,
                  0);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x295,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
              (const char *)(unsigned int)v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        }
        v11 = 0;
        goto LABEL_32;
      }
      v16 = 633LL;
    }
    else
    {
      v16 = 631LL;
    }
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)AnimationClipRect);
LABEL_32:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v10);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  return v11;
}
