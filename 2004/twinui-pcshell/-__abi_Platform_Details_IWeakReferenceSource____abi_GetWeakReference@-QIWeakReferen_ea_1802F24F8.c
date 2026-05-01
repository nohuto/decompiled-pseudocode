/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802F24F8
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WCA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800F85C0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800F85C0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800F9910 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800F9910.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802F0F7C (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Mar.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
