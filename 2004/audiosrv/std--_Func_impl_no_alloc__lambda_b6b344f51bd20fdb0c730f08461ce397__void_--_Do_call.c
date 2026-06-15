/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800D9980
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180047B68 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x18012655C (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call()
{
  struct AtmosCheck *v0; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v0);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(&v0) >= 0 && v0 )
    AtmosCheck::PerformLicenseCheck(v0, 0);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v0);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}
