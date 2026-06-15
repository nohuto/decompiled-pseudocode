/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBDC0
 * Callers:
 *     ?LockEndpointForUse@CPolicyConfig@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18002CB40 (-LockEndpointForUse@CPolicyConfig@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1800BAF94 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010AF88 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x18010B06C (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x18010B0B4 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010B334 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18010BD2C (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18010BDE8 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C0D8 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18004C68C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
