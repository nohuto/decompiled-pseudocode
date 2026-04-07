/*
 * XREFs of ??$UsePropertyFactory@V_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@KAJAEBV_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@@Z @ 0x18003E8DC
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x18003E8B0 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Fo.c)
 * Callees:
 *     ??R_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@QEBAJPEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x18003E990 (--R_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@QEBAJPEAUIPropertyValueStatics@Foundation@Windows@.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003F780 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_20cc25e9e6e64aaab66070ee3f3626ad_>(
        __int64 a1)
{
  __int64 v2; // rbx
  int ActivationFactory; // ebx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v6, L"Windows.Foundation.PropertyValue", 0x21u, 0x20u);
  v2 = v7;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v5);
  if ( ActivationFactory >= 0 )
    ActivationFactory = _lambda_20cc25e9e6e64aaab66070ee3f3626ad_::operator()(a1, v5);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v5);
  return (unsigned int)ActivationFactory;
}
