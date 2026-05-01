/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802446EC
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18023F7D0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180023EA0 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180069D48 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1802440D8 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IApplicationView **); // rbx
  int ApplicationViewUniqueId; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v14; // esi
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, struct IApplicationView **); // rbx
  unsigned int v17; // ebx
  __int64 v18; // r8
  unsigned int v20; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-34h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v26; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v22, (__int64)v26, v4, &v23) < 0 )
    goto LABEL_9;
  v5 = v23;
  v21 = 0LL;
  v6 = *((_QWORD *)this + 28);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  ApplicationViewUniqueId = v7(v6, v5, &v21);
  v9 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v20 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v21, &v20);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1800LL;
      goto LABEL_16;
    }
    v11 = v20;
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                                v26,
                                v12,
                                v11);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1802LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_9:
    v26 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v22, (__int64)v26, v13, &v24) >= 0 )
    {
      v14 = v24;
      v21 = 0LL;
      v15 = *((_QWORD *)this + 28);
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v15 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      ApplicationViewUniqueId = v16(v15, v14, &v21);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1811LL;
        goto LABEL_16;
      }
      v20 = 0;
      ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v21, &v20);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1814LL;
        goto LABEL_16;
      }
      v17 = v20;
      v26 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                                  v26,
                                  v18,
                                  v17);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1816LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 1797LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return v9;
}
