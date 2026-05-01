/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802FAC7C
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800D5F50 (-__abi_IXamlMultitaskingViewController____abi_CloseSwitchItem@-QIXamlMultitaskingViewController@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 128) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 96LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
