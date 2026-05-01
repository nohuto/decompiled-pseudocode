/*
 * XREFs of ?FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAXPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1800FB250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__WBA_E_AAAXPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services((winrt::immersive_shell_component *)(a1 - 16), a2, a3);
}
