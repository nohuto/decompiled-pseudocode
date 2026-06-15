/*
 * XREFs of ??1?$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180072B64
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003881C (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor$3 @ 0x180079E59 (_CPolicyConfig--GetAudioSessionPropertyStore_--_1_--dtor$3.c)
 *     _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor$4 @ 0x180079E6B (_CPolicyConfig--GetAudioSessionPropertyStore_--_1_--dtor$4.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$1 @ 0x18007B6E9 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$0 @ 0x18007B71F (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$0.c)
 *     _CAudioSrv::Terminate_::_1_::dtor$0 @ 0x1800BA839 (_CAudioSrv--Terminate_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call_::_1_::dtor$0 @ 0x1800D8CD7 (_std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call_--_1_--dtor$.c)
 *     _std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call_::_1_::dtor$0 @ 0x1800D8D3C (_std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call_--_1_--dtor$.c)
 *     _CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$0 @ 0x18012651C (_CSpatialAudioTech--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::FreeAtmosCheck_::_1_::dtor$0 @ 0x180126940 (_CSpatialAudioTech--FreeAtmosCheck_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1);
}
