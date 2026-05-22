/*
 * XREFs of _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$8 @ 0x18004FC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundManager::OnActivationObjectNotification_::_1_::dtor_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
           (Microsoft::BamoImpl::BamoImplObject **)(*(_QWORD *)(a2 + 272) + 16LL),
           a2,
           a3,
           a4);
}
