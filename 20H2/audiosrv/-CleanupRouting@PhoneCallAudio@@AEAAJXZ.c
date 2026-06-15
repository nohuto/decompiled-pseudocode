/*
 * XREFs of ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18010E9E0
 * Callers:
 *     wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18010E764 (wil--details--lambda_call__lambda_725372baeb855ae858d01405b3bc3564___--_lambda_call__lambda_7253.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18010F74C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18010FB68 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010FF40 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180112E7C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall PhoneCallAudio::CleanupRouting(PhoneCallAudio *this)
{
  struct IAudioProcess *v1; // rdx
  __int64 v3; // r8
  struct IAudioProcess *v4; // rdx
  DynamicAudioEndpointManager *v5; // rcx

  v1 = (struct IAudioProcess *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, v1, *((_QWORD *)this + 19));
    v3 = *((_QWORD *)this + 18);
    v4 = (struct IAudioProcess *)*((_QWORD *)this + 17);
    v5 = g_DynamicAudioEndpointManager;
    *((_QWORD *)this + 19) = 0LL;
    DynamicAudioEndpointManager::RemoveRule(v5, v4, v3);
    *((_QWORD *)this + 18) = 0LL;
  }
  return 0LL;
}
