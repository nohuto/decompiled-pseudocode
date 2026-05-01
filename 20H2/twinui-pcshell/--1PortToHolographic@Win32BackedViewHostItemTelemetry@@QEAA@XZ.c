/*
 * XREFs of ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024C790
 * Callers:
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800AAB30 (_lambda_fa229aea017a19cbc9cb3db68405d883_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::__lambda_fa229aea017a19cbc9cb3db68405d883_ @ 0x1800AB934 (_lambda_fa229aea017a19cbc9cb3db68405d883_--__lambda_fa229aea017a19cbc9cb3db68405d883_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state::_captured_state @ 0x1800AB99C (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_1800AB99C.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802501A0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortToHolographic_::_1_::dtor$0 @ 0x180250310 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortToHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024D930 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic(
        Win32BackedViewHostItemTelemetry::PortToHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
