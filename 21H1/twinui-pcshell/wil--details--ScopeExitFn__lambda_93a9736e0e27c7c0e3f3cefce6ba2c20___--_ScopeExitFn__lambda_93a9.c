/*
 * XREFs of wil::details::ScopeExitFn__lambda_93a9736e0e27c7c0e3f3cefce6ba2c20___::_ScopeExitFn__lambda_93a9736e0e27c7c0e3f3cefce6ba2c20___ @ 0x18041EC94
 * Callers:
 *     _VirtualDesktopGestureWindow::Initialize_::_1_::dtor$0 @ 0x180420FE9 (_VirtualDesktopGestureWindow--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::ScopeExitFn__lambda_93a9736e0e27c7c0e3f3cefce6ba2c20___::_ScopeExitFn__lambda_93a9736e0e27c7c0e3f3cefce6ba2c20___(
        _BYTE *a1)
{
  BOOL result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    return DestroyWindow(*(HWND *)(*(_QWORD *)a1 + 8LL));
  }
  return result;
}
