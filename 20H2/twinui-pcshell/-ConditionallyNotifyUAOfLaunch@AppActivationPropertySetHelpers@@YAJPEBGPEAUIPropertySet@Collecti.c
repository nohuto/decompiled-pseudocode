/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000DB5C
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x18000D6D8 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180023FF0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$QueueTask@V_lambda_26b87ca59359fe239e5114e68fb2ebc3_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_26b87ca59359fe239e5114e68fb2ebc3_@@@Z @ 0x18014430C (--$QueueTask@V_lambda_26b87ca59359fe239e5114e68fb2ebc3_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F058 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  char v3; // di
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int v7; // edx
  __int64 v8; // r8
  HRESULT v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-50h] BYREF
  LPWSTR ppwsz; // [rsp+28h] [rbp-48h] BYREF
  const unsigned __int16 *v14; // [rsp+30h] [rbp-40h] BYREF
  LPWSTR v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  LODWORD(ppwsz) = 0;
  v5 = 0;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
  }
  else
  {
    v3 = 1;
    LODWORD(ppwsz) = 1;
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v14, string, v8, &v12) < 0 )
    {
LABEL_5:
      v3 = 0;
      goto LABEL_6;
    }
  }
  if ( !(_BYTE)v12 )
    goto LABEL_5;
LABEL_6:
  if ( v3 )
  {
    v10 = SHStrDupW(psz, &ppwsz);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v15 = ppwsz;
      v11 = Windows::Internal::ComTaskPool::QueueTask<_lambda_26b87ca59359fe239e5114e68fb2ebc3_>(retaddr, &v15);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"internal\\shellcommondesktopbase\\inc\\tiles\\AppActivation_PropertySet.h",
          (const char *)(unsigned int)v11,
          v12);
        CoTaskMemFree(ppwsz);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"internal\\shellcommondesktopbase\\inc\\tiles\\AppActivation_PropertySet.h",
        (const char *)(unsigned int)v10,
        v12);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v5;
}
