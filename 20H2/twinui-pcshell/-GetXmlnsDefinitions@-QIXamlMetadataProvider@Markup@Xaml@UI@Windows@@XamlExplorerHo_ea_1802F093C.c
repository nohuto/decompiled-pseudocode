/*
 * XREFs of ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x1802F093C
 * Callers:
 *     ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x1800F9640 (-GetXmlnsDefinitions@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop.c)
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAIPEAPEAVXmlnsDefinition@2345@@Z @ 0x1802F323C (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@-QIX_ea_1802F323C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$__abi_winrt_ptrto_array_ctor@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@@YAPEAXQ$01E$ADV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@@Z @ 0x1802EEEA0 (--$__abi_winrt_ptrto_array_ctor@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@@YAPEAXQ$01E$ADV-$A.c)
 *     ?GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x1802F0998 (-GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV-$Array@VXmlns.c)
 */

__int64 __fastcall _GetXmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAP_01E_AAV__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__XZ(
        __int64 a1)
{
  _BYTE *XmlnsDefinitions; // rbx
  __int64 v2; // rdi

  XmlnsDefinitions = (_BYTE *)Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXmlnsDefinitions(*(_QWORD *)(a1 + 96));
  v2 = __abi_winrt_ptrto_array_ctor<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(XmlnsDefinitions);
  if ( XmlnsDefinitions )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)XmlnsDefinitions + 16LL))(XmlnsDefinitions);
  return v2;
}
