/*
 * XREFs of _CVolumeStrip::CVolumeStrip_::_1_::dtor$1 @ 0x18007D40B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::CVolumeStrip_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::~CLockedList<CMasterVolumeNotificationProcess,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 24LL));
}
