/*
 * XREFs of ?Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z @ 0x1800A6E6C
 * Callers:
 *     ?ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800A767C (-ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpt.c)
 * Callees:
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006DED0 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18006E9E4 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A5B44 (-NotifyView@ShellFeedsDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellFeedsDesktopExperienceView::Relaunch(ShellFeedsDesktopExperienceView *this, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v17,
         &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    if ( a2
      && (v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                 &hstringHeader,
                 (const WCHAR **)off_180498748,
                 v6),
          v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                 (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
                 (HSTRING)v7[1].Reserved.Reserved1,
                 v8,
                 a2),
          v5 = v9,
          v9 < 0) )
    {
      v10 = 988LL;
    }
    else
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const WCHAR **)off_180498780,
              v6);
      v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
             (HSTRING)v11[1].Reserved.Reserved1,
             v12,
             1u);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v9 = ShellFeedsDesktopExperienceView::NotifyView(this, L"NotifyRelaunch", v15);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v5 = 0;
          goto LABEL_12;
        }
        v10 = 994LL;
      }
      else
      {
        v10 = 992LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v5;
}
