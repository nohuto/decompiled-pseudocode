/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISessionInternalEvents@@@WRL@Microsoft@@UEAA@XZ @ 0x1800CD980
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18007A37F (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$0 @ 0x18007AA20 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$0 @ 0x18007C77E (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$0 @ 0x1800CDD96 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
