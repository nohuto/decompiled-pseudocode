/*
 * XREFs of _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$5 @ 0x1800CDDE8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::_CAudioSessionManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  CLockedList<CAudioSessionNotificationProcess,1,0>::~CLockedList<CAudioSessionNotificationProcess,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 144) + 192LL));
}
