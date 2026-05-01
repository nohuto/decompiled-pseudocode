/*
 * XREFs of ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024C490
 * Callers:
 *     ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18024CA18 (--1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x180258C40 (--1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x180258C6C (--1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024C508 (--1-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvide_ea_18024C508.c)
 *     ?reset@?$shared_object@V?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18025690C (-reset@-$shared_object@V-$ActivityData@VHolographicPositionerProvider@@U_TlgReflect_ea_18025690C.c)
 */

void __fastcall wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
