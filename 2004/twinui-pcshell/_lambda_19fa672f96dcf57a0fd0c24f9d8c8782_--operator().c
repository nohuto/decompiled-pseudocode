/*
 * XREFs of _lambda_19fa672f96dcf57a0fd0c24f9d8c8782_::operator() @ 0x1800B7640
 * Callers:
 *     _lambda_19fa672f96dcf57a0fd0c24f9d8c8782_::_lambda_invoker_cdecl_ @ 0x1800B71E0 (_lambda_19fa672f96dcf57a0fd0c24f9d8c8782_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18039C7F4 (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_19fa672f96dcf57a0fd0c24f9d8c8782_::operator()(
        __int64 a1,
        TabletModePositionerHelpers *a2,
        TabletModePositionerHelpers ***a3)
{
  HWND v5; // rdx
  TabletModePositionerHelpers **v6; // rax

  if ( !IsWindowVisible((HWND)a2) || TabletModePositionerHelpers::IsOperableWindow(a2, v5) )
    return 1LL;
  if ( GetPropA((HWND)a2, "CALL_MONITOR") )
  {
    v6 = *a3;
LABEL_7:
    *v6 = a2;
    return !**a3 || !*a3[1];
  }
  if ( GetPropA((HWND)a2, "SHARING_TOOLBAR") )
  {
    v6 = a3[1];
    goto LABEL_7;
  }
  return !**a3 || !*a3[1];
}
