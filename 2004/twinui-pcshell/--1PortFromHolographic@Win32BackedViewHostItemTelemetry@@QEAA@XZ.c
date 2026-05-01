/*
 * XREFs of ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18024D084
 * Callers:
 *     _lambda_cc5deaedd2cfca8d7c581af421c5ead5_::__lambda_cc5deaedd2cfca8d7c581af421c5ead5_ @ 0x1800A9DF0 (_lambda_cc5deaedd2cfca8d7c581af421c5ead5_--__lambda_cc5deaedd2cfca8d7c581af421c5ead5_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_cc5deaedd2cfca8d7c581af421c5ead5____::_2_::captured_state::_captured_state @ 0x1800A9E74 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_1800A9E74.c)
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x180250920 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortFromHolographic_::_1_::dtor$0 @ 0x180250A90 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortFromHolographic_--_1_--dtor.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024E250 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic(
        Win32BackedViewHostItemTelemetry::PortFromHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
