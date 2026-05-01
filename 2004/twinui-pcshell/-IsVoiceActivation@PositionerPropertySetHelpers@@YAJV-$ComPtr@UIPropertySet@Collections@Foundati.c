/*
 * XREFs of ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x180241F70
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002D940 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801F40D0 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PositionerPropertySetHelpers::IsVoiceActivation(__int64 *a1, bool *a2)
{
  __int64 v5[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v7; // [rsp+48h] [rbp-20h]

  v5[1] = (__int64)a1;
  v5[0] = *a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v7 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"IsVoiceActivation", 0x12u, 0x11u);
  *a2 = Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)v5,
          v7) != 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return 0LL;
}
