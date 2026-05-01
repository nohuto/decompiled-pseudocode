/*
 * XREFs of ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x18031CAA4
 * Callers:
 *     ?__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAJPE$AAVObject@Platform@@PE$AAVRoutedEventArgs@Xaml@UI@Windows@@@Z @ 0x1800FACC0 (-__abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered@-QIXamlSwitcherWindowInter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlSwitcherWindowInteractionEvents____abi_FirstFrameRendered__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAJPE_AAVObject_Platform__PE_AAVRoutedEventArgs_Xaml_UI_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 104LL))(a1 + 16);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
