/*
 * XREFs of ??1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18025958C
 * Callers:
 *     ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18025B7F0 (-TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableSh.c)
 *     _ApplicationViewBackedViewHostItem::TakeForeground_::_1_::dtor$0 @ 0x18025B8A8 (_ApplicationViewBackedViewHostItem--TakeForeground_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024E1A4 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::~ApplicationViewBackedViewHostItem_TakeForeground(
        HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
