/*
 * XREFs of wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x1802A0A38
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$1 @ 0x1802ACBE3 (_ViewEventDispatcher--_HandleWindowCreatedWithNoView_--_1_--dtor$1.c)
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BF920 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___(
        __int64 a1)
{
  BOOL result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)a1 + 496LL), **(unsigned int **)(a1 + 8), 0LL);
    return SetPropW(**(HWND **)(a1 + 16), L"Microsoft.Windows.WindowFactory.ViewId", 0LL);
  }
  return result;
}
