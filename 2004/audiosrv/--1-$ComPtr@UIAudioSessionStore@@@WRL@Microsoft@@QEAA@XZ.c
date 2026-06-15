/*
 * XREFs of ??1?$ComPtr@UIAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180073624
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180038F2C (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor$3 @ 0x18007A919 (_CPolicyConfig--GetAudioSessionPropertyStore_--_1_--dtor$3.c)
 *     _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor$4 @ 0x18007A92B (_CPolicyConfig--GetAudioSessionPropertyStore_--_1_--dtor$4.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$1 @ 0x18007C1A9 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$0 @ 0x18007C1DF (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$0.c)
 *     _CAudioSrv::Terminate_::_1_::dtor$0 @ 0x1800BB4C9 (_CAudioSrv--Terminate_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call_::_1_::dtor$0 @ 0x1800D9967 (_std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call_--_1_--dtor$.c)
 *     _std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call_::_1_::dtor$0 @ 0x1800D99CC (_std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call_--_1_--dtor$.c)
 *     _CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo_::_1_::dtor$0 @ 0x1801271AC (_CSpatialAudioTech--GetEndpointExtendedSpatialLicenseInfo_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::FreeAtmosCheck_::_1_::dtor$0 @ 0x1801275D0 (_CSpatialAudioTech--FreeAtmosCheck_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAudioSessionStore>::~ComPtr<IAudioSessionStore>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(a1);
}
