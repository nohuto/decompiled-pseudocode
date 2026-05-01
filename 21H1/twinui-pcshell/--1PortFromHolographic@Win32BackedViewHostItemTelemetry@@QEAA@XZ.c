/*
 * XREFs of ??1PortFromHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18022A808
 * Callers:
 *     _lambda_c5c9712bfea529d369d9e5c8c75fe7b4_::__lambda_c5c9712bfea529d369d9e5c8c75fe7b4_ @ 0x18009C9F4 (_lambda_c5c9712bfea529d369d9e5c8c75fe7b4_--__lambda_c5c9712bfea529d369d9e5c8c75fe7b4_.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_c5c9712bfea529d369d9e5c8c75fe7b4____::_2_::captured_state::_captured_state @ 0x18009CA48 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_18009CA48.c)
 *     ?PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E6C0 (-PortFromHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortFromHolographic_::_1_::dtor$0 @ 0x18022E830 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--PortFromHolographic_--_1_--dtor.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022BBC0 (-Destroy@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAA.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortFromHolographic::~PortFromHolographic(
        Win32BackedViewHostItemTelemetry::PortFromHolographic *this)
{
  *(_QWORD *)this = &Win32BackedViewHostItemTelemetry::PortFromHolographic::`vftable';
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
