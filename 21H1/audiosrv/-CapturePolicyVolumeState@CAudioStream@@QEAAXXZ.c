/*
 * XREFs of ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800D2644
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DB9D4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 */

void __fastcall CAudioStream::CapturePolicyVolumeState(CAudioStream *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  float v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  GetPolicyVolumeForAudioStream(v3, ((unsigned __int64)this + 16) & -(__int64)(this != 0LL), v2[1], &v4, 0LL, 2);
}
