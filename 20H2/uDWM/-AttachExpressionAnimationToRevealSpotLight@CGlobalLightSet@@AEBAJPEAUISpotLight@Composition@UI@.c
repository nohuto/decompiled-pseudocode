/*
 * XREFs of ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x1800468B4
 * Callers:
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x1800462A4 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003F3FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(
        CGlobalLightSet *this,
        struct Windows::UI::Composition::ISpotLight *a2,
        struct Windows::UI::Composition::IExpressionAnimation *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
  v5 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpotLight *, GUID *, __int64 *))a2)(
         a2,
         &GUID_bcb4ad45_7609_4550_934f_16002a68fded,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  v7 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::IExpressionAnimation *, GUID *, __int64 *))a3)(
         a3,
         &GUID_464c4c2c_1caa_4061_9b40_e13fde1503ca,
         &v11);
  v6 = v7;
  if ( v7 < 0 )
  {
    v10 = 182LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_5;
  }
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Offset", 7u, 6u);
  v8 = v14;
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 72LL))(v12, v8, v11);
  v6 = v7;
  if ( v7 < 0 )
  {
    v10 = 185LL;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
LABEL_6:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v12);
  return v6;
}
