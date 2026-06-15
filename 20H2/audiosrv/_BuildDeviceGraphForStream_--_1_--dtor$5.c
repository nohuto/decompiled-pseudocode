/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x180076B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(a2 + 112);
}
