/*
 * XREFs of ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@UE$AAAJPEAPE$AAVString@3@@Z @ 0x1802F1B24
 * Callers:
 *     ?__abi_Platform_Details_IPrintable____abi_ToString@?QIPrintable@Details@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@23@WBA@E$AAAJPEAPE$AAVString@3@@Z @ 0x1800F9B50 (-__abi_Platform_Details_IPrintable____abi_ToString@-QIPrintable@Details@Platform@@-$CustomBox@PE.c)
 * Callees:
 *     ?ToString@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@UE$AAAPE$AAVString@3@XZ @ 0x1802F13A8 (-ToString@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@W_ea_1802F13A8.c)
 */

__int64 __fastcall ___abi_Platform_Details_IPrintable____abi_ToString__QIPrintable_Details_Platform____CustomBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___23_UE_AAAJPEAPE_AAVString_3__Z(
        __int64 a1,
        HSTRING *a2)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::ToString(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
