/*
 * XREFs of _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::dtor$1 @ 0x1800CF9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 64));
}
