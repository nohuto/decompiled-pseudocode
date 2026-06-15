/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x180077690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(a2 + 112);
}
