/*
 * XREFs of _PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor$3 @ 0x1801308AD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
