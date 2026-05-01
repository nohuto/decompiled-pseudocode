/*
 * XREFs of ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1802ED704
 * Callers:
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802EEB40 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ.c)
 *     ?__abi_Release@?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@UE$AAAKXZ @ 0x1802F2E70 (-__abi_Release@-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x1802EDAFC (-Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct Platform::Details::__abi_CaptureBase **__fastcall Platform::Details::__abi_CapturePtr::`scalar deleting destructor'(
        struct Platform::Details::__abi_CaptureBase **this)
{
  Platform::Details::__abi_CaptureBase::Delete((Platform::Details::__abi_CaptureBase *)this, this[32], this);
  return this;
}
