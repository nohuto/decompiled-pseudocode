/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000FA80
 * Callers:
 *     _CDuckingManager::RuntimeClassInitialize_::_1_::catch$4 @ 0x18003B281 (_CDuckingManager--RuntimeClassInitialize_--_1_--catch$4.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::catch$18 @ 0x18003B317 (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--catch$18.c)
 *     _CDuckingManager::OnStateChanged_::_1_::catch$4 @ 0x18003B356 (_CDuckingManager--OnStateChanged_--_1_--catch$4.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$16 @ 0x18003BC10 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--catch$16.c)
 *     _CProcess::Initialize_::_1_::catch$9 @ 0x18003BE27 (_CProcess--Initialize_--_1_--catch$9.c)
 *     _CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::catch$2 @ 0x18003BF4C (_CProcess--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--catch$2.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$2 @ 0x18003C4A9 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--catch$2.c)
 *     _QueueGenericWorkItem_::_1_::catch$10 @ 0x18003C840 (_QueueGenericWorkItem_--_1_--catch$10.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$13 @ 0x18003C8EF (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--catch$13.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$16 @ 0x18003C9B3 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--catch$16.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch$3 @ 0x18003CAD5 (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--catch$3.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$2 @ 0x18003CB11 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--catch$2.c)
 *     _ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch$2 @ 0x18003CB4D (_ApplicationSpecificEndpointInfo--RemoveRelatedProcess_--_1_--catch$2.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$13 @ 0x18003CBE3 (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--catch$13.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18000F960 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 1);
}
