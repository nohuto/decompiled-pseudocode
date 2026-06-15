/*
 * XREFs of _ATL::CComAggObject_CSystemAudioDeviceExclusive_::CComAggObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x1400378D9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAggObject_CSystemAudioDeviceExclusive_::CComAggObject_CSystemAudioDeviceExclusive__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(*(_QWORD *)(a2 + 48) + 8LL));
}
