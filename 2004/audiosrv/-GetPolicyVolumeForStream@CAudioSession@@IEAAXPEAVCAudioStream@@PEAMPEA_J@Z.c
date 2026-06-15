/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180002CA4
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180038408 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800C7290 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 */

void __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct CAudioStream *a2,
        float *a3,
        __int64 *a4)
{
  __int64 v7; // rax

  *a3 = 1.0;
  *a4 = 0LL;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  GetPolicyVolumeForAudioStream(
    (char *)a2 + 16,
    ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL),
    *(_QWORD *)(v7 + 8),
    a3,
    a4,
    0);
}
