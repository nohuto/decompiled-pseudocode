/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802EDEA8
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800F9460 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800F9460.c)
 * Callees:
 *     ?GetWeakReference@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIWeakReference@Details@Platform@@XZ @ 0x1802ED730 (-GetWeakReference@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAP.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  try
  {
    *a2 = 0LL;
    *a2 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::GetWeakReference(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
