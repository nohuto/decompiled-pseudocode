/*
 * XREFs of _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state::_captured_state @ 0x1800A9E4C
 * Callers:
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___ @ 0x1800A9984 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_fa229ae.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_1_::dtor$2 @ 0x1800A9A34 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_fa229a.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state_::_Destroy @ 0x1800AAC90 (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32_ea_1800AAC90.c)
 * Callees:
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024D0B0 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state::_captured_state(
        __int64 *a1)
{
  Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)(a1 + 2));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
