/*
 * XREFs of _CAudioSessionManager::Disconnect_::_1_::dtor$4 @ 0x18007B044
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::Disconnect_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 40));
}
