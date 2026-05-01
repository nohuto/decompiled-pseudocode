/*
 * XREFs of _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$2 @ 0x1800A7D8F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 40));
}
