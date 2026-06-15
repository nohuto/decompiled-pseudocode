/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISessionInternalEvents@@@WRL@Microsoft@@UEAA@XZ @ 0x1800CE610
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18007AE3F (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$0 @ 0x18007B4E0 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$0 @ 0x18007D23E (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$0 @ 0x1800CEA26 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
