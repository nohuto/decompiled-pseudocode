/*
 * XREFs of ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18022AABC
 * Callers:
 *     ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x180231900 (-TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4Foreground.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022BB14 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::~Win32BackedViewHostItem_TakeForeground(
        HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
