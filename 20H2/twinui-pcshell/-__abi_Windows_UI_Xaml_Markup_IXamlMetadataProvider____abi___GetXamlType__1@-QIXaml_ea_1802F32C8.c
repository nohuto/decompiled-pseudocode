/*
 * XREFs of ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPE$AAVString@Platform@@PEAPE$AAUIXamlType@2345@@Z @ 0x1802F32C8
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJPE$AAVString@Platform@@PEAPE$AAUIXamlType@2345@@Z @ 0x1800FA0A0 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1@-QIXamlMetadataProvi.c)
 * Callees:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1802F0748 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_1802F0748.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__1__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPE_AAVString_Platform__PEAPE_AAUIXamlType_2345__Z(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a3 = 0LL;
    *a3 = _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_PE_AAVString_Platform___Z(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
