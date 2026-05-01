/*
 * XREFs of ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18022A834
 * Callers:
 *     _lambda_892ad901658013e5b1bc138888dac51b_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C174 (_lambda_892ad901658013e5b1bc138888dac51b_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_892ad901658013e5b1bc138888dac51b_::__lambda_892ad901658013e5b1bc138888dac51b_ @ 0x18009C9E8 (_lambda_892ad901658013e5b1bc138888dac51b_--__lambda_892ad901658013e5b1bc138888dac51b_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state::_captured_state @ 0x18009CA20 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_18009CA20.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E860 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortToHolographic_::_1_::dtor$0 @ 0x18022E9D0 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortToHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022BBC0 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic(
        Win32BackedViewHostItemTelemetry::PortToHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
